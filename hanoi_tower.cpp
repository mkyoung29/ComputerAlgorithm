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
	
	cout << "원반의 갯수를 입력하세요 : ";
	cin >> n;

	Hanoi(n, 'A', 'B', 'C');    // n개의 원반을 'A'에서 'C'로 이동

	cout << "전체 원반 이동 수(원반수 : " << n << ") = " << cnt << endl;
	system("pause");
	return 0;
}