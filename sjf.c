#include <stdio.h>
#include <string.h>

struct process {
    char name[20];
    int at, bt, ct, wt, tt, status;
} p[20], temp;

struct done {
    char name[20];
    int st, ct;
} d[20];

int main() {
    int i, j, n;
    float twt = 0.0, ttt = 0.0;

    printf("Enter the number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter process name, arrival time, and burst time: ");
        scanf("%s%d%d", p[i].name, &p[i].at, &p[i].bt);
        p[i].status = 0; 
    }

  
    for(i = 0; i < n-1; i++) {
        for(j = i+1; j < n; j++) {
            if(p[i].at > p[j].at) {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    int current_time = 0;

    for(i = 0; i < n; i++) {
        if(current_time < p[i].at) {
            current_time = p[i].at; 
        }
        p[i].wt = current_time - p[i].at;
        p[i].ct = current_time + p[i].bt;
        p[i].tt = p[i].ct - p[i].at;
        p[i].status = 1;
        current_time = p[i].ct;

        d[i].st = current_time - p[i].bt;
        d[i].ct = current_time;
        strcpy(d[i].name, p[i].name);

        twt += p[i].wt;
        ttt += p[i].tt;
    }

    printf("\nProcess\tAT\tBT\tCT\tWT\tTT\n");
    for(i = 0; i < n; i++) {
        printf("%s\t%d\t%d\t%d\t%d\t%d\n", p[i].name, p[i].at, p[i].bt, p[i].ct, p[i].wt, p[i].tt);
    }

    printf("\nAverage Waiting Time: %.2f", twt / n);
    printf("\nAverage Turnaround Time: %.2f\n", ttt / n);

    return 0;
}
