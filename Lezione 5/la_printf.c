#include <stdio.h>
/* questa e' una libreria, vedremo piu' avanti come si usa */
/* per ora accontentatevi di */
/* "e' un file preinstallato contenente programmi gia' fatti */
/* all'interno c'e' scritto il programma della printf */
/* in questo modo lo includiamo nel nostro programma */

int main()
{
    int a, b, c;

    printf("Ciao, adesso scriveremo le variabili a, b, c");
    printf("%d, %d, %d", a, b, c);
    /* ricordatevi sempre, prima la stringa */
    /* poi le variabili nel giusto ordine */
    /* vi faccio notare che non abbiamo inizializzato le variabili */
    /* quindi esse si riferiranno a memoria in cui non sappiamo cosa */
    /* e' scritto, tuttavia, nessuno ci vieta di leggerla e scriverci */

    a = 1; b = 3; c = 4;
    /* inizializziamo le variabili */
    printf("%d, %d, %d", a, b, c); /* e stampiamole */
    
    float var = 11.5;
    char carattere = '[';
    char carattere2 = ']';

    printf("In questo testo formatto tutto %c%f, %f%c", carattere, var, var, carattere2);
    /* In questo testo formatto tutto [11.500000, 11.500000] */

    printf("Posso anche scrivere espressioni: %f", 11.2/41+5);
    /* Posso anche scrivere espressioni: 5,273170732 */
    /* Dopotutto ricordiamo che le variabili usate nelle espressioni */
    /* Sono anch'esse espressioni! */
    /* CON UN TIPO E UN VALORE!!!!! */
}
