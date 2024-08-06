/*
in farm there r two baskets
three tyypaes of fruits
only one type os fruit in one basket
max fruit in baskets
consecutve fruits
maxlen subarray with atmost  2 types of fruits


naive if generate all subarray
set 
for(0 ->n){
set<int>s
for(j=i ->n){
st.add(arr[j]);

if(st.size()<=2)
maxlen=max(maxlenn j-i+1)
else
break;

}
}
*/

tc O(n2)
sc O(3);


/*sliding window and two pointer
map ds (num,freq)  
l, r ptr
maxlen=0;
*/

func(arr){
    l=0; r=0; maxlen=0; mpp
    while(r<arr.size()){
        mpp[arr[r]]++;
        if(mpp.size()>k){
            while(mpp.sie()>k){
                mpp[arr[l]]--;
                if(mpp[arr[l]]==0)
                    mpp.erase(arr[l]);
                    l++;
            }
        }
        if(mpp.size()<=k){
            maxlen = max(maxlen, r-l+1);
        }
        right++;
    }
    return maxlen;
}
tc O(2n)
sc O(3)


/*optimized solution*/
func(arr){
    l=0; r=0; maxlen=0;
    mpp
    while(r<n){
        mpp[arr[r]]++
        if(mpp.size()>k){
            mpp[arr[l]]--;
            if(mpp[arr[l]]==0)
            kpp.erase(mpp[arr[l]])
            l++;
        }
        if(mpp.size()<=k)
        maxlen=max(maxlen, r-l+1);
        r++;
    }
    return maxlen;
}


tc O(n)
sc O(2);