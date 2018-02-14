#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int ap[10];
int main(){
    long long n,nr=0;
    fin>>n;
    while(n>0){
        ap[n%10]++;
        n/=10;
    }
    for(int i=9;i>=0;i--){
        if(ap[i]>=1){
            nr=nr*10+i;
        }
    }
    fout<<nr;
}
