#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main(){
	string s;
	cin >> s;
	ll l = s.length();
	ll k = 0;
	while(s[k] == '?' && k <= l-1){
		k++;
	}

	if( k % 2 == 0)
		s[0] = s[k];
	else{
		s[0] = s[k] == 'a' ? 'b' : 'a';
	}

	char c = s[0];
	cout<<c<<endl;

	for (int i = 1; i < l; ++i){
		if(s[i] == '?'){
			if(c == 'a')
				s[i] = 'b';
			else
				s[i] = 'a';
			c = s[i];
		}
	}
	// cout<<s<<endl;

	return 0;
}

//?b???a??????????b??b???a?????????

// ??????b?b?????????????????????????????????b?a?