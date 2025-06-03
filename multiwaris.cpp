#include <iostream>
using namespace std;

class pelajar {
public:
	int umur;

	orang(int pUmur) :
		umur(pUmur)
	{
		cout << "orang dibuat dengan umur " << umur << "\n" << endl;
	}
};

cclass pekerja : public orang {
public:

	pelajar(int pUmur) :
		orang(pUmur)
	{
		cout << "pelajar dibuat\n" << endl;
	}
};

class budi : public pekerja, public pelajar {
public:

	budi(int pUmur) :
		pekerja(pUmur)
		pelajar(pUmur)
        orang(Pumur)
	{
		cout << "Budi dibuat\n" << endl; // hal ini dapat dilakukan jika menggunkan virtual
	}
};

int main() {
	budi a(12);

	return 0;
}
