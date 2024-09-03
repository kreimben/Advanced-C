/*
 * 몬테카를로 시뮬레이션으로 크랩스 게임 확률 계산하기
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRIALS 1000000

int main() {
    int count[13] = {0};
    int rand_min = 1, rand_max = 6;
    int sum;

    srand(time(NULL));

    int v = rand_max - rand_min + 1;
    for (int i = 0; i < TRIALS; i++) {
        sum = (int)(rand() / ((double)RAND_MAX + 1) * v + rand_min);
        sum += (int)(rand() / ((double)RAND_MAX + 1) * v + rand_min);
        count[sum]++;
    }

    int total = 0;
    for (int i = 2; i <= 12; i++) {
        printf("count[%2d] = %8d, %5.2f%%\n", i, count[i], (double)count[i] / TRIALS * 100);
        total += count[i];
    }

    printf("TRIAL   S = %d\n", total);
}