// Question 3 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int data[10];
//
//	for (int i = 9; i >= 0; i--)
//	{
//		data[i] = i;
//		cout << data[i] << endl;
//	}
//
//	system("pause");
//}
// Question 3 //

// Question 4 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int data[5];
//
//	for (int i = 0; i <= 4; i++)
//	{
//		cin >> data[i];
//	}
//
//	for (int i = 4; i >= 0; i--)
//	{
//		cout << data[i];
//	}
//
//	system("pause");
//}
// Question 4 //

// Question 5 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int numbers[10];
//	int large = -1;
//	int small = 99999999;
//
//	for (int i = 0; i < 10; i++)
//	{
//		if (numbers[i] < small)
//		{
//			small = numbers[i];
//		}
//
//		if (numbers[i] > large)
//		{
//			large = numbers[i];
//		}
//
//	}
//}
// Question 5 //

// Question 6 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int myArray[3][3] 
//	{ 
//		{1,2,3},
//		{1,2,3},
//		{1,2,3}
//	};
//
//	for (int row = 0; row < 3; ++row)
//	{
//		for (int col = 0; col < 3; ++col)
//		{
//			myArray[row][col];
//			cout << myArray[row][col];
//		}
//	}
//
//	system("pause");
//}
// Question 6 //

// Question 7 A-C //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int myArray[5][5] 
//	{ 
//		{3,3,3,3,3},
//		{4,4,4,4,4},
//		{5,5,5,5,5},
//		{6,6,6,6,6},
//		{6,6,6,6,6}
//	};
//
//	for (int row = 0; row < 5; ++row)
//	{
//		int resultRow = 0;
//		int resultCol = 0;
//
//		for (int col = 0; col < 5; ++col)
//		{
//			resultRow = resultRow + myArray[row][col];
//			resultCol = resultCol + myArray[row][col];
//		}
//
//		cout << "Row: " << resultRow << endl;
//		cout << "Col: " << resultCol << endl;
//	}
//
//	system("pause");
//}
// Question 7 A-C //

// Question 8 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int attacks = 0;
//	int playerHealth[5] = { 100,100,100,100,100 };
//	int playerNumber = 0;
//
//	while (attacks < 4)
//	{
//		while (playerNumber == 0)
//		{
//			cout << "Please select a player between 0-4: ";
//			cin >> playerNumber;
//
//			if (playerNumber > 4 || playerNumber < 0)
//			{
//				playerNumber = 0;
//			}
//		}
//
//		if (playerHealth > 0)
//		{
//			playerHealth[playerNumber] = playerHealth[playerNumber] - 40;
//		}
//
//		attacks = attacks + 1;
//		playerNumber = 0;
//	}
//
//	for (int i = 0; i < 5; i++)
//	{
//		cout << playerHealth[i] << endl;
//	}
//
//	system("pause");
//}
// Question 8 //

// Question 9 //
//#include <iostream>
//using namespace std;
//
//void main()
//{
//	// Vars
//	int AverageFoodAll = 0;
//	int AverageFoodSingle = 0;
//	int MostFoodEatenBy = 0;
//	int MostFoodEaten = 0;
//	int LeastFoodEatenBy = 0;
//	int LeastFoodEaten = 0;
//	int input;
//
//	int myArray[3][7]
//	{ 
//		{ 2,2,2,8,3,3,3 },
//		{ 4,4,4,4,4,4,4 },
//		{ 5,5,5,5,5,5,5 },
//	};
//
//	// Average total
//	cout << "Please select a dragon from 0-2: ";
//	cin >> input;
//	cout << "The Average amount of food per day by all dragons is: ";
//
//	for (int i = 0; i < 3; i++)
//	{	
//		for (int j = 0; j < 7; j++)
//		{
//			AverageFoodAll = AverageFoodAll + myArray[i][j];
//		}
//	}
//
//	AverageFoodAll = AverageFoodAll / (7 * 3);
//	cout << AverageFoodAll << endl;
//
//	// Average Single
//	cout << "The Average amount of food for dragon ";
//
//	for (int j = 0; j < 7; j++)
//	{
//		AverageFoodSingle = AverageFoodSingle + myArray[input][j];
//	}
//
//	cout << input;
//	cout << " is ";
//	AverageFoodSingle = AverageFoodSingle / 7;
//	cout << AverageFoodSingle << endl;
//
//	// Most Food Eaten
//	cout << "The most eaten this week was: ";
//
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (myArray[i][j] > MostFoodEaten)
//			{
//				MostFoodEaten = myArray[i][j];
//				MostFoodEatenBy = i;
//			}
//		}
//	}
//
//	cout << MostFoodEaten;
//	cout << " By: ";
//	cout << MostFoodEatenBy << endl;
//
//	// least Food Eaten
//	cout << "The least eaten this week was: ";
//	LeastFoodEaten = MostFoodEaten;
//	
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 7; j++)
//		{
//			if (myArray[i][j] < LeastFoodEaten)
//			{
//				LeastFoodEaten = myArray[i][j];
//				LeastFoodEatenBy = i;
//			}
//		}
//	}
//
//	cout << LeastFoodEaten;
//	cout << " By: ";
//	cout << LeastFoodEatenBy << endl;
//
//	system("pause");
//}
// Question 9 //