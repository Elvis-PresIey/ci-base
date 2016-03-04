#include "List.h"
#include <gtest.h>

TEST(heap, constructs) {
  int* arr;
  arr = new int[100];
  for (int i = 0; i < 100; i++) arr[i] = i;
  ASSERT_NO_THROW(Heap h(arr, 100));
  delete[] arr;
}

TEST(heap, minchild_test) {
  int arr[6] = { 5, 14, 15, 200, 231, 235};
  Heap h(arr, 6);
  EXPECT_EQ(h.Min_child(0), 1);
}

TEST(heap, copies_nicely) {
  int arr[6] = { 5, 14, 15, 2, 231, 235};
  Heap h1(arr, 6);
  Heap h2(h1);
  h1.Sort();
  EXPECT_FALSE(h1.data == h2.data);
}

TEST(heap, sorts_d_2) {
  int arr[6] = { 9, 8, 52, 33, 66, 70};
  int s[6] = { 70, 66, 52, 33, 9, 8};
  Heap h(arr, 6);
  h.Sort();
  for (int i = 0; i < 6; i++) EXPECT_EQ(h.data[i], s[i]);
}

TEST(heap, sorts_d_3) {
  int arr[6] = { 9, 8, 52, 33, 66, 70};
  int s[6] = { 70, 66, 52, 33, 9, 8};
  Heap h(arr, 6);
  h.Setd(3);
  h.Sort();
  for (int i = 0; i < 6; i++) EXPECT_EQ(h.data[i], s[i]);
}
