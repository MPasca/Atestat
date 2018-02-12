#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int a[101];
int main(){
    int n,m,x,cate=0,ok;
    fin>>n;
    for(int i=1;i<=n;i++){
        fin>>a[i];
    }
    fin>>m;
    for(int i=1;i<=m;i++){
        fin>>x;
        ok=1;
        for(int j=1;j<=n;j++){
            if(x>=a[j]){
                ok=0;
                break;
            }
        }
        if(ok==1){
            cate++;
        }
    }
    fout<<cate;
}
