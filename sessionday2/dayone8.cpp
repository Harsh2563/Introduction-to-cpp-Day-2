

#include <bits/stdc++.h>

using namespace std;



int main() {
   
   // continous allocation of memory in form of array 

   // static allocation

   // memory and variables are deleted as soon as the moment 
   // function is returned back 


   // methods to allocate a static array 
   
   // Data_type  array_name[size_of_array];


int arr[100];


int num[5]={1,2,3,4,5};

int numeric[]={1,2,3,4,5,6,7};

int book[5]={};

int table[5]={1,2};


int loopy[10]={};
for (int i=0;i<10;i++){
    cin>>loopy[i];
}
    return 0;
}





// dynamic allocation of an array 

// #include <iostream>
// using namespace std;

// int main() {
//   int length;
  
//   cin >> length;

//   int * arr = new int[length];

//   for (int i = 0; i < length; i++) {
//     arr[i] = (i + 1) * 10;
//   }

//   for (int i = 0; i < length; i++) {
//     cout << arr[i] << " " << endl;
//   }

//   return 0;
// }


// sum of array 

// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cin>>x;
// int a[x];
//   for (int i=0;i<x;i++){
//     cin>>a[i];
//   }
// int pfx[x];
//  int sum=0;
//   for (int i=0;i<x;i++){
//     sum=sum+a[i];
   

//   }

// cout<<sum;

//   return 0;
// }


















// prefix sum array 

/*
build a prefix sum array 
 
 eg arr={1,2,3,4,5,6,7,8,9,10}

 here 
 subarr{1,3,6,10,15,21,28,36,45,55}





*/

//explain why n2 appraoch is bad














// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cin>>x;
// int a[x];
//   for (int i=0;i<x;i++){
//     cin>>a[i];
//   }
// int pfx[x];
//  int sum=0;
//   for (int i=0;i<x;i++){
//     sum=sum+a[i];
//     pfx[i]=sum;

//   }

//   for (int i=0;i<x;i++){
//     cout<<pfx[i]<<" ";
//   }

//   return 0;
// }

// //common mistakes
// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cin>>x;
// int a[x];
//   for (int i=0;i<x;i++){
//     cin>>a[i];
//   }
// int pfx[x];
//  int sum=0;
//   for (int i=0;i<x;i++){
//     pfx[i]=pfx[i-1]+ a[i];

//   }

//   for (int i=0;i<x;i++){
//     cout<<pfx[i]<<" ";
//   }


//   return 0;
// }


// //how to fix this
// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cin>>x;
// int a[x];
//   for (int i=0;i<x;i++){
//     cin>>a[i];
//   }
// int pfx[x];
// pfx[0]=a[0];
// //intialize 0th index
// // start loop from i=1
//   for (int i=1;i<x;i++){
//     pfx[i]=pfx[i-1]+ a[i];

//   }

//   for (int i=0;i<x;i++){
//     cout<<pfx[i]<<" ";
//   }


//   return 0;
// }







//stock buy sell 

/*
given prices of all the days output maximum profit


eg 
9
10,15,13,18,70,3,45,68,2

ans-> 65







*/


// #include <iostream>
// using namespace std;

// int main() {
// int x;
// cin>>x;
// int a[x];
// for (int i=0;i<x;i++){
//     cin>>a[i];
// }
// int maxp=INT_MIN;
// int curr_min=a[0];
// for (int i=0;i<x;i++){
//    curr_min=min(a[i],curr_min); 
// maxp=max(maxp,a[i]-curr_min);
// }
// cout<<maxp;
//   return 0;
// }

//peak element if time permits


// 11
// 10,15,110,45,35,36,17,13,15,11,9
//    110,45,36,17,15,11,9




// #include <iostream>
// using namespace std;

// int main() {
// int x;
// cin>>x;
// int a[x];
// for (int i=0;i<x;i++){
//     cin>>a[i];
// }


// for (int i=0;i<x;i++){

//    bool check=true;

//    for (int j=i+1;j<x;j++){


 
//     if (a[i]<a[j]){

//  check=false;

// break;
//     }

//    }

// if (check==true){
//   cout<<a[i]<<" ";
// }

// }

//   return 0;
// }






// #include <iostream>
// using namespace std;

// int main() {
// int x;
// cin>>x;
// int a[x];
// for (int i=0;i<x;i++){
//     cin>>a[i];
// }
// int maxi=INT_MIN;

// for (int i=x-1;i>=0;i--){
// if (a[i]>maxi){
//   maxi=a[i];
//   cout<<a[i]<<" ";
// }
// }

//   return 0;
// }





// #include <bits/stdc++.h>
// //change library
// using namespace std;

// int main() {
// int x;
// cin>>x;
// int a[x];
// for (int i=0;i<x;i++){
//     cin>>a[i];
// }
// int maxi=INT_MIN;
// vector <int> ret; 
// for (int i=x-1;i>=0;i--){
// if (a[i]>maxi){
//   maxi=a[i];
//   ret.push_back(a[i]);
  
// }
// }


// for (int i=ret.size()-1;i>=0;i--){

//   cout<<ret[i]<<" ";

// }

//   return 0;
// }







