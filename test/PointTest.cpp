/*
 * Created by Yasunori Horii on 2019/03/16.
 */

#include <gtest/gtest.h>
#include "../library.h"
#include "../point_curve25519.h"
#include "../binary_array.h"

TEST(pointTest, success_add_ed25519point_1) {
	mpz_class point1X = mpz_class("10", CARDINAL_10);
	mpz_class point1Y = mpz_class("20", CARDINAL_10);
	mpz_class point2X = mpz_class("20", CARDINAL_10);
	mpz_class point2Y = mpz_class("30", CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("26779683712472377198728028204674893446113287909143558431051413280118073054006",
																CARDINAL_10);
	mpz_class expectY = mpz_class("10634460254639712273624836994541049759243301464550328073810114173764830681334",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_2) {
	mpz_class point1X = mpz_class("141", CARDINAL_10);
	mpz_class point1Y = mpz_class("24", CARDINAL_10);
	mpz_class point2X = mpz_class("23", CARDINAL_10);
	mpz_class point2Y = mpz_class("43", CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("474593334618798863471616367945704120314864337702883208119694937456232892069",
																CARDINAL_10);
	mpz_class expectY = mpz_class("24906513834864817910919543317942654908387644989950283910758133364286718263050",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_3) {
	mpz_class point1X = mpz_class("13411", CARDINAL_10);
	mpz_class point1Y = mpz_class("24312", CARDINAL_10);
	mpz_class point2X = mpz_class("23423", CARDINAL_10);
	mpz_class point2Y = mpz_class("43423", CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("36886960008504921885989612962868508923067925927973627109994183339251085321662",
																CARDINAL_10);
	mpz_class expectY = mpz_class("22676829173248331774615620100895385010848687053509896068625622483459677795547",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_4) {
	mpz_class point1X = mpz_class("93481", CARDINAL_10);
	mpz_class point1Y = mpz_class("94823", CARDINAL_10);
	mpz_class point2X = mpz_class("238534", CARDINAL_10);
	mpz_class point2Y = mpz_class("64234", CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("31599891963011078369708610706029192869360807076143919676188064770774328631789",
																CARDINAL_10);
	mpz_class expectY = mpz_class("6333808798338954241148048118227044459247364198919264845931677861886349731634",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_5) {
	mpz_class point1X = mpz_class("20266806181347897178517736945403300566236311925948585575972021784256181966831",
																CARDINAL_10);
	mpz_class point1Y = mpz_class("20852410506957026626210500909507772892959249564214740554270305643381675686982",
																CARDINAL_10);
	mpz_class point2X = mpz_class("11675954373387894284288004270057647646117187555908725144338394611307421402153",
																CARDINAL_10);
	mpz_class point2Y = mpz_class("6914948912687941235153802070429816612825513145320139793692760076939195789734",
																CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("48503653771611185505641550378000927615234160991025034313672702576429802482305",
																CARDINAL_10);
	mpz_class expectY = mpz_class("55906285724051886338008287911122855934156241601415494231223064909912279321827",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_6) {
	mpz_class point1X = mpz_class("55307901837819056100203421472284281626339181044463972151446027320031681414103",
																CARDINAL_10);
	mpz_class point1Y = mpz_class("4592278534742875130003490239944802183338230954052483234431143871319686381534",
																CARDINAL_10);
	mpz_class point2X = mpz_class("20266806181347897178517736945403300566236311925948585575972021784256181966831",
																CARDINAL_10);
	mpz_class point2Y = mpz_class("20852410506957026626210500909507772892959249564214740554270305643381675686982",
																CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("13822711300349466982677984643260416445346651573002956528288968112843725329775",
																CARDINAL_10);
	mpz_class expectY = mpz_class("49357477884335216030914773679750452456619347178750051140322405303989353243151",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_7) {
	mpz_class point1X = mpz_class("31621228259983782766387151846173419701451207683454700670358544852161525834558",
																CARDINAL_10);
	mpz_class point1Y = mpz_class("1087550498622212171315934886475455672530696511327350732598338573849547859723",
																CARDINAL_10);
	mpz_class point2X = mpz_class("53796438671359824102085853653404738634771041230653645888564199631429825277660",
																CARDINAL_10);
	mpz_class point2Y = mpz_class("52873790972168047993308827189322012202737756658766965387349495052412272053380",
																CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("10231238983259957665520424972260773583563625054906107477931951171166394182461",
																CARDINAL_10);
	mpz_class expectY = mpz_class("16175802527788616834701228315101703266962390276165245252584971134833495651114",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_add_ed25519point_8) {
	mpz_class point1X = mpz_class("24714885350915573524959492804958774885039633758708007137167239543662320763472",
																CARDINAL_10);
	mpz_class point1Y = mpz_class("32610704945606948033834599741453719010166132071117736619400925734673110257760",
																CARDINAL_10);
	mpz_class point2X = mpz_class("31621228259983782766387151846173419701451207683454700670358544852161525834558",
																CARDINAL_10);
	mpz_class point2Y = mpz_class("1087550498622212171315934886475455672530696511327350732598338573849547859723",
																CARDINAL_10);

	point point1{point1X, point1Y};
	point point2{point2X, point2Y};

	point addedPoint = add(point1, point2);

	mpz_class addedPointX = addedPoint.x;
	mpz_class addedPointY = addedPoint.y;

	mpz_class expectX = mpz_class("35609955356486491496360028406142810435910830517694536589708456029301666527874",
																CARDINAL_10);
	mpz_class expectY = mpz_class("33972043234789475673904984064588138758737764726163691391551272801822821209432",
																CARDINAL_10);

	EXPECT_EQ(addedPointX.get_str(), expectX.get_str());
	EXPECT_EQ(addedPointY.get_str(), expectY.get_str());
}

TEST(pointTest, success_negateY) {
	mpz_class point1X = mpz_class("55307901837819056100203421472284281626339181044463972151446027320031681414103",
																CARDINAL_10);
	mpz_class point1Y = mpz_class("4592278534742875130003490239944802183338230954052483234431143871319686381534",
																CARDINAL_10);
	point point1{point1X, point1Y};

	point point2 = negateY(point1);

	EXPECT_EQ(point2.x.get_str(CARDINAL_10),
						"55307901837819056100203421472284281626339181044463972151446027320031681414103");
	EXPECT_EQ(point2.y.get_str(CARDINAL_10),
						"-4592278534742875130003490239944802183338230954052483234431143871319686381534");
}