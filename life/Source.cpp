#include <iostream>
#include <string>
using namespace std;

template<typename T>
void sort(T arry[], int length)
{
	T temp;
	for (int j=0; j <= length - 1; j++){  //sorting

		for (int i = 0; i < length; i++)
		{
			if (arry[i] < arry[i + 1])
			{
				temp = arry[i];
				arry[i] = arry[i + 1];
				arry[i + 1] = temp;
			}
		
		}
}
	
	
	
}

int main() //driver 
{
	int arr[6] = { 31,27,3,7,90,56 };
	sort(arr, 6);
	for (int i = 0; i < 6; i++)
		cout << arr[i] << " ";
	return 0;

}