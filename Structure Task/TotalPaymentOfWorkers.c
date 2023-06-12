#include <stdio.h>

struct worker {
    int worker_id;
    int daily_wage;
    int working_days;
};

void get_worker_details(struct worker *w) {
    printf("Enter worker ID: ");
    scanf("%d", &w->worker_id);
    printf("Enter daily wage: ");
    scanf("%d", &w->daily_wage);
    printf("Enter working days: ");
    scanf("%d", &w->working_days);
}

int calculate_payment(struct worker w) {
    return w.daily_wage * w.working_days;
}

int main() {
    struct worker worker1, worker2;
    printf("Enter details of worker 1:\n");
    get_worker_details(&worker1);
    printf("Enter details of worker 2:\n");
    get_worker_details(&worker2);

    int total_payment = calculate_payment(worker1) + calculate_payment(worker2);
    printf("Total payment: %d\n", total_payment);
    return 0;
}
