Algoritmo PromedioAprobadosReprobados
    
	// Definimos variables
	Definir NOTAAPROBADA Como entero;
	Definir MAX Como Entero;
    
	Definir cant, cantAprobados, cantReprobados Como Entero;
	Definir suma Como Real;
	Definir promedio como real;
	Definir i Como Entero;
    Definir j Como Entero;
	Definir k Como Entero;
	Definir l Como Entero;
   
	
	//Vector
	Definir nota como real;
	Dimension nota[8];
	
	i <- 0;
	j <- 0;
    k <- 0;
	l <- 0;
    suma <- 0;
	MAX <- 8;
    NOTAAPROBADA <- 60;
    cantAprobados <- 0;
    cantReprobados <- 0;

    // Solicitud Cantidad
    Escribir "Cantidad de notas de alumnos a ingresar (maximo 8): ";
    Leer cant;
	
	Si cant < MAX Entonces
		
	//Ingreso y guardado de notas
    Mientras i < cant Hacer
        Escribir "Ingrese la nota del alumno ", i + 1, ": ";
        Leer nota[i];
        i <- i + 1;
    FinMientras
	
	//Suma de notas
    Mientras j < cant Hacer
        suma <- suma + nota[j];
        j <- j + 1;
    FinMientras
	
	//Promedio
	promedio <- suma / cant;

	//Calculando aprobados
    Mientras k < cant Hacer
        Si nota[k] >= NOTAAPROBADA Entonces
            cantAprobados <- cantAprobados + 1;
        FinSi
        k <- k + 1;
    FinMientras
	
	//Calculando reprobados
    Mientras l < cant Hacer
        Si nota[l] < NOTAAPROBADA Entonces
            cantReprobados <- cantReprobados + 1;
        FinSi
        l <- l + 1;
    FinMientras
	
	// Salidas
	Escribir "El promedio general del grupo es: ", promedio;
	Escribir "La cantidad de alumnos aprobados es: ", cantAprobados;
	Escribir "La cantidad de alumnos reprobados es: ", cantReprobados;
	Escribir "Total de alumnos: ", cant;
	

SiNo
	Escribir "Invalido... maximo es ", MAX;
FinSi
FinAlgoritmo