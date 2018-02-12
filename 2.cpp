#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int sumcif(int x){
    int sum=0;
    while(x>9){
        sum=sum+x%10;
        x=x/10;
    }
    return sum;
}
int main(){
    int n;
    fin>>n;
    while(n>=9){
        n=sumcif(n);
    }
    fout<<n;
}
