Algoritmo PromedioSeccion
   //Definimos variables
    Definir suma Como Real;
	Definir i Como Entero;
	Definir j Como Entero;
	Definir promedio Como real;
	Definir nota como real;
	
	//Vector
	Dimension nota[10];
	promedio<-0;
    suma <- 0;
	i <- 0;
	j <- 0;
    
	//Ingreso y guardado de datos
    Escribir "Proporcione las notas de los 10 estudiantes: ";
    Mientras i < 10 Hacer
        Escribir "Proporcione la nota del estudiante ", i + 1, ": ";
        Leer nota[i];
        i <- i + 1;
    FinMientras
	
	//Sumatoria
    Mientras j < 10 Hacer
        suma <- suma + nota[j];
        j <- j + 1;
    FinMientras
	
	//Calcular promedio
    promedio <- suma / 10;
	
	//Salida
	Escribir "El promedio general de la seccion es: ", promedio; 
FinAlgoritmo

