#include "dominion.h"
#include "dominion_helpers.h"
#include <stdio.h>
#include "rngs.h"
#include <stdlib.h>

// Test feast
int main() {
	// --- Set up stuff ---
	struct gameState G;
	struct gameState *p = &G;

	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
		sea_hag, tribute, smithy };

	// Make game with 2 players
	initializeGame(2, k, 2, p);

	int discard = p->discardCount[0];

	// --- Test function ---
	printf("Testing feast: \n");

	// Test 1
	printf("  Testing buy cheaper card: \n");
	cardEffect(feast, estate, 0, 0, p, 0, 0);
	if (p->discardCount[0] > discard)
		printf("    PASSED\n");
	else
		printf("    FAILED\n");

	// Test 2
	printf("  Testing buy expensive card: \n");
	discard++;
	printf("    ");
	cardEffect(feast, province, 0, 0, p, 0, 0);
	if (p->discardCount[0] == discard)
		printf("    PASSED\n");
	else
		printf("    FAILED\n");
	
	return 0;
}