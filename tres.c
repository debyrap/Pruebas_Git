include <stdio.h>
      

int i; 
int n; 

int main (void){

    printf ("Ingresar el tamaño que tendrá el vector: \n");
    scanf ("%i", &n);
    int v[n];
    printf ("Ingresar los valores que tedrá el vector: \n");
    for (i = 0; i < n; i++) {
    scanf ("%i", &v[i]);
    }

    printf ("El vector elegido fue de %i\n", n);
    printf ("Los valores ingresados fueron: \n");
    for (i = 0; i < n; i++) {
    printf ("%i", v[i]);
    }

}