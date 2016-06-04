#include "List.h"
#include "Kruskal.h"
#include <gtest.h>

TEST(Sset, can_create) {
  ASSERT_NO_THROW(Sset s(10););
}

TEST(Sset, can_suicide) {
  Sset* s = new Sset(10);
  ASSERT_NO_THROW(delete s;);
}

TEST(Sset, search) {
  Sset s(10);
  s.singleton(5);
  EXPECT_EQ(5, s.search(5));
}

TEST(Sset, merge) {
  Sset s(10);
  s.merge(3, 8);
  EXPECT_EQ(3, s.search(8));
}

TEST(kruskal, works) {
  std::vector < std::pair < int, std::pair<int, int> > > g;
  initGraph(&g, 4, 0, 1);
  initGraph(&g, 8, 0, 2);
  initGraph(&g, 10, 0, 3);
  initGraph(&g, 1, 1, 2);
  initGraph(&g, 5, 1, 4);
  initGraph(&g, 9, 2, 3);
  initGraph(&g, 7, 2, 4);
  initGraph(&g, 2, 3, 4);
  initGraph(&g, 3, 3, 5);
  initGraph(&g, 6, 4, 5);

  EXPECT_EQ(15, kruskal(g, 6, 10));
}
