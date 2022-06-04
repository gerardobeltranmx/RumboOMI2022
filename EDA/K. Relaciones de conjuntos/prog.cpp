#include <iostream>
#include <set>

using namespace std;

int main()
{
    set <int> A;
    set <int> B;

    set <int>::iterator itrA;
    set <int>::iterator itrB;
    
    int N, M, x;
    bool enc=false;
    cin >> N;
    cin >> M;

    for (int i=0;i<N; i++){ // leer datos para A
        cin >> x;
        A.insert(x);
    }

    for (int i=0;i<M; i++){ // leer datos para B
        cin >> x;
        B.insert(x);
    }

    if (A.size()==B.size()){
        enc=true;
        for (itrA=A.begin(); enc==true and itrA!=A.end(); itrA++){
            if (B.count(*itrA)==0)
                 enc=false;
        }
        if (enc==true)
            cout << "A = B" << endl;
    }

    



    
   

    return 0;
}
