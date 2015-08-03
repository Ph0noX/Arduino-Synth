
#include <avr/pgmspace.h>
#include <Synth.h>

// Super Mario Bros. theme (Overworld)

// TRACK 1
const byte track1_notes[] PROGMEM = { 
	76, 128, 76, 128, 76, 128, 72, 128, 76, 128, 79, 128, 72, 128, 67, 128, 
	64, 128, 69, 128, 71, 128, 70, 128, 69, 128, 67, 128, 76, 128, 79, 128, 
	81, 128, 77, 128, 79, 128, 76, 128, 72, 128, 74, 128, 71, 128, 72, 128, 
	67, 128, 64, 128, 69, 128, 71, 128, 70, 128, 69, 128, 67, 128, 76, 128, 
	79, 128, 81, 128, 77, 128, 79, 128, 76, 128, 72, 128, 74, 128, 71, 128, 
	79, 128, 78, 128, 77, 128, 75, 128, 76, 128, 68, 128, 69, 128, 72, 128, 
	69, 128, 72, 128, 74, 128, 79, 128, 78, 128, 77, 128, 75, 128, 76, 128, 
	84, 128, 84, 128, 84, 128, 79, 128, 78, 128, 77, 128, 75, 128, 76, 128, 
	68, 128, 69, 128, 72, 128, 69, 128, 72, 128, 74, 128, 75, 128, 74, 128, 
	72, 128, 79, 128, 78, 128, 77, 128, 75, 128, 76, 128, 68, 128, 69, 128, 
	72, 128, 69, 128, 72, 128, 74, 128, 79, 128, 78, 128, 77, 128, 75, 128, 
	76, 128, 84, 128, 84, 128, 84, 128, 79, 128, 78, 128, 77, 128, 75, 128, 
	76, 128, 68, 128, 69, 128, 72, 128, 69, 128, 72, 128, 74, 128, 75, 128, 
	74, 128, 72, 128, 72, 128, 72, 128, 72, 128, 72, 128, 74, 128, 76, 128, 
	72, 128, 69, 128, 67, 128, 72, 128, 72, 128, 72, 128, 72, 128, 74, 128, 
	76, 128, 72, 128, 72, 128, 72, 128, 72, 128, 74, 128, 76, 128, 72, 128, 
	69, 128, 67, 128, 76, 128, 76, 128, 76, 128, 72, 128, 76, 128, 79, 128, 
	72, 128, 67, 128, 64, 128, 69, 128, 71, 128, 70, 128, 69, 128, 67, 128, 
	76, 128, 79, 128, 81, 128, 77, 128, 79, 128, 76, 128, 72, 128, 74, 128, 
	71, 128, 72, 128, 67, 128, 64, 128, 69, 128, 71, 128, 70, 128, 69, 128, 
	67, 128, 76, 128, 79, 128, 81, 128, 77, 128, 79, 128, 76, 128, 72, 128, 
	74, 128, 71, 128, 76, 128, 72, 128, 67, 128, 68, 128, 69, 128, 77, 128, 
	77, 128, 69, 128, 71, 128, 81, 128, 81, 128, 81, 128, 79, 128, 77, 128, 
	76, 128, 72, 128, 69, 128, 67, 128, 76, 128, 72, 128, 67, 128, 68, 128, 
	69, 128, 77, 128, 77, 128, 69, 128, 71, 128, 77, 128, 77, 128, 77, 128, 
	76, 128, 74, 128, 72, 128, 76, 128, 72, 128, 67, 128, 68, 128, 69, 128, 
	77, 128, 77, 128, 69, 128, 71, 128, 81, 128, 81, 128, 81, 128, 79, 128, 
	77, 128, 76, 128, 72, 128, 69, 128, 67, 128, 76, 128, 72, 128, 67, 128, 
	68, 128, 69, 128, 77, 128, 77, 128, 69, 128, 71, 128, 77, 128, 77, 128, 
	77, 128, 76, 128, 74, 128, 72, 128, 72, 128, 72, 128, 72, 128, 72, 128, 
	74, 128, 76, 128, 72, 128, 69, 128, 67, 128, 72, 128, 72, 128, 72, 128, 
	72, 128, 74, 128, 76, 128, 72, 128, 72, 128, 72, 128, 72, 128, 74, 128, 
	76, 128, 72, 128, 69, 128, 67, 128, 76, 128, 76, 128, 76, 128, 72, 128, 
	76, 128, 79, 128, 76, 128, 72, 128, 67, 128, 68, 128, 69, 128, 77, 128, 
	77, 128, 69, 128, 71, 128, 81, 128, 81, 128, 81, 128, 79, 128, 77, 128, 
	76, 128, 72, 128, 69, 128, 67, 128, 76, 128, 72, 128, 67, 128, 68, 128, 
	69, 128, 77, 128, 77, 128, 69, 128, 71, 128, 77, 128, 77, 128, 77, 128, 
	76, 128, 74, 128, 72, 128
};
const word track1_timeOffsets[] PROGMEM = { 
	0, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 176, 16, 56, 16, 
	56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 16, 16, 
	16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 56, 16, 
	56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 
	16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	104, 16, 8, 16, 8, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	32, 16, 8, 16, 8, 16, 56, 16, 8, 16, 8, 16, 8, 16, 32, 16, 
	32, 16, 32, 16, 8, 16, 128, 16, 8, 16, 8, 16, 8, 16, 32, 16, 
	32, 16, 8, 16, 8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 56, 16, 
	56, 16, 224, 16, 8, 16, 8, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 8, 16, 8, 16, 8, 16, 
	32, 16, 32, 16, 32, 16, 8, 16, 128, 16, 8, 16, 8, 16, 8, 16, 
	32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 
	56, 16, 56, 16, 176, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 200, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	176, 16, 56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 56, 16, 56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 
	32, 16, 16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 8, 16, 56, 16, 8, 16, 32, 16, 56, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 80, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
	16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 56, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 8, 16, 
	16, 16, 16, 16, 16, 16, 176, 16, 8, 16, 32, 16, 56, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 80, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
	16, 16, 16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	56, 16, 32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	8, 16, 16, 16, 16, 16, 16, 16, 176, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	32, 16, 8, 16, 8, 16, 200, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 32, 16, 176, 16, 8, 16, 32, 16, 56, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 80, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
	16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 56, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 8, 16, 
	16, 16, 16, 16, 16, 16
};
// TRACK 2
const byte track2_notes[] PROGMEM = { 
	66, 128, 66, 128, 66, 128, 66, 128, 66, 128, 71, 128, 67, 128, 64, 128, 
	60, 128, 55, 128, 60, 128, 62, 128, 61, 128, 60, 128, 60, 128, 67, 128, 
	71, 128, 72, 128, 69, 128, 71, 128, 69, 128, 64, 128, 65, 128, 62, 128, 
	64, 128, 60, 128, 55, 128, 60, 128, 62, 128, 61, 128, 60, 128, 60, 128, 
	67, 128, 71, 128, 72, 128, 69, 128, 71, 128, 69, 128, 64, 128, 65, 128, 
	62, 128, 76, 128, 75, 128, 74, 128, 71, 128, 72, 128, 64, 128, 65, 128, 
	67, 128, 60, 128, 64, 128, 65, 128, 76, 128, 75, 128, 74, 128, 71, 128, 
	72, 128, 77, 128, 77, 128, 77, 128, 76, 128, 75, 128, 74, 128, 71, 128, 
	72, 128, 64, 128, 65, 128, 67, 128, 60, 128, 64, 128, 65, 128, 68, 128, 
	65, 128, 64, 128, 76, 128, 75, 128, 74, 128, 71, 128, 72, 128, 64, 128, 
	65, 128, 67, 128, 60, 128, 64, 128, 65, 128, 76, 128, 75, 128, 74, 128, 
	71, 128, 72, 128, 77, 128, 77, 128, 77, 128, 76, 128, 75, 128, 74, 128, 
	71, 128, 72, 128, 64, 128, 65, 128, 67, 128, 60, 128, 64, 128, 65, 128, 
	68, 128, 65, 128, 64, 128, 68, 128, 68, 128, 68, 128, 68, 128, 70, 128, 
	67, 128, 64, 128, 64, 128, 60, 128, 68, 128, 68, 128, 68, 128, 68, 128, 
	70, 128, 67, 128, 68, 128, 68, 128, 68, 128, 68, 128, 70, 128, 67, 128, 
	64, 128, 64, 128, 60, 128, 66, 128, 66, 128, 66, 128, 66, 128, 66, 128, 
	71, 128, 67, 128, 64, 128, 60, 128, 55, 128, 60, 128, 62, 128, 61, 128, 
	60, 128, 60, 128, 67, 128, 71, 128, 72, 128, 69, 128, 71, 128, 69, 128, 
	64, 128, 65, 128, 62, 128, 64, 128, 60, 128, 55, 128, 60, 128, 62, 128, 
	61, 128, 60, 128, 60, 128, 67, 128, 71, 128, 72, 128, 69, 128, 71, 128, 
	69, 128, 64, 128, 65, 128, 62, 128, 72, 128, 69, 128, 64, 128, 64, 128, 
	65, 128, 72, 128, 72, 128, 65, 128, 67, 128, 77, 128, 77, 128, 77, 128, 
	76, 128, 74, 128, 72, 128, 69, 128, 65, 128, 64, 128, 72, 128, 69, 128, 
	64, 128, 64, 128, 65, 128, 72, 128, 72, 128, 65, 128, 67, 128, 74, 128, 
	74, 128, 74, 128, 72, 128, 71, 128, 67, 128, 64, 128, 64, 128, 60, 128, 
	72, 128, 69, 128, 64, 128, 64, 128, 65, 128, 72, 128, 72, 128, 65, 128, 
	67, 128, 77, 128, 77, 128, 77, 128, 76, 128, 74, 128, 72, 128, 69, 128, 
	65, 128, 64, 128, 72, 128, 69, 128, 64, 128, 64, 128, 65, 128, 72, 128, 
	72, 128, 65, 128, 67, 128, 74, 128, 74, 128, 74, 128, 72, 128, 71, 128, 
	67, 128, 64, 128, 64, 128, 60, 128, 68, 128, 68, 128, 68, 128, 68, 128, 
	70, 128, 67, 128, 64, 128, 64, 128, 60, 128, 68, 128, 68, 128, 68, 128, 
	68, 128, 70, 128, 67, 128, 68, 128, 68, 128, 68, 128, 68, 128, 70, 128, 
	67, 128, 64, 128, 64, 128, 60, 128, 66, 128, 66, 128, 66, 128, 66, 128, 
	66, 128, 71, 128, 67, 128, 72, 128, 69, 128, 64, 128, 64, 128, 65, 128, 
	72, 128, 72, 128, 65, 128, 67, 128, 77, 128, 77, 128, 77, 128, 76, 128, 
	74, 128, 72, 128, 69, 128, 65, 128, 64, 128, 72, 128, 69, 128, 64, 128, 
	64, 128, 65, 128, 72, 128, 72, 128, 65, 128, 67, 128, 74, 128, 74, 128, 
	74, 128, 72, 128, 71, 128, 67, 128, 64, 128, 64, 128, 60, 128
};
const word track2_timeOffsets[] PROGMEM = { 
	0, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 80, 16, 80, 16, 
	56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 
	16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	56, 16, 56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 104, 16, 8, 16, 8, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 8, 16, 8, 16, 8, 16, 
	32, 16, 32, 16, 32, 16, 8, 16, 128, 16, 8, 16, 8, 16, 8, 16, 
	32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 
	56, 16, 56, 16, 224, 16, 8, 16, 8, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 8, 16, 32, 16, 8, 16, 8, 16, 56, 16, 8, 16, 8, 16, 
	8, 16, 32, 16, 32, 16, 32, 16, 8, 16, 128, 16, 8, 16, 8, 16, 
	8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 8, 16, 8, 16, 
	56, 16, 56, 16, 56, 16, 176, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 8, 16, 200, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	32, 16, 80, 16, 80, 16, 56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 
	8, 16, 32, 16, 16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 
	32, 16, 8, 16, 8, 16, 56, 16, 56, 16, 56, 16, 56, 16, 32, 16, 
	32, 16, 8, 16, 32, 16, 16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 
	32, 16, 32, 16, 8, 16, 8, 16, 56, 16, 8, 16, 32, 16, 56, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 16, 16, 16, 16, 16, 16, 
	16, 16, 16, 16, 16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 
	32, 16, 56, 16, 32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 
	32, 16, 8, 16, 16, 16, 16, 16, 16, 16, 8, 16, 32, 16, 8, 16, 
	80, 16, 8, 16, 32, 16, 56, 16, 32, 16, 8, 16, 32, 16, 8, 16, 
	80, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 16, 8, 16, 
	32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 56, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 8, 16, 16, 16, 16, 16, 
	16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	32, 16, 8, 16, 8, 16, 200, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 32, 16, 
	8, 16, 32, 16, 80, 16, 80, 16, 8, 16, 32, 16, 56, 16, 32, 16, 
	8, 16, 32, 16, 8, 16, 80, 16, 16, 16, 16, 16, 16, 16, 16, 16, 
	16, 16, 16, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	56, 16, 32, 16, 8, 16, 32, 16, 8, 16, 80, 16, 8, 16, 32, 16, 
	8, 16, 16, 16, 16, 16, 16, 16, 8, 16, 32, 16, 8, 16
};
// TRACK 3
const byte track3_notes[] PROGMEM = { 
	50, 128, 50, 128, 50, 128, 50, 128, 50, 128, 67, 128, 55, 128, 55, 128, 
	52, 128, 48, 128, 53, 128, 55, 128, 54, 128, 53, 128, 52, 128, 60, 128, 
	64, 128, 65, 128, 62, 128, 64, 128, 60, 128, 57, 128, 59, 128, 55, 128, 
	55, 128, 52, 128, 48, 128, 53, 128, 55, 128, 54, 128, 53, 128, 52, 128, 
	60, 128, 64, 128, 65, 128, 62, 128, 64, 128, 60, 128, 57, 128, 59, 128, 
	55, 128, 48, 128, 55, 128, 60, 128, 53, 128, 60, 128, 60, 128, 53, 128, 
	48, 128, 52, 128, 55, 128, 60, 128, 79, 128, 79, 128, 79, 128, 55, 128, 
	48, 128, 55, 128, 60, 128, 53, 128, 60, 128, 60, 128, 53, 128, 48, 128, 
	56, 128, 58, 128, 60, 128, 55, 128, 55, 128, 48, 128, 48, 128, 55, 128, 
	60, 128, 53, 128, 60, 128, 60, 128, 53, 128, 48, 128, 52, 128, 55, 128, 
	60, 128, 79, 128, 79, 128, 79, 128, 55, 128, 48, 128, 55, 128, 60, 128, 
	53, 128, 60, 128, 60, 128, 53, 128, 48, 128, 56, 128, 58, 128, 60, 128, 
	55, 128, 55, 128, 48, 128, 44, 128, 51, 128, 56, 128, 55, 128, 48, 128, 
	43, 128, 44, 128, 51, 128, 56, 128, 55, 128, 48, 128, 43, 128, 44, 128, 
	51, 128, 56, 128, 55, 128, 48, 128, 43, 128, 50, 128, 50, 128, 50, 128, 
	50, 128, 50, 128, 67, 128, 55, 128, 55, 128, 52, 128, 48, 128, 53, 128, 
	55, 128, 54, 128, 53, 128, 52, 128, 60, 128, 64, 128, 65, 128, 62, 128, 
	64, 128, 60, 128, 57, 128, 59, 128, 55, 128, 55, 128, 52, 128, 48, 128, 
	53, 128, 55, 128, 54, 128, 53, 128, 52, 128, 60, 128, 64, 128, 65, 128, 
	62, 128, 64, 128, 60, 128, 57, 128, 59, 128, 55, 128, 48, 128, 54, 128, 
	55, 128, 60, 128, 53, 128, 53, 128, 60, 128, 60, 128, 53, 128, 50, 128, 
	53, 128, 55, 128, 59, 128, 55, 128, 55, 128, 60, 128, 60, 128, 55, 128, 
	48, 128, 54, 128, 55, 128, 60, 128, 53, 128, 53, 128, 60, 128, 60, 128, 
	53, 128, 55, 128, 55, 128, 55, 128, 55, 128, 57, 128, 59, 128, 60, 128, 
	55, 128, 48, 128, 48, 128, 54, 128, 55, 128, 60, 128, 53, 128, 53, 128, 
	60, 128, 60, 128, 53, 128, 50, 128, 53, 128, 55, 128, 59, 128, 55, 128, 
	55, 128, 60, 128, 60, 128, 55, 128, 48, 128, 54, 128, 55, 128, 60, 128, 
	53, 128, 53, 128, 60, 128, 60, 128, 53, 128, 55, 128, 55, 128, 55, 128, 
	55, 128, 57, 128, 59, 128, 60, 128, 55, 128, 48, 128, 44, 128, 51, 128, 
	56, 128, 55, 128, 48, 128, 43, 128, 44, 128, 51, 128, 56, 128, 55, 128, 
	48, 128, 43, 128, 44, 128, 51, 128, 56, 128, 55, 128, 48, 128, 43, 128, 
	50, 128, 50, 128, 50, 128, 50, 128, 50, 128, 67, 128, 55, 128, 48, 128, 
	54, 128, 55, 128, 60, 128, 53, 128, 53, 128, 60, 128, 60, 128, 53, 128, 
	50, 128, 53, 128, 55, 128, 59, 128, 55, 128, 55, 128, 60, 128, 60, 128, 
	55, 128, 48, 128, 54, 128, 55, 128, 60, 128, 53, 128, 53, 128, 60, 128, 
	60, 128, 53, 128, 55, 128, 55, 128, 55, 128, 55, 128, 57, 128, 59, 128, 
	60, 128, 55, 128, 48, 128
};
const word track3_timeOffsets[] PROGMEM = { 
	0, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 80, 16, 80, 16, 
	56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 
	16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	56, 16, 56, 16, 56, 16, 56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	16, 16, 16, 16, 16, 16, 32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 56, 16, 56, 16, 56, 16, 32, 16, 56, 16, 8, 16, 32, 16, 
	32, 16, 56, 16, 56, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 
	32, 16, 56, 16, 56, 16, 32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 
	32, 16, 56, 16, 56, 16, 56, 16, 8, 16, 32, 16, 32, 16, 56, 16, 
	56, 16, 32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 56, 16, 56, 16, 
	8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 32, 16, 56, 16, 56, 16, 
	32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 56, 16, 56, 16, 
	56, 16, 8, 16, 32, 16, 32, 16, 56, 16, 56, 16, 32, 16, 56, 16, 
	56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 
	56, 16, 56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 8, 16, 32, 16, 
	32, 16, 8, 16, 32, 16, 80, 16, 80, 16, 56, 16, 56, 16, 56, 16, 
	32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 16, 16, 16, 16, 32, 16, 
	8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 56, 16, 56, 16, 56, 16, 
	56, 16, 32, 16, 32, 16, 8, 16, 32, 16, 16, 16, 16, 16, 16, 16, 
	32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 8, 16, 56, 16, 56, 16, 
	8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 
	56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 32, 16, 8, 16, 32, 16, 8, 16, 16, 16, 16, 16, 16, 16, 
	32, 16, 32, 16, 80, 16, 56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 
	32, 16, 8, 16, 8, 16, 32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 
	32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 56, 16, 8, 16, 32, 16, 
	32, 16, 32, 16, 32, 16, 8, 16, 8, 16, 32, 16, 8, 16, 32, 16, 
	8, 16, 16, 16, 16, 16, 16, 16, 32, 16, 32, 16, 80, 16, 56, 16, 
	56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 
	56, 16, 56, 16, 32, 16, 56, 16, 56, 16, 32, 16, 56, 16, 56, 16, 
	32, 16, 8, 16, 32, 16, 32, 16, 8, 16, 32, 16, 80, 16, 80, 16, 
	56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 8, 16, 8, 16, 
	32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 8, 16, 
	8, 16, 32, 16, 56, 16, 8, 16, 32, 16, 32, 16, 32, 16, 32, 16, 
	8, 16, 8, 16, 32, 16, 8, 16, 32, 16, 8, 16, 16, 16, 16, 16, 
	16, 16, 32, 16, 32, 16
};

const SYNTH_TRACK tracks[] PROGMEM = {
	// TRACK 1
	{
		.notes = track1_notes,
		.timeOffsets = track1_timeOffsets,
		.noteCount = 598,
	},
	// TRACK 2
	{
		.notes = track2_notes,
		.timeOffsets = track2_timeOffsets,
		.noteCount = 622,
	},
	// TRACK 3
	{
		.notes = track3_notes,
		.timeOffsets = track3_timeOffsets,
		.noteCount = 582,
	},
};

void setup() {
	Synth.init(3);
}

void loop() {
	if (!Synth.isPlaying()) {
		delay(1000);
		Synth.play(tracks, 3, 74);
	} else {
		// Do something. ~3/5 ths of the CPU cycles are still available.
	}
}
