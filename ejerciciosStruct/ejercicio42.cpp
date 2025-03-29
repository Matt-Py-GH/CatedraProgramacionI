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

        for(int i=0; i<4; i++){
            if(E[i] == EDIF){
            cin>>GLIM>>GSERV>>GSUEL;



                GL[i] = GL[i] + GLIM;
                GSE[i] = GSE[i] + GSERV;
                GSU[i] = GSU[i] + GSUEL;
                TOT[i] = GL[i] + GSE[i] + GSU[i];
            }

        }
        cin>>R;
    }

    for(int i=0; i<4; i++){
        cout<<E[i]<<GL[i]<<GSE[i]<<GSU[i]<<TOT[i];
    }

    return 0;
}
