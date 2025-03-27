#include<iostream>
using namespace std;

int main(){

    int v[24];
    int w[24];
    int z[24];

    for(int i=0; i<24;i++){
        cin>>v[i];cin>>w[i];
        z[i]=0;

    }
    cout<<endl;
    for(int i=0;i<24;i++){
        for(int j=0; j<24;j++){
            if(v[i] == w[j]){
                z[i] = z[i]+1;

            }
        }
        cout<<z[i]<<endl;
    }



    return 0;
}


