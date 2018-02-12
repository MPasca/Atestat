#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in),fout("date.out",ios::out);
int v[101];
int main(){
    int n;
    fin>>n;
    fin>>v[1];
    for(int i=2;i<=n;i++){
        fin>>v[i];
        for(int j=1;j<i;j++){
            if(v[i]==v[j]){
                i--;
                n--;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        fout<<v[i]<<" ";
    }
}
