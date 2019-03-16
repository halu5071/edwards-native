/*
 * Created by Yasunori Horii on 2019/03/08.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../binary_array.h"

TEST(unitTests, test1) {
  EXPECT_EQ(1, 1);
}

TEST(unitTests, success_to_binary) {
  mpz_class number1;
  mpz_class number2;
  number1.set_str("12", 10);
  number2.set_str("124", 10);

  std::vector<int> intVector1;
  std::vector<int> intVector2;

  int expect1[] = {1, 1, 0, 0};
  int expect2[] = {1, 1, 1, 1, 1, 0, 0};
  std::vector<int> expectedVector1(expect1, expect1 + sizeof(expect1) / sizeof(expect1[0]));
  std::vector<int> expectedVector2(expect2, expect2 + sizeof(expect2) / sizeof(expect2[0]));
  intVector1 = to_binary_vector(number1);
  intVector2 = to_binary_vector(number2);

  EXPECT_EQ(intVector1, expectedVector1);
  EXPECT_EQ(intVector2, expectedVector2);
}
