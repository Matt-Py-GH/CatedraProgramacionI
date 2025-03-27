#include<iostream>
using namespace std;

int main(){

char c = 'a';
char vec[50];
int i = 0;

cin>>c;

while(c!='.'){
    vec[i] = c;
    i++;
    cin>>c;
}

for(int j=i-1; j>=0; j--){
    cout<<vec[j];

}

    return 0;
}
