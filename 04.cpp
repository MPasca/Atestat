#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
fstream fout("date.out",ios::out);
bool nrPrim(int x){
    int r=sqrt(x);
    for(int d=2;d<=r;d++){
        if(x%d==0){
            return false;
        }
    }
    return true;
}
int og(int x){
    int n=0;
    while(x>0){
        n=n*10+x%10;
        x=x/10;
    }
}
int main(){
    int nr=101;
    while(nr<998){
        if(nrPrim(nr) && nrPrim(og(nr))){
            fout<<nr<<" ";
        }
        nr++;
    }
}
