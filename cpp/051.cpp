/*
    Chef and his Students
    https://www.codechef.com/problems/CHEFSTUD

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

#define SPEED ios::sync_with_stdio(0), cin.tie(0);
//#define int long long
#define endl "\n"

int chefAndStudents(string s) {
  //int i = 0;
  int count = 0;
  for (int i = 0; i < s.length() - 1; i++) {
    //cout << s[i] << endl;
    if ((s[i] == '<') && (s[i + 1] == '>')) {
      count++;
    }
  }
  // while (i < n - 1) {
  //   if (s[i] == '<' && s[i + 1] == '>') {
  //     count++;
  //   }
  //   i++;
  // }
  return count;
}

int32_t main() {
  SPEED;
  int t;
  cin >> t;
  while (t--) {
    // int n;
    // cin >> n;
    string s;
    cin >> s;

    cout << chefAndStudents(s) << endl;
  }
  return 0;
}



