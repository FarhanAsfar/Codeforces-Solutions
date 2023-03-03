#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<vector>
#include<iostream>
using namespace std ;

vector<string>avalue ;
vector<string>cvalue ;

int numberofobject = 0 ;

int findOccurance(string att, string cl)
{
    FILE *fptr;
    char a[100], c[100] ;
    int count = 0 ;
    if ((fptr = fopen("data.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    while (fscanf(fptr, "%s %s", a, c)!= EOF){
        string s = "" ;
        string s2 = "" ;

        for(int i = 0 ; i < strlen(a) ; i++){ //converting char array into string
            s += a[i] ;
         }
         for(int i = 0 ; i < strlen(c) ; i++){
            s2 += c[i] ;
         }
         if(s == att && s2 == cl) count++ ;
    }
    fclose(fptr);
    return count ;
}
int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    char a[100], c[100];
    FILE *fptr;
    if ((fptr = fopen("data.txt", "r")) == NULL) {
        printf("Error! opening file");
        exit(1);
    }
    string s = "" ;
    int dogc=0, catc=0;
    while (fscanf(fptr, "%s %s", a, c)!= EOF){
       //  printf("%s %s", a, c);
        // printf("\n") ;
         numberofobject++ ;

         bool flag = false ;
         string s = "" ;
         for(int i = 0 ; i < strlen(a) ; i++){
            s += a[i] ;
         }


         for(int i = 0 ; i < avalue.size() ; i++){
            if(s == avalue[i]) {
                flag = true ;

            }
         }
         if(!flag)
            avalue.push_back(s) ;


         flag = false ;
         s = "" ;
         for(int i = 0 ; i < strlen(c) ; i++){
            s += c[i] ;
         }
          if(s=="dog"){
            dogc++;
         }
         if(s=="cat"){
            catc++;
         }
         for(int i = 0 ; i < cvalue.size() ; i++){
            if(s == cvalue[i]) {
                flag = true ;

            }
         }
         if(!flag)
            cvalue.push_back(s) ;
    }
    printf("%d\n", numberofobject) ;
    for(int i = 0 ; i < avalue.size() ; i++){

        cout<< avalue[i] << endl ;
    }

    for(int i = 0 ; i < cvalue.size() ; i++){
        cout<< cvalue[i] << endl ;
    }

    for(int i = 0 ; i < cvalue.size() ; i++){
        for(int j = 0 ; j < avalue.size() ; j++){
            int n = findOccurance(avalue[j], cvalue[i]) ;

            cout << avalue[j] << "|" << cvalue[i] << " = "<< n << endl ;
            double liked=0, likec=0;
            if(cvalue[i]=="dog"){
                liked = (n*1.00)/dogc;
                cout<<liked<<endl;
            }
            else{
                likec = (n*1.00)/catc;
                cout<<likec<<endl;
            }

        }
    }
    fclose(fptr);
    double priorD = (dogc*1.00)/numberofobject;
    double priorC = (catc*1.00)/numberofobject;
    cout<<"\n"<<dogc<<" "<<catc<<endl;

    cout<<priorC<<" "<<priorD<<endl;

    return 0;
}

