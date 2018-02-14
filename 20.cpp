#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
char cuv[20],aux[20];
int main(){
    fin>>cuv;
    for(int i=0;i<strlen(cuv);i++){
        strcpy(aux,cuv);
        if(aux[i]!=aux[i-1]){
            strcpy(aux+i,aux+i+1);
            fout<<aux<<"\n";
        }
    }
}
