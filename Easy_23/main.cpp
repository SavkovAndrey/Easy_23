#include <iostream>
#include <time.h>

using namespace std;
//---------------------Функции и Прототипы---------------------------------------

float RF(float min, float max, int pr);
float SA(float mas[], int size);


//------------------------MAIN----------------------------------------------------
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	//-------------------------------САМА ПРОГА-------------------------------------

	int size;

	cout << "Введите размер массива: ";
	cin >> size;

	float* mas = new float[size];

	for (int i = 0; i < size; i++)
	{
		mas[i] = RF(1, 10 , 2);

		cout << mas[i] << "  ";
	}
	cout << endl;

	cout << "Среднее арифметическое массива равно:  " <<  SA(mas, size) << endl << endl;


	delete[] mas;

	system("pause");

	return 0;
}

float SA(float mas[], int size)
{
	float sum = 0, SrAr;

	for (int i = 0; i < size; i++)
	{
		sum += mas[i];
	}

	SrAr = sum / size;

	return SrAr;
}

float RF(float min, float max, int pr)
{
	float value;
	value = rand() % (int)pow(10, pr);
	value = min + (value / pow(10, pr)) * (max - min);
	return value;
}