#include <stdio.h>
#include <malloc.h>

#define MAX_NUME 32

typedef struct
{
    char* nume;
    int nota;
}CANDIDAT;

typedef struct LISTA;

typedef struct
{
    CANDIDAT candidat;
    struct LISTA* urm;
    struct LISTA* prev;
}LISTA;

LISTA creareLista(int);
void afisareLista(LISTA);

// creare listei cu concurenţi;
// sortarea listei dupa nota;
// căutare în listă după nume;
// separarea în doua liste (concurenţi admişi şi respinşi);
// afişarea listelor. 