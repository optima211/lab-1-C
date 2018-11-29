# include <stdio.h>

#include <conio.h>

# define n 5 // определение константы n=50

int i, max, nom, a[n]; //описание массива целых чисел из n элементов
int main()

{for (i=0; i<n; i++)

    {
    printf("\n enter element massive ");

        scanf_s ("%d", &a[i]);
    }

    for (i=1,max=a[0],nom=0; i<n; i++)

        if (max<a[i])

        {nom=i; max=a[i];}

    printf("\n out start massive : \n");

    for (i=0; i<n; i++) printf ( "%6d", a[i] );

    printf ("\n max element: %4d, index: %4d " , max, nom);

    return 0;

}