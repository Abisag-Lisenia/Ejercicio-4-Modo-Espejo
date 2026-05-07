Proceso ModoEspejo
    Definir num Como Entero
    Dimension num[5]
    Definir i Como Entero
	
    // Ingreso de datos
    Para i <- 1 Hasta 5 Hacer
        Escribir "Ingrese un número: "
        Leer num[i]
    FinPara
	
    // Mostrar en orden inverso
    Escribir "Números en orden inverso:"
    Para i <- 5 Hasta 1 Con Paso -1 Hacer
        Escribir num[i]
    FinPara
FinProceso
