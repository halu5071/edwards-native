/*
 * Created by Yasunori Horii on 2019/03/16.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../point.h"
#include "../binary_array.h"

TEST(unitTests, success_add_ed25519point_1) {
  mpz_class point1X = mpz_class("10", BASE);
  mpz_class point1Y = mpz_class("20", BASE);
  mpz_class point2X = mpz_class("20", BASE);
  mpz_class point2Y = mpz_class("30", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("26779683712472377198728028204674893446113287909143558431051413280118073054006", BASE);
  mpz_class expectY = mpz_class("10634460254639712273624836994541049759243301464550328073810114173764830681334", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_add_ed25519point_2) {
  mpz_class point1X = mpz_class("141", BASE);
  mpz_class point1Y = mpz_class("24", BASE);
  mpz_class point2X = mpz_class("23", BASE);
  mpz_class point2Y = mpz_class("43", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("474593334618798863471616367945704120314864337702883208119694937456232892069", BASE);
  mpz_class expectY = mpz_class("24906513834864817910919543317942654908387644989950283910758133364286718263050", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_add_ed25519point_3) {
  mpz_class point1X = mpz_class("13411", BASE);
  mpz_class point1Y = mpz_class("24312", BASE);
  mpz_class point2X = mpz_class("23423", BASE);
  mpz_class point2Y = mpz_class("43423", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("36886960008504921885989612962868508923067925927973627109994183339251085321662", BASE);
  mpz_class expectY = mpz_class("22676829173248331774615620100895385010848687053509896068625622483459677795547", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_add_ed25519point_4) {
  mpz_class point1X = mpz_class("93481", BASE);
  mpz_class point1Y = mpz_class("94823", BASE);
  mpz_class point2X = mpz_class("238534", BASE);
  mpz_class point2Y = mpz_class("64234", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("31599891963011078369708610706029192869360807076143919676188064770774328631789", BASE);
  mpz_class expectY = mpz_class("6333808798338954241148048118227044459247364198919264845931677861886349731634", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_add_ed25519point_5) {
  mpz_class point1X = mpz_class("20266806181347897178517736945403300566236311925948585575972021784256181966831", BASE);
  mpz_class point1Y = mpz_class("20852410506957026626210500909507772892959249564214740554270305643381675686982", BASE);
  mpz_class point2X = mpz_class("11675954373387894284288004270057647646117187555908725144338394611307421402153", BASE);
  mpz_class point2Y = mpz_class("6914948912687941235153802070429816612825513145320139793692760076939195789734", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("48503653771611185505641550378000927615234160991025034313672702576429802482305", BASE);
  mpz_class expectY = mpz_class("55906285724051886338008287911122855934156241601415494231223064909912279321827", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_add_ed25519point_6) {
  mpz_class point1X = mpz_class("55307901837819056100203421472284281626339181044463972151446027320031681414103", BASE);
  mpz_class point1Y = mpz_class("4592278534742875130003490239944802183338230954052483234431143871319686381534", BASE);
  mpz_class point2X = mpz_class("20266806181347897178517736945403300566236311925948585575972021784256181966831", BASE);
  mpz_class point2Y = mpz_class("20852410506957026626210500909507772892959249564214740554270305643381675686982", BASE);

  point point1{point1X, point1Y};
  point point2{point2X, point2Y};

  point addedPoint = add(point1, point2);

  mpz_class addedPointX = addedPoint.x;
  mpz_class addedPointY = addedPoint.y;

  mpz_class expectX = mpz_class("13822711300349466982677984643260416445346651573002956528288968112843725329775", BASE);
  mpz_class expectY = mpz_class("49357477884335216030914773679750452456619347178750051140322405303989353243151", BASE);

  EXPECT_EQ(addedPointX.get_str(10), expectX.get_str(10));
  EXPECT_EQ(addedPointY.get_str(10), expectY.get_str(10));
}

TEST(unitTests, success_negateY) {
  mpz_class point1X = mpz_class("55307901837819056100203421472284281626339181044463972151446027320031681414103", BASE);
  mpz_class point1Y = mpz_class("4592278534742875130003490239944802183338230954052483234431143871319686381534", BASE);
  point point1{point1X, point1Y};

  point point2 = negateY(point1);

  EXPECT_EQ(point2.x.get_str(BASE), "55307901837819056100203421472284281626339181044463972151446027320031681414103");
  EXPECT_EQ(point2.y.get_str(BASE), "-4592278534742875130003490239944802183338230954052483234431143871319686381534");
}