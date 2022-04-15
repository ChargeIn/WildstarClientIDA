#include "../winhttp.h"

//----- (0000000140837EF0) ----------------------------------------------------
__int64 __fastcall sub_140837EF0(__int64 a1, unsigned int a2, float a3)
{
	__int64 result; // rax

	result = sub_140836730(a1, a2);
	if (result)
		*(float*)(result + 16) = a3;
	return result;
}

