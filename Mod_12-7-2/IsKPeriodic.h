#include <iostream>
#include <string>

using namespace std;

int IsKPeriodic(string txt)
//  ����� ����� K, �������� ������ ������ txt;
{
    setlocale(LC_ALL, "");

    bool kratn = true;                                 // ������� ����������� ���������
    bool pr = true;                                    // ������� ������������� ��������������� ������

    int  len_txt = txt.size();

    for (int K = 1; K <= len_txt / 2; K++) {           // � �� ����� ���� ������ �������� ����� ������
        if (len_txt % K == 0) {                        // ��������� �� ��������� ������ �����, ����� ����� ������ ������� �� �
            if (pr) cout << K << endl;
            kratn = true;
            for (int j = 1; j < len_txt / K; j++) {    // ��� ������� j-�� ���������� ������ K, ������� �� 2-��,
                for (int i = 0; i < K; i++) {
                    if (pr) cout << "txt[" << i + j * K << "] = " << txt[i + j * K] << "      " << "txt[" << i << "] = " << txt[i] << endl;

                    if (txt[i + j * K] != txt[i]) {    // ���������, ����� �� �� ���������������� �������� ������� ���������� ������ �
                        kratn = false;
                        if (pr) cout << "false" << endl;
                        K = i + j * K;                 // ���������� ��� �������� �������� ��������� ������� ������� ������� ����������� �� ������� ��������
                    }
                    if (kratn == false) break;
                }
                if (kratn == false) break;
            }
            if (kratn == true) return K;               // ���������� �������� ���������
        }
    }
    if (kratn == false) return 0;                      // ��������� �� �������
};
