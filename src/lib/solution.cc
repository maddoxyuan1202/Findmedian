#include "solution.h"
#include <iostream>
using namespace std; 

double Solution::findMedian(int a[], int n) 
{   
    if (sizeof( a[0] )== 0) {
    return -1;
  }
    sort(a, a+n); 
    if (n % 2 != 0) 
       return (double)a[n/2]; 
      
    return (double)(a[(n-1)/2] + a[n/2])/2.0; 
} 


