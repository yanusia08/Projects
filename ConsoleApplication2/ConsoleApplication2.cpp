#include <iostream>
#include <iomanip>

using namespace std;

// --- Завдання 1 ---
void IsLeap(int y, int& result) {
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) result = 1;
    else result = 0;
}

void DateDiff(int d1, int m1, int y1, int d2, int m2, int y2)
{
    
        int res1, res2;

    // Спрощений підрахунок днів
        int days1 = d1 + y1 * 365;//+ y1 / 4 - y1 / 100 + y1 / 400;
    int months1[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (res1 == 1) months1[2] = 29;
    for (int i = 1; i < m1; i++) days1 += months1[i];

    int days2 = d2 + y2 * 365;// + y2 / 4 - y2 / 100 + y2 / 400;
    int months2[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (res2 == 1) months2[2] = 29;
    for (int i = 1; i < m2; i++) days2 += months2[i];

    int finalDiff = days1 - days2;
    if (finalDiff < 0) finalDiff *= -1;
    cout << "Riznytsia v dnyakh: " << finalDiff << endl;
}

void main()
{
    cout << "sdjfhsdkjhgs" << endl;
    DateDiff(1,1,2001,2,2,2001);
}
