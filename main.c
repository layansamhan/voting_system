#include <stdio.h>
#include <string.h>

#define CANDIDATES 4
#define NAME_LENGTH 50

char candidateNames[CANDIDATES][NAME_LENGTH];
int votes[CANDIDATES] = {0}; // Initialize votes to 0

void inputCandidates() {
    printf("Enter names of %d candidates:\n", CANDIDATES);
    for (int i = 0; i < CANDIDATES; i++) {
        printf("Candidate %d: ", i + 1);
        scanf(" %[^\n]%*c", candidateNames[i]); // Read full line with spaces
    }
}

void castVote() {
    int choice;

    printf("\nVote for your candidate:\n");
    for (int i = 0; i < CANDIDATES; i++) {
        printf("%d. %s\n", i + 1, candidateNames[i]);
    }
    printf("Enter your choice (1-%d): ", CANDIDATES);
    scanf("%d", &choice);

    if (choice >= 1 && choice <= CANDIDATES) {
        votes[choice - 1]++;
        printf("Thank you for voting for %s!\n", candidateNames[choice - 1]);
    } else {
        printf("Invalid choice. Vote not counted.\n");
    }
}

void displayResults() {
    printf("\nVoting Results:\n");
    for (int i = 0; i < CANDIDATES; i++) {
        printf("%s: %d votes\n", candidateNames[i], votes[i]);
    }
}

void findWinner() {
    int maxVotes = 0;
    int winnerIndex = -1;
    int DRAW = 0;

    // Find maximum votes
    for (int i = 0; i < CANDIDATES; i++) {
        if (votes[i] > maxVotes) {
            maxVotes = votes[i];
            winnerIndex = i;
        }
    }

    // Check if there's a DRAW
    for (int i = 0; i < CANDIDATES; i++) {
        if (i != winnerIndex && votes[i] == maxVotes) {
            DRAW = 1;
            break;
        }
    }

    if (maxVotes == 0) {
        printf("\nNo votes were cast.\n");
    } else if (DRAW) {
        printf("\nIt's a draw! THERE IS NO WINNER \n");
    } else {
        printf("\nWinner is %s with %d votes!\n", candidateNames[winnerIndex], votes[winnerIndex]);
    }
}

int main() {
    int voters, i;

    inputCandidates(); // Input candidate names

    printf("\nEnter number of voters: ");
    scanf("%d", &voters);

    for (i = 0; i < voters; i++) {
        printf("\nVoter %d:\n", i + 1);
        castVote();
    }

    displayResults();
    findWinner();

    return 0;
}



