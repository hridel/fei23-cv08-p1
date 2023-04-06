# Příklad 1
## Vlastní datový typ struktury

Nadefinujte nový datový typ struktury `Person` pro uchování dat o libovolné osobě. Bude uchovávat minimálně _jméno_ a _věk_.

Dále definujte konstantu definující počet osob.

Vytvořte pole osob, načtěte jednotlivé osoby z klávesnice a následně vyhledejte a vypište nejstarší a nejmladší osobu.

---
Nápověda:

```c
// Definice typu datove struktury pro osobu
typedef struct {
    char name[50];
    int age;
} Person;
```