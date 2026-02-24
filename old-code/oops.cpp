// #include<bits/stdc++.h>
// using namespace std;
// // //----------- Friend function----------------->

// // class S1;

// // class S2{
// // public:
// // 	void get(S1& s);
// // };


// // class S1{
// // private:
// // 	string name;
// // protected:
// // 	int roll;
// // public:
// // 	S1(){
// // 		name="Ram";
// // 	}
// // 	friend void S2::get(S1&);
// // };

// //  void S2::get(S1& s){
// // 		cout<<"Friend function is called 😁"<<s.name<<"--"<<endl;
// // 	}


// // int main(){ 
    
// //     S1 obj;

    

// //     S2 obj2;
// //     obj2.get(obj);

// // 	return 0;
// // }




// // ---------------------- Friend Class------------------->
// class t2;
// class t1{
//     string name;
//     int roll;
// protected:
//      int pin;
// public:
//    t1(){
//    	name="Ram 🏹";
//    	roll=177;
//    	pin=465337;
//    }

 
//  friend class t2;
// };

// class t2{
//   public:
//   void function(t1& obj){
//    cout<<"Name : "<<obj.name<<endl<<"Roll : "<<obj.roll<<endl<<"Pin : "<<obj.pin<<endl;
// }
// };

// int main(){
//      t1 obj1;
//      t2 obj2;
//      obj2.function(obj1);
// 	return 0;
// }



#include<bits/stdc++.h>

using namespace std;
int main(){

 set<int> s;

   s.insert(10);
    s.insert(30);
     s.insert(20);
      s.insert(10);

     s.remove(30);

      for(auto x:s){
      	cout<<x<<" ";
      }
}