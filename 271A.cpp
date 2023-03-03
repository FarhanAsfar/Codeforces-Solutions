#include <bits/stdc++.h>
using namespace std;
int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int y;
	cin>>y;
	

	for(int i=1;i<9000;i++){
		y+=1; //increasing year by 1
		string s = to_string(y); //storing the int into string 's' so that we can compare.

		set<int>year(s.begin(), s.end());
		//inserting the string into the set.


		//set will only have unique numbers.
		//if the size of string 's' and set 'year' are same then the year has unique digits
		//then print y and break the loop 
		if(s.size()==year.size()){
			cout<<y;
			break;
		}
	}


	//accepted.	


	return 0;
}