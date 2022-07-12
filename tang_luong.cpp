#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    long double n,luong=0,c;
    cin>>n;
    if(n>=0 && n<=400) cout<<fixed<<setprecision(2)<<"Luong: "<<n*0.15+n<<endl<<"Tien kiem duoc: "<<n*0.15<<endl<<"Ty le phan tram: 15%";
    else if(n>400 && n<=800) cout<<fixed<<setprecision(2)<<"Luong: "<<n*0.12+n<<endl<<"Tien kiem duoc: "<<n*0.12<<endl<<"Ty le phan tram: 12%";
    else if(n>800 && n<=1200) cout<<fixed<<setprecision(2)<<"Luong: "<<n*0.10+n<<endl<<"Tien kiem duoc: "<<n*0.10<<endl<<"Ty le phan tram: 10%";
    else if(n>1200 && n<=2000) cout<<fixed<<setprecision(2)<<"Luong: "<<n*0.07+n<<endl<<"Tien kiem duoc: "<<n*0.07<<endl<<"Ty le phan tram: 7%";
    else if(n>2000) cout<<fixed<<setprecision(2)<<"Luong: "<<n*0.04+n<<endl<<"Tien kiem duoc: "<<n*0.04<<endl<<"Ty le phan tram: 4%";
}


