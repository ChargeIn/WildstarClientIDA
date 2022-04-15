#include "../winhttp.h"

//----- (0000000140787640) ----------------------------------------------------
unsigned int** __fastcall sub_140787640(__int64 a1)
{
	unsigned int** result; // rax

	result = *(unsigned int***)(a1 + 16);
	if (result)
		return (unsigned int**)**result;
	return result;
}

