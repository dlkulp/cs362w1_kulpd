//#include "dominion.h"
//#include "dominion_helpers.h"
//#include <stdio.h>
//#include "rngs.h"
//#include <stdlib.h>
//
//// Testing endTurn()
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
//	printf("Testing endTurn(): \n");
//	
//	// Test 1
//	printf("  Testing turn changed: \n");
//	endTurn(p);
//	if (whoseTurn(p) == 1)
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	// Test 2
//	printf("  Testing player 0 has empty hand and player 1 has full hand: \n");
//	if (whoseTurn(p) == 1 && p->handCount[0] == 0 && p->handCount[1] == 5)
//		printf("    PASSED\n");
//	else
//		printf("    FAILED\n");
//
//	return 0;
//}