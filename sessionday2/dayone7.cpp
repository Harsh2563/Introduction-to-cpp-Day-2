// #include <iostream>

// using namespace std;

// int main() {
//     // for loop
//     cout << "For Loop:" << endl;
//     for (int i = 1; i <= 5; i++) {
//         cout << i << " ";
//     }
//     cout << endl;

//     // while loop
//     cout << "While Loop:" << endl;
//     int j = 1;
//     while (j <= 5) {
//         cout << j << " ";
//         j++;
//     }
//     cout << endl;

//     // do-while loop
//     cout << "Do-While Loop:" << endl;
//     int k = 1;
//     do {
//         cout << k << " ";
//         k++;
//     } while (k <= 5);
//     cout << endl;

//     // range-based for loop
//     cout << "Range-Based For Loop:" << endl;
//     int arr[] = {1, 2, 3, 4, 5};
//     for (int value : arr) {
//         cout << value << " ";
//     }
//     cout << endl;

//     return 0;
// }

//question
#include <iostream>
using namespace std;


int main()
{   
    // Here, we have taken the value of N as 5.
    // We can also take input from the user.

    int N ;
    cin>>N; 


        int num =1;
      
      // Outer loop for the number of rows.
      for(int i=1;i<=N;i++){
          
          // Inner loop will loop for i times and
          // print numbers increasing by 1 each time.
          for(int j=1;j<=i;j++){
              cout<<num<<" ";
              num =num+1;
          }
          // As soon as the numbers for each iteration are printed, we move to the
          // next row and give a line break otherwise all numbers
          // would get printed in 1 line.
          cout<<endl;
          
      }
  
    return 0;
}


//prime number or not 

// #include <iostream>
// using namespace std;

// int main() {

//   int i, n;
//   bool is_prime = true;

//   cout << "Enter a positive integer: ";
//   cin >> n;

//   // 0 and 1 are not prime numbers
//   if (n == 0 || n == 1) {
//     is_prime = false;
//   }

//   // loop to check if n is prime
//   for (i = 2; i <= n/2; ++i) {
//     if (n % i == 0) {
//       is_prime = false;
//       break;
//     }
//   }

//   if (is_prime)
//     cout << n << " is a prime number";
//   else
//     cout << n << " is not a prime number";

//   return 0;
// }

//
// #include <iostream>

// using namespace std;

// int main() {
//     // Example of using the break statement
//     cout << "Example of using 'break':" << endl;
//     for (int i = 1; i <= 10; i++) {
//         if (i == 5) {
//             cout << "Breaking the loop at i = 5." << endl;
//             break;  // This exits the loop prematurely.
//         }
//         cout << "i = " << i << endl;
//     }

//     // Example of using the continue statement
//     cout << "Example of using 'continue':" << endl;
//     for (int j = 1; j <= 10; j++) {
//         if (j % 2 == 0) {
//             cout << "Skipping even number: " << j << endl;
//             continue;  // This skips the rest of the loop body for even numbers.
//         }
//         cout << "Odd number: " << j << endl;
//     }

//     return 0;
// }




