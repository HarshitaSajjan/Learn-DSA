#include<bits/stdc++.h.
using namespace std;

struct Node{
    int data;
    Node *next;
    bool visited;

    Node(int x){
        data=x;
        next = NULL;
        visited=false;
    }
};

//Naive
/*
traversing, if any of node is exoting already ie same add 
TC O(n2)

*/

// Method2-if modifications to linked list structure is allowed O(n)


//Method3- O(n) without extraspace
/*modifications to LL ptr/ref
*/

bool isLoop(Node *head){
    Node *temp = new Node;
    Node *curr=head;
    while(curr!=NULL){
        if(curr->next==NULL) return false;
        if(curr->next == temp) return true;
        Node *curr_next curr->next;
        curr->next = temp;
        curr= curr->next;
    }
        return false;
}

//Method4-Hashing
bool isLoop2(Node *head){
    unordered_map<Node*>s;
    for(Node *curr=head; curr!=NULL; curr=curr->next){
        if(s.find(curr)!=s.end())
        return true;
        s.insert(curr);
    }
    return false;
}
//O(n)


//method5 = floyd's cycle
/*
doesnt modify str . doesnt modify list, no extra space  works(n) time

initialise slowptr and fastptr = head
move slow by one o=pos and fastp by two posn , is there pts mee then there is loop
*/

bool isloopfloyd(Node *head){
    Node *slow = head, *fast =head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fats)return true;
    }
    return false;
}
/*
how does algorithm work
fast will enter into loop before slow or at same time
lt fast be k dist ahead of slow when slow enter loop l>=0
this dist on increasing by one in every movement of both ptrs
whendist becomes length of cycle, they meet
O(m+n) time
*/

//detect and remove loop in LL
/*
detetc loop using floyd detection algorithm 
move slow to begining of LL and keep fast at meeting pt
now one by one move slow and fast (ast same speed) 
the pount where meet now is the fisrt node of the loop
*/

void detectremove(Node * head){
Node *slow = head, *fast =head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast)break;
}
if(slow!=fast) return;
slow =head;
while(slow->next !=fast->next){
    slow=slow->next;
    fast = fast->next;
}
fast->next = NULL;
}

/*
how this works
before first meeting pt
(dist travelled by slow)*2 = dist travelled by fast
(m+k+x*n)*2 = m+k+y*n
x-> noof iterationsmade by slow before the first meeting pt
y-> by fast
m+k = n(y-2x)
(m+k) is multiple of n
then second meeting pt is going to be the first node of loop

*/

/*
variations
find length of isLoop
find the first node of isLoop2*/



