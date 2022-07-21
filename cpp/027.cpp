/*
    Adjacent Sum Parity
    https://www.codechef.com/problems/ADJSUMPAR

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

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    int ar[100000];
	    char cr[100000];
	    for(int i=0;i<n;i++){
	        cin>>ar[i];
	        if(i==0)cr[0]='o';
	        else{
	            if(cr[i-1]=='o'  ){
	                if(ar[i-1]==1)
	                cr[i]='e';
	                else
	                cr[i]='o';
	            }
	            else{
	                if(ar[i-1]==0)cr[i]='e';
	                else cr[i]='o';
	            }
	        }
	    }
	    if(cr[0]==cr[n-1]){
	        if(ar[n-1]==0)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	    else{
	        if(ar[n-1]==1)cout<<"YES\n";
	        else cout<<"NO\n";
	    }
	}
	return 0;
}