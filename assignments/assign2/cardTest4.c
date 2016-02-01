#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

// Test steward
int main() {
	// --- Set up stuff ---
	struct gameState G;
	struct gameState *p = &G;

	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	// Make game with 2 players
	initializeGame(2, k, 2, p);

	int hand = p->handCount[0];
	int coins = p->coins;
	int played = p->playedCardCount;

	// --- Test function ---
	printf("Testing steward: \n");

	// Test 1
	printf("  Testing gain cards choice: \n");
	cardEffect(steward, 1, 0, 0, p, 0, 0);
	if (hand + 1 == p->handCount[0])
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 2
	printf("  Testing coin choice: \n");
	cardEffect(steward, 2, 0, 0, p, 0, 0);
	if (coins + 2 == p->coins)
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 3
	printf("  Testing discard choice: \n");
	cardEffect(steward, 0, 0, 0, p, 0, 0);
	if (hand - 3 == p->handCount[0])
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 4
	printf("  Testing card played: \n");
	if (played < p->playedCardCount)
		printf("    PASSED\n\n");
	else
		printf("    FAILED\n\n");

	return 0;
}