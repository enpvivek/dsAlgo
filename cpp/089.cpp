/*
    Watson asks Does Permutation Exist
    https://www.codechef.com/problems/PERMEXIS

                              .:/`./:.
                           `:+/+: :+++/:`
                         `/+++++. +++++++.
                         /+++/++`.++++++++.
                       `/++++++/ -++++++++/`
                      .++++++++/ :+++++++++:
                     -+/////:::- :////++++++:
                    .-:-:-:-::. ..-.:----::/+.
                  `-.-.               `...::-.
                  `                          ..


                                                   ```
               `.--.                          --.` `-:
     `     `-:/+//++:`                        /+++/:-.`
         ``/++++/+++++-                      .-/.-++/++/-`
      `  -/.++++++++++/`                    `   -/-/++++/-`
`     ` -++::+++++++++                         -. -/`:++/.:
`    :`-+++:./++++++++.                           `  -//./:.
-`   o.++++:.-+/+++++++:.`                           ./:`-`:` ``
: `.-+/+++++.-///+++++++++:`                         `:   `:``
`   `/++++++/`////++////+++/-                        -`   -: /
    -+.+++:/:.-+/////::://///-                      .     .:`o.
    /+.++//`` `://+////:::/://-                   `.      `.`+-
   -++-++//-  `-///////:::::///`    .``-//:` ``. `.        ` //
  `////++++/.   -:://///://////:   -/-//+/-`:++:`.           ++`
  -:-` ...-.   ` .::://////////-` `::.:/:`-/++//.           -/+:
 `-.---`       -` :/:/:::///://-.``.-::. :+++++.               .
 `/:-````.     ``..://////::///-```/::..:+++++-              .:/`
  :---...`     .../.:+/////:///..`.:-`:/+/+++: .`          .-.:/
  `::-:.`.-`   .`.`:.-///--/::/ ``..-/-:////: -.           .-:/-
   -----://:-` `` `-/.::-:-:---````-://///::`-`      `.:+//-..:`

    Name : JordiENP | Organization : SKC, India

*/



#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define int long long
#define endl "\n"

void doesPermutationExist(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        if (arr[i + 1] - arr[i] > 1) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

signed main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        doesPermutationExist(arr, n);
    }
    return 0;
}