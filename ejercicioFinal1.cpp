#include<iostream>
using namespace std;


int main(){

int matriz[17][17];
int cod;
int cantidad;


for(int f=1; f<=17; f++){
    matriz[f][1] = f;
    matriz[f][2] = 0;
}

string respuesta = "si";

while(respuesta == "si"){
    cin>>cod;
    cin>>cantidad;
    matriz[cod][2] = matriz[cod][2] + cantidad;
    cin>>respuesta;
}

for(int f=1; f<=16; f++){
    for(int c=f+1; c<=17; c++){
        if(matriz[f][2]<matriz[c][2]){
            for(int k = 1; k<= 2; k++){
                int aux = matriz[f][k];
                matriz[f][k] = matriz[c][k];
                matriz[c][k] = aux;
            }
        }
    }
}

for(int f = 1; f<17; f++){
    cout<<"Insumo: "<<matriz[f][1]<<endl;
    cout<<"Cntidad unidades: "<<matriz[f][2]<<endl;
}


    return 0;
}
