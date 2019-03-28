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

const int CARDINAL_10 = 10;

point add(point point1, point point2);

point negatePoint(point src);

point negateY(point point1);

extern mpz_class ZERO;
extern mpz_class ONE;
extern point ORIGIN;

#endif //POINT_POINT_H
