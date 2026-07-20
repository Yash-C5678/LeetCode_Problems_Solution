/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) {
    int rows = gridSize;
    int cols = gridColSize[0];
    int total = rows * cols;

    k %= total;

    int **ans = (int**)malloc(rows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(rows * sizeof(int));

    for (int i = 0; i < rows; i++) {
        ans[i] = (int*)malloc(cols * sizeof(int));
        (*returnColumnSizes)[i] = cols;
    }

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int oldIndex = i * cols + j;
            int newIndex = (oldIndex + k) % total;

            ans[newIndex / cols][newIndex % cols] = grid[i][j];
        }
    }

    *returnSize = rows;
    return ans;
}