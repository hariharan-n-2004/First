#include <stdio.h>

// Non-recursive function to calculate factorial
//int factorial_non_recursive(int n) {
//    int result = 1;
//
//    // Calculate factorial using a loop
//    for (int i = 1; i <= n; i++) {
//        result *= i;
//    }
//
//    return result;
//}
//
//int factorial_recursive(int n) {
//    // Base case: factorial of 0 is 1
//    if (n == 0 || n == 1) {
//        return 1;
//    } else {
//        // Recursive case: n! = n * (n-1)!
//        return n * factorial_recursive(n - 1);
//    }
//}
//
//int fibo_recur(int n){
//    if(n==0){
//        return 0;
//    }else if(n==1){
//        return 1;
//    } else{
//        return fibo_recur(n-1)+ fibo_recur(n-2);
//    }
//}
//
//void fibo(int n){
//    int a = 0, b = 1, next;
//
//    printf("Fibonacci series without recursion: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", a);
//        next = a + b;
//        a = b;
//        b = next;
//    }
//    printf("\n");
//
//}
//
//int gcd_recur(int m , int n){
//    if (n==0){
//        return m;
//    }else
//        return gcd_recur(n,m % n);
//}
//
//void gcd(int m,int n){
//    printf("\n");
//    int gcd = 0;
//    for(int i = 1 ; i <= n ; i++){
//        if(m % i == 0 && n % i == 0){
//            if(i > gcd){
//                gcd = i;
//            }
//        }
//    }
//    printf("%d",gcd);
//}
//void reverseArray(int arr[], int start, int end) {
//    if (start >= end) {
//        return;
//    }
//
//    int temp = arr[start];
//    arr[start] = arr[end];
//    arr[end] = temp;
//
//    reverseArray(arr, start + 1, end - 1);
//}
//
//int sumOfDigits(int n) {
//    if (n == 0) {
//        return 0;
//    } else {
//        return (n % 10 + sumOfDigits(n / 10));
//    }
//}
//
//int sumOfDigitsI(int n) {
//    int sum = 0;
//    while (n > 0) {
//        sum += n % 10;
//        n /= 10;
//    }
//    return sum;
//}
//
//int main() {
//    int num;
//    printf("Enter a number: ");
//    scanf("%d", &num);
//
//    if (num < 0) {
//        printf("Factorial is not defined for negative numbers.\n");
//    } else {
//        // Call the non-recursive factorial function
//        printf("Factorial without recursion: %d\n", factorial_non_recursive(num));
//        printf("Factorial using recursion: %d\n", factorial_recursive(num));
//        for (int i = 0 ; i<num ; i++){
//            printf("%d", fibo_recur(i));
//        }
//        printf("\n");
//        printf("Nom recur:");
//        fibo(num);
//        printf("%d",gcd_recur(12,24));
//        gcd(12,24);
//        int arr[] = {1, 2, 3, 4, 5};
//        reverseArray(arr,0,4);
//        for (int i = 0; i < 5; i++) {
//            printf("  %d ", arr[i]);
//        }
//        int num;
//        printf("Enter a positive integer: ");
//        scanf("%d", &num);
//        printf("Sum of digits of %d = %d", num, sumOfDigits(num));
//
//    }
//
//    return 0;
//}

//Binary search using recursion

//int binarySearchRecursive(int arr[], int low, int high, int key) {
//    if (low <= high) {
//        int mid = low + (high - low) / 2;
//        printf("%d,",mid);
//
//        // If the key is present at the middle
//        if (arr[mid] == key) {
//            return mid;
//        }
//
//        // If the key is smaller than the middle element, search in the left subarray
//        if (arr[mid] > key) {
//            return binarySearchRecursive(arr, low, mid - 1, key);
//        }
//
//        // If the key is larger than the middle element, search in the right subarray
//        return binarySearchRecursive(arr, mid + 1, high, key);
//    }
//
//    // Key is not present in the array
//    return -1;
//}
//
//int main() {
//    int size, key;
//
//    // Input size of the array
//    printf("Enter the size of the sorted array: ");
//    scanf("%d", &size);
//
//    int arr[size];
//
//    // Input sorted array elements
//    printf("Enter the elements of the sorted array in ascending order:\n");
//    for (int i = 0; i < size; i++) {
//        scanf("%d", &arr[i]);
//    }
//
//    // Input the key to be searched
//    printf("Enter the key to be searched: ");
//    scanf("%d", &key);
//
//    // Call the recursive binary search function
//    int result = binarySearchRecursive(arr, 0, size - 1, key);
//
//    // Display the result
//    if (result != -1) {
//        printf("Key %d found at index %d.\n", key, result);
//    } else {
//        printf("Key %d not found in the array.\n", key);
//    }
//
//    return 0;
//}


