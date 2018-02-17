#include <iostream>
#include <vector>
using namespace std;

int main(){
double r1, r2;
cin >> r1 >> r2;
cout<<"x	y	lam1	lam2	f	g1	g2	augL"<<endl;
double lam1 =0, lam2=0;
double count = 1;

while (count>=0.00001){
double y =((r2-r1)*((lam1-lam2+4+7*r1-r2)/(2+r1+r2)) +7*r1+r2+4+lam1+lam2)/((2+r1+r2)*(1-(r2-r1)*(r2-r1)/(2+r1+r2)));
double x =( lam1-lam2+4+7*r1-r2+(r2-r1)*y)/(2+r1+r2); 
double f = (x-2)*(x-2)+(y-2)*(y-2);
double g1 = 7-x-y;
double g2 = 1+x-y;
double aug = x*x+-4*x+4+y*y-4*y+4+lam1*(7-x-y)+lam2*(1+x-y)+0.5*r1*(7-x-y)*(7-x-y)+0.5*r2*(1+x-y)*(1+x-y);
cout.setf(ios::fixed,ios::floatfield);
cout.precision(5);
cout << x <<"	"<< y <<"	"<< lam1 <<"	"<< lam2 <<"	"<<f <<"	"<<g1<<"	"<<g2<<"	"<<aug<<endl;
lam1 = lam1+g1;
lam2 = lam2+g2;

count=g1;
}

return 0;
}
