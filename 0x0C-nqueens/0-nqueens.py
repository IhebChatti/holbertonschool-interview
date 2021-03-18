#!/usr/bin/python3
"""[N Queens]
"""
import sys


if __name__ == "__main__":
    if len(sys.argv) != 2:
        print('Usage: nqueens N')
        exit(1)
    try:
        N = int(sys.argv[1])

    except ValueError:
        print("N must be a number")
        exit(1)

    if N < 4:
        print("N must be at least 4")
        exit(1)

    k = 1

    def isSafe(board, row, col):
        """[isSafe]
        """
        for i in range(col):
            if board[row][i] == 1:
                return False
        for i, j in zip(range(row, -1, -1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
        for i, j in zip(range(row, N, 1), range(col, -1, -1)):
            if board[i][j] == 1:
                return False
        return True

    def print_solution(board):
        """[print_solution]
        """
        queens = []
        global k
        k = k + 1
        for i in range(N):
            for j in range(N):
                if board[i][j] == 1:
                    queens.append([i, j])
        print(queens)

    def solveNQUtil(board, col):
        """[solveNQUtil]
        """
        if col == N:
            print_solution(board)
            return True
        res = False
        for i in range(N):
            if isSafe(board, i, col):
                board[i][col] = 1
                res = solveNQUtil(board, col + 1) or res
                board[i][col] = 0
        return res

    def solveNQ():
        """[solveNQ]
        """
        board = [[0 for j in range(N)] for i in range(N)]

        if solveNQUtil(board, 0) is False:
            pass
            return False
        return True

solveNQ()
