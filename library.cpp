#include "library.h"
#include "binary_array.h"

void scalar_mul(mpz_ptr dest, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed) {
  // zero init
//  mpz_init_set_str(zero, "0", 10);
  // Origin init
  ORIGIN = point{zero, zero};
  mpz_class pointX(point_x);
  mpz_class pointY(point_y);
  mpz_class pointSeed(seed);

  int *binary_array = nullptr;

  while (*binary_array) {

    binary_array++;
  }
}

void add(point dest, point src1, point src2) {

}
