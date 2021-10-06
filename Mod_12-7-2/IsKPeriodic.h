#include <iostream>
#include <string>

using namespace std;

int IsKPeriodic(string txt)
//  ѕоиск числа K, которому кратна строка txt;
{
    setlocale(LC_ALL, "");

    bool kratn = true;                                 // признак обнаружени€ кратности
    bool pr = true;                                    // признак необходимости вспомогательной печати

    int  len_txt = txt.size();

    for (int K = 1; K <= len_txt / 2; K++) {           //   не может быть больше половины длины строки
        if (len_txt % K == 0) {                        // ѕровер€ем на кратность только тогда, когда длина строки делитс€ на  
            if (pr) cout << K << endl;
            kratn = true;
            for (int j = 1; j < len_txt / K; j++) {    // ƒл€ каждого j-го подмассива длиной K, начина€ со 2-го,
                for (int i = 0; i < K; i++) {
                    if (pr) cout << "txt[" << i + j * K << "] = " << txt[i + j * K] << "      " << "txt[" << i << "] = " << txt[i] << endl;

                    if (txt[i + j * K] != txt[i]) {    // провер€ем, равен ли он соответствующему элементу первого подмассива длиной  
                        kratn = false;
                        if (pr) cout << "false" << endl;
                        K = i + j * K;                 // ѕропускаем дл€ скорости проверки кратности меньшей индекса первого расхождени€ со строкой повторов
                    }
                    if (kratn == false) break;
                }
                if (kratn == false) break;
            }
            if (kratn == true) return K;               // ¬озвращаем значение кратности
        }
    }
    if (kratn == false) return 0;                      //  ратность не найдена
};
