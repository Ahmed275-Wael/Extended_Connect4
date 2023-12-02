void printGameTree(vector<vector<int>>& board, unsigned int depth, float alpha, float beta, unsigned int player) {
    if (depth == 0 || winningMove(board, COMPUTER) || winningMove(board, PLAYER)) {
        cout << "Depth: " << depth << " Score: " << tabScore(board, COMPUTER)[0] - tabScore(board, PLAYER)[0] << endl;
        // printBoard(board);  // Uncomment if you want to print the board at each step
        return;
    }

    if (player == COMPUTER) {
        for (unsigned int c = 0; c < NUM_COL; c++) {
            if (board[NUM_ROW - 1][c] == 0) {
                vector<vector<int>> newBoard = copyBoard(board);
                makeMove(newBoard, c, player);
                float score = miniMax(newBoard, depth - 1, alpha, beta, PLAYER)[0];

                cout << "Depth: " << depth << " Score: " << score << endl;
                // printBoard(newBoard);  // Uncomment if you want to print the board at each step

                alpha = max(alpha, score);
                if (alpha >= beta) {
                    break;
                }
            }
        }
    } else {
        for (unsigned int c = 0; c < NUM_COL; c++) {
            if (board[NUM_ROW - 1][c] == 0) {
                vector<vector<int>> newBoard = copyBoard(board);
                makeMove(newBoard, c, player);
                float score = miniMax(newBoard, depth - 1, alpha, beta, COMPUTER)[0];

                cout << "Depth: " << depth << " Score: " << score << endl;
                // printBoard(newBoard);  // Uncomment if you want to print the board at each step

                beta = min(beta, score);
                if (alpha >= beta) {
                    break;
                }
            }
        }
    }
}