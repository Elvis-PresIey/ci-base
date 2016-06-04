#include "func.h"

int* printo(Node* root) {
  int* r = new int[9];
  int i = 0;
  std::stack<Node*> st;
  printf("\nIn order: ");
  while (!st.empty() || root) {
    if (root) {
      printf("%d ", root -> key);
      r[i] = root -> key;
      i++;
      if (root -> right) st.push(root -> right);
      root = root -> left;
    } else {
      root = st.top();
      st.pop();
    }
  }
  return r;
}

int* printr(Node* root) {
  int* r = new int[9];
  int i = 0;
  std::stack<Node*> st;
  Node* tmp1 = NULL;
  Node* tmp2 = NULL;
  printf("\nPost order: ");
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root -> left;
    } else {
      tmp1 = st.top();
      if (tmp1 -> right && tmp2 != tmp1 -> right) {
        root = tmp1 -> right;
      } else {
        st.pop();
        printf("%d ", tmp1 -> key);
        r[i] = tmp1 -> key;
        i++;
        tmp2 = tmp1;
      }
    }
  }
  return r;
}

int* prints(Node* root) {
  int* r = new int[9];
  int i = 0;
  std::stack<Node*> st;
  printf("\nSymm order: ");
  while (!st.empty() || root) {
    if (root) {
      st.push(root);
      root = root -> left;
    } else {
      root = st.top();
      st.pop();
      printf("%d ", root -> key);
      r[i] = root -> key;
      i++;
      root = root -> right;
    }
  }
  return r;
}
