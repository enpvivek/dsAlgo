/*
    Making a Meal
    https://www.codechef.com/problems/CFMM

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

void chefAndString(string s) {
    int n = s.length();
    if (n == 2 || n == 1) {
        cout << "YES" << endl;
        return;
    }
    string s1 = s[n - 1] + s.substr(0, n - 1);
    string s2 = s.substr(1, n - 1) + s[0];
    //cout << s1 << " " << s2 << endl;
    if (s1 == s2) {
        cout << "YES" << endl;
        return;
    }
    cout << "No" << endl;
}

signed main() {
    fastio;
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        int minm = 0;
        int min2 = 0;
        unordered_map<char, int> mp;
        mp['c'] = 0;
        mp['o'] = 0;
        mp['d'] = 0;
        mp['e'] = 0;
        mp['h'] = 0;
        mp['f'] = 0;
        while (n--) {
            string s;
            cin >> s;
            for (int i = 0; i < s.length(); i++) {
                mp[s[i]]++;
            }

        }

        minm = min(mp['o'], min(mp['d'], min(mp['h'], mp['f'])));
        min2 = min(mp['c'], mp['e']) / 2;
        cout << min(minm, min2) << endl;

    }
    return 0;
}