#include "../winhttp.h"

//----- (0000000140875590) ----------------------------------------------------
__int64 __fastcall sub_140875590(__int64 a1, __int64* a2, __int64 a3)
{
	__int64 v3; // rsi
	int v7; // edi
	int v8; // eax

	v3 = *a2;
	v7 = *(_BYTE*)(a1 + 62) & 0x1F;
	v8 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, _DWORD, int, int))(v3 + 368))(
		a2,
		*(unsigned __int8*)(a1 + 101),
		a3,
		0i64,
		0,
		v7,
		v8);
}

