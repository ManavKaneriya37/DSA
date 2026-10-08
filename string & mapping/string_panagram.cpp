#include <bits/stdc++.h>

using namespace std;

int main()
{

    // string str = "aabbccddeeffgghhiijjkkllmmnnooppqqrrssttuuvvwwxxyyzz"; 
    // string str = "thefiveboxingwizardsjumpquickly";
    string str = "abcdefghijklmnopqrstuvwxy";

    string alphabets = "abcdefghijklmnopqrstuvwxyz";

    for (char ch : str)
    {
        if (alphabets.find(ch) == string::npos)
        {
            cout << "FALSE" << endl;
            return 1;
        }
    }

    cout << "TRUE";

    return 0;
}