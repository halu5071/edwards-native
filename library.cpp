#include "library.h"
#include "point.h"
#include "binary_array.h"

void scalar_mul(mpz_ptr dest_x, mpz_ptr dest_y, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed) {
  mpz_class pointX(point_x);
  mpz_class pointY(point_y);
  mpz_class pointSeed(seed);
  point thisPoint{pointX, pointY};

  auto binaryArray = to_mutual_opposite_form(pointSeed);

  point qs[] = {ORIGIN, ORIGIN};
  point rs[] = {thisPoint, thisPoint, negateY(thisPoint)};

  auto v = binaryArray.begin();
  while (v != binaryArray.end()) {
    qs[0] = add(qs[0], qs[0]);
    point p = add(qs[0], rs[1 - *v]);
    qs[1] = negateY(p);
    qs[0] = qs[abs(*v)];
    v++;
  }

  dest_x = qs[0].x.__get_mp();
  dest_y = qs[0].y.__get_mp();
}
