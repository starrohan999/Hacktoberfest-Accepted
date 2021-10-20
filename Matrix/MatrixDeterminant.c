// Matrix Determinant

int det = 0;
int submatrix[10][10];
if (n == 2)
 return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
    return ((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
else {
   for (int x = 0; x < n; x++) {
     int subi = 0;
     for (int i = 1; i < n; i++) {
       int subj = 0;
       for (int j = 0; j < n; j++) {
          if (j == x)
           continue;
           submatrix[subi][subj] = matrix[i][j];
           subj++;
    for (int x = 0; x < n; x++) {
        int subi = 0;
        for (int i = 1; i < n; i++) {
            int subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x)
                    continue;
                    submatrix[subi][subj] = matrix[i][j];
                    subj++;
            }
            subi++;
         }

int main() {
   int n, i, j;
   int matrix[10][10];
   printf("Enter the size of matrix:\n";
   scanf("%d",&n);
   printf("Enter the elements of matrix:\n";
   for (i = 0; i < n; i++)
   for (j = 0; j < n; j++)
   scanf("%d", &matrix[i][j])
   printf("The entered matrix is: \t");
   for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
      printf("%d   ", matrix[i][j]);
      printf("\n");
int n, i, j;
int matrix[10][10];
printf("Enter the size of matrix:\n";
scanf("%d",&n);
printf("Enter the elements of matrix:\n";
for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
        scanf("%d", &matrix[i][j])
    printf("The entered matrix is: \t");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d   ", matrix[i][j]);
        printf("\n");
   }
printf("Determinant of the matrix is %d ", determinant(matrix, n));
return 0;
