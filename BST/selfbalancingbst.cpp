#include<bits/stdc++.h>
using namespace std;

/*keep the ehight as O(logn)
background: same set of keys can make different height bsts
if we keys in advance, we can make a perfectly balanced bst
how to keep it balanced when random insetions, deletions happening

the idea is to do some restructuring(or re balancing) when doing insertions/deletions

rotations
{t1}<y<{t2}<x{t3}


AVL tree- stroct is term os balance
Red Black - loose in terms of balance - used more than avl tree
 tree are examples of self baancing tree
*/


/*AVL tree= SB BST
it is bst(for every node, left subtreeis smaller and right is gretaer)
it is balanced (for every node, diff betwen left and right heights does not exceed one)

balance factor = |lh-rh|
bf<=1


avl search == bst search
insert and delete are complex in avl than bst

insert operations
    perform normal bst insert 
    traverse all ancestors of the newly inserted node from the node to root
    if find an unbalancednode, check for any of the below cases
        left left - single rotations
        right right - single rotations
        left irght - double rotations
        right left - double rotations

theta(LOGN)time
height of avl tree

h<clogbase2(n+2)+b
where c is approx 1.4405
b-1.3277

*/


/*Red Black Tree
self balancing tree

eveery node is either red or black
root is always black
no two consecutive reds
number of black nodes from every node to all of its descandent leaves should

no of noddes on the path from a node to its farthest descendants leaf should not be more than twice than the number of nodes on the path to closest descendants leaf

*/


/*applications of bst
to maintain sorted streamof data(or sorted set of data)
to implement doubly ended priority queue
to solve problems like
    count smaller/greater in a strem
    floor/ceil/greater/smaller in a stream
*/