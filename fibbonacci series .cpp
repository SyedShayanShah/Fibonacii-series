#include <stdio.h> 
  
// Function to print first n Fibonacci Numbers 
void printFibonacciNumbers(int n) 
{ 
    int  i, f1 = 0, f2 = 1; 
  
    if (n < 1) 
        return; 
  
    for (i = 1; i <= n; i++) 
    { 
        printf("%d ", f2); 
        int next = f1 + f2; 
        f1 = f2; 
        f2 = next; 
    } 
} 
  
// Driver Code 
int main() 
{ 
    printFibonacciNumbers(8); 
    return 0; 
} 
