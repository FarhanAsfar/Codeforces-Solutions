#include <bits/stdc++.h>
using namespace std;

struct Products
{
	double weight;
	double price;
	double pricePerWeight;
}pickedItem[100], temp;

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n, sackWeight;
	cin>>n>>sackWeight;

	for(int i=0;i<n;i++){
		cin>>pickedItem[i].weight>>pickedItem[i].price;
		pickedItem[i].pricePerWeight = pickedItem[i].price / pickedItem[i].weight;
	}
	
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(pickedItem[i].pricePerWeight < pickedItem[j].pricePerWeight){
				temp = pickedItem[i];
				pickedItem[i] = pickedItem[j];
				pickedItem[j] = temp;
			}
		}
	} 

	/*for(int i=0;i<n;i++){
		cout<<pickedItem[i].pricePerWeight<<" ";
	}*/

	double currentWeight = 0.0, profit = 0.0, remainingWeight = 0.0;

	for(int i=0;i<n;i++){
		if(pickedItem[i].weight + currentWeight <= sackWeight){
			currentWeight += pickedItem[i].weight;
			profit += pickedItem[i].price;
		}
		else{
			remainingWeight = sackWeight - currentWeight;
			profit += (pickedItem[i].pricePerWeight * remainingWeight);
			break;
		}
	}

	cout<<"Maximum Profit: "<<profit;

	return 0;
} 