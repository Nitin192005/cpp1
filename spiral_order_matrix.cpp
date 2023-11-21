// spiral order printing
int row_start = 0, row_end = n-1, column_start = 0, column_end = m-1;
while(row_start <= row_end && column_start <= column_end)
{
// for row start
for (int col = column_start; col <= column_end; col++) cout<<< a[row_start][col] <<" ";
row_start++;
// for column end
for (int row row start; row <<= row_end; ow++) cout<< a[row][column_end]
column_end--;
// for row end
for(int col column_end; col >=
cout<<< a[row_end] [col] <<" ";
row_end--;
// for column_start
Apni K
column_start; col--)
for(int row = row_end; row>= row_start; row--)
cout<<<< a[row][column_start] <<<" ";
column_start++;