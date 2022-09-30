#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RU");
    int N = 0, count = 0;
    printf("Введите число до 1000\n"); 
    scanf("%d", &N);
    do {
    if ((N % 10) == 5) count++;
    } while ((N /= 10) > 0);
    if (count >= 1) {
        printf("Есть цифра 5");
    }
    else {
        printf("Нет циры 5");
    }
    _getch();
    return 0;
 }
