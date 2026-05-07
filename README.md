# Ejercicio-4-Modo-Espejo
Programa propuesto en clases en donde se ingreso valores previamente dados y se mostró al revés. En C++ y JAVA.
CODIGO EN JAVA 

import java.util.Scanner;

public class ModoEspejo {
public static void main(String[] args) {
Scanner sc = new Scanner(System.in);
int [] numeros = new int[5];
    for(int i=0; i<numeros.length; i++){
        System.out.println("Ingrese el numero " + (i+1) + ": ");
        numeros[i]=sc.nextInt();
    }
    System.out.println("Arreglo original:");
    for(int i=0; i<numeros.length; i++){
        System.out.print(numeros [i] + " ");
    }
    System.out.println("");
    System.out.println("Arreglo espejo: ");
    for(int i=numeros.length-1; i>=0; i--){
        System.out.print(numeros[i] + " ");
    }
}
}
