/*Longest substring with at most k distinct characters

travser and update the map with is freq until mp doesnt exceed sie k

*/
O(n2)*log(256) tc
sc O(256)
func(s, k){
    maxlen=0;
    mpp<char, int>
    for(i=0->n){
        mpp.clear();
        for(j=i->n){
            mpa[s[j]]++;
            if(mpp.size()<=k){
                maxlen=max(maxlen, j-i+1);
            else
            break;
            }
        }
        return maxlen;
    }
}


/*optimaized two pointer ans sliding window
take l and r at zero index
maxlen=0
check mapp and update
*/

func(s,k){
    maxlen=0;
    l=0,r=0;
    mpp<char,int>>
    while(r<s.size()){
        mpp[s[r]]++;
        while(mpp.size()>k){
            hash[s[l]]--;
            if(hash[s[l]]==0)
            mpp.erase(mpp[s[l]])
            l=l+1;
        }
        if(mpp.sie()<=k)
        maxlen=max(maxlen,r-l+1);
        r=r+1;
    }
    return maxlen;
}
tc O(n) +O(n) + o(log256)
sc O(256)


/*optimized 2*/
 while -> if
 if(mpp.size()>k)

 tc o(n)
 sc O(256)