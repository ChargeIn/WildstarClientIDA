#include "../winhttp.h"

//----- (0000000140344C70) ----------------------------------------------------
unsigned __int64 __fastcall sub_140344C70(__int64 a1, __int64 a2)
{
	int* v2; // rax

	v2 = sub_14018B280(a2 + 8200, 0);
	*(_QWORD*)((((unsigned __int64)v2 + 8199) & 0xFFFFFFFFFFFFE000ui64) - 8) = v2;
	return ((unsigned __int64)v2 + 8199) & 0xFFFFFFFFFFFFE000ui64;
}

