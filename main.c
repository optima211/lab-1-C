# include <stdio.h>

#include <conio.h>

# define n 5 // определение константы n=50
int i, a[n], b[n]; //описание массива целых чисел из n элементов

int sort() {
    printf("\nhello!");
    return 0;
}

int main() {
    for (i = 0; i < n; i++) {
        printf("\n enter element first massive ");
        scanf_s("%d", &a[i]);
    }

    for (i = 0; i < n; i++) {
        printf("\n enter element second massive ");
        scanf_s("%d", &b[i]);
    }

    printf("\n out first start massive : \n");
    for (i = 0; i < n; i++) printf("%6d", a[i]);
    printf("\n out second start massive : \n");
    for (i = 0; i < n; i++) printf("%6d", b[i]);

    sort();
    return 0;
}