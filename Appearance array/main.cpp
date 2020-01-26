# include <bits/stdc++.h>
using namespace std;
ifstream f("data.in");
ofstream g("data.out");
int A[100], n, i;
int main ()
{
    f>>n;
    for (i=1; i<=n; ++i) {
        int x;
        f>>x;
        // x=x+10;
        cout << "the value of x " << A[x] << endl;
        ++A[x];

    }

    if (A[7] > 0) g<<"YES, it appears";
             else g<<"NO, it's not";

    return 0;
}
