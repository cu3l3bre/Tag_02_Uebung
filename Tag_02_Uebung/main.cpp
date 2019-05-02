#include <iostream>
#include <string>

// geht beides fuer ein ° Symbol 
//#define GradSymbol char(248)
#define GradSymbol "\xF8"


using namespace std;


void EinAusgabe();
void Taschenrechner();

int main()
{
	int Auswahl = 0;
	cout << "Was soll gemacht werden?" << endl;
	cout << "1) fuer EinAusgabe" << endl;
	cout << "2) fuer Taschenrechner" << endl;
	cout << "Alles Andere fuehrt zum Abbruch" << endl;
	cin >> Auswahl;

	if (Auswahl == 1)
	{
		EinAusgabe();
	}
	else if(Auswahl == 2)
	{
		Taschenrechner();
	}
	else
	{
		// Nichts machen
	}

	system("pause");
	return 0;
}




// Uebung 1
void EinAusgabe()
{

	// 1. Einlesen eines Benutzernamnes und Begrüßung des Benutzers

	string Benutzername = "";
	string satz = "";

	cout << "Bitte gib deinen Benutzernamen ein: ";
	cin >> Benutzername;

	satz = "Hallo " + Benutzername + " wie geht es dir heute?";

	cout << "Hallo " << Benutzername << " wie geht es dir heute?" << endl;
	cout << satz << endl;
	cout << "Hallo " + Benutzername + " wie geht es dir heute?" << endl;

	// 2. Zahl in °C einlesen und in °F umrechnen und wieder ausgeben

	int TempCelsius = 0;
	float TempFahrenheit = 0;

	cout << Benutzername << ", bitte gib eine " << GradSymbol << "C Temperatur ein, die ich in " << GradSymbol << "F umrechne!: ";
	cin >> TempCelsius;

	// allg. Formal F = C * 1,8 + 32;
	TempFahrenheit = (TempCelsius * 1.8) + 32;
	//TempFahrenheit = (TempCelsius * (9.0/5)) + 32;	// hier wird automatisch gecastet, int wird zu double
	cout << "Die Temperatur " << TempCelsius << GradSymbol << "C entspricht " << TempFahrenheit << GradSymbol << "F" << endl;


	// 3. 4 Chars einlesen, umdrehen, ausgeben // Optional: die 4 Chars in ein String schreiben

	const int AnzahlZeichen = 4;
	char Zeichen[AnzahlZeichen] = {'0'};
	string KetteNormal = "Init";
	string KetteReversed = "";


	// geht auch so 
	// cin >> Zeichen[1] >> Zeichen[2] >> Zeichen[3] >> Zeichen[4]

	cout << "Folgend sollen " << AnzahlZeichen << " Zeichen nacheinander eingeben werden" << endl;

	for (int i = 0; i < AnzahlZeichen ; i++)
	{
		cout << "Geben Sie das " << i+1 << ". Zeichen ein: ";
		cin >> Zeichen[i];
		KetteNormal[i] = Zeichen[i];
	}

	cout << endl;

	cout << "Die umgekehrte Reihenfolge lautet" << endl;
	for (int j = AnzahlZeichen-1; j>=0 ; j--)
	{
		cout << Zeichen[j] << endl;
	}

	cout << endl;
	
	KetteReversed = KetteNormal;
	reverse(KetteReversed.begin(), KetteReversed.end());

	cout << "Normale Reihenfolge als string:  " << KetteNormal << endl;
	cout << "Gedrehte Reihenfolge als string: " << KetteReversed << endl;
	cout << endl;
}


// Uebung 2 
void Taschenrechner()
{
	//int Zahl[2] = {0};
	//int ErgbnisAdd = 0;
	//int ErgbnisSub = 0;
	//int ErgbnisMul = 0;
	//int ErgbnisDiv = 0;
	//int Ergbnis = 0;

	float Zahl[2] = {0};
	float ErgbnisAdd = 0.0;
	float ErgbnisSub = 0.0;
	float ErgbnisMul = 0.0;
	float ErgbnisDiv = 0.0;
	float Ergbnis = 0.0;

	cout << "Geben Sie zwei Zahlen ein: " << endl;

	for(int i = 0; i < 2; i++)
	{
		cout << "Geben Sie die " << i + 1 << ". Zahl ein" << endl;
		cin >> Zahl[i];
	}


	// Addition
	ErgbnisAdd	= Zahl[0] + Zahl[1];
	Ergbnis		= Zahl[0] + Zahl[1];
	cout << "a) Das Ergbnis der Addition lautet:       " << ErgbnisAdd			<< endl;	// a
	cout << "b) Das Ergbnis der Addition lautet:       " << Ergbnis				<< endl;	// b
	cout << "c) Das Ergbnis der Addition lautet:       " << Zahl[0] + Zahl[1]	<< endl;	// c

	// Subtraktion
	ErgbnisSub	= Zahl[0] - Zahl[1];
	Ergbnis		= Zahl[0] - Zahl[1];
	cout << "a) Das Ergbnis der Subtraktion lautet:    " << ErgbnisSub			<< endl;	// a
	cout << "b) Das Ergbnis der Subtraktion lautet:    " << Ergbnis				<< endl;	// b
	cout << "c) Das Ergbnis der Subtraktion lautet:    " << Zahl[0] - Zahl[1]	<< endl;	// c

	// Mulitplikation
	ErgbnisMul	= Zahl[0] * Zahl[1];
	Ergbnis		= Zahl[0] * Zahl[1];
	cout << "a) Das Ergbnis der Mulitplikation lautet: " << ErgbnisMul			<< endl;	// a
	cout << "b) Das Ergbnis der Mulitplikation lautet: " << Ergbnis				<< endl;	// b
	cout << "c) Das Ergbnis der Mulitplikation lautet: " << Zahl[0] * Zahl[1]	<< endl;	// c

	// Division
	ErgbnisDiv	= Zahl[0] / Zahl[1];
	Ergbnis		= Zahl[0] / Zahl[1];
	cout << "a) Das Ergbnis der Division lautet:       " << ErgbnisDiv			<< endl;	// a
	cout << "b) Das Ergbnis der Division lautet:       " << Ergbnis				<< endl;	// b
	cout << "c) Das Ergbnis der Division lautet:       " << Zahl[0] / Zahl[1]	<< endl;	// c
	//cout << "5) Der Rest der Division ist:             " << Zahl[0] % Zahl[1]	<< endl;	// 5)





}


