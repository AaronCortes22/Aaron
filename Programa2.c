# incluye  < stdio.h >
int  main () {
    / * Aaron Rodriguez Cortes
    Equipo UMIZUMI
    21 abr 21
    Programa 2. Pide dos valores enteros, los suma y muestra resultado
    * /
   int a, b, c; // Reciben valores enteros.
   printf ( " \ n  \ n  \ n  \ n Programa 2 \ n " );
   printf ( " Suma de números enteros \ n " );
   printf ( " \ n  \ n Dame el valor entero de a: " );
   scanf ( " % d " , & a); // Si vas a recibir un valor entero usa% d
                 // Para indicar la variable donde se guarda usa & variable
   printf ( " \ n  \ n Dame el valor entero de b: " );
   scanf ( " % d " , & b); // Permite capturar un valor entero
   c = a + b;
   printf ( " \ n El resultado es % d " , c);
   return  0 ;
}