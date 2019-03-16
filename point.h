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

point add(point point1, point point2);

point negatePoint(point src);

point negateY(point point1);

const int BASE = 10;

static mpz_class zero = mpz_class("0", BASE);
static mpz_class one = mpz_class("1", BASE);
static point ORIGIN = point{zero, one};

#endif //POINT_POINT_H
