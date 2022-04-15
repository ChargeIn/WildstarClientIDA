#include "../winhttp.h"

//----- (0000000140875800) ----------------------------------------------------
__int64 __fastcall sub_140875800(__int64 a1, __int64* a2, __int64 a3, unsigned int a4, int a5)
{
	__int64 v5; // rsi
	int v10; // edi
	int v11; // eax

	v5 = *a2;
	v10 = *(_BYTE*)(a1 + 62) & 0x1F;
	v11 = sub_140855A70(a1);
	return (*(__int64(__fastcall**)(__int64*, _QWORD, __int64, _QWORD, int, int, int))(v5 + 368))(
		a2,
		*(unsigned __int8*)(a1 + 101),
		a3,
		a4,
		a5,
		v10,
		v11);
}

