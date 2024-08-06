/*Maxium points you can obtain from cards

given an array with n diff cards
pick up  cards 
either from front or back not from the middle
maximize the umber of points to be picked


lsum=0 and rsum=0
O(2*k) tc
O(1) sc
*/
func(nums, k){
    lsum=0;
    rsum=0;
    maxsum=0;
    for(i=0 ->k-1) 
    lsum +=nums[i];
    maxsum=lsum;

    rindex=n-1;
    for(i=n-1; i>=0; i--)
    lsum=lsum-nums[i];
    rsum=rsum+nums[rindex];
    rindex--;
    maxsum=max(maxsum , lsum+rsum);

    return maxsum;
}