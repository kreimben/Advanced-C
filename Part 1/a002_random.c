/*
 * 랜덤 숫자 만들기
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a[10] = {0,};
    int dice[30] = {0,};
    int rand_min = 1;
    int rand_max = 6;

    srand(time(NULL));

    for (int i = 0; i < 10; i++) a[i] = rand();

    printf("RAND_MAX = %x, %d\n", RAND_MAX, RAND_MAX);

    for (int i = 0; i < 10; i++) printf("%6d ", a[i]);
    printf("\n");

    for (int i = 0; i < 30; i++) dice[i] = rand_min + rand() % (rand_max - rand_min + 1);

    for (int i = 0; i < 30; i++) printf("%6d%c", dice[i], (i + 1) % 10 != 0 ? ' ' : '\n');
}