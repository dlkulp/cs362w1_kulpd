//#include "dominion.h"
//#include "dominion_helpers.h"
//#include <stdio.h>
//#include "rngs.h"
//#include <stdlib.h>
//
//// Test isGameOver()
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
//	// --- Test function ---
//	printf("Testing isGameOver(): \n");
//
//	// Test 1
//	printf("  Testing no end state: \n");
//	if (!isGameOver(p))
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	// Test 2
//	printf("  Testing no province pile empty: \n");
//	p->supplyCount[province] = 0; // Mess with stuff
//	if (isGameOver(p))
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	// Test 3
//	printf("  Testing 3 supply piles empty: \n");
//	p->supplyCount[province] = 8; // Back to original for 2 players
//	p->supplyCount[4] = 0; p->supplyCount[10] = 0; p->supplyCount[20] = 0; // Mess with stuff
//	if (isGameOver(p))
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	return 0;
//}