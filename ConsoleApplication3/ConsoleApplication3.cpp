
#include <iostream>
using namespace std;

// --- Завдання 1 ---
void IsLeap(int y, int& result) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) result = 1;
    else result = 0;
}

void DateDiff(int d1, int m1, int y1, int d2, int m2, int y2)
{

    //int res1, res2;

    // Спрощений підрахунок днів
    int days1 = d1 + y1 * 365;//+ y1 / 4 - y1 / 100 + y1 / 400;
    int months1[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    //if (res1 == 1) months1[2] = 29;
    for (int i = 1; i < m1; i++) days1 += months1[i];

    int days2 = d2 + y2 * 365;// + y2 / 4 - y2 / 100 + y2 / 400;
    int months2[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   //if (res2 == 1) months2[2] = 29;
    for (int i = 1; i < m2; i++) days2 += months2[i];

    int finalDiff = days1 - days2;
    if (finalDiff < 0) finalDiff *= -1;
    cout << "Riznytsia v dnyakh: " << finalDiff << endl;
}

void Average(int arr[], int size)
{
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    if (size > 0) {
        double avg = sum / size;
        cout << "Serednye aryfmetychne elementiv masyvu: " << avg << endl;
    }
    else {
        cout << "Masyv porozhniy!" << endl;
    }
}


void kilkist(int arr[], int size)
{
    int minus = 0;
    int plus = 0;
    int zero = 0;
    int sum = 0;
      for (int i = 0; i < size; i++)
        {
          if (i < 0)
          {
              minus += 1;
          }
          if (i > 0)
          {
              plus += 1;
          }
          else
          {
              zero += 1;
          }
          sum = minus + plus + zero;
        }
     cout << "minusovi = " << minus << " plusovi = " << plus << " zerovi = " << zero <<endl ;
}

int main()
{
    // Запуск Завдання 1
    DateDiff(1, 1, 2001, 2, 2, 2001);

    // Запуск Завдання 2
    int myNumbers[] = { 2,2 };

    // Розраховуємо кількість елементів у масиві
    int n = sizeof(myNumbers) / sizeof(myNumbers[0]);

    // Викликаємо функцію для Завдання 2
    Average(myNumbers, n);
    kilkist(myNumbers, n);

}