#include <stdio.h>

//#define MAX_VERTICES 100
//
//// Function to perform topological sorting
//void topologicalSort(int numVertices, int adjMatrix[MAX_VERTICES][MAX_VERTICES]) {
//    int inDegree[MAX_VERTICES] = {0};
//    int visited[MAX_VERTICES] = {0};
//    int stack[MAX_VERTICES];
//    int stackIndex = 0;
//
//    // Calculate in-degrees
//    for (int i = 0; i < numVertices; i++) {
//        for (int j = 0; j < numVertices; j++) {
//            if (adjMatrix[i][j] == 1) {
//                inDegree[j]++;
//            }
//        }
//    }
//
//    // Perform topological sort using Kahn's algorithm
//    for (int i = 0; i < numVertices; i++) {
//        for (int j = 0; j < numVertices; j++) {
//            if (!visited[j] && inDegree[j] == 0) {
//                visited[j] = 1;
//                stack[stackIndex++] = j;
//
//                // Reduce in-degree of adjacent vertices
//                for (int k = 0; k < numVertices; k++) {
//                    if (adjMatrix[j][k] == 1) {
//                        inDegree[k]--;
//                    }
//                }
//            }
//        }
//    }
//
//    // Print the topological order
//    printf("Topological Order: ");
//    for (int i = stackIndex - 1; i >= 0; i--) {
//        printf("%d ", stack[i]);
//    }
//}
//
//int main() {
//    int numVertices;
//
//    // Input size of the graph
//    printf("Enter the number of vertices: ");
//    scanf("%d", &numVertices);
//
//    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
//
//    // Input the adjacency matrix
//    printf("Enter the adjacency matrix (1 for edge, 0 for no edge):\n");
//    for (int i = 0; i < numVertices; i++) {
//        for (int j = 0; j < numVertices; j++) {
//            scanf("%d", &adjMatrix[i][j]);
//        }
//    }
//
//    // Perform topological sort
//    topologicalSort(numVertices, adjMatrix);
//
//    return 0;
//}

#include <stdio.h>
#include <limits.h>
//
//// Function to find the minimum number of coins required
//int minCoins(int coins[], int numCoins, int amount) {
//    // Create a table to store results of subproblems
//    int dp[amount + 1];
//
//    // Initialize all table entries to a large value (INT_MAX)
//    for (int i = 0; i <= amount; i++) {
//        dp[i] = INT_MAX;
//    }
//
//    // Base case: The minimum number of coins required to make change for 0 is 0
//    dp[0] = 0;
//
//    // Iterate over each coin and update the table
//    for (int i = 0; i < numCoins; i++) {
//        for (int j = coins[i]; j <= amount; j++) {
//            // Check if using the current coin reduces the number of coins
//            if (dp[j - coins[i]] != INT_MAX && dp[j - coins[i]] + 1 < dp[j]) {
//                dp[j] = dp[j - coins[i]] + 1;
//            }
//        }
//    }
//
//    // The final result is stored in the last entry of the table
//    return dp[amount] == INT_MAX ? -1 : dp[amount];
//}


