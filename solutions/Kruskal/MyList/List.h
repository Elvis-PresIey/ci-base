#ifndef SOLUTIONS_KRUSKAL_MYLIST_LIST_H_
#define SOLUTIONS_KRUSKAL_MYLIST_LIST_H_


class Sset {
 private:
  int* p;
  int s;
 public:
  explicit Sset(int _s);
  Sset(const Sset& c);
  ~Sset();

  void singleton(int v);
  int search(int v);
  void merge(int a, int b);
};


#endif  // SOLUTIONS_KRUSKAL_MYLIST_LIST_H_
