#ifndef SOLUTIONS_PERC_MYLIST_LIST_H_
#define SOLUTIONS_PERC_MYLIST_LIST_H_

#pragma once

class Sset {
 public:
  int *val;
  int* h;
  int size;
  Sset() {}
  explicit Sset(int size_);
  void singleton(int i);
  void merge(int i, int j);
  int search(int i);
  void clear();
  ~Sset();
};

#endif  // SOLUTIONS_PERC_MYLIST_LIST_H_
