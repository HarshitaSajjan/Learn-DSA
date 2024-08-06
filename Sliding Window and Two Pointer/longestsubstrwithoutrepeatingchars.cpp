/*
string will be given
longest substring without repeating characters

naive 
generate all possible substring and calc length
two loops

for(i=0; i<n; i++){
sub="";
for(int j=i; j<n;j++){
sub=sub+s[j];

}}
to vheck repeating non rep we can use hashing

hash[256]={0};

if(hash(s[j])==1) break;
len = j-i+1;

maxlen=max(len, maxlen);
hash[s[j]]=1;

O(n2)tc
O(256)sc

ax substr then you should apply two pointer or sliding window
*/

/*sliding window and two pointer

index for all the char in hash
char and index
l and r
first char and look in map 
len = r-l+1;
maxlen update
 move r to next
*/

funct(string s){
    hash[256]={-1};
    l=0;
    r=0;
    maxlen=0;
    while(r<n){
        if(hash[s[r]]!=-1){
            if(hash[s[r]]>=l){
                l=hash[s[r]]+1;
            }
        }
        len=r-l+1;
        maxlen=max(maxlen, len)
        hash[s[r]]=r;
        r++;
    }
    return maxlen;
}

tc O(n);
sc O(256);