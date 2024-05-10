Algoritmo SumaPares
    // Definimos variables
    Definir suma Como Entero;
	Definir i Como Entero;
	suma <- 0;
    i <- 100;
	
	Mientras i <= 200 Hacer
        Si i MOD 2 = 0 Entonces
            suma <- suma + i;
        FinSi
        i <- i + 1;
    FinMientras
	
    Escribir "La suma de los numeros pares entre 100 y 200 es: ", suma;
FinFuncion
FinAlgoritmo