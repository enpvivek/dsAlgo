/*
    A Subtask Problem
    https://www.codechef.com/problems/SUBTASK

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
        int n, m, k;
        cin >> n >> m >> k;
        int arr[n];
        int score = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                break;
            }
            score++;
        }
        //cout << score << " ";
        if (score == n) {
            cout << 100 << endl;
        }
        else if (score >= m) {
            cout << k << endl;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}

// #include <iostream>
// using namespace std;

// int main() {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         int n, m, k;
//         cin >> n >> m >> k;
//         int arr[n];
//         int count = 0;
//         for (int i = 0; i < n; i++)
//         {
//             cin >> arr[i] ;
//             count += arr[i] ;
//         }
//         int sum = 0 ;
//         for (int i = 0; i < m; i++)
//             sum += arr[i] ;



//         if (count == n)
//             cout << "100" << endl;
//         if ( count != n && sum == m)
//             cout << k << endl;

//         if (count != n && sum != m)
//             cout << "0" << endl;

//     }
//     return 0;
// }
