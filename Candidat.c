#include <Candidat.h>

CANDIDAT citire()
{
    CANDIDAT c;

    printf("Introd. date candidat:\n");
    c.nume = malloc(sizeof(char)*MAX_NUME);
    scanf("%s", c.nume);
    scanf_s("%d", &c.nota);

    return c;
}

void afisare(CANDIDAT c)
{
    printf("Date candidat sunt:\n");
    printf("%s %d", c.nume, c.nota);
}

LISTA creareLista(int n)
{
    //CANDIDAT c;
    LISTA l;
    LISTA *temp = &l;
    int i = 0;
    //c = citire();
    while(i < n)
    {
        temp->candidat = citire();
        temp->urm = malloc(sizeof(LISTA));

        if(++i >= n)
        {
            temp->urm = NULL;
        }
        else
        {
            temp = temp->urm;
        }

    }

    return l;
}

void afisareLista(LISTA l)
{
    LISTA *temp = &l;
    while(temp)
    {
        afisare(temp->candidat);
        temp = temp->urm;
    }
}

