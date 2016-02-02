#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

// Test discardCard()
int main() {
	// --- Set up stuff ---
	struct gameState G;
	struct gameState *p = &G;

	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	// Make game with 2 players
	initializeGame(2, k, 2, p);

	int handCount = p->handCount[0];

	// --- Test function ---
	printf("Testing discardCard(): \n");

	// Test 1
	printf("  Testing discard count: \n");
	discardCard(0, 0, p, 1);
	if (handCount > p->handCount[0])
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	return 0;
}