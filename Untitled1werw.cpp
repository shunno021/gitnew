#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>

using namespace std;

long long int power(long long int a, long long int b,long long int P)
{
	if (b == 1)
		return a;

	else
		return (((long long int)pow(a, b)) % P);
}

int main()
{
	long long int P, G, x, a, y, b, ka, kb;

	printf("Enter the value of P :\n");
	cin>>P;

	printf("Enter the value of G :\n");
	cin>>G;

	cout<<"Enter private key(a)\n";
	cin>>a; // a is the chosen private key
	printf("The private key a for X : %lld\n", a);
	x = power(G, a, P); // gets the generated key

	// Bob will choose the private key b
	b = 3;
	printf("The private key b for Y : %lld\n\n", b);
	y = power(G, b, P);

	ka = power(y, a, P); // Secret key for Alice
	kb = power(x, b, P); // Secret key for Bob

	printf("Secret key for the X is : %lld\n", ka);
	printf("Secret Key for the Y is : %lld\n", kb);

	return 0;
}
