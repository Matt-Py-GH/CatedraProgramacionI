#include<iostream>
using namespace std;

int main(){

float numeroUno, numeroDos;
int opcion;
int password = 3;


//------------------------------------------------------------------------------------------------//
cout<<"Ingrese una opcion:\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir"<<endl;
cin>>opcion;

switch(opcion){

case 1:
    cout<<"Ingrese ambos numeros: "<<endl;
    cin>>numeroUno;
    cin>>numeroDos;
    cout<<numeroUno+numeroDos;
    break;

case 2:
    cout<<"Ingrese ambos numeros: "<<endl;
    cin>>numeroUno;
    cin>>numeroDos;
    cout<<numeroUno-numeroDos;
    break;
case 3:
    cout<<"Ingrese ambos numeros: "<<endl;
    cin>>numeroUno;
    cin>>numeroDos;
    cout<<numeroUno*numeroDos;
    break;
case 4:
    cout<<"Ingrese ambos numeros: "<<endl;
    cin>>numeroUno;
    cin>>numeroDos;
    cout<<numeroUno/numeroDos;
    break;
default:
    cout<<"opcion invalida"<<endl;

}

//------------------------------------------------------------------------------------------------//

cout<<"\n\n\n";
cout<<"------------------------------------\n";
cout<<"\tSucesion de Fibonacci"<<endl;
cout<<"------------------------------------\n\n";


int anteriorDos = 0;
int anteriorUno = 1;
int numero = 0;

///Fibonacci

for(int i=1; i<15; i++){
    cout<<numero<<", ";
    anteriorDos = anteriorUno;
    anteriorUno = numero;
    numero = anteriorDos + anteriorUno;

}

cout<<"\n\n\n";

//------------------------------------------------------------------------------------------------//

char estado = 'D';
int intentos = 0;


for(int i=0; i<3; i++){
    int ingreso;
    
    if(estado == 'D'){
        cout<<"Ingrese el PIN: ";
        cin>>ingreso;
        if(ingreso == password){
            cout<<"Inicio exitoso!"<<endl;
            estado = 'A';
        }
        
        else{
            cout<<"PIN incorrecto\n";
        intentos++;
    }

    }

}

if(intentos >= 3){
    cout<<"Sin intentos... intente nuevamente mas tarde"<<endl;

}
cout<<"\n\n\n";



}
