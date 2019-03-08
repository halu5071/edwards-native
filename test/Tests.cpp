/*
 * Created by Yasunori Horii on 2019/03/08.
 */

#include <gtest/gtest.h>
#include "../library.h"

TEST(unitTests, test1) {
  EXPECT_EQ(1, 1);
}

TEST(unitTests, return_one) {
  EXPECT_EQ(return_one(), 1);
}