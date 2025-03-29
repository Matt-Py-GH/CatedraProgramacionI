#include<iostream>
using namespace std;

int main(){

    char E[5] = {'A','B','C','D','E'};

    int GL[5];
    int GSE[5];
    int GSU[5];
    int TOT[5];
    char R;
    int EDIF;
    int GLIM;
    int GSERV;
    int GSUEL;


    for(int i=0; i<4; i++){
        GL[i] = 0;
        GSE[i] = 0;
        GSU[i] = 0;
        TOT[i] = 0;
    }


 cin>>R;

while(R=='s'){

    cin>>EDIF;
    int D  = 0;
    int H = 4;
    int ME = (D+H)/2;
    int pos = -1;

    while(D<= H && pos == -1){
        if(E[ME]==EDIF){
            cin>>GLIM>>GSERV>>GSUEL;

            pos = ME;
            GL[pos] = GL[pos] + GLIM;
            GSE[pos] = GSE[pos] + GSERV;
            GSU[pos] = GSU[pos] + GSUEL;
            TOT[pos] = GL[pos] + GSE[pos] + GSU[pos];
        }
        else{
            if(E[ME]>EDIF){
            H = ME +1;
        }
            else{
                D = ME +1;
            }
            ME = (D+H)/2;
        }


    }

    cin>>R;
}

    for(int i=0; i<4; i++){
            cout<<E[i]<<GL[i]<<GSE[i]<<GSU[i]<<TOT[i];
        }

    return 0;
}
