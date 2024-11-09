#include <iostream>
using namespace std;

const int SIZE = 15;
int L[SIZE] = { 10, 4, 7, 1, -2, 12, 28, 66, 9, 3, 5, 7, 6, 21, 11 };


void print_data()
{
	for(int i = 0; i < SIZE; i++)
		cout << " " << L[i] << " ";
	cout << endl;
}

void merge_sort(int left, int right)
{
	/* 이 곳에 알맞은 내용을 추가하시오. */
	/* 입력 데이타는 L[]에 들어 있으며, 전체 원소 개수는 SIZE이다. */
	if(right>left)
	{
		int m= (left+right)/2;
		merge_sort(left, m);
    	merge_sort(m + 1, right);

		int B[SIZE];
		int i,j,k;


		for(i=left; i<=m; i++) B[i]=L[i];
		for(j=m+1; j<=right; j++) B[right+m+1-j]=L[j];

		i=left; j=right;
		for(k=left; k<=right; k++)
			L[k]=(B[i]<=B[j]) ? B[i++]:B[j--];


	}
	

}

int main()
{
	cout << "Input Data : ";
	print_data();
	
	/* sort the elements of array L[] in ascending order */
	merge_sort(0, SIZE-1);
	
	cout << "\n\nSorted Data : ";
	print_data();
	return 0;

}
