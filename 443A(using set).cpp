#include <bits/stdc++.h>
using namespace std;

int main(){

    string letter;
    getline(cin, letter);

    set <char> setA;

    for (auto i : letter)
        setA.insert(i);

    //for (auto i : setA)
        //cout << i << " "<<"\n";

    int s=setA.size();
    if(s==2){
    	cout<<"0";
    }
    else if(s==3){
        cout<<"1";
    }
    else{
    	cout<<s-4;
    }


    return 0;
}
