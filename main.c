#include <stdio.h>
#define NUM_PEOPLE 3 // Konstanta pro pocet osob

// Definice typu datove struktury pro osobu
typedef struct {
    char name[50];
    int age;
} Person;

int main() {
    // Vytvoreni pole datovych struktur pro osoby
    Person people[NUM_PEOPLE];

    // Nacteni hodnot pro kazdou osobu
    for (int i = 0; i < NUM_PEOPLE; i++) {
        printf("Zadej jmeno osoby %d: ", i + 1);
        scanf("%s", people[i].name);

        printf("Zadej vek osoby %d: ", i + 1);
        scanf("%d", &people[i].age);
    }

    // Vyhledani nejstarsi a nejmladsi osoby
    Person oldest = people[0];
    Person youngest = people[0];

    for (int i = 1; i < NUM_PEOPLE; i++) {
        if (people[i].age > oldest.age) {
            oldest = people[i];
        }
        if (people[i].age < youngest.age) {
            youngest = people[i];
        }
    }

    // Vypsani vysledku
    printf("Nejstarsi osoba je: %s (%d let)\n", oldest.name, oldest.age);
    printf("Nejmladsi osoba je: %s (%d let)\n", youngest.name, youngest.age);

    return 0;
}

/*
 *
 * Konstrukce typedef struct {} Person v jazyce C slouží k vytvoření nového datového typu Person,
 * který je založen na struktuře (struct) definované uvnitř této konstrukce.
 *
 * Bez použití typedef bychom museli vytvářet proměnné s datovým typem struct Person.
 * Použití typedef nám umožní vytvořit nový datový typ s názvem Person a používat ho jako jakýkoli jiný datový
 * typ v programu, bez nutnosti používat slovo struct před názvem datové struktury.
 *
 * Například, pokud máme tuto strukturu:

 struct Person {
    char name[50];
    int age;
 };

 * a chceme vytvořit proměnnou s tímto typem, musíme ji vytvořit takto:

 struct Person person1;


 * Pokud bychom ale použili typedef, můžeme definovat nový datový typ Person a poté vytvářet proměnné
 * bez použití slova struct:

    typedef struct {
        char name[50];
        int age;
    } Person;

    Person person1;

 * Takto je syntaxe jednodušší a program se lépe čte a píše. Použití typedef je tedy velmi užitečné při definování
 * složitých datových struktur, které se používají často v programu.

 */
