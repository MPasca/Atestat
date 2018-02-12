#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int main(){
    int aux,n,i,d,m,ok=0;
    fin>>n;
    for(i=1;i<=n;i++){
        aux=n;
        d=i;
        while(aux>0){
            aux-=d;
            d++;
        }
        if(aux==0 && d-i>1){
            m=i;
            while(m<d){
                fout<<m<<" ";
                m++;
            }
            fout<<"\n";
        }
    }
}
