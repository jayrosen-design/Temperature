//************************************************************
// Jay Rosen
// This program determines if a given temperature will freeze or boil a sample of elements and compounds.
//************************************************************

#include <iostream>
using namespace std;
int main()
{
	int Temp;																				//Assign integer variable to Temp (Temperature).

	cout << "\n   This program will determine the freezing and boiling points of";			//Line 1: Display purpose of program.
	cout << "\n   ethyl alcohol, mercury, oxygen, and water.\n";							//Line 2: Display all the possible variables.
	cout << "\n   Type any number as the temperature and press Enter to see results : ";	//Line 3: Prompt user to type a number and press Enter.

	cin >> Temp;																			//Input function, user assigns value for Temp. 


	if (Temp <= -173)																		//Determine if input temperature is less than or equal to the freezing point of Ethyl alcohol. If the statement is false, the next line is skipped.
		cout << "\n     Ethyl alcohol will FREEZE\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the freezing point threshold of input temperature. 

	if (Temp >= 172)																		//Determine if input temperature is less than or equal to the boiling point of Ethyl alcohol. If the statement is false, the next line is skipped.
		cout << "\n     Ethyl alcohol will  BOIL\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the boiling point threshold of input temperature. 

	if (Temp <= -38)																		//Determine if input temperature is less than or equal to the freezing point of Mercury. If the statement is false, the next line is skipped.
		cout << "\n     Mercury       will FREEZE\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the freezing point threshold of input temperature. 	

	if (Temp >= 676)																		//Determine if input temperature is less than or equal to the boiling point of Mercury. If the statement is false, the next line is skipped.
		cout << "\n     Mercury       will  BOIL\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the boiling point threshold of input temperature.

	if (Temp <= -362)																		//Determine if input temperature is less than or equal to the freezing point of Oxygen. If the statement is false, the next line is skipped.
		cout << "\n     Oxygen        will FREEZE\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the freezing point threshold of input temperature.

	if (Temp >= -306)																		//Determine if input temperature is less than or equal to the boiling point of Oxygen. If the statement is false, the next line is skipped.
		cout << "\n     Oxygen        will  BOIL\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the boiling point threshold of input temperature.

	if (Temp <= 32)																			//Determine if input temperature is less than or equal to the freezing point of Water. If the statement is false, the next line is skipped.
		cout << "\n     Water         will FREEZE\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the freezing point threshold of input temperature.

	if (Temp >= 212)																		//Determine if input temperature is less than or equal to the boiling point of Water. If the statement is false, the next line is skipped.
		cout << "\n     Water         will  BOIL\n\a";										//If the above statement is true, the quoted message will display on screen, followed by a beep, to confirm the boiling point threshold of input temperature.

	cout << "                                ...at  " << Temp << " degrees Fahrenheit.\n";	//Display once again the temperature in Fahrenheit that the user input at the beginning  to complete the statements shown.

	system("pause");
	return 0;
}