
int calc_SA_tower(int num);
int connected_faces(int **grid, int rows, int *comls, int i, int j);
int surfaceArea(int** grid, int gridSize, int* gridColSize){
    int res = 0;
    for (int i = 0; i < gridSize; i++)
    {
        for (int j = 0; j < *gridColSize; j++)
        {
            res += calc_SA_tower(grid[i][j]) - connected_faces(grid, gridSize, gridColSize, i, j);
        }
    }
    return res;
}

int calc_SA_tower(int num)
{
    return (num * 6) - (((num - 1) > 0 ? (num - 1) : 0) * 2);
}

int connected_faces(int **grid, int rows, int *comls, int i, int j)
{
    //horizontal
    int mod_i = i, mod_j = j, faces_sum = 0;

    if (mod_i < rows - 1) //down
    {
        if (grid[++mod_i][j] > grid[i][j])
            faces_sum += grid[i][j];
        else
            faces_sum += grid[mod_i][j];

        mod_i = mod_i - 2;
    }
    else
        mod_i--;

    if (mod_i >= 0) //up
    {
        if (grid[mod_i][j] > grid[i][j])
            faces_sum += grid[i][j];
        else
            faces_sum += grid[mod_i][j];
    }

    if (mod_j < *comls - 1) //right
    {
        if (grid[i][++mod_j] > grid[i][j])
            faces_sum += grid[i][j];
        else
            faces_sum += grid[i][mod_j];

        mod_j = mod_j - 2;
    }
    else
        mod_j--;

    if (mod_j >= 0) //left
    {
        if (grid[i][mod_j] > grid[i][j])
            faces_sum += grid[i][j];
        else
            faces_sum += grid[i][mod_j];
    }

    return faces_sum;
}