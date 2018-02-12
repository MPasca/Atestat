#include<iostream>
#include<fstream>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
int main(){
    long long a,b;
    fin>>a>>b;
    fout<<a+b;
}
