#include <stdio.h>
#include <stdlib.h>

int main(void) 
{

    int n;
    int *arr; // Das ist unser "Anker" für das dynamische Array

    // 2. Eingabe der Anzahl und Validierung
    printf("Geben Sie die Anzahl der Elemente ein: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Fehler: Bitte eine positive ganze Zahl eingeben.\n");
        return 1; 
    }

    // 3. Speicher reservieren
    // Wir brauchen Platz für 'n' mal die Größe eines 'int'
    arr = (int *)malloc(n * sizeof(int));

    // Überprüfen, ob die Reservierung geklappt hat (NULL-Check)
    if (arr == NULL) {
        printf("Speicher konnte nicht reserviert werden!\n");
        return 1;
    }

    // 4. Array mit Werten füllen
    printf("Geben Sie die %d Werte ein:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]); // Speichert die Eingabe an der i-ten Stelle
    }

    // 5. Summe berechnen
    int summe = 0;
    for (int i = 0; i < n; i++) {
        summe += arr[i]; // Addiert jeden Wert zur Summe hinzu
    }

    // 6. Ergebnis ausgeben
    printf("\nDie Summe aller Elemente ist: %d\n", summe);

    // 7. WICHTIG: Speicher freigeben
    // Damit sagst du dem System: "Ich brauche den Platz nicht mehr."
    free(arr);
    
    // Den Pointer auf NULL setzen ist eine gute Gewohnheit (Safety First)
    arr = NULL; 

    return 0;
}
