#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

// Test adventurer
int main() {
	// --- Set up stuff ---
	struct gameState G;
	struct gameState *p = &G;

	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	// Make game with 2 players
	initializeGame(2, k, 2, p);

	int i = 0;
	int treasures = 0;
	int discard = p->discardCount[0];

	// --- Test function ---
	printf("Testing adventurerCard: \n");

	// Test 1
	printf("  Testing added 2 treasures: \n");
	cardEffect(adventurer, 0, 0, 0, p, 0, 0);

	for (; i < p->handCount[0]; i++)
		if (p->hand[0][i] == gold || p->hand[0][1] == silver || p->hand[0][1] == copper)
			treasures++;

	if (treasures >= 2)
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 2
	printf("  Testing proper cards discarded: \n");
	if (discard < p->discardCount[0])
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	return 0;
}