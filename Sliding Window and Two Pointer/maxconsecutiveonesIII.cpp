/*array with ones and zeroes
and allowed to flip at most k zeroes

find lonfgesta= subarray with atmost k zeroes


maxlen=0;
for(i=0 ->n){
zerpes=0;
for(j=i; ->n){
if(nums[j]==0)zeroes++;
if(zeroes<=k){
len=j-i+1;
maxlen=max(maxlen, len);
}
else break;
}
}
tc o(n2);
sc O(1)

*/

/*twopimnter and sliding window*/
func(list<int>nums, k){
    maxlen=0;
    l=0;
    r=0;
    zeroes=0;
    while(r<nums.size()){
        if(nums[r]>=0) zeroes++;
        while(zeroes>k){
            if(a[lef]==0) zeroes--;
            left++;
        }
        if(zeroes(<=k)){
            len=r-l+1;
            malxen=max(len, maxlen);
            right++;
        }
        return maxlen;
    }
}

tc O(2n);
sc O(1);


/*most optimal solution*/
func(list,int>nums,k){
  l=0;
  r=0;
  zeroes=9;
  maxlen=0;
    while(r<nums.size()){
        if(nums[r]==0)zeroes++;
        if(zeroes>k){
            if(nums[l]=0)zeroess--;
            left++;
        }
        if(zeroes<=k)
        len=r-l+1;
        maxlen=max(maxlen, len)
        r++;
    }
    return maxlen;
}

tc O(n)
sc O(1)