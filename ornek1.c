#include <stdio.h> // define the header file
int main()         // define the main function
{
    int say1, say2;
    printf("birinci sayi girin\n");
    scanf("%d", &say1);
    printf("ikinci sayi girin\n");
    scanf("%d", &say2);
    int toplam = say1 + say2;
    printf("Toplam: %d", toplam);
    return 0;
}