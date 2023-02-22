#include <iostream>
using namespace std;


// Break and continue
int main(){

    //  BREAK -> THROWS YOU OUT OF LOOP.
    // for (int i = 0; i < 4; i++)
    // {
        
    //     if (i==2){
    //         break;
    //     }
    //     cout<<i<<endl;
    //     /* code */
    // }

    // CONTINUE -> EXCEPT FOR CONDITION GIVEN CONTUINUE
    //             REST ALL THE ITERATIONS WILL RUN AND WILL SKIP THAT PARTICULAR 
    //             CONDITION BASED ITERATION
    for (int i = 0; i < 14; i++)
    {
        if (i == 4){
            continue;
        }
        cout << i << endl;
        /* code */
    }
    

    return 0;
}