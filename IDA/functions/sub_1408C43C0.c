#include "../winhttp.h"

//----- (00000001408C43C0) ----------------------------------------------------
__int64 __fastcall sub_1408C43C0(__int64 a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rbp

	sub_1408CAAD0(a1 + 176, a2);
	sub_1408CAAD0(a1 + 200, a2);
	sub_1408CAAD0(a1 + 224, a2);
	sub_1408CAAD0(a1 + 248, a2);
	if (*(_BYTE*)(a1 + 300))
	{
		v4 = *(_QWORD*)(a1 + 320);
		if (v4)
		{
			sub_1408CA0F0(v4, a2);
			if (*(_QWORD*)(a1 + 320))
				(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
			*(_QWORD*)(a1 + 320) = 0i64;
		}
	}
	if (*(_QWORD*)(a1 + 312))
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)a2 + 16i64))(a2);
		*(_QWORD*)(a1 + 312) = 0i64;
	}
	sub_1408C4D80(a1, a2);
	v5 = a1 + 8;
	v6 = 4i64;
	do
	{
		sub_1408CA5E0(v5, a2);
		v5 += 24i64;
		--v6;
	} while (v6);
	(**(void(__fastcall***)(__int64, _QWORD))a1)(a1, 0i64);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a2 + 16i64))(a2, a1);
	return 1i64;
}

