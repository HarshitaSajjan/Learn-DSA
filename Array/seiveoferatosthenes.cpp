/*algorothm related to prime numbers
given number n and u have to print all primes till the number n

for(i=2; i<n){
if(prime(i))
print(i);
}

tc  O(nrootn)
sc O(1)
*/

/*
if i=2, then 2*2, 2*3 so on will no be prime
i++;

*/

func(n)
{
    prime[N + 1];
    for (int i = 2; i < n; i++)
        prime[i] = 1;

    for (i = 2->N)
    { // for(i=2; i*i<n; i++)
        if (prime[i] == 1)
        {
            for (j = 2 * i; j < n; j += i)
            { // optimization j= i*i ->n
                prime[j] = 0;
            }
        }
    }
    for (i = 2->N)
    {
        if (prime[i] == 1)
            print(i);
    }
}

// tc O(n) + O(nloglogn) + O(n), sc O(n)