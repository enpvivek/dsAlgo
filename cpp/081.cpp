/*
    Cops and the Thief Devu
    https://www.codechef.com/problems/COPS

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
//#define int long long
#define endl "\n"

int copsAndThief(int arr[], int m, int x, int y) {
    sort(arr, arr + m);
    int houses = 0;
    vector<pair<int, int>> vp;
    for (int i = 0; i < m; i++) {
        pair<int, int>p1;
        p1.first = max(0, arr[i] - x * y - 1);
        p1.second = min(100, arr[i] + x * y);
        vp.push_back(p1);
    }
    for (int i = 0; i < m - 1; i++) {
        if (vp[i + 1].first > vp[i].second) {
            houses += vp[i + 1].first - vp[i].second;
        }
    }
    return houses + vp[0].first + 100 - vp[m - 1].second;
}

signed main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int m, x, y;
        cin >> m >> x >> y;
        int arr[m];
        for (int i = 0; i < m; i++) {
            cin >> arr[i];
        }
        cout << copsAndThief(arr, m , x, y) << endl;

    }
    return 0;
}
