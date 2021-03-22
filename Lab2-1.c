#include <stdio.h>

int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;//변수명 및 타입 지정

    printf("[----- [youjunghawn] [2018038096] -----]\n");

    printf("Size of char: %ld byte\n", sizeof(charType)); //charType 크기 확인
    printf("Size of int: %ld bytes\n", sizeof(integerType));//integerType 크기 확인
    printf("Size of float: %ld bytes\n", sizeof(floatType));//floatType 크기 확인
    printf("Size of double: %ld bytes\n", sizeof(doubleType));//doubleType 크기 확인

    printf("-----------------------------------------\n");

    printf("Size of char: %ld byte\n", sizeof(char));//char형 크기 확인
    printf("Size of int: %ld bytes\n", sizeof(int));//int형 크기 확인
    printf("Size of float: %ld bytes\n", sizeof(float));//float형 크기 확인
    printf("Size of double: %ld bytes\n", sizeof(double));//double형 크기 확인


    printf("-----------------------------------------\n");

    printf("Size of char*: %ld byte\n", sizeof(char *));//char의 포인터 크기 확인
    printf("Size of int*: %ld bytes\n", sizeof(int *));//int의 포인터 크기 확인
    printf("Size of float*: %ld bytes\n", sizeof(float *));//float의 포인터 크기 확인
    printf("Size of double*: %ld bytes\n", sizeof(double *));//double의 포인터 크기 확인

    return 0;
}
