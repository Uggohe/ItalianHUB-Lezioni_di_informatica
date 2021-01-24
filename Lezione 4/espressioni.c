int main()
{
    int a = 2;
    int b = a + 15 /* adesso a e' uguale a 17 */

    float f;
    
    f = a*b + 1; /* f e' uguale a 35.0 */
    f = f + 0.7; /* f e' uguale a 35.7 */

    a = f; /* adesso a e' uguale a 35 NON 36 */
    a = a/b; /* a e' uguale a 2 diviso 17 che fa (int)0.117647059, ovvero 0 */
    a = b/a; /* a e' ugual a 17 diviso 2 ovvero (int)8.5 ovvero 8, NON 9*/


    f = (a+b)*f/15+1+1+2+a+a+a+a+f+b-(14+a);
    /* quanto fa? Boh, lo fa il computer, mica noi! */
    /* ricordate però di usare bene le parentesi*/
    /* per esempio -(14+a) fa prima 14+a e poi -risultato*/
    /* quindi in algebra normale sarebbe uguale a -14-a*/
}
