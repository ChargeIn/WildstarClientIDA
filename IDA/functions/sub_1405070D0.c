#include "../winhttp.h"

//----- (00000001405070D0) ----------------------------------------------------
__int64 __fastcall sub_1405070D0(_QWORD* a1)
{
	__int64 v2; // rbx
	__int64* v3; // rax
	__int64 v4; // rax
	unsigned int v5; // r9d
	bool v6; // zf
	char v7; // al

	v2 = sub_140506EA0(a1);
	if (v2)
	{
		v3 = (__int64*)sub_140417660((__int64)a1, 2);
		if (v3 && (v4 = *v3) != 0 && *(_DWORD*)(v4 + 1184) && *(_QWORD*)(v4 + 8))
		{
			if (*(_DWORD*)(v4 + 1184))
				v5 = **(_DWORD**)(v4 + 8);
			else
				v5 = MEMORY[0];
		}
		else
		{
			v5 = 0;
		}
		sub_140505BB0(v2, 0xFu, 0, v5, 0, 0);
		v6 = *(_QWORD*)(v2 + 1312) == 0i64;
		v7 = 0;
		*(_QWORD*)(v2 + 1312) = 0i64;
		if (!v6)
			v7 = 1;
		if (v7)
		{
			*(_QWORD*)(v2 + 1336) = *(_QWORD*)(v2 + 1328);
			*(_BYTE*)(v2 + 1076) = 0;
			*(_DWORD*)(v2 + 1072) = 0;
		}
		*(_QWORD*)(v2 + 1328) = 0i64;
		*(_QWORD*)(v2 + 1336) = 0i64;
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 568i64))(v2);
	}
	return 0i64;
}

