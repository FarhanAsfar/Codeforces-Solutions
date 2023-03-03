#include <iostream>
using namespace std;
// Police recruits (427-A)

int main()
{
    int n;
    cin>> n;
    int event;
    int sum=0,c=0;    //sum>>number of police recruited // c>> number of crimes

    for(int i=0; i<n; i++){
        cin>>event;
        if(event>0){        //if 'event' is >0 that means police is recruited.
            sum += event;
        }
        else if(event<0){
            if(sum>0){
                sum = sum-1;
            }
            else{
                c = c+1;
            }
        }
    }
    cout<<c;
/*sum>0 means we have free police man, and when 'event' is <0 that means crime
has occured and we have to decrease the number of our police man(sum)[line19].
and if 'sum'<0 that means we don't have free police man and so the crime will
be unreated.SO, we have to increase the value of 'c' by 1(c+=1).
*/

}
