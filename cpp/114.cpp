/*
    B - Valentine Couples
    https://www.codechef.com/problems/VCOUPLE

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



signed main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int boys[n];
        int girls[n];
        for (int i = 0; i < n; i++) {
            cin >> boys[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> girls[i];
        }
        sort(boys, boys + n);
        sort(girls, girls + n, greater<int>());
        // for (int i = 0; i < n; i++) {
        //     cout << girls[i] << " ";
        // }
        int likeliness  = 0;
        for (int i = 0; i < n; i++) {
            if (boys[i] + girls[i] > likeliness) {
                likeliness = boys[i] + girls[i];
            }
        }
        cout << likeliness << endl;

    }
    return 0;
}
