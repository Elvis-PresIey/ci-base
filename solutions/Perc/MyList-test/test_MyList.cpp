#include "List.h"
#include <gtest.h>

TEST(SSet, can_create) {
  EXPECT_NO_THROW(Sset a(23));
}

TEST(SSet, can_singleton) {
  Sset a(23);
  a.singleton(22);
  EXPECT_EQ(a.val[22], 22);
}

TEST(SSet, singleton_throws_bad_idx) {
  Sset a(23);
  EXPECT_ANY_THROW(a.singleton(-3));
}

TEST(SSet, searches) {
  Sset a(23);
  a.singleton(4);
  a.singleton(0);
  a.singleton(11);
  a.singleton(22);
  a.singleton(13);
  a.merge(0, 22);
  a.merge(11, 13);
  EXPECT_EQ(a.search(22), 0);
}
