/*
 * Created by Yasunori Horii on 2019/03/09.
 */

#include "library.h"
#include "point.h"
#include "binary_array.h"

static const mpz_class primePowerP = mpz_class(
	"57896044618658097711785492504343953926634992332820282019728792003956564819949", CARDINAL_10);

void scalar_mul(mpz_ptr dest_x, mpz_ptr dest_y, mpz_srcptr point_x, mpz_srcptr point_y, mpz_srcptr seed) {
	mpz_class pointX(point_x);
	mpz_class pointY(point_y);
	mpz_class pointSeed(seed);
	if (sgn(pointSeed) == 0) {
		mpz_init_set(dest_x, ORIGIN.x.__get_mp());
		mpz_init_set(dest_y, ORIGIN.y.__get_mp());
		return;
	}
	point thisPoint{pointX, pointY};

	auto binaryArray = to_mutual_opposite_form(pointSeed);

	point qs[] = {ORIGIN, ORIGIN};
	point rs[] = {thisPoint, thisPoint, negateY(thisPoint)};

	auto v = binaryArray.begin();
	while (v != binaryArray.end()) {
		qs[0] = add(qs[0], qs[0]);
		point p = add(qs[0], rs[1 - *v]);
		qs[1] = negatePoint(p);
		qs[0] = qs[abs(*v)];
		v++;
	}

	if (sgn(qs[0].x) < 0) {
		qs[0].x += primePowerP;
	}

	if (sgn(qs[0].y) < 0) {
		qs[0].y += primePowerP;
	}

	mpz_init_set(dest_x, qs[0].x.__get_mp());
	mpz_init_set(dest_y, qs[0].y.__get_mp());
}
