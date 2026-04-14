#include<iostream>
using namespace std;
class animal {
private:
 int c, d , e  ;

  public:
  int a , b ;
  void setData(int n1,int n2,int n3);
  void getData(){
  cout<<"value of  c  "<<c<<endl;
  cout<<"value of d  "<<d<<endl;
  cout<<"value of  e "<<e<<endl;
  cout<<"value of a  "<<a<<endl;
  cout<<"value of  b  "<<b <<endl;}
  

};
void animal ::setData( int n1,int n2,int n3 )
{c= n1;
 d= n2;
 e= n3;
} 

int main(){

animal l ; 
l.setData(4,5,6);
l.getData();
l.a =23;
l.b =5;
return 0;


 }
