#include <iostream>
#include <clocale>
using namespace std;	 
void summa (float d1, float m1, float d2, float m2)
{
	float sumd;
	float summ;
	sumd = d1+d2;
	summ = m1+m2;
	cout<<"�������������� �����:"<<sumd<<endl;
	cout<<"������ �����:"<<summ<<"i"<<endl;
}
void raznost (float d1, float m1, float d2, float m2)
{
	float rd;
	float rm;
	d2=d2*-1;
	m2=m2*-1;
	rd = d1-d2;
	rm = m1-m2;
	cout<<"�������������� �����:"<<rd<<endl;
	cout<<"������ �����:"<<rm<<"i"<<endl;


}
 void proiz (float d1, float m1, float d2, float m2)
 {
	float pd;
	float pm;
	pd = (d1*d2)-(m1*m2);
	pm = (d1*m2)+(m1*d2);
	cout<<"�������������� �����:"<<pd<<endl;
	cout<<"������ �����:"<<pm<<"i"<<endl;

 }
typedef void(*MENU)(float, float, float, float);
MENU calc[3]={summa, raznost, proiz};
int main ()
	 {
	 setlocale (LC_ALL, "russian");
	 int a1, a2, b1, b2 ;
	 	cout << "������� �������������� � ������ ����� ������� �����:" << endl;
	    cin >> a1>>b1;
		cout << "������� �������������� � ������ ����� ������� �����:" << endl;
		cin>> a2>>b2;
		int N;
		cout << endl << "                    ����:" << endl;
		cout << "_____________________________________________________" << endl;
		cout << "  1 - �����" << endl;
		cout << "  2 - ��������" << endl; 
		cout << "  3 - ������������" << endl;
		cout << "_____________________________________________________" << endl;
		cout <<"������� ����p ������ ����:"<< endl;
		cin >> N;
		(*calc[N-1])(a1, b1, a2, b2);
		cout << endl;
		system("pause");
	    return 0;
	    }
