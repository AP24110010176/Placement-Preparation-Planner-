#include <stdio.h>

#define MAX 100

// Structure for topic
typedef struct {
    char name[50];
    int time;
    int score;
} Topic;

// ----------------------
// DP (Knapsack)
// ----------------------
int max(int a, int b) {
    return (a > b) ? a : b;
}

void knapsackDP(Topic topics[], int n, int maxTime) {
    int dp[n+1][maxTime+1];

    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= maxTime; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (topics[i-1].time <= w)
                dp[i][w] = max(
                    topics[i-1].score + dp[i-1][w - topics[i-1].time],
                    dp[i-1][w]
                );
            else
                dp[i][w] = dp[i-1][w];
        }
    }

    printf("\nMaximum Score using DP: %d\n", dp[n][maxTime]);
}

// ----------------------
// Greedy (Ratio based)
// ----------------------
void greedy(Topic topics[], int n, int maxTime) {
    float ratio[MAX];

    for (int i = 0; i < n; i++) {
        ratio[i] = (float)topics[i].score / topics[i].time;
    }

    int used[MAX] = {0};
    int totalScore = 0;

    while (maxTime > 0) {
        int idx = -1;
        float best = 0;

        for (int i = 0; i < n; i++) {
            if (!used[i] && ratio[i] > best) {
                best = ratio[i];
                idx = i;
            }
        }

        if (idx == -1) break;

        if (topics[idx].time <= maxTime) {
            maxTime -= topics[idx].time;
            totalScore += topics[idx].score;
            used[idx] = 1;
        } else {
            break;
        }
    }

    printf("Total Score using Greedy: %d\n", totalScore);
}

// ----------------------
// MAIN
// ----------------------
int main() {
    int n, maxTime;

    printf("Enter number of topics: ");
    scanf("%d", &n);

    Topic topics[MAX];

    for (int i = 0; i < n; i++) {
        printf("\nTopic %d name: ", i+1);
        scanf("%s", topics[i].name);

        printf("Time required (hours): ");
        scanf("%d", &topics[i].time);

        printf("Score (importance): ");
        scanf("%d", &topics[i].score);
    }

    printf("\nEnter total available time: ");
    scanf("%d", &maxTime);

    printf("\n--- RESULTS ---\n");

    knapsackDP(topics, n, maxTime);
    greedy(topics, n, maxTime);

    return 0;
}