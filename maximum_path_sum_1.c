int _max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int function(int** triangle, int length, int x, int y)
{
    if (y == length -2)
    {
        return _max(triangle[y + 1][x], triangle[y + 1][x + 1]) + triangle[y][x];
    }
    else
    {
        int a = function(triangle, length, x, y + 1);
        int b = function(triangle, length, x + 1, y + 1);

        return _max(a, b) + triangle[y][x];
    }
}

int maximum_path_sum_1(int** triangle, int length)
{
    int sum = function(triangle, length, 0, 0);

    return sum;
}
