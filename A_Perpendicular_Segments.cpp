#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

// Function to check if a queen can be placed on board[x][y]
bool issafequeen(vector<vector<ll>> &board, ll x, ll y, ll n)
{
    // Check the same column
    for (ll row = 0; row < x; row++)
    {
        if (board[row][y] == 1)
        {
            return false;
        }
    }

    // Check left diagonal
    ll row = x;
    ll col = y;
    while (row >= 0 && col >= 0)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // Check right diagonal
    row = x;
    col = y;
    while (row >= 0 && col < n)
    {
        if (board[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }
    
    return true;
}

// Function to solve N-Queens problem
bool nqueen(vector<vector<ll>> &board, ll x, ll n)
{
    if (x >= n) // All queens are placed
    {
        return true;
    }

    for (ll col = 0; col < n; col++) // Try placing queen in each column of current row
    {
        if (issafequeen(board, x, col, n))
        {
            board[x][col] = 1; // Place queen

            // Recursively place queens in the next row
            if (nqueen(board, x + 1, n))
            {
                return true;
            }

            // Backtrack if no solution found
            board[x][col] = 0;
        }
    }

    return false;
}

// Function to print the board
void printBoard(const vector<vector<ll>> &board, ll n)
{
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << (board[i][j] ? "Q " : ". ");
        }
        cout << endl;
    }
}

int main()
{
    ll n;
    cout << "Enter the value of n for the N-Queens problem: "<<endl;
    cin >> n;

    vector<vector<ll>> board(n, vector<ll>(n, 0));

    if (nqueen(board, 0, n))
    {
        printBoard(board, n);
    }
    else
    {
        cout << "No solution exists for " << n << "-Queens problem." << endl;
    }

    return 0;
}
