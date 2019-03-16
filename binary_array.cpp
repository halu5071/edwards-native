/*
 * Created by Yasunori Horii on 2019/03/09.
 */

#include "binary_array.h"

static int ctoi(char c) {
  switch (c) {
    case '0':
      return 0;
    case '1':
      return 1;
    case '2':
      return 2;
    case '3':
      return 3;
    case '4':
      return 4;
    case '5':
      return 5;
    case '6':
      return 6;
    case '7':
      return 7;
    case '8':
      return 8;
    case '9':
      return 9;
    default:
      return 0;
  }
}

std::vector<int> to_binary_vector(mpz_class seed) {
  std::string str = seed.get_str(2);
  std::vector<int> dest;
  for (int j = 0; j < str.size(); ++j) {
    char c = str[j];
    dest.push_back(ctoi(c));
  }
  return dest;
}

std::vector<int> to_mutual_opposite_form(mpz_class seed) {
  auto tmp = to_binary_vector(seed);
  unsigned long length = tmp.size();

  std::vector<int> ternaryArray = std::vector<int>(length + 1);
  ternaryArray[0] = tmp[0];

  for (int i = 1; i < length; ++i) {
    ternaryArray[i] = tmp[i] - tmp[i - 1];
  }

  ternaryArray[length] = -tmp[length - 1];

  return ternaryArray;
}
