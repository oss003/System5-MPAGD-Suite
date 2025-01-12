#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int i;
	int j;
	int row;
	int col;
	int ptr;

	unsigned char array[12]={100,96,48,56,120,123,119,116,41,115,115,38};
	unsigned char spr_data[120];

// Clear array

	for (i=0; i<120; i++){
		spr_data[i]=0x20;
	}

// Read sprite 0
	
	for (row=0; row<3; row++){
		for (col=0; col<4; col++){
			spr_data[row*5+col]=array[row*4+col];
		}
	} 	

// Create sprite 3, bit 0+2+4 let byte and bit 1+3+6 right byte are always 0

	for (row=0; row<4; row++){
		ptr=row*5;
		spr_data[ptr+60] |= ((spr_data[ptr+0] >> 0) & 1) << 1;
		spr_data[ptr+60] |= ((spr_data[ptr+0] >> 2) & 1) << 3;
		spr_data[ptr+60] |= ((spr_data[ptr+0] >> 4) & 1) << 6;

		spr_data[ptr+61] |= ((spr_data[ptr+0] >> 1) & 1) << 0;
		spr_data[ptr+61] |= ((spr_data[ptr+1] >> 0) & 1) << 1;
		spr_data[ptr+61] |= ((spr_data[ptr+0] >> 3) & 1) << 2;
		spr_data[ptr+61] |= ((spr_data[ptr+1] >> 2) & 1) << 3;
		spr_data[ptr+61] |= ((spr_data[ptr+0] >> 6) & 1) << 4;
		spr_data[ptr+61] |= ((spr_data[ptr+1] >> 4) & 1) << 6;

		spr_data[ptr+62] |= ((spr_data[ptr+1] >> 1) & 1) << 0;
		spr_data[ptr+62] |= ((spr_data[ptr+2] >> 0) & 1) << 1;
		spr_data[ptr+62] |= ((spr_data[ptr+1] >> 3) & 1) << 2;
		spr_data[ptr+62] |= ((spr_data[ptr+2] >> 2) & 1) << 3;
		spr_data[ptr+62] |= ((spr_data[ptr+1] >> 6) & 1) << 4;
		spr_data[ptr+62] |= ((spr_data[ptr+2] >> 4) & 1) << 6;

		spr_data[ptr+63] |= ((spr_data[ptr+2] >> 1) & 1) << 0;
		spr_data[ptr+63] |= ((spr_data[ptr+3] >> 0) & 1) << 1;
		spr_data[ptr+63] |= ((spr_data[ptr+2] >> 3) & 1) << 2;
		spr_data[ptr+63] |= ((spr_data[ptr+3] >> 2) & 1) << 3;
		spr_data[ptr+63] |= ((spr_data[ptr+2] >> 6) & 1) << 4;
		spr_data[ptr+63] |= ((spr_data[ptr+3] >> 4) & 1) << 6;

		spr_data[ptr+64] |= ((spr_data[ptr+3] >> 1) & 1) << 0;
		spr_data[ptr+64] |= ((spr_data[ptr+3] >> 3) & 1) << 2;
		spr_data[ptr+64] |= ((spr_data[ptr+3] >> 6) & 1) << 4;
	}

// Create sprite 1+2+4+5, bit 0+1 top byte and bit 4+6 bottom byte are always 0

	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			for (col=0; col<5; col++){
				ptr=col+j*20+i*60;
				spr_data[ptr+20] |= ((spr_data[ptr+0] >> 0) & 1) << 2;
				spr_data[ptr+20] |= ((spr_data[ptr+0] >> 1) & 1) << 3;
				spr_data[ptr+20] |= ((spr_data[ptr+0] >> 2) & 1) << 4;
				spr_data[ptr+20] |= ((spr_data[ptr+0] >> 3) & 1) << 6;

				spr_data[ptr+25] |= ((spr_data[ptr+0] >> 4) & 1) << 0;
				spr_data[ptr+25] |= ((spr_data[ptr+0] >> 6) & 1) << 1;
				spr_data[ptr+25] |= ((spr_data[ptr+5] >> 0) & 1) << 2;
				spr_data[ptr+25] |= ((spr_data[ptr+5] >> 1) & 1) << 3;
				spr_data[ptr+25] |= ((spr_data[ptr+5] >> 2) & 1) << 4;
				spr_data[ptr+25] |= ((spr_data[ptr+5] >> 3) & 1) << 6;

				spr_data[ptr+30] |= ((spr_data[ptr+5] >> 4) & 1) << 0;
				spr_data[ptr+30] |= ((spr_data[ptr+5] >> 6) & 1) << 1;
				spr_data[ptr+30] |= ((spr_data[ptr+10] >> 0) & 1) << 2;
				spr_data[ptr+30] |= ((spr_data[ptr+10] >> 1) & 1) << 3;
				spr_data[ptr+30] |= ((spr_data[ptr+10] >> 2) & 1) << 4;
				spr_data[ptr+30] |= ((spr_data[ptr+10] >> 3) & 1) << 6;

				spr_data[ptr+35] |= ((spr_data[ptr+10] >> 4) & 1) << 0;
				spr_data[ptr+35] |= ((spr_data[ptr+10] >> 6) & 1) << 1;
				spr_data[ptr+35] |= ((spr_data[ptr+15] >> 0) & 1) << 2;
				spr_data[ptr+35] |= ((spr_data[ptr+15] >> 1) & 1) << 3;
			}
		}
	}

// Print spritedata

	for (i=0; i<6; i++){
		printf("Sprite %d:",i);
		for (row=0; row<4; row++){
			for (col=0; col<5; col++){
				printf("%02X ",spr_data[col+row*5+i*20]);
			}
			printf ("\n         ");
		}
		printf("\n");
	}
	return 0;
}
