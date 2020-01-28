#include <stdio.h>

void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}

int main() {
    int nums[5] = {0, 1, 0, 3, 12};

    int numsSize = 5;

    int j = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            swap(nums + i, nums + j);
            j++;
        }
    }

    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}
