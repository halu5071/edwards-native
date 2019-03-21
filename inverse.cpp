/*
 * Created by Yasunori Horii on 2019/03/16.
 */

#include "inverse.h"

mpz_class inverse(mpz_class a, mpz_class b) {
	mpz_t temp;
	mpz_init(temp);
	if (!mpz_invert(temp, a.get_mpz_t(), b.get_mpz_t()))
		mpz_set_si(temp, 0);
	mpz_class temp_class(temp);
	mpz_clear(temp);
	return temp_class;
}
