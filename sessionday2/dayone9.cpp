// #include <iostream>
// using namespace std;

// int main() {
// string x;
// cin>>x;
// cout<<x<<endl;
// cout<<x[0]<<endl;
// string y;
// getline(cin,y);
// cout<<y;
//   return 0;
// }

//reverse a string

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// string str;
// cin>>str;

// reverse(str.begin(), str.end());

// cout<<str<<endl;

//   return 0;
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
string str;
cin>>str;
int l=str.length();
for (int i=0;i<(l/2);i++){
swap(str[i],str[l-1-i]);


}

cout<<str<<endl;

  return 0;
}