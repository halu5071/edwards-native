/*
 * Created by Yasunori Horii on 2019/03/09.
 */
#include "point.h"
#include "inverse.h"

static mpz_class primePowerP = mpz_class("57896044618658097711785492504343953926634992332820282019728792003956564819949", 10);
static mpz_class d = mpz_class("37095705934669439343138083508754565189542113879843219016388785533085940283555", 10);

point negatePoint(point src) {
  mpz_class minus = mpz_class("-1", BASE);
  auto newX = src.x * minus;
  auto newY = src.y * minus;
  return point{newX, newY};
}

point negateY(point point1) {
  auto y = point1.y * mpz_class("-1", BASE);
  return point{point1.x, y};
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
