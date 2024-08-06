/*SUbaarays with k different Intergers
any cintigous part is callled subarr

given arr of intergers and k ie k diff intergers

*/

for(i=0->n){
    mpp
    for(j=i->n){
        mpp[nums[j]]++;

        if(mpp.size()==k)
        count=count+1;

        else if(mpp.size()>k)
        break;
    }
}
return count;

tc O(n2)
sc O(n)

/*optimized

two pointer
not a typical two pointer as we are not said to return logest subarray but to return the number of subaaray

l r at first
map ds (num and its freq)

no of subarr where diff int <=k
*/

func(nums, k){
    l=0;
    r=0;
    count=0;
    mpp
    while(r<nums.size()){
        mpp[nums[r]]++;
        while(mpp.size()<=k){
            mpp[nums[l]]--;
            if(mpp[nums[l]]==0)
            mpp.erase(nums[l]);
            l=l-1;
        }
        count= count+(r-l+1);
        r=r+1;

    }
    return count;
}

func(nums,k)-func(nums,k-1);


tc O(2n)
sc O(n)