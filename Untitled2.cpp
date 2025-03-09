#include <stdio.h>
#include <stdlib.h>

int main() {
    int girilenKod;
    char sehir[50];

    FILE *dosya = fopen("kodlar.txt", "r");
    if (dosya == NULL) {
        printf("Dosya acilamadi!\n");
    
    }
   
    printf("Trafik kodunu giriniz: ");
    scanf("%d", &girilenKod);

    int dosyaKodu;
    int bulundu = 0;

    while (fscanf(dosya, "%d %s", &dosyaKodu, sehir) != EOF) {
        if (dosyaKodu == girilenKod) {
            printf("%s Dogu Karadeniz bolgesinde yer alir\n", sehir);
            bulundu = 1;
            break;
        }
    }

    if (bulundu == 0) {
        printf("Hatali Kod Girdiniz\n");
    }

    fclose(dosya);

}



