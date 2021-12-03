#include <stdio.h> 
int main() 
{ 
    int KDV=18;
    int SONUC;
    int ucret;
    int busraAyseMustafa;
    printf("UCRET giriniz");
    scanf("%d",& ucret);
    SONUC=ucret*KDV/100;
    printf("SONUC: %d",SONUC);
    return 0;
}