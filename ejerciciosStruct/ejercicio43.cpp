#include<iostream>
using namespace std;

int main(){

char C[5] = {'M','C','Q','K','E'};


int ACUM[5];
int CONT[5];
int NOTA;

for(int i=0;i<4;i++){
    ACUM[i] = 0;
    CONT[i] = 0;
}

char COMI;
cin>>COMI;

while(COMI != 'X'){
    cin>>NOTA;
    for(int i=0;i<4;i++){
        if(C[i] == COMI){
            ACUM[i] += NOTA;
            CONT[i]++;
        }

    }
    cin>>COMI;
}

int TOT=0;

for(int i=0;i<4;i++){
    cout<<C[i]<<ACUM[i]/CONT[i]<<CONT[i]<<endl;
    TOT += TOT + CONT[i];
}

cout<<TOT;

    return 0;
}
