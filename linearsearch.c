#include <stdio.h>

int LinearSearch(int dizi[], int boyut, int eleman) {
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == eleman) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int boyut;
    printf("Dizinin boyutunu girin: ");
    scanf("%d",&boyut);

    int dizi[boyut];
    for (int i = 0; i < boyut; i++) {
        printf("Dizinin %d. elemanini girin: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    int eleman;
    printf("Aranacak elemani girin: ");
    scanf("%d", &eleman);

    int bul = LinearSearch(dizi, boyut, eleman);

    if (bul) {
        printf("Aranan eleman dizide bulundu.\n");
    } else {
        printf("Aranan eleman dizide bulunamadi.\n");
    }

    return 0;
}
