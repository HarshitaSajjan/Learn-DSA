/**
 * kosaraju requires two traversal of directed graph
 * articulation in undirected graph
 * tarjans algorithm for strongly connected componenent
 *  strong connected component everyhting is reachable from everything else
 * dfs tree
 * assume that no cross edge in dfs tree
 * vertex whose all cggildren jhas discovered, then this vertex is begining of scc
 * if all adjacent of a vertex u are done with recursive and disc[u]= low[u], then  print this vertex and all other vertices in a stack
 * 
 * maintain a stack where w epush vertices whenever thwy go into recursion  call like in cycle detection in directed graph
 * we donot remove vertices when recusion is over, push vertices when recusion is begin.
 * remove when its scc is found and printed as part of scc
 * 
 * stack work
 * 
 * cross edges= edge that doesnt return back to ancestors but goes to someother point
 * directed graph can have cross edges
 * 
 *  
 * 
 *  tarjans>kosaraju as it requires only one traversal
 */