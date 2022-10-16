#include <iostream>

using namespace std;

int main()
{
    long i,j,y,n;
	cin >> n;
    for (i=1; i<=n; i++)
    {
        y=0;
        for (j=1; j<=i; j++)
        {
            if (i%j==0)
            {
                y++;
            }
        }
        if (y==2)
            cout<<i<< " ";
    }
    return 0;
}
