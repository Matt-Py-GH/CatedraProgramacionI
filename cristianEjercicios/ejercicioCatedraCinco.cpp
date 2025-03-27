///Realizar un programa que solicite tres numeros al usuario, sume 5 a los primeros dos, y luego los reste al tercero. El resultado debe verse en pantalla
///Plantear en un comentario que calculo debe hacerse con los tres numeros


/// x = a - ((b+5) + (c+5))
#include<iostream>
using namespace std;

int main(){

    int num1;
    int num2;
    int num3;
    int total;

    cin>>num1;cin>>num2;cin>>num3;
    total = num3 - ((num1 + 5) + (num2 + 5));
    cout<<total;


}
