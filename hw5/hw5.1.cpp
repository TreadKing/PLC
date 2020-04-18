#include <string>
#include <iostream>
using namespace std;

typedef struct {
	string name;
	int quality;
} Anime;

typedef struct {
	string name;
	int quality;
} Meme;

Meme Simp, Microwave;
Anime Gundam, Violet;

int main() {
	Simp.name = "You are a simp";
	Simp.quality = 8;
	Violet.name = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
	Violet.quality = 8;

	//name equivalence ->
	Microwave = Simp;
	Gundam = Violet;
	cout << Microwave.name << "\n";
	cout << Gundam.name << "\n\n";

	//structural equivalence ->
	cout << Gundam.name;
}

