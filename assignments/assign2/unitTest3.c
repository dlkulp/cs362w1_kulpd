//#include "dominion.h"
//#include "dominion_helpers.h"
//#include <stdio.h>
//#include "rngs.h"
//#include <stdlib.h>
//
//// Test drawCard()
//int main() {
//	// --- Set up stuff ---
//	struct gameState G;
//	struct gameState *p = &G;
//
//	int k[10] = { adventurer, gardens, embargo, village, minion, mine, cutpurse,
//		sea_hag, tribute, smithy };
//
//	// Make game with 2 players
//	initializeGame(2, k, 2, p);
//
//	int deckCount = p->deckCount[0];
//	int handCount = p->handCount[0];
//
//	// --- Test function ---
//	printf("Testing drawCard(): \n");
//
//	// Test 1
//	printf("  Testing deck smaller: \n");
//	drawCard(0, p);
//	if (deckCount > p->deckCount[0])
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	// Test 2
//	printf("  Testing hand bigger: \n");
//	if (handCount < p->handCount[0])
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	return 0;
//}