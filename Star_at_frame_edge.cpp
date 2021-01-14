//to print pattern

/*  
    ********   //we have to print star at raw =1 and raw = last
    *      *   //column = 1 and cloumn = last
    *      *   // logic is either row =1 || row =last ||column=1 || column =last
    *      *   //line 27 has ans
    ********
    
    */
#include <iostream>

using namespace std;

int main() {

    int row,col;

    cin>>row>>col;

    for(int i= 1;i<=row;i++){

        for(int j=1;j<=col;j++){

            

            if(i==1 || i==row || j==1 || j==col)

            {

            cout <<"*";

            }

            else

                cout<<" ";

            

        }

        cout <<endl;

    }

    return 0;

}
