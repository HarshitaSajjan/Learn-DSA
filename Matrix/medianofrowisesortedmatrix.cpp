

 #include<bits/stdc++.h>
 using namespace std;
  //Median of a row wise soretd matrix
  /*
  assumptions
  odd sized matrix
  all distinct elements
  */

 /*
 Naive Solution
 Putt all elements in an array
 sort the array
 return the middle element of the sorted array 

 TC O(r*c)+O(r*clofr*c)+O(1) = O(rclogrc)
 2ns and 3rd step can be optimzed in O(1) by quick selevct 
 pverall tc can be optimized to O(r*c)

 */

/*efficient Solution
O(r*log(max-min)*logc)
*/

int matmed(int mat[][MAX], int r, int c){
    int min = mat[0][0], max = mat[0][c-1];
    for(int i=1; i<r; i++){
        if(mat[i][0]<min){
            min=mat[i][0];
        }
        if(mat[i][c-1]>max){
            max=mat[i][c-1];
        }
    }
    int medPos = (r*c+1)/2;
    while(min<max){
        int mid=(min+max)/2;
        int midPos=0;
        for(int i=0; i<r; i++)
            midPos+= upper_bound(mat[i], mat[i]+c, mid)-m[i];
        if(midPos<medPos)
            min = mid+1;
        else
            max=mid;
    }
    return min;
}

/*tc theta(r)+O(log(max-min))*r*logC*/
