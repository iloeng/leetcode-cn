#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

double* convertTemperature(double celsius, int* returnSize) {
    double *ans = (double *)malloc(sizeof(double)*2);
    ans[0] = celsius + 273.15;
    ans[1] = celsius * 1.80 + 32.00;
    *returnSize = 2;
    return ans;
}
