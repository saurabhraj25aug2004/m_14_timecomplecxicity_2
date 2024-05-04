#include<iostream>
using namespace std;
int main()
{
    int c = 0,n;
    for(int i = 0; i < n; i++) 
    {
         for(int j = 1; j * j < n; j *= 2) 
         {
            c++;
        }
    }
}
/*-----------------------------------OUTPUT-------------------
Calculate the time complexity for the following code snippet.
 the total number of iterations for the inner loop is roughly proportional to log(n). And since the inner loop is nested inside the outer loop, the overall time complexity is O(n * log(n)).

Thus, the time complexity of the given code snippet is O(n * log(n)).



*/