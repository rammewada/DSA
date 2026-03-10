#include<bits/stdc++.h>
 
using namespace std;
 

//  class Point{
//     public:
//       int x,y;
//       Point(int x=0, int y=0){
//         this->x=x;
//         this->y=y; 
//       }
//       Point operator+(const Point& obj){
//         Point p;
//         p.x=x+obj.x;
//         p.y=y+obj.y;

//         return p;
//       }
//       void print(){
//       cout<<"x: "<<x<<" y: "<<y<<endl;
//     }
//   };

// int main(){
//   Point p1(10,20);
//   Point p2(40,50);
//   p1.print();
//   p2.print();

//   Point p3=p1+p2;
//   p3.print();

//   return 0;
// }
 

   

// int pow(int a,int b){
//   int power=a;
//   for(int i=1;i<b;i++){
//    power=power*a;
//   }
//   return power;
// }
  
// int main(){
//    int n=153;
//    int k=to_string(n).size();
//    cout<<to_string(n).size()<<endl;
// int sum=0;
//    while(n>0){
//      int digit=n%10;
//      sum+=round(pow(digit,k));
//      cout<<pow(digit,k)<<endl;
//      n=n/10;
//    }

//    cout<<sum;
//   return 0;
// }








// int gcd(int a,int b){
//    int result=min(a,b);

//    while(result>1){
//     if(a%result==0 && b%result==0){
//       return result;
//     }
//     result--;
//    }
//    return result;
// }
// int lcm(int a, int b){
//    int greater=max(a,b);
//    int smallest=min(a,b);

//    // for(int i=greater;;i+=greater){
//    //  if(i%smallest==0) return i;
//    // } 

//   return (a*b)/gcd(a,b);
//    


//FIND SECOND HIGHEST ELEMENT
class A{
  int x;
  int y;
public:
  A(int x=0,int y=0){
    this->x=x;
    this->y=y;
  }
  A operator+(A& obj){
    A a;
    a.x=x+obj.x;
    a.y=y+obj.y;

    return a;
  }
  void print(){
    cout<<"x: "<<x<<"Y: "<<y;
  }
};

int gcd(int a,int b){
  int maxx=min(a,b);

  while(maxx>1){
    if(a%maxx==0 && b%maxx==0) return maxx;
    maxx--;
  }
}
int lcm(int a,int b){
  int minn=min(a,b);
  int maxx=max(a,b);

  for(int i=maxx;;i+=maxx){
    if(i%minn==0) return i;
  }
}


int main(){
   int n= 2018;
   if(n%4==0 && n%100!=0||n%400==0){cout<<"True"; return 0;}
   cout<<"False";
  return 0;
}