/*
 * Created by Yasunori Horii on 2019/03/16.
 */

#include <gtest/gtest.h>
#include "../binary_array.h"
#include "../point.h"

TEST(unitTests, success_to_binary) {
  mpz_class number1 = mpz_class("12", BASE);
  mpz_class number2 = mpz_class("124", BASE);

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

TEST(unitTests, success_to_mutual_opposite_form) {
  mpz_class a = mpz_class("27", BASE);
  mpz_class b = mpz_class("11", BASE);
  mpz_class c = mpz_class("247", BASE);
  mpz_class d = mpz_class("327", BASE);

  auto vecA = to_mutual_opposite_form(a);
  auto vecB = to_mutual_opposite_form(b);
  auto vecC = to_mutual_opposite_form(c);
  auto vecD = to_mutual_opposite_form(d);

  int expectA[] = {1, 0, -1, 1, 0, -1};
  int expectB[] = {1, -1, 1, 0, -1};
  int expectC[] = {1, 0, 0, 0, -1, 1, 0, 0, -1};
  int expectD[] = {1, -1, 1, -1, 0, 0, 1, 0, 0, -1};

  std::vector<int> expectVecA(expectA, expectA + sizeof(expectA) / sizeof(expectA[0]));
  std::vector<int> expectVecB(expectB, expectB + sizeof(expectB) / sizeof(expectB[0]));
  std::vector<int> expectVecC(expectC, expectC + sizeof(expectC) / sizeof(expectC[0]));
  std::vector<int> expectVecD(expectD, expectD + sizeof(expectD) / sizeof(expectD[0]));

  EXPECT_EQ(vecA, expectVecA);
  EXPECT_EQ(vecB, expectVecB);
  EXPECT_EQ(vecC, expectVecC);
  EXPECT_EQ(vecD, expectVecD);
}
