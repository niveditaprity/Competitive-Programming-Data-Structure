#include <iostream>
using namespace std;
void print(int n)
{
    if(n<0)
    {
        cout<<n<<" ";
    return;
    }
    cout<<n<<" ";
    print(n-5);
    cout<<n<<" ";
}

int main() {
	print(16);
	return 0;
}
