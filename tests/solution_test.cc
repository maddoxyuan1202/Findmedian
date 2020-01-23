#include "src/lib/solution.h"
#include "gtest/gtest.h"
using namespace std; 

TEST(FindmeidanTest, HandlesConsecutiveNumbers) {
  Solution solution;
  int a[] = {1, 2, 3, 4};
  int n = sizeof(a)/sizeof(a[0]); 
  EXPECT_EQ(solution.findMedian(a, n), 2.5);
  
}

TEST(FindmedianTest, HandlesConsecutiveNumbersOddLength) {
  Solution solution;
  int a[] = {1, 2, 3, 4, -1};
  int n = sizeof(a)/sizeof(a[0]); 
  EXPECT_EQ(solution.findMedian(a,n), 2);
}

TEST(FindmedianTest, HandlesSizeOne) {
  Solution solution;
  int a[] = {1};
  int n = sizeof(a)/sizeof(a[0]); 
  EXPECT_EQ(solution.findMedian(a, n), 1);
}
