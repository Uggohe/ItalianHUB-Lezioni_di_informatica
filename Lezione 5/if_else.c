#include <stdio.h>

int main()
{
    int a=0;
    char b = '\0'; /* carattere ID: 0 della tabella ASCII, vedi prox lezione */
    float f = 0.0;

    if(a) /* o b o f*/
    {
        printf("Il valore di a e' 0");
    } else
    {
        printf("Questo non verra' stampato per nessuno dei valori indicati");
    }


    a = 1 > 5; /* in a viene assegnato l'intero 0 */
    a = 1 < 5; /* in a viene assegnato l'intero 1*/
    a = (1 < 5)+10; /* in a viene assegnato l'intero 11 (1+10) */

   /* quindi a = 11*/
    if(a == 5) /* IMPORTANTE: a e' uguale a 5? sì, quindi rimpiazzo l'espressione con l'intero 0*/
    {
        printf("Si', a e' uguale a 5");
    }else
    if(a==11) /* a e' uguale a 11? Si', rimpiazzo con 1*/
    {
        printf("Si', a e' uguale a %d", a); /* 11 */
    }else
    {
        printf("a non ha passato nessuno dei test");
        /* a non e' ne' 11 ne' 5 */
    }
    /* questa struttura viene chiamata if else in cascata*/
    /* ovvero concateno degli else a degli if per decidere piu' esiti*/
    /* in base a piu' condizioni dove una esclude le successive*/
    /* lo vedremo meglio in questo esempio */

    a = 10;
    if(a > 5)
    {
        printf("a e' maggiore di 5");
    }else
    if(a > 10)
    {
        printf("a e' maggiore di 10");
    }else
    {
        printf("a non e' maggiore ne' di 5 ne' di 10, quindi e' <= 5");
    }
    /* in questo caso, viene stampato SOLO a e' maggiore di 5 */
    /* poiche' il primo else mi obbliga a saltare alla fine di tutto */
    
    
     if(a > 5)
    {
        printf("a e' maggiore di 5");
    } /* TOLGO L'ELSE*/
    if(a > 10)
    {
        printf("a e' maggiore di 10");
    }
    /* in questo modo vengono stampate entrambe le stringhe */
    /* perche' non c'e' un else ("altrimenti") che esclude le altre ipotesi*/
}
