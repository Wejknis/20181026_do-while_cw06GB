#include <stdio.h>
#include <stdbool.h>

int main() {
        int liczba;
        char decyzja = 'n';

        printf("Program liczy największą liczbę mniejszą od\n");
        printf("liczby podanej przez użytkownika, która\n");
        printf("jest niepodzielna przez 2, 3, 5, 7.\n\n");

    do {
        printf("Podaj liczbę: ");
        scanf(" %d", &liczba);

        // zrób nieparzystą
        if (!(liczba % 2)) --liczba;

        for (; !(liczba % 3) || !(liczba % 5) || !(liczba % 7); liczba -= 2) {}
        printf("znaleziona liczba: %d\n", liczba);

        // każdy znak kończy / małe lub duże 't' kontynuuje
        printf("\nczy liczyć jeszcze raz? (t/n) ");
        scanf(" %c", &decyzja);

    } while (decyzja == 't' || decyzja == 'T');

    return 0;
}