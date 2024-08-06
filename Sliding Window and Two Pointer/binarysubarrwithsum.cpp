/*Binary subarrays with sum 
count subarrays sum equals K


Hashing
tc O(n)
sc O(n)

further optimize s array consists only 0 and 1

*/

/*sliding window and two pointer

l, r at first place

sum=0
count=0;

traverse and add to sum and compare it with goal

if sum exceeds goal then shrink window
when sum ==goal, then increase count

here we dont know whether to move r or l

we can find
no of subarrrats where sum<=goal
func(nams, goal)-func(nums, goal-1); 
*/
 tc O(2n)
 sc O(1)
func(list<int>nums, goal){
    l=0;
    r=0;
    sum=0;
    count=0;
    if(goal<0) return 0;
    while(r<nums.size()){
        sum+=nums[r];
        while(sum>goal){
            sum=sum-sums[l];
            l=l+1;
        }
        count = count+(r-l+1);
        r=r+1;
    }
}