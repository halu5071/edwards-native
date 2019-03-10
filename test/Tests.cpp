/*
 * Created by Yasunori Horii on 2019/03/08.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../binary_array.h"

TEST(unitTests, test1) {
  EXPECT_EQ(1, 1);
}

TEST(unitTests, success) {
  mpz_class number;
  number.set_str("1234", 10);

  int *array = nullptr;

  to_binary_array(array, number);
}