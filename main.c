# include <stdio.h>
#include <conio.h>

# define n 5 // определение константы n=5
int i, a[n], b[n]; //описание массива целых чисел из n элементов

void sort(int num[], int x) {
    int z;
    for (i = n - 1; i >= 0; i--) {
        for (int index = 0; index < i; index++) {
            if (num[index] >= num[index + 1]) {
                z = num[index];
                num[index] = num[index + 1];
                num[index + 1] = z;
            }
        }
    }
    if (x == 1) {
        printf("\n out first sorted massive : \n");
        for (i = 0; i < n; i++) printf("%6d", num[i]);
    } else if (x == 2) {
        printf("\n out second sorted massive : \n");
        for (i = 0; i < n; i++) printf("%6d", num[i]);
    }
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
    printf("\n start sort!!!!!!!!!!!!!!!!!!!! \n");
    sort(a, 1);
    sort(b, 2);
    return 0;
}