/*
    Version Control System
    https://www.codechef.com/problems/VCS

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

void versionControlSystem(unordered_set<int> setM, unordered_set<int> setK, int m, int k, int n) {
    int ti = 0;
    int uu = 0;
    for (int i = 1; i <= n; i++) {
        if (setM.count(i) == 1 && setK.count(i) == 1) {
            ti++;
        }
        if (setM.count(i) == 0 && setK.count(i) == 0) {
            uu++;
        }

    }
    cout << ti << " " << uu << endl;
}

signed main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m, k;
        cin >> n >> m >> k;
        unordered_set<int> setM;
        unordered_set<int> setK;

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            setM.insert(x);
        }
        for (int i = 0; i < k; i++) {
            int x;
            cin >> x;
            setK.insert(x);
        }
        versionControlSystem(setM, setK, m, k, n);
    }
    return 0;
}