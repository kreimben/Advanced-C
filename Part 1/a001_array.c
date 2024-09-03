/**
 * 정수를 배열에 저장하고 최소값, 최대값, 평균값 계산하기
*/

#include <stdio.h>

int main() {
    int a[10];
    int min, max;
    int sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("%d번째 정수를 입력하세요: ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 10; i++)
        printf("%6d", a[i]);

    printf("\n");

    min = max = a[0];

    for (int i = 1; i < 10; i ++) {
        sum += a[i];
        if (a[i] < min) min = a[i];
        else if (a[i] > max) max = a[i];
    }

    printf("min = %d, mac = %d, average = %.2f", min, max, sum / 10.);
}