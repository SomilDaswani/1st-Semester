#include <stdio.h>
#include <time.h>

int main() {
  clock_t start, end;
  double elapsed;

  printf("Press enter to start the stopwatch\n");
  getchar();
  start = clock();

  printf("Press enter to stop the stopwatch\n");
  getchar();
  end = clock();

  elapsed = (double)(end - start) / CLOCKS_PER_SEC;
  printf("Elapsed time: %.2lf seconds\n", elapsed);

  return 0;
}
