// what is a function 

// #include <iostream>

// using namespace std;


// int adder (int x,int y){
//     return (x+y);
// }

// int main() {
    
//     int a;
//     int b;
//     cin>>a>>b;
//     cout<<adder(a,b);


//     return 0;
// }








// swap two numbers


// #include <iostream>

// using namespace std;




// int main() {
    
//     int a;
//     int b;
//     cin>>a>>b;
    
//     int temp = a;
//     a=b;
//     b=temp;

//     cout<<"value of a is "<<a<<endl;
//     cout<<"value of b is "<<b<<endl;


//     return 0;
// }





// #include <iostream>

// using namespace std;

//  void swap(int x , int y){
//       int temp = x;
//     x=y;
//     y=temp;
// }


// int main() {
    
//     int a;
//     int b;
//     cin>>a>>b;
    
//     swap(a,b);

//     cout<<"value of a is "<<a<<endl;
//     cout<<"value of b is "<<b<<endl;


//     return 0;
// }



#include <iostream>

using namespace std;

 void swap(int *x , int *y){
      int temp = *x;
    *x=*y;
    *y=temp;
}


int main() {
    
    int a;
    int b;
    cin>>a>>b;
    int * addressA=&a;
    int * addressB=&b;

    swap(&a,&b);

    cout<<"value of a  is "<<a<<endl;
    cout<<"value of b is "<<b<<endl;


    return 0;
}



// pointer and double pointer

// #include <iostream>

// using namespace std;


// int main() {
    
//     int a=42;
   
//    int *ptr=&a;
//    int **ptr2=&ptr;
 
//    cout<<"a is "<<a<<endl;

//    cout<<" &a is "<<&a<<endl;


//    cout<<"ptr is "<<ptr<<endl;


//    cout<<" *ptr is "<<*ptr<<endl;



//    cout<<" & ptr "<<&ptr<<endl;



   





//     return 0;
// }

















