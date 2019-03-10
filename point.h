/*
 * Created by Yasunori Horii on 2019/03/09.
 */

#ifndef POINT_POINT_H
#define POINT_POINT_H

#include <gmp.h>

typedef struct point {
    mpz_ptr x;
    mpz_ptr y;
} point;

static mpz_ptr zero;
static point ORIGIN;

#endif //POINT_POINT_H
