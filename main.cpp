#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> F;
    int n;
    cin >> n;
    F.push_back(0);
    F.push_back(1);
    F.push_back(1);
    if(n==1 || n==2)
        cout << 1 <<endl;
    else{//fibonachi
        for(int i=3; i<=n; i++){
            F.push_back( F[i-1] + F[i-2] );
        }
        cout << F[n] << endl;
    }
    return 0;
}
