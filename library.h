#ifndef LIBPOINT_LIBRARY_H
#define LIBPOINT_LIBRARY_H

#include <gmpxx.h>

#ifdef __cplusplus
extern "C" {
#endif

void scalar_mul(mpz_ptr dest_x, mpz_ptr dest_y, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed);

#ifdef  __cplusplus
};
#endif

#endif // LIBPOINT_LIBRARY_H