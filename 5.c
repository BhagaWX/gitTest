#include <stdio.h>

struct node {
    int val;
};

void swap(struct node** a, struct node** b) {
    struct node** t = &a;
    &a = &b;
    &b = t;
}

int main() {
    struct node s = {2};
    struct node t = {4};

    struct node* m = &s;
    struct node* n = &t;

    printf("s = %d , t = %d \n", m->val, n->val);

    swap(m, n);

    printf("s = %d , t = %d \n", m->val, n->val);

    return 0;
}