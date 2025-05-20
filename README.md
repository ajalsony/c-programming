



### 📝 `README.md` for GitHub

```markdown
# 🧠 Process Scheduling Simulator (FCFS)

This C program simulates **First Come First Serve (FCFS)** process scheduling. It takes process details like name, arrival time, and burst time, then calculates:

- Completion Time (CT)
- Waiting Time (WT)
- Turnaround Time (TT)

## 💡 How It Works

- Processes are sorted by **arrival time**.
- The scheduler runs each process in order.
- CPU stays idle if no process has arrived yet.
- Completion, turnaround, and waiting times are calculated.

## 📋 Sample Output

```

Enter the number of processes: 3
Enter process name, arrival time, and burst time: P1 0 5
Enter process name, arrival time, and burst time: P2 2 3
Enter process name, arrival time, and burst time: P3 4 1

Process  AT  BT  CT  WT  TT
P1       0   5   5   0   5
P2       2   3   8   3   6
P3       4   1   9   4   5

Average Waiting Time: 2.33
Average Turnaround Time: 5.33

````

## ✅ Features

- Arrival time and burst time input
- First Come First Serve (FCFS) logic
- Average waiting and turnaround time calculation
- Displays process execution timeline

## 🚀 To Run

```bash
gcc scheduling.c -o scheduling
./scheduling
````

