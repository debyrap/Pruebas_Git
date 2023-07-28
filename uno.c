include <stdio.h>
      //vector con n posicion
// no se llego a usar una funcion, ya que se practico vector con n posiciones.
int i; //indice
int n; //donde se guarda el tamaño a ingresar para el vector

int main (void){

    printf ("Ingresar el tamaño que tendrá el vector: \n");
    scanf ("%i", &n);
    int v[n]; //recien cunado se ingresa el tamaño que tendra el vector, se declara (no antes)

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