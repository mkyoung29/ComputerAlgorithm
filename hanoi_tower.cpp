#include <iostream> 
using namespace std;
int cnt=0;

void Hanoi(int n, char from, char temp, char to) 

{
	
	if (n == 1) {
		cout << "#" << cnt << " Move a disk from " << from << " to " << to << endl;
		cnt++;
	}
	else { 
		Hanoi(n-1, from , to   , temp    );
		cout << "#" << cnt << " Move a disk from " << from << " to " << to << endl;
		Hanoi( n-1   ,temp   , from   , to    );
	}
}


int main()
{
	int n; //
	
	cout << "������ ������ �Է��ϼ��� : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n���� ������ 'A'���� 'C'�� �̵�

	cout << "��ü ���� �̵� ��(���ݼ� : " << n << ") = " << cnt << endl;
	system("pause");
	return 0;
}