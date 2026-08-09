#include <stdio.h>

#define MAX_N 20
#define MAX_SOLUTIONS (1 << MAX_N)

int arr[MAX_N];
int solutions[MAX_SOLUTIONS];
int solutionCount = 0;

void findSubsets(int index, int n, int currentSum, int target, int mask) {

    
    if (currentSum == target) {
        solutions[solutionCount++] = mask;
        return;
    }

    if (index == n)
        return;

    
    if (currentSum > target)
        return;

  
    findSubsets(
        index + 1,
        n,
        currentSum + arr[index],
        target,
        mask | (1 << index)
    );

   
    findSubsets(
        index + 1,
}
