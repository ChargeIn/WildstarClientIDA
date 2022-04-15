#include "../winhttp.h"

//----- (00000001408751B0) ----------------------------------------------------
__int64 __fastcall sub_1408751B0(__int64 a1, __int64* a2)
{
	__int64 v2; // rdi
	unsigned int v4; // ebx
	unsigned int v5; // eax

	v2 = *a2;
	v4 = *(_BYTE*)(a1 + 62) & 0x1F;
	v5 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD, _QWORD))(v2 + 392))(a2, 0i64, v4, v5);
}

