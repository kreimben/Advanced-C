/*
 * 겹치지 않는 랜덤 숫자 만들기
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define COUNT 10

int main() {
    int check[COUNT + 1] = { 0 };
    int rand_order[COUNT] = { 0 };
    int rand_max = 10, rand_min = 1;
    
    srand(time(NULL));

    for (int i = 0; i < COUNT; i++) {
        int x;
        do {
            x = rand() % (rand_max - rand_min + 1);  // (double) rand() / RAND_MAX * (rand_max - rand_min + 1) + rand_min;
        } while (check[x] == 1);
        check[x] = 1;
        rand_order[i] = x;
    }

    for (int i = 0; i < COUNT; i++) printf("%3d", rand_order[i]);
    printf("\n");
}