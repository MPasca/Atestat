#include<fstream>
#include<iostream>
#include<cmath>
using namespace std;
fstream fin("date.in",ios::in), fout("date.out",ios::out);
struct fractie{         //  s.x/s.y + fr.x/fr.y = s.x*fr.y + fr.x * s.y / s.y * fr.y
    int x,y;
}s,fr;
int cmmdc(int a,int b){
    int r=sqrt(a),c=1;
    for(int d=r; d>1; d--){
        if(a%d==0 && b%d==0){
            a/=d;
            b/=d;
            c*=d;
            d++;
        }
    }
    return c;
}
int main(){
    int n,c;
    fin>>n;
    s.x=0;
    s.y=1;
    while(n>0){
        fin>>fr.x>>fr.y;
        s={s.x*fr.y+fr.x*s.y, s.y*fr.y};
        c=cmmdc(s.x,s.y);
        s.x/=c;
        s.y/=c;
        cout<<s.x<<" "<<s.y<<"\n";
        n--;
    }
    fout<<s.x<<" "<<s.y;
}
