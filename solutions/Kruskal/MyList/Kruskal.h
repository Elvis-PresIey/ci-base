#ifndef SOLUTIONS_KRUSKAL_MYLIST_KRUSKAL_H_
#define SOLUTIONS_KRUSKAL_MYLIST_KRUSKAL_H_


#include "List.h"
#include <vector>


void initGraph(std::vector < std::pair < int, std::pair<int, int> > > *g,
int p, int a, int b);

void sortt(std::vector < std::pair < int, std::pair <int, int> > > *g,  int n);

int kruskal(std::vector < std::pair < int, std::pair<int, int> > > g,
const int n, const int m);


#endif  // SOLUTIONS_KRUSKAL_MYLIST_KRUSKAL_H_
