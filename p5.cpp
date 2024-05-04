#include<iostream>
using namespace std;
int main()
{
    int c = 0,n;
    for(int i = 1; i < n; i*=2) {
        for(int j = n; j > i; j--) {
            c++;
         }
    }
}
/*-------------------------------OUTPUT------------------
Calculate the time complexity for the following code snippet
Lets us calculate the number of iterations in the above nested loop here, we get
Values of ‘i’ will be 1,2,4,8, 2^k
So the total number of iterations will be
(n-1) + (n-2) + (n-4) + .. + (n-2^k)
This sum becomes n*k - (1+2+4+ .. + 2^k)
Which becomes n*k - (2^(k+1)),here k =logN base 2
Here k is number of terms which is O(NlogN)

*/