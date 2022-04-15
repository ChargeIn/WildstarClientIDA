#include "../winhttp.h"

//----- (000000014055C760) ----------------------------------------------------
__int64 __fastcall sub_14055C760(_QWORD* a1, __int64 a2)
{
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v9; // [rsp+30h] [rbp+8h]

	v4 = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*a1 + 8i64))(*a1);
	v5 = *(_QWORD*)(a2 + 8);
	v6 = *(_QWORD*)(v5 + 8);
	v7 = v5;
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v4)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v7 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v7 == v5 || (v9 = v7, v4 < *(_DWORD*)(v7 + 32)))
		v9 = *(_QWORD*)(a2 + 8);
	if (v9 != v5)
		(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(*a1 + 312i64) + 8i64))(
			*(_QWORD*)(*a1 + 312i64),
			*(unsigned int*)(*(_QWORD*)(v9 + 40) + 128i64));
	return 1i64;
}

