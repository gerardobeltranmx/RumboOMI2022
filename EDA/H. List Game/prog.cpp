#include <iostream>
#include <queue> 
using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    queue <long long int> Paget;

    priority_queue <long long int> AJ;

    int N, i, res, x;
    char instruccion;
    cin >> N;

    for (i=0; i < N ; i++){

        cin >> instruccion;

        switch (instruccion)
        {
        case 'I':
                cin >> x;

                Paget.push(x);
                AJ.push(x);    
            break;
        case 'Q':
                if (Paget.empty()==false){
                    res = abs(Paget.front()-AJ.top());
                    Paget.pop();
                    AJ.pop();
                    cout << res << endl;
                }
                else {
                    cout << "MARIOLA NO!"<< endl;
                }        
       
            break;
        
        }


    }







    return 0;
}
