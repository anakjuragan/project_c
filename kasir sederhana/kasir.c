#include "stdio.h"
#include "stdlib.h"

int main(){
    char ulang;

    do{

        system("cls");

        int harga, jumlah, total;
        char nama[100];

        printf("Program kasir sederhana\n");
        printf("-----------------------\n\n");
        printf("Nama barang             : ");
        scanf("%s", &nama);
        printf("Jumlah barang           : ");
        scanf("%d", &jumlah);
        printf("Harga barang            : ");
        scanf("%d", &harga);

        total = jumlah * harga;

        system("cls");

        printf("Nama            : %s\n", nama);
        printf("Jumlah barang   : %d\n", jumlah);
        printf("Harga barang    : %d\n", harga);
        printf("Total           : %d\n\n", total);
        printf("Ulang program (y/n) : ");
        scanf("%s", &ulang);


    }while(ulang == 'y' || ulang == 'Y');

    return 0;





}
