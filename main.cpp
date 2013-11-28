// Kütüphanelerimiz
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

using namespace std;

int main()
{
    //Programimizda Kullanacagimiz Degiskenlerimiz
    int tahmin;
    int can;
    int sans=0;
    char tekrar;

tekrar:
     srand(time(NULL));
     //1 ile 100 arasi sayi uretip, sayiyi sayi degiskenimiz atiyoruz
     int sayi=1+rand()%101;

     printf("Can Sayinizi Seciniz : ");
     scanf("%d",&can);

     cout << endl << endl;

     printf("-----OYUN BASLASIN-----\n\n");

    do
    {
    sans++;

    printf("Tahmininizi giriniz : ");
    scanf("%d",&tahmin);

    //if blogumuz
    if(tahmin > 0 && tahmin < 101){
        if(tahmin==sayi)//dogru tahmin
        {
            printf("%d. Hakkinizda Dogru Tahminde Bulundunuz. %d\n\n",sans,tahmin);
            break;
        }else if(tahmin > sayi)//buyuk tahmin
        {
            printf("Lutfen Daha Kucuk Bir Sayi Giriniz.\n\n");
        }else if(tahmin < sayi)//kucuk tahmin
        {
            printf("Lutfen Daha Buyuk Bir Sayi Giriniz.\n\n");
        }
    }else
        printf("Lutfen 1 ile 100 Arasinda Bir Tahminde Bulununuz.\n");


    }while(sans<can);

    printf("Tekrar Oynamak Icin E Tusuna Basiniz : ");
    scanf("%s",&tekrar);

    //Tekrar Oyna
    if(tekrar == 'e' || tekrar == 'E'){
        system("CLS");
        sans = 0;
        goto tekrar;
    }

    return 0;
}
