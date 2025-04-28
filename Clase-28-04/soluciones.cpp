/*Permitir al usuario cargar un vector con una frase de hasta 20 caracteres, sin necesidad de que la misma ocupe 
toda la longitud del arreglo. La frase finaliza con un “.”. Finalizada la carga, exhibir la frase en forma invertida.*/

/*
Se cuenta con 3 vectores denominados A, B y C de 35 posiciones cada uno. Los vectores A y B ya se encuentran 
cargados con números. Desarrollar un algoritmo que cargue el vector C con el siguiente criterio: 
El primer elemento de C debe contener el producto entre el primer elemento del vector A y el último elemento del 
vector B. 
El segundo elemento de C debe contener el producto entre el segundo elemento del vector A y el anteúltimo 
elemento del vector B*/

/*

Generar un arreglo que solo esté cargado con numeros impares, del 1 al 20

*/

#include <iostream>
using namespace std;

int main()
{
    
    char frase[25] = "Frase de cabecera";
    
    for(int i=18; i>=0; i--){
        cout<<frase[i];
    }
    
    cout<<endl<<endl;
    
    int vectorA[10] = {1,2,3,4,5,6,7,8,9,10};
    int vectorB[10] = {1,2,3,4,5,6,7,8,9,10};
    int vectorC[10] = {0,0,0,0,0,0,0,0,0,0};
    
    int impares[10] = {0,0,0,0,0,0,0,0,0,0};
    
    for(int i=0; i<10; i++){
         vectorC[i] = vectorA[i] * vectorB[9-i];
    }
    
    
    for(int k=0; k<=9; k++) {
        cout<<vectorC[k]<<",";
    }
    cout<<endl<<endl;
    
    int counter = 0;
    int i = 0;
    while(counter <20){
        counter++;
        if(counter%2==0){
            i++;
        }
        
        impares[i] = counter;
        
    }
    
    for(int i=0; i<10; i++){
        cout<<impares[i]<<",";
    }
    
    

    return 0;
}