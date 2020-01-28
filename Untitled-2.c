#include <stdio.h>

int min(int a, int b) { return a < b ? a : b; }
int max(int a, int b) { return a > b ? a : b; }

int maxArea(int* height, int heightSize) {
    int maxArea = 0;
    for (int i = 0; i < heightSize; i++) {
        for (int j = i + 1; j < heightSize; j++) {
            int area = min(height[i], height[j]) * (j - i);
            maxArea = max(maxArea, area);
        }
    }

    return maxArea;
}

int maxArea1(int* height, int heightSize) {
    int maxArea = 0, l = 0, r = heightSize - 1;

    while (l < r) {
        maxArea = max(maxArea, (r - l) * min(height[l], height[r]));
        height[l] < height[r] ? l++ : r--;
    }

    return maxArea;
}

int main() {
    int height[9] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int heightSize = 9;

    printf("%d \n", maxArea1(height, heightSize));
    return 0;
}