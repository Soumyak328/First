#include <iostream>
using namespace std;
void TwoNumbers (int arr[],int n)
{
	int arrXor=0,numXor=0;
	for (int i=0;i<n-2;i++)
		arrXor=arrXor^arr[i];
	for (int i=1;i<=n;i++)
		numXor=numXor^i;
	int Xored=numXor^arrXor;
	int leastSetBit = ~(Xored-1)^Xored;
	cout << endl << leastSetBit << endl; 
}
int main()
{
	int n;
	cin >> n;
	int arr[n-2];
	for (int i=0;i<n-2;i++)
		cin >> arr[i];
    TwoNumbers(arr,n);
}