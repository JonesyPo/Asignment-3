//

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	// Variable Declarations
	double finalTotalCostNoVeh, sumAfterQ1, sumAfterQ2, sumAfterQ3;
	double numberOfAdults = 0, numberOfSeniors = 0, numberOfYouth = 0, numberOfBicy = 0;
	double vehLength = 0;
	char response;
	const double seniorFare = 6.45, adultFare = 12.95, youthFare = 6.45, bikeFare = 2.00;
	const double vehUndr14Drv = 36.05, vehUnder14Senior = 29.55;
	const double vehUndr22Drv = 45.00, vehUndr22Senior = 38.50;
	const double vehU14Ovr76Height = 35.80, vehU22Ovr76Height = 44.75;
	const double vehU30Ovr76Height = 138.95, vehU300UndrHeight = 69.60;
	const double veh30To40 = 185.95, veh40To50 = 232.95;

	cout << "Welcome to Stephen's Fare Calculator" << endl;
	cout << "Are you driving a vehicle onto the ferry? (y/n) : ";
	cin >> response;
	if (response == 'y') // For Vehicle
	{
		cout << "Is the Driver a senior citizen (65 or over) or disabled? (y/n) : ";
		cin >> response;
		if (response == 'y')  // For when the driver is a senior
		{
			sumAfterQ1 = (numberOfAdults * adultFare) + (numberOfSeniors * seniorFare) + (numberOfYouth * youthFare);
			cout << "How many passangers in your vehicle? (excluding the driver)" << endl;
			cout << "Adults (age 19 - 64): ";
			cin >> numberOfAdults;
			cout << "Senior Citizens (65 or older), or Disabled Persons: ";
			cin >> numberOfSeniors;
			cout << "Youth (5 - 18 years old): ";
			cin >> numberOfYouth;
			cout << "Is your vehicle over 7 feet, 6 inches in height? (y/s) : ";
			cin >> response;
			if (response == 'y') // For when vehicle is over 7 feet 6 inches
			{
				cout << "How long is the vehicle in feet? ";
				cin >> vehLength;
				if (vehLength < 14)
				{
					sumAfterQ2 = vehU14Ovr76Height + sumAfterQ1 + vehUnder14Senior;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cout << "how many people in your group are travelling with a bicycle? ";
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 14 && vehLength < 22)
				{
					sumAfterQ2 = vehU22Ovr76Height + sumAfterQ1 + vehUndr22Senior;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 22 && vehLength < 30) // for when lenght is between 22 and 30 and heigh is over76
				{
					sumAfterQ2 = sumAfterQ1 + vehU30Ovr76Height;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cout << "how many people in your group are travelling with a bicycle? ";
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 30 && vehLength < 40)
				{
					sumAfterQ2 = sumAfterQ1 + veh30To40;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 40 && vehLength < 50)
				{
					sumAfterQ2 = sumAfterQ1 + veh40To50;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 50)
				{
					cout << "The length of your vehicle does not allow for you to use the ferry";
					return 0;
				}
				else // for when your vehicle is under 7 feet 6 inches
				{
					cout << "How long is the vehicle in feet? ";
					cin >> vehLength;
					if (vehLength < 14)
					{
						sumAfterQ2 = vehUnder14Senior + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator.";
					}
					else if (vehLength >= 14 && vehLength < 22)
					{
						sumAfterQ2 = vehUndr22Senior + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 22 && vehLength < 30)
					{
						sumAfterQ2 = vehU300UndrHeight + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 30 && vehLength < 40)
					{
						sumAfterQ2 = veh30To40 + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 40 && vehLength < 50)
					{
						sumAfterQ2 = veh40To50 + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else
					{
						cout << "The length of your vehicle does not allow for you to use the ferry";
					}
				}
			}

		}
		else // When driver is not a senior
		{
			sumAfterQ1 = (numberOfAdults * adultFare) + (numberOfSeniors * seniorFare) + (numberOfYouth * youthFare);
			cout << "How many passangers in your vehicle? (excluding the driver)" << endl;
			cout << "Adults (age 19 - 64): ";
			cin >> numberOfAdults;
			cout << "Senior Citizens (65 or older), or Disabled Persons: ";
			cin >> numberOfSeniors;
			cout << "Youth (5 - 18 years old): ";
			cin >> numberOfYouth;
			cout << "Is your vehicle over 7 feet, 6 inches in height? (y/s) : ";
			cin >> response;
			if (response == 'y') // For when vehicle is over 7 feet 6 inches
			{
				cout << "How long is the vehicle in feet? ";
				cin >> vehLength;
				if (vehLength < 14)
				{
					sumAfterQ2 = vehU14Ovr76Height + sumAfterQ1;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cout << "how many people in your group are travelling with a bicycle? ";
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 14 && vehLength < 22)
				{
					sumAfterQ2 = vehU22Ovr76Height + sumAfterQ1;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 22 && vehLength < 30) // for when lenght is between 22 and 30 and heigh is over76
				{
					sumAfterQ2 = sumAfterQ1 + veh30To40;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cout << "how many people in your group are travelling with a bicycle? ";
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 30 && vehLength < 40)
				{
					sumAfterQ2 = sumAfterQ1 + veh30To40;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 40 && vehLength < 50)
				{
					sumAfterQ2 = sumAfterQ1 + veh40To50;
					sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
					cin >> numberOfBicy;
					cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
					cout << "Thanks for using Stephen's Calculator." << endl;
				}
				else if (vehLength >= 50)
				{
					cout << "The length of your vehicle does not allow for you to use the ferry";
					return 0;
				}
				else // for when your vehicle is under 7 feet 6 inches
				{
					cout << "How long is the vehicle in feet? ";
					cin >> vehLength;
					if (vehLength < 14)
					{
						sumAfterQ2 = vehUndr14Drv + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator.";
					}
					else if (vehLength >= 14 && vehLength < 22)
					{
						sumAfterQ2 = vehUndr22Drv + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 22 && vehLength < 30)
					{
						sumAfterQ2 = vehU300UndrHeight + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 30 && vehLength < 40)
					{
						sumAfterQ2 = veh30To40 + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else if (vehLength >= 40 && vehLength < 50)
					{
						sumAfterQ2 = veh40To50 + sumAfterQ1;
						sumAfterQ3 = sumAfterQ2 + (numberOfBicy * bikeFare);
						cout << "how many people in your group are travelling with a bicycle? ";
						cin >> numberOfBicy;
						cout << endl << "Your total fare is $" << sumAfterQ3 << endl;
						cout << "Thanks for using Stephen's Calculator." << endl;
					}
					else
					{
						cout << "The length of your vehicle does not allow for you to use the ferry";
					}
				}
			}
			else
			{

			}
		}
	}
		else // For when there is no vehicle.
		{
		sumAfterQ1 = (numberOfAdults * adultFare) + (numberOfSeniors * seniorFare) + (numberOfYouth * youthFare);
		sumAfterQ2 = sumAfterQ1 + (numberOfBicy * bikeFare);
		cout << "How many adults (age 19 - 64) : ";
		cin >> numberOfAdults;
		cout << "How many senior citizens (65 or older), or disabled persons in your group? ";
		cin >> numberOfSeniors;
		cout << "How many youth (15 - 18) in your group? " << endl;
		cin >> numberOfYouth;
		cout << "How many people in your group are traveling with a bicycle? ";
		cin >> numberOfBicy;
		cout << endl << "Your total fare is $" << sumAfterQ2 << endl;
		cout << "Thank you for using Stephen's Calculator" << endl;
		}
	return 0;
}