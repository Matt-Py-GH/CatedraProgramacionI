#include<iostream>
using namespace std;

int main(){

int total = 0;
int numero;
int vect[35];
int prom;

for(int f=0; f<35; f++){
    cin>>numero;
    vect[f] = numero;
    total = total + numero;
}

cout<<endl;

prom = total/35;
int cant = 0;

for(int f=0; f<35; f++){
    if(vect[f] > prom){
        cout<<vect[f]<<endl;
        cant = cant + 1;
    }
}

cout<<"Superaron el promedio: "<<cant<<endl;

    return 0;
}

