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

void quick_sort(int left, int right)
{ int i,j; int temp, t;

	if(right>left)
	{
		temp=L[right]; i=left-1; j=right;
		do
		{
			do{i=i+1;} while (L[i]<temp);
			do{j=j-1;} while (j >=left && L[j]>temp);
			
			if(i<j) 
			{ 
				t=L[i]; L[i]=L[j]; L[j]=t;
			}
		} while(i<j);

		t=L[i]; L[i]=L[right]; L[right]=t;
		quick_sort(left,i-1);
		quick_sort(i+1,right);
	}
}

int main()
{
	cout << "Input Data : ";
	print_data();
	
	/* sort the elements of array L[] in ascending order */
	quick_sort(0, SIZE-1);
	
	cout << "\n\nSorted Data : ";
	print_data();
	return 0;

}
