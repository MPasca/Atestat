#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in),fout("date.out",ios::out);
bool fibonacci(int x){
    int a=1,b=2,aux;
    while(b<x){
        aux=a;
        a=b;
        b=aux+a;
    }
    if(b==x){
        return true;
    }
    switch (x){
        case 0: return true;
        case 1: return true;
        default: return false;
    }
}
int main(){
    int n,cate=0,x;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>x;
        if(fibonacci(x)){
            cate++;
        }
    }
    fout<<cate;
}
