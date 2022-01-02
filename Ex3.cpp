// Ex3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
using namespace std;

class Personne
{
public:
	Personne(string n,string a,string nt) {
		nom = n;
		adresse = a;
		num_tel = nt;
	};
	//~Personne();
	void afficher_adresse()
	{
		cout << adresse << endl;
	};
	void afficher_numTel()
	{
		cout << num_tel << endl;
	};
	void afficher()
	{

		cout << "Nom: " << nom << endl;
		cout << "Numero Telephone: " << num_tel << endl;
		cout << "Adresse: " << adresse << endl;
	};
private:
	string nom, adresse;
	string num_tel;
};

int main()
{
    unordered_multimap <string,Personne*> map;
	map.insert({ "omar" ,new Personne("omar", "louiziya", "0611411488") });
	map.insert({ "mohamed" ,new Personne("mohamed", "bernoussi", "0600000000") });
	map.insert({ "rida" ,new Personne("rida", "bernoussi", "0600000000") });
	map.insert({ "hiba" ,new Personne("hiba", "bernoussi", "0600000000") });
	map.insert({ "fouad" ,new Personne("fouad", "bernoussi", "0600000000") });
	map.insert({ "salma" ,new Personne("salma", "bernoussi", "0600000000") });
	map.insert({ "wissal" ,new Personne("wissal", "bernoussi", "0600000000") });
	auto i = map.find("omar");
	i->second->afficher();
	pair<string, Personne*> p;
	/*for (auto i : map)
		for (auto j : map)
			if (i.first < j.first) {
				p = make_pair(i.first, i.second);
				map.emplace();
			}
				//swap(i,j);
				//i->swap(j);
				*/
	for (auto i : map)
		i.second->afficher();
	
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
