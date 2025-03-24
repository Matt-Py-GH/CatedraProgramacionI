#include<iostream>
using namespace std;

int main(){

    int vect[24];
    int wect[24];
    int cont;

    for(int i=0; i<24; i++){
        cin>>vect[i];
        cin>>wect[i];

    }

    for(int i=0; i<24; i++){
        cont = 0;
        for(int j=0; j<24; j++){
            if(vect[i] == wect[j]){
                cont = cont+1;
            }
        }
        cout<<cont<<endl;
    }



    return 0;
}


