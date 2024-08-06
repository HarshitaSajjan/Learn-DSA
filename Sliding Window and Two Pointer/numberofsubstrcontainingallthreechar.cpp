/*Number of substring containing all three characters\

given string with three char only*/

/*naive
for(i=0->n){
hash[3]={0}
for(j=i->n){
hash[s[j]]-'a']=1;
if(hash[0]+hash[1]+hash[2] ==3)
count+=1; or count = count+(n-j); break;

}
}
print(count)

tc O(n2)
sc O(3)
*/


/*with every char there is a substr that ends 
a=-1 b=-1 c=-1
update accoding to the indexes
*/

func(s){
    lastseen[3]={-1,-1,-1};
    count=0;
    for(int i=0 ->n){
        lastseen[s[i]-'a']=i;

        if(lastseen[0]!=-1 && ......)
        count = count+(1+min(lastseen[0], [1],[2]))
    }
    return count;
}