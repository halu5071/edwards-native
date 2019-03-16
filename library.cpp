#include "library.h"
#include "inverse.h"
#include "binary_array.h"

mpz_class primePowerP = mpz_class("57896044618658097711785492504343953926634992332820282019728792003956564819949", 10);
mpz_class d = mpz_class("37095705934669439343138083508754565189542113879843219016388785533085940283555", 10);

void scalar_mul(mpz_ptr dest, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed) {
  // zero init
  zero.set_str("0", 10);
  one.set_str("1", 10);
  // Origin init
  ORIGIN = point{zero, one};
  mpz_class pointX(point_x);
  mpz_class pointY(point_y);
  mpz_class pointSeed(seed);

  auto binaryArray = to_binary_vector(pointSeed);

  auto v = binaryArray.begin();
  while (v != binaryArray.end()) {
    // TODO: Calculate
    v++;
  }
}

point add(point src1, point src2) {
  mpz_class x1 = src1.x;
  mpz_class y1 = src1.y;
  mpz_class x2 = src2.x;
  mpz_class y2 = src2.y;

  mpz_class coord2 = mpz_class("2", 10);

  mpz_class t1 = (x1 * y1) % primePowerP;
  mpz_class t2 = x2 * y2 % primePowerP;
  mpz_class A = (y1 - x1) * (y2 - x2) % primePowerP;
  mpz_class B = (y1 + x1) * (y2 + x2) % primePowerP;
  mpz_class C = t1 * coord2 * d * t2 % primePowerP;
  mpz_class D = coord2 % primePowerP;
  mpz_class E = (B - A) % primePowerP;
  mpz_class F = (D - C) % primePowerP;
  mpz_class G = (D + C) % primePowerP;
  mpz_class H = (B + A) % primePowerP;

  mpz_class Z3 = F * G % primePowerP;

  mpz_class one = mpz_class("1", 10);
  mpz_class inverseZ3 = inverse(Z3, primePowerP);
  mpz_class x3 = E * F * inverseZ3 % primePowerP;
  mpz_class y3 = G * H * inverseZ3 % primePowerP;

  if (x3 < 0) {
    x3 = x3 + primePowerP;
  }

  if (y3 < 0) {
    y3 = y3 + primePowerP;
  }

  return point{x3, y3};
}
