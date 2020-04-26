#include<iostream>

#include<string>

#include<stdlib.h>

using namespace std;

enum TempLevel {
  Low = 15, Medium = 30, High = 45
};

enum TempConverter {
  Celsius = 1, Fahrenheit
};

void TempLevel(int convertedValue);

int main()

{

  while (true)

  {

    TempConverter Converter;

    int userInput, choice, convertedValue;

    cout << "******************************************************************************" << endl;

    cout << "What do you want to do today?" << endl;

    cout << "Convert to Fahrenheight Press -> " << Celsius << " <- and press enter" << endl;

    cout << "Convert to Celsius Press -> " << Fahrenheit << " <- and press enter" << endl;

    cout << "Choice :";

    cin >> choice;

    switch (choice)

    {

    case Celsius:

      cout << "Enter your celcius value: ";

      cin >> userInput;

      convertedValue = (userInput * 9 / 5) + 32;

      cout << "Fahrenheit: " << convertedValue << endl;

      TempLevel(userInput);

      break;

    case Fahrenheit:

      cout << "Please enter the Fahrenheit value : ";

      cin >> userInput;

      convertedValue = (userInput - 32) * 5 / 9;

      cout << "Celsius is " << convertedValue << endl;

      TempLevel(convertedValue);

      break;

    default:

      cout << "Invalid Option" << endl;

      exit(0);

      break;

    }

  }

}

void TempLevel(int convertedValue)

{

  string result;

  convertedValue <= Low ? result = "That is cold OwO" : "";

  convertedValue > Low && convertedValue <= Medium ? result = "That is comfy uwu " : "";

  convertedValue > Medium && convertedValue <= High ? result = "That is hot >w<" : "";

  convertedValue > High ? result = "That is very hot ✧w✧" : "";

  cout << result << endl;

}