//int main() {
//    int numCoins, amount;
//
//    // Input the number of coins
//    printf("Enter the number of coins: ");
//    scanf("%d", &numCoins);
//
//    int coins[numCoins];
//
//    // Input the denominations of coins
//    printf("Enter the denominations of coins:\n");
//    for (int i = 0; i < numCoins; i++) {
//        scanf("%d", &coins[i]);
//    }
//
//    // Input the target amount
//    printf("Enter the target amount: ");
//    scanf("%d", &amount);
//
//    // Find and print the minimum number of coins required
//    int minCount = minCoins(coins, numCoins, amount);
//
//    if (minCount == -1) {
//        printf("It is not possible to make change for the given amount.\n");
//    } else {
//        printf("Minimum number of coins required: %d\n", minCount);
//    }
//
//    return 0;
//}

#include <stdio.h>
#include <limits.h>

//#define V 6  // Number of vertices
//
//// Function to find the vertex with the minimum distance value
//int minDistance(int dist[], int visited[]) {
//    int min = INT_MAX, min_index;
//
//    for (int v = 0; v < V; v++) {
//        if (!visited[v] && dist[v] < min) {
//            min = dist[v];
//            min_index = v;
//        }
//    }
//
//    return min_index;
//}
//
//// Function to print the solution
//void printSolution(int dist[]) {
//    printf("Vertex   Distance from Source\n");
//    for (int i = 0; i < V; i++) {
//        printf("%d \t\t %d\n", i, dist[i]);
//    }
//}
//
//// Function to implement Dijkstra's algorithm
//void dijkstra(int graph[V][V], int src) {
//    int dist[V];     // The output array dist[i] holds the shortest distance from src to i
//    int visited[V];  // visited[i] is true if vertex i is included in the shortest path tree or the shortest distance from src to i is finalized
//
//    // Initialize all distances as INFINITE and visited[] as false
//    for (int i = 0; i < V; i++) {
//        dist[i] = INT_MAX;
//        visited[i] = 0;
//    }
//
//    // Distance from the source vertex to itself is always 0
//    dist[src] = 0;
//
//    // Find the shortest path for all vertices
//    for (int count = 0; count < V - 1; count++) {
//        // Pick the minimum distance vertex from the set of vertices not yet processed
//        int u = minDistance(dist, visited);
//
//        // Mark the picked vertex as visited
//        visited[u] = 1;
//
//        // Update the distance value of the adjacent vertices of the picked vertex
//        for (int v = 0; v < V; v++) {
//            if (!visited[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v]) {
//                dist[v] = dist[u] + graph[u][v];
//            }
//        }
//    }
//
//    // Print the constructed distance array
//    printSolution(dist);
//}
//
//int main() {
//    int graph[V][V];
//
//    // Input the adjacency matrix
//    printf("Enter the adjacency matrix:\n");
//    for (int i = 0; i < V; i++) {
//        for (int j = 0; j < V; j++) {
//            scanf("%d", &graph[i][j]);
//        }
//    }
//
//    int src;
//
//    // Input the source vertex
//    printf("Enter the source vertex: ");
//    scanf("%d", &src);
//
//    // Perform Dijkstra's algorithm
//    dijkstra(graph, src);
//
//    return 0;
//}

#include <stdio.h>
#include <stdbool.h>

#define N 8

// Function to print the chessboard
void printSolution(int board[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
}

// Function to check if it's safe to place a queen at board[row][col]
bool isSafe(int board[N][N], int row, int col) {
    // Check left side of the current row
    for (int i = 0; i < col; i++)
        if (board[row][i])
            return false;

    // Check upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
        if (board[i][j])
            return false;

    // Check lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
        if (board[i][j])
            return false;

    return true;
}

// Recursive function to solve the N-Queens problem
bool solveNQueensUtil(int board[N][N], int col) {
    if (col >= N)
        return true;

    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;

            if (solveNQueensUtil(board, col + 1))
                return true;

            board[i][col] = 0; // Backtrack if placing a queen at (i, col) doesn't lead to a solution
        }
    }

    return false; // No solution found for this column
}

// Function to solve the N-Queens problem and print the solution
void solveNQueens() {
    int board[N][N];

    // Initialize the chessboard
    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            board[i][j] = 0;

    if (!solveNQueensUtil(board, 0)) {
        printf("Solution does not exist.\n");
        return;
    }

    printf("Solution:\n");
    printSolution(board);
}

int main() {
    solveNQueens();

    return 0;
}






