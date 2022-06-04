#include <iostream>
#include <set>
using namespace std;

int main(int argc, char const *argv[])
{

    set <int> A;

    set <int>::iterator itrA;


    A.insert(6);
    A.insert(5);
    A.insert(5);
    A.insert(5);
    A.insert(9);
    A.insert(10);

    for (itrA=A.begin(); itrA!=A.end(); itrA++){
        cout << *itrA << endl;
    }

    cout << "Tamaño del conjunto: " << A.size() << endl;

    






    return 0;

}
