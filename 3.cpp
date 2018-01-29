#include<fstream>
#include<iostream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int zecimale(int p,int n){
    while(n>0){
        p=p*10;
        n--;
    }
    return p;
}
int main(){
    int n,x,p=1;
    double a,b,f;
    fin>>a>>b>>n;
    x=a/b;
    f=a/b-x;
    p= zecimale(p,n);
    f=f*p;
    x=f;
    fout<<x;
}
