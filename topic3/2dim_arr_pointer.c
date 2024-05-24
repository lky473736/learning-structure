/*
    2024-03-18, 임규연 (lky473736)
    과제 2. 2차원 배열을 pointer로 접근
*/

#include <stdio.h>

int main()
{
    int arr[2][2] = {{1, 2}, {3, 4}};
    int n = 0; // 메모리 주소에 순차적으로 접근하기 위한 n 선언
    int *p; // 정수형 포인터형 변수 p 선언
    
    p = arr[0];
    
    // 포인터로 접근
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf ("arr[%d][%d] == %d / %p\n", i, j, *(p+n), p+n);
            // 4바이트씩 차이
            n++;
        }
    }
    
    return 0;
}
