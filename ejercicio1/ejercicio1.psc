Algoritmo Sumatoria
    //Declaracion de variables
    definir num como entero; 
	definir i como entero;
	definir suma como entero;

    //Solicitud de numero
    Escribir "Digita hasta que numero quieres que se sume: ";
    Leer num;

    //Validacion del numero
    Si num < 1 Entonces
        Escribir "N?mero inv?lido, digite cantidades mayores o iguales a 1";
    Sino
        i <- 0;
        suma <- 0;

        //Calculo de la sumatoria
        Mientras i <= num Hacer
            suma <- suma + i;
            i <- i + 1;
        Fin Mientras

        Escribir "La suma es de: ", suma;
    Fin Si
Fin Algoritmo