#include "src/lib/solution.h"
#include <iostream>
using namespace std; 

int main() {
  Solution solution;
    int a[] = {1, 4 ,5 , 6, 7, 8, 9}; 
    int n = sizeof(a)/sizeof(a[0]); 
    cout << "Median = " << solution.findMedian(a, n) << endl;  
    return 0; 
}
