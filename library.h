#ifndef LIBPOINT_LIBRARY_H
#define LIBPOINT_LIBRARY_H

#include <iostream>
#include <gmpxx.h>
#include "point.h"

void scalar_mul(mpz_ptr dest, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed);

point add(point src1, point src2);

extern mpz_class primePowerP;

#endif