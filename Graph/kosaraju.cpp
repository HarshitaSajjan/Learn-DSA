#include<bits/stdc++.h>
using namespace std;
/**
 * strongly connected component
 * directed graph we need to find all the strongly connected component and print them
 * set of vertices form connections such that every pair can be reachable from each other
 * 
 * udg bfs or dfs u to v and v to u 
 * but not same in dfs 
 * sink component to source components then u will get scc
 * 
 *  */
/***
 * order the vertices in decreasing order of the finish times in DFS
 * reverse all edges
 * do DFS of the reversal graph in the order obtained in step 1. for every vertex, print all reachable vertices as one strongly connected component
 * 
 * start time
 * finish time
 * dfs traversal, recursive call (start time) for all adjacent, once all adjacent are processed(vertex as finished) finish time
 * 
 * step2  tranpose if admatrix then transpose of matrix
 *  and step 3 tranverse and print
 * step 1 can be done by something similar to topological sort
*/
/*Implementation step 1*/
/**
 * creare an empty stack st
 * for every vertex u do the following
 * if(u is not visited)
 * dfs(u, st)
 * while(st is not empty)
 * pop am item and to result
 * 
 * dfa(u, st)
 * mark u visited
 * for every adjacent v
 * if v is not visited
 * dfsrec(v,st)
 * st.push(u)
 * 
 */
/***
 * Time Complexity
 * step1 dfs or toposort O(V+E)
 * step2  O(V+E)
 * step3  
 * 
*/