#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int nrcif(int x){
    int p=1;
    while(x>9){
        p=p*10;
    }
    return p*x;
}
int cifre(int x){
    int n=nrcif(x);
    if(n==10000){
        return 38894;
    }
    else if(n>1000){
        return (n/1000 - 1)
    }
}
int main(){
    int n,cate=0,p;
    fin>>n;
    while(n>20){

        n--;
    }
    fout<<cate;
}
