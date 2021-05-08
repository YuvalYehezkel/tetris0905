#include "Computer.h"


//  בודק את המקום שייצור הכי פחות רווחים
// צמוד לאחד הקירות בתור התחלה, לדאוג שלא יהיו רווחים בין הצורה לקיר
// פלוס- צורה 0
// זד בצורה 1
// זד הפוכה בצורה 3
// ליין מצב 0
// אל במצב 0
// אל הפוכה במצב 1
// ריבוע אותו מצב
void Computer::LessSpaces(general* f)
{
	Point* res;
	for (int i = ROWS; i > 0; i--)
	{
		for (int j = COLS + 2; j < 2 * COLS + 3; j++)
		{
			if (GameBoard.isValidPoint(j,i))
			{
				res = f->getBodyPos();//להחזיר מערך של נקודות
				if (GameBoard.isValidPoint(res->getX(), res->gety() + i))
				{
					updateFigureLeft(GameBoard, f->getSerial());
				}
				
			}
		}
	}
}

char Computer::ChooseComputerLevel()
{
	char key_char = 0;
	gotoxy(30, 9);
	cout << "Hi! please enter the level of the computer:" << endl;
	gotoxy(30, 10);
	cout << "for the BEST level press (1)" << endl;
	gotoxy(30, 11);
	cout << "for the GOOD level press (2)" << endl;
	gotoxy(30, 12);
	cout << "for the NOVICE level press (3)" << endl;
	while (1)
	{
		if (_kbhit())
		{
			key_char = _getch();
			return key_char;
		}
	}
}

