
Algoritmo ImprimirImpares
	Definir i Como Entero;
	Escribir "Imprimiendo los numeros impares en orden descendente que hay entre 1 y 100...";
    i <- 100;
    Mientras i >= 1 Hacer
        Si i MOD 2 <> 0 Entonces
            Escribir i, ", ";
        FinSi
        i <- i - 1;
    FinMientras
FinAlgoritmo
