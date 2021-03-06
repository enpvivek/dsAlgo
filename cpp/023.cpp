/*
    The Last Levels
    https://www.codechef.com/LTIME110D/problems/LASTLEVELS

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

// void easyPronunciation(string s, int n) {
//   //int res = 0;
//   cout << res << endl;
//   while (n--) {
//     if (res == 4) {
//       cout << res << endl;
//       cout << "NO" << endl;
//       return;
//     }
//     if ((s[n] != 'a') || (s[n] != 'e') || (s[n] != 'i') || (s[n] != 'o' ) || (s[n] != 'u') ) {
//       res++;
//     }
//     else {
//       res = 0;
//     }
//     // if (s[n] == 'a' || s[n] == 'e' || s[n] == 'i' || s[n] == 'o' || s[n] == 'u') {
//     //   res = 0;
//     // }
//     // else {
//     //   res = res + 1;
//     // }
//     n++;

//   }
//   cout << "YES" << endl;
// }

int lastLevels(int x, int y, int z) {
  if (x < 4) {
    return y * x;
  }
  else {
    int t = (x - 1) / 3;
    return x * y + t * z;

  }
}

int main() {
  int T;
  cin >> T;
  while (T--) {
    int x, y, z;
    cin >> x >> y >> z;
    cout << lastLevels(x, y, z) << endl;
  }
  //cout << 9 / 3;


  return 0;
}
