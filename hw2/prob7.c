// /* Addition that saturates to TMin or TMax */
// int saturating_add(int x, int y);
// Instead of overflowing the way normal two’s-complement addition does, saturating
// addition returns TMax when there would be positive overflow, and TMin
// when there would be negative overflow. Saturating arithmetic is commonly used
// in programs that perform digital signal processing.
// Your function should follow the bit-level integer coding rules (page 164).
#include "limits.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

}

int saturating_add(int x, int y){
    //Recall the graph that Sohn drew on the board with pos ovflw
    //and neg ovflw. Look at the same diagram, but 3D, in the textbook.
    //Test for x and y conditions that result in ovflw and redefine the sum 
    //to be TMax for pos ovlfw and TMin for neg ovflw
    
}

