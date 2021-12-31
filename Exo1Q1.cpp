// Exo1Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <list>
using namespace std;


int main()
{
    deque <string> container;
    list <string> ourList;
    int nbr;
    string temp;
    cout << "enter le nombre de mots a entrer: ";
    cin >> nbr;
    for (int i = 0; i < nbr; i++) {
        cin >> temp;
        container.push_back(temp);
    }

    /*for (auto i : container) {
        ourList.push_back(i);
    }*/
    ourList.resize(container.size());
    copy(container.begin(), container.end(),ourList.begin());
    ourList.sort();
    cout << "------------------------------------------------" << endl;
    for (auto i : ourList){
        cout << i << endl;
    }
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
