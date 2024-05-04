#include<iostream>
using namespace std;
int main()
{
    int n;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j * j < n; j++) {
            cout << "PhysicsWallah ";
        }
    }
}

/*------------------------OUTPUT------------------
Calculate the time complexity for the following code snippet.
Solution : 
O(n * sqrt(n))

*/