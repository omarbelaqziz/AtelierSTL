// Ex1Q2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
    stack <char> pile;
    int length,length2=0,index2=0;
    string chaine, chaine_trans;
    bool res = true;
    cout << "entrer la chaine : ";
    getline(cin, chaine);
    length = chaine.length();
    
    
    chaine_trans.resize(length);
    for (int index1 = 0; index1 < length; index1++)
    {
        if (chaine.at(index1) != ' ') {
            length2++;
            chaine_trans[index2++] = tolower(chaine[index1]);
        }
    }
    chaine_trans.resize(length2);
    int i;
    for (i = 0; i <length2/2; i++){
        pile.push(chaine_trans[i]);
    }
    if (length2 % 2 == 1)
        i++;

    for (int j = i; j < length2; j++){
        if (chaine_trans[j] != pile.top()) {
            res = false;
            break;
        }
        pile.pop();
    }
    if (res)
        cout << " la phrase est palindrome " << endl;
    else cout << " la phrase n'est pas palindrome " << endl;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
