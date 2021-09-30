#include <iostream>
#include <stdio.h>
#include <stdlib.h> 

void main()
{
    int sizeArr;
    int *pArr;
    int x;
    int i = 0;
    printf_s("Array size = ");
    scanf_s("%d", &sizeArr);
    printf_s("Seach for = ");
    scanf_s("%d", &x);
    pArr = (int*)malloc(sizeArr*sizeof(int));
    do {
        pArr[i++] = rand() % 100;
    } while (i != sizeArr);
    i = 0;
    do {
        if (pArr[i++] == x) {
            std::cout << i << ", ";
        }
    } while (i != sizeArr);
}