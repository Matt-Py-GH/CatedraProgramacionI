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
    int D=0;
    int H = 4;
    int ME = (D+H)/2;
    int POS = -1;


    while(D<=H && POS == -1){
        if(C[ME] == COMI){
            POS = ME;
        }
        else{
            if(C[ME]>COMI){
                H = ME-1;
            }
            else{
                D = ME+1;
            }
            ME = (D+H)/2;
        }

    }
    if(POS != -1){
        ACUM[POS] += NOTA;
        CONT[POS]++;
    }
    else{
        cout<<"COMISION NO ENCONTRADA"<<endl;
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

