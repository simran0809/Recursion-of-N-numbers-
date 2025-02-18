
// Recursion :
// Recursion is a programming technique where a function calls another function with same function .

/*

Key Concepts :
- Base Case : The condition  under which the recursive function stops calling inside 
- Recursion Case : The part of the function where the recursion occurs .


*/


//Advantages :  1 Simplifies code for problems that have a natural recursive structure. 

/*

    1 base case / base condition 
    2 easiest work can be done 
    3 recursive call a function 

    //write a recursive function that takes an integer n as 
    // function parameter and print all the number from n to 1 .

    

*/

#include<iostream>
using namespace std ;

void PrintNumber(int n){
 
    // Base CASE 
    if(n==0){
        return;
    }

    // easiest task that this function cann perform 
    cout<<n<<"";

 // recursive call 


 PrintNumber(n-1);

 // call stack  ME FXN N 10 at bottom then fxn 9 till fxn 1.

 /*Corrected cout Statement:
 ✅ Changed cout << n << ""; to cout << x << " "; (adds space for readability).
 
 Fixed Base Case Condition:
 ✅ Used if (x == 0) return; to stop recursion when x reaches 0.
 
 Preserved Call Stack Order:
 ✅ The function correctly prints numbers from 10 down to 1 using recursion.
 
 */


}

int main(){


    PrintNumber(20); 

   return 0;
}



