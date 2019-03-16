/*
 * Created by Yasunori Horii on 2019/03/09.
 */

#ifndef POINT_BINARY_ARRAY_H
#define POINT_BINARY_ARRAY_H

#include <gmpxx.h>
#include <vector>

std::vector<int> to_binary_vector(mpz_class seed);

std::vector<int> to_mutual_opposite_form(mpz_class seed);

#endif //POINT_BINARY_ARRAY_H
