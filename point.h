/*
 * Created by Yasunori Horii on 2019/03/09.
 */

#ifndef POINT_POINT_H
#define POINT_POINT_H

#include <gmpxx.h>

typedef struct point {
    mpz_class x;
    mpz_class y;
} point;

const int BASE = 10;

static mpz_class zero;
static mpz_class one;
static point ORIGIN;

#endif //POINT_POINT_H
