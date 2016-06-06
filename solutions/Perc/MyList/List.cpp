#include "List.h"
#include "stdio.h"
#include <exception>

Sset::Sset(int _size) {
  size = _size;
  val = new int[size];
  h = new int[size];
  for (int i = 0; i < size; i++) {
    val[i] = -1;
    h[i] = -1;
  }
}

void Sset::singleton(int i) {
  if (i < 0 || i > size || val[i] != -1)
    throw "BAD INDEX";
  val[i] = i;
  h[i] = 0;
}

void Sset::merge(int i, int j) {
  if (i < 0 || i > size || j < 0 || j > size || val[i] == -1 || val[j] == -1)
    throw "BAD INDEX";
  if (i != j) {
    int a = i;
    int b = j;
    while (val[a] != a)
      a = val[a];
    while (val[b] != b)
      b = val[b];
    if (a != b) {
      if (h[a] < h[b]) {
        val[a] = b;
      } else {
        val[b] = a;
        if (h[a] == h[b])
          ++h[a];
      }
    }
  }
}

int Sset::search(int i) {
  if (i < 0 || i > size || val[i] == -1)
    throw "BAD INDEX";
  while (val[i] != i)
    i = val[i];
  return val[i];
}

void Sset::clear() {
  for (int i = 0; i < size; i++) {
    val[i] = -1;
    h[i] = -1;
  }
}

Sset::~Sset() {
  delete[] val;
  delete[] h;
}
