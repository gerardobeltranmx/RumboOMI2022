#include <iostream>
#include <queue> 
using namespace std;

int main(int argc, char const *argv[])
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);

    priority_queue <int> playeras ;

    int precio, N;
    
    cin >> N;

    for (int i=0; i < N; i++){
        cin >> precio;
        playeras.push(precio);
    }

    playeras.pop();
    playeras.pop();

    cout << playeras.top() << endl;


    return 0;
}
