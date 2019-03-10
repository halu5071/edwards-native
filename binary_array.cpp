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
  const char *chars = seed.get_str(2).c_str();
  std::vector<int> dest;
  while (*chars) {
    int i = ctoi(*chars);
    dest.push_back(i);
    chars++;
  }
  return dest;
}
