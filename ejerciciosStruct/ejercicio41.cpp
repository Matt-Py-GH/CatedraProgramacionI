#include<iostream>
using namespace std;

int main(){

int cod[100];
int stock[100];
int cantidadMin[100];
char r;
char tipo[100];
int cant;
int c;
int fila;

for(int i=0; i<=2;i++){
    cin>>cod[i]>>stock[i]>>cantidadMin[i];
}

cin>>r;

while(r=='s'){
    cin>>c>>tipo>>cant;
    for(int i=0; i<=2; i++){
        if(cod[i] == c){
         fila = i;
        }
    }
    if(tipo == "INGRESO"){
        stock[fila] = stock[fila] + cant;
    }
    else if(stock[fila] >= cant){
        stock[fila] = stock[fila] - cant;
    }
    else{
        cout<<"No hay stock suficiente "<<endl;
    }
    cin>>r;
}

for(int i=0; i<=2; i++){
    if(stock[i] >= cantidadMin[i]){
        cout<<"Stock suficiente"<<endl;
    }
    else{
        cout<<"Stock faltante"<<endl;
    }
}

    return 0;
}
