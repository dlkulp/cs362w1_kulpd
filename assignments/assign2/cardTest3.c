#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

// Test village
int main() {
	// --- Set up stuff ---
	struct gameState G;
	struct gameState *p = &G;

	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	// Make game with 2 players
	initializeGame(2, k, 2, p);
	
	int actions = p->numActions;
	int hand = p->handCount[0];
	int played = p->playedCardCount;

	// --- Test function ---
	printf("Testing village: \n");

	// Test 1
	printf("  Testing gain 2 actions: \n");
	cardEffect(village, 0, 0, 0, p, 0, 0);
	if (p->numActions - 2 == actions)
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 2
	printf("  Testing hand has same number: \n");
	if (p->playedCardCount > played && p->handCount[0] == hand)
		printf("    PASSED\n\n");
	else
		printf("    FAILED\n\n");

	return 0;
}