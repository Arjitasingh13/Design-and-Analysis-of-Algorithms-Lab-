#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int knapsack(int W, int wt[], int val[], int n) {
    int i, w;
    int K[n + 1][W + 1];

    for (i = 0; i <= n; i++) {
        for (w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                K[i][w] = 0;
            else if (wt[i - 1] <= w)
                K[i][w] = max(val[i - 1] + K[i - 1][w - wt[i - 1]], K[i - 1][w]);
            else
                K[i][w] = K[i - 1][w];
        }
    }
    return K[n][W];
}

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    int val[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &val[i]);
    }

    int wt[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &wt[i]);
    }

    int W;
    scanf("%d", &W);

    int max_val = knapsack(W, wt, val, n);
    printf("%d\n", max_val);

    return 0;
}
