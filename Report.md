## Minimax Algorithm:

The provided code contains an implementation of the Minimax algorithm for playing Connect Four. The Minimax algorithm is a decision-making algorithm commonly used in two-player games with perfect information. The algorithm explores the game tree by recursively simulating all possible moves until a specified depth is reached. It then evaluates each leaf node using a scoring function and backpropagates the scores to determine the optimal move for the current player.

### Key Components:

1. **Terminal Condition:**
   - The algorithm checks for the terminal condition when the specified depth (`d`) is equal to zero. In this case, it returns the evaluation score of the current game state.

2. **Player's Turn:**
   - The algorithm differentiates between the maximizing player (computer) and the minimizing player (human). The maximizing player aims to choose moves that lead to the highest score, while the minimizing player aims to choose moves that lead to the lowest score.

3. **Move Exploration:**
   - The code iterates over all possible moves in each column, considering only non-full columns. For each valid move, it creates a new board state and recursively calls the Minimax function to evaluate the resulting game state at a lower depth.

4. **Pruning (Alpha-Beta Pruning):**
   - The algorithm incorporates alpha-beta pruning to optimize the search space. It maintains alpha (the best value for the maximizing player) and beta (the best value for the minimizing player) to eliminate unnecessary branches in the game tree, reducing the number of nodes explored.

## Expected Minimax Algorithm:

The code also includes an extension of the Minimax algorithm known as the Expected Minimax algorithm. This extension introduces probabilistic elements by considering the likelihood of a disc falling into each column. The probabilities are provided in the `column_probabilities` vector.

### Key Aspects:

1. **Probability Consideration:**
   - When `is_prob` is true, the algorithm calculates the expected score by considering the probabilities associated with the current column and its adjacent columns.

2. **Move Exploration with Probabilities:**
   - The algorithm explores possible moves based on the probabilities of the disc falling into the current column and its adjacent columns (left and right). It calculates the expected score by considering the weighted average of scores from different possible outcomes.

3. **Probabilistic Evaluation:**
   - The evaluation function takes into account the probabilities of different outcomes and calculates the expected score for a given move. The weighted sum of scores from different possible outcomes is used as the evaluation score for probabilistic moves.

4. **Pruning in Probabilistic Moves:**
   - Similar to the original Minimax algorithm, alpha-beta pruning is applied to probabilistic moves to optimize the search space.

## Conclusion:

The Minimax algorithm and its Expected Minimax extension are powerful techniques for decision-making in deterministic and probabilistic game environments, respectively. The code provided showcases the implementation of both algorithms, demonstrating their ability to make strategic decisions in the context of Connect Four.
