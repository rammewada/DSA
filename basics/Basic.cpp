#include<iostream>
#include<set>

using namespace std;


struct car { 
  string model;
  int price;
  string owner;
};


int main (){
 
  car MyCar;

  MyCar.model="swift";
  MyCar.price=299999;
  MyCar.owner="Ram";

  cout<<"Model : "<<MyCar.model<<endl<<"Price : "<<MyCar.price<<endl<<"Owner : "<<MyCar.owner;

  return 0;

} 