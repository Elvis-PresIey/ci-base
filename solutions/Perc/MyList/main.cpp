#include "perc.h"

void main() {
  int k = 500;
  int n = 400;
  int m = 400;
  int size = n * m + 2 * n;
  Sset set(size);
  int count;
  double res = 0;
  for (int i = 0; i < k; i++) {
    preparation(&set, n, m);
    count = 0;
    countino(&set, &count, n, m);
    res += count * 1.0 / n / m;
  }
  printf("protsent = %f", (res / k));
}
