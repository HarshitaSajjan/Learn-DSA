/*min substr which have all the element of t in s

take map ds and store itsoccurences
(char,freq)
*/

minlen=1e9;
sindex=-1;
for(i=0->n){
    hash[256]={0}
    for(j=0->n)
    hash[t[j]]++;
    for(j=0->n){
        if(hasj[s[j]]>0)
        count=count+1;
        hash[s[j]]--;
        if(count==m){
            if(j-i+1 <minlen)
            minlen=j-i+1;
            sindex=i;
            break;
        }
    }
}

s.subsstr(sindex, minlen);

tc O(n2)
sc o(256)

/*optimized

sliding window l, r

prestore all the values of t*/

func(s,t){
    hash[256]={0}
    l=0;
    r=0;
    minlen=1e9;
    sindex=-1;
    count=0;
for(i=0->m)
hash[t[i]]++;
while(r<s.size()){
    if(hash[s[r]]>0)
    count=count+1;
    hash[s[r]]--;
    (count==m){
        if(r-l+1< minlen)
        minlen=r-l+1;
        sindex=l

        hash[s[l]]--;
        if(hash[s[l]]>0)
        count=count-1;
    }
    r=r+1;
}
return sindex==-1 ? "" : s.substr(sindex, minlen)
}


tc O(n)+O(m);
sc O(256); 