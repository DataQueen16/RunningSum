#include <iostream>
#include <string>

using namespace std;

int main()
{
    int input;
    input=1;
    int sum=0;

    cout << "Hello there!" << endl;
    cout << "Please enter a series of numbers and I will add them for you!: " << endl;
    cin >> input;

    if(input!=0)
        {
            int x=0;
        for(x=0;x>0;x++)
        sum+=input;
        cout << "Please enter your next number: " << endl;
        cin >> input;
        }
    else
        {
        cout << "Your total is " << + sum << endl;
        }
}
