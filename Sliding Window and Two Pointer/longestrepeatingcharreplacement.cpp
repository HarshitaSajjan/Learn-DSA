/*given string s and pick atmost k char
and change k char to any char 
change repeating char in k operations 
*/
/*brute force 

geberate all substrings
len=maxf

*/

for(i=0->n){
    hash[26]={0}
    for(j=i->n){
        hash[s[j]-'A']++;
        maxf= max(maxf, hash[s[j]]);
        changes = (j-i+1) - maxf;
        if(changes<=k)
        maxlen=max(maxlen, j-i+1);
        else
        break;
    }
    
    print(maxlen);
}
tc o(n2)
scO(26)


/*optimizzed

l r
mzxf
maxlen hash[26]*/


func(s,k){
    l=0 r=0 maxlen0;maxf=0
    hash[26]={0};
    while(r<s.size()){
        hash[s[r]-'A']++:
        maxf=max(maxf, hash[s[j]-'A']);

        while((r-l+1)-maxf>k){
            hash[s[l]-'A']--;

            for(i=0->)
        }
        maxf= max(maxf, hash[i]);
        l=l+1;
    }
    if((r-l+1)-maxf<=k){
        mxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}

tc O(2n)*26
sc O(26)

/*optimized*/
scan not required
len-maxlen<=k
inner while->if
tc O(n)
sc o(n)