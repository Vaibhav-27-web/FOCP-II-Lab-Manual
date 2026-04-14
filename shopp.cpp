#include <iostream>
using namespace std;
class shop
{
  int itemnumber[100];
  int itemprice[100];
  int counter;

public:
  void initcounter(void) { counter = 0; }
  void getprice(void);
  void display(void);
};
void shop ::getprice(void)
{
  cout << "Enter the item number  : " << counter+1 << endl;
  cin >> itemnumber[counter];
  cout << "Enter the price of item  :" << endl;
  cin >> itemprice[counter];
  counter++;
}

void shop ::display(void)
{
  for (int i = 0; i < counter; i++) //zero initialize na krne pr loop run nhi kar raha ?
cout << " The price of item with item number " << itemnumber[i] << " is " << itemprice[i]<<"."<<endl;
//cout<<"i="<<i;
}
int main()
{
  shop kirana;
  kirana.initcounter();
  kirana.getprice();
  kirana.getprice();
  kirana.getprice();

  kirana.display();

  return 0;
}