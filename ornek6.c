#include <stdio.h> 
int main()
{
    int KDV=0.18;
    int UCRET; 
    int SONUC;
    printf("bir UCRET belirleyiniz");
    scanf("%d",&UCRET);
    SONUC=UCRET*KDV;
    printf("SONUC:%d",SONUC);
    return 0;
}