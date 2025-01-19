// insertion into array
// #include<iostream>
// using namespace std;
// int main(){
//	int arr[100],n,ele,pos;
//	cin>>n;
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
//	for(int i=0;i<n;i++){
//		cout<<arr[i];
//	}
//	cout << "\nEnter Position";
//	cin>>ele>>pos;
//	for (int i = n; i > pos; i--) {
//         arr[i] = arr[i - 1];
//     }
//     arr[pos]=ele;
//     n++;
//     for(int i=0;i<n;i++){
//     	cout<<arr[i];
//	}
//
//
// }
// merge array
// class Array{
//	private:
//		int *A;
//		int size;
//		int length;
//	public:
//		Array(int size, int length, bool sorted=false){
//			this->size=size;
//			this->length=length;
//			A=new int[size];
//			if(sorted){
//				cout<<"Enter elements in sorted manner: \n";
//				for(int i=0;i<length;i++){
//					cout<<"Enter elements:"<<i<<flush;
//					cin>>A[i];
//				}
//			} else{
//				for(int i=0;i<length;i++){
//					int val;
//					val=rand()%100;
//					if(rand()%2){
//						A[i]=-1*val;
//					} else{
//						A[i]=val;
//					}
//				}
//			}
//		}
// };
// int main(){
//
// }
// bubble sort
// #include <iostream>
// using namespace std;
// int main()
// {
// 	int A[5] = {4, 6, 2, 1, 9};
// 	for (int i = 0; i < 5; i++)
// 	{
// 		for (int j = 0; j < 5 - i - 1; j++)
// 		{
// 			if (A[j] > A[j + 1])
// 			{
// 				swap(A[j], A[j + 1]);
// 			}
// 		}
// 	}
// 	for (int i = 0; i < 5; i++)
// 	{
// 		cout << A[i] << " ";
// 	}
// }
// find duplicates in an array
// DUPLICATE IN ARRAY
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> v = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9, 10, 10};
	int n = v.size();
	vector<int> dup;
	unordered_map<int, int> m;
	for (int i = 0; i < n; i++)
	{
		m[v[i]]++;
	}
	for (auto x : m)
	{
		if (x.second > 1)
		{
			dup.push_back(x.first);
		}
	}
	for (auto x : dup)
	{
		cout << x << " ";
	}
}
