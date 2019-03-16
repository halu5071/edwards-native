/*
 * Created by Yasunori Horii on 2019/03/08.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../point.h"

static point basePoint{
  mpz_class("15112221349535400772501151409588531511454012693041857206046113283949847762202", BASE),
  mpz_class("46316835694926478169428394003475163141307993866256225615783033603165251855960", BASE)
};

TEST(scalarTest, success_scalar_multiply_1) {
  mpz_t destX;
  mpz_t destY;
  mpz_init(destX);
  mpz_init(destY);

  mpz_class seed("1234", BASE);

  scalar_mul(destX, destY, basePoint.x.__get_mp(), basePoint.y.__get_mp(), seed.__get_mp());

  mpz_class destClassX = mpz_class(destX);
  mpz_class destClassY = mpz_class(destY);

  EXPECT_EQ(destClassX.get_str(BASE), "55556569241314067156494303609322045323771151550641480329783949256943018472903");
  EXPECT_EQ(destClassY.get_str(BASE), "32784530584814531279135473125766128158866185447326682367874410721387968224179");
}
