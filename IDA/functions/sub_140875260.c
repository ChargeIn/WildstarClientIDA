#include "../winhttp.h"

//----- (0000000140875260) ----------------------------------------------------
__int64 __fastcall sub_140875260(__int64 a1, __int64* a2)
{
	__int64 v2; // rbx
	unsigned int v4; // edi
	unsigned int v5; // eax

	v2 = *a2;
	v4 = *(_BYTE*)(a1 + 62) & 0x1F;
	v5 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, _QWORD))(v2 + 400))(a2, v4, v5);
}

