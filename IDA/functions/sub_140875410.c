#include "../winhttp.h"

//----- (0000000140875410) ----------------------------------------------------
__int64 __fastcall sub_140875410(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rdi
	unsigned int v5; // ebx
	unsigned int v7; // eax

	v3 = *a2;
	v5 = *(_BYTE*)(a1 + 62) & 0x1F;
	v7 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, __int64, _QWORD, _QWORD))(v3 + 384))(a2, a3, v5, v7);
}

