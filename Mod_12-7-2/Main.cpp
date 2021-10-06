#include <iostream>
#include <string>
#include "IsKPeriodic.h"

using namespace std;

int main()
{
    setlocale(LC_ALL, "");

    string txt = "ABABABACABABABAdABABABACABABABAdABABABACABABABAdABABABACABABABAeABABABACABABABAdABABABACABABABAdABABABACABABABAdABABABACABABABAeABABABACABABABAdABABABACABABABAdABABABACABABABAdABABABACABABABAe";
    int  len_txt = txt.size();
    cout << "Длина строки " << len_txt << endl;
    int kr = 0;

    kr = IsKPeriodic(txt);

    cout << "Кратность " << kr << endl;
    // если выводится "Кратность 0", значит кратность отсутствует
}