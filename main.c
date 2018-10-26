#include <stdio.h>
#include <stdbool.h>

int zrob_nieparzysta(int liczba) {
    if (!(liczba % 2)) --liczba;
    return liczba;
}

int szukaj_liczby(int liczba) {
    for (; !(liczba % 3) || !(liczba % 5) || !(liczba % 7); liczba -= 2) {}
    printf("znaleziona liczba: %d\n", liczba);
    return liczba;
}

void program_glowny () {
    int liczba;

    printf("\nPodaj liczbę: ");
    scanf(" %d", &liczba);

    liczba = zrob_nieparzysta(liczba);

    szukaj_liczby(liczba);
}

void wyswietl_info() {
    printf("Program liczy największą liczbę mniejszą od\n");
    printf("liczby podanej przez użytkownika, która\n");
    printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");
}

int main() {
        int liczba;
        char decyzja = 'n';

    wyswietl_info();

    do {
        program_glowny(&liczba);

        // każdy znak kończy / małe lub duże 't' kontynuuje
        printf("\nczy liczyć jeszcze raz? (t/n) ");
        scanf(" %c", &decyzja);

    } while (decyzja == 't' || decyzja == 'T');

    return 0;
}