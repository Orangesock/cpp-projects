#include <iostream>
#include <string>
using namespace std;

void makeBox(int n);

int main ()
{
    int boxSize;
    cout << endl << "Enter a box size: ";
    cin >> boxSize;     //Enter the size of the box
    makeBox(boxSize);
    return 0;
}

void makeBox(int n)
{
    if (n == 1)     //Box of size of one
    {
        cout << "#";
    }
    else
    {
        for (int i = 0; i < n; i++)     //First line
        {
            cout << "#";
        }

        cout << endl;

        for (int i = 0; i < n-2; i++)
        {
            for (int k = 1; k <= n; k++)    //Middle lines
            {
                if (k == 1)
                {
                    cout << "#";
                }
                else if (k == n)
                {
                    cout << "#";
                }
                else
                {
                    cout << " ";
                }
            }

        cout << endl;
        
        }

        for (int i = 0; i < n; i++)     //Last line
        {
            cout << "#";
        }

        cout << endl;
}
}