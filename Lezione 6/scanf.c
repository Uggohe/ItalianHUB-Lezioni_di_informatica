#include <stdio.h>

int main()
{
    /* scansiona formattato */
    
    float a;
    int b;
    /* creo intero in memoria 4 byte */
    
    scanf("%f%d", &a, &b);
    
    char car;
    scanf("%c", &car);
    /* un po' come la printf */
    /* ma ricordate la & */
    
    /* in questo esempio dimostro come */
    /* il \n inserito quando premo invio per */
    /* mandare mandare i dati in input */
    /* questo, essendo l'ultimo carattere */
    /* e non venendo letto, rimane nel */
    /* buffer di input!!!!!! */
    /* infatti, possiamo leggerlo nella */
    /* scanf successiva */
    
    printf("Valore: %f%c%d\n", a, car, b);
}


