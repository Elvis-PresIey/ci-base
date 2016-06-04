#include "List.h"
#include "func.h"
#include <gtest.h>

TEST(print, order) {
  Node* llr = new Node; llr -> key = 1; llr -> left = NULL; llr -> right = NULL;
  Node* lrr = new Node; lrr -> key = 5; lrr -> left = NULL; lrr -> right = NULL;
  Node* rl = new Node; rl -> key = 7; rl -> left = NULL; rl -> right = NULL;
  Node* rr = new Node; rr -> key = 9; rr -> left = NULL; rr -> right = NULL;
  Node* ll = new Node; ll -> key = 0; ll -> left = NULL; ll -> right = llr;
  Node* lr = new Node; lr -> key = 4; lr -> left = NULL; lr -> right = lrr;
  Node* l = new Node; l -> key = 2; l -> left = ll; l -> right = lr;
  Node* r = new Node; r -> key = 8; r -> left = rl; r -> right = rr;
  Node* i = new Node; i -> key = 6; i -> left = l; i -> right = r;

  int a[9] = {6, 2, 0, 1, 4, 5, 8, 7, 9};

  for (int j = 0; j < 9; j++)
    EXPECT_EQ(a[j], printo(i)[j]);
}

TEST(print, rorder) {
  Node* llr = new Node; llr -> key = 1; llr -> left = NULL; llr -> right = NULL;
  Node* lrr = new Node; lrr -> key = 5; lrr -> left = NULL; lrr -> right = NULL;
  Node* rl = new Node; rl -> key = 7; rl -> left = NULL; rl -> right = NULL;
  Node* rr = new Node; rr -> key = 9; rr -> left = NULL; rr -> right = NULL;
  Node* ll = new Node; ll -> key = 0; ll -> left = NULL; ll -> right = llr;
  Node* lr = new Node; lr -> key = 4; lr -> left = NULL; lr -> right = lrr;
  Node* l = new Node; l -> key = 2; l -> left = ll; l -> right = lr;
  Node* r = new Node; r -> key = 8; r -> left = rl; r -> right = rr;
  Node* i = new Node; i -> key = 6; i -> left = l; i -> right = r;

  int a[9] = {1, 0, 5, 4, 2, 7, 9, 8, 6};

  for (int j = 0; j < 9; j++)
    EXPECT_EQ(a[j], printr(i)[j]);
}

TEST(print, sorder) {
  Node* llr = new Node; llr -> key = 1; llr -> left = NULL; llr -> right = NULL;
  Node* lrr = new Node; lrr -> key = 5; lrr -> left = NULL; lrr -> right = NULL;
  Node* rl = new Node; rl -> key = 7; rl -> left = NULL; rl -> right = NULL;
  Node* rr = new Node; rr -> key = 9; rr -> left = NULL; rr -> right = NULL;
  Node* ll = new Node; ll -> key = 0; ll -> left = NULL; ll -> right = llr;
  Node* lr = new Node; lr -> key = 4; lr -> left = NULL; lr -> right = lrr;
  Node* l = new Node; l -> key = 2; l -> left = ll; l -> right = lr;
  Node* r = new Node; r -> key = 8; r -> left = rl; r -> right = rr;
  Node* i = new Node; i -> key = 6; i -> left = l; i -> right = r;

  int a[9] = {0, 1, 2, 4, 5, 6, 7, 8, 9};

  for (int j = 0; j < 9; j++)
    EXPECT_EQ(a[j], prints(i)[j]);
}
