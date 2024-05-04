#include<iostream>
using namespace std;
int main()
{
    int c = 0,n;
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < n; j *= 2) {
         c++;
        }
    }
}
/*-----------------------------OUTPUT-------------------------
Calculate the time complexity for the following code snippet
O(n log n) as the first loop ‘i’ will be iterated n times and the inner loop 
will only traverse logn times so in total the overall time complexity becomes 
O(nlogn).

*/