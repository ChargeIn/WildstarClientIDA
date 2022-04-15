#include "../winhttp.h"

//----- (00000001407C42C0) ----------------------------------------------------
__int64 __fastcall sub_1407C42C0(__int64* a1, __int64 a2)
{
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax

	a1[2] = a2;
	(*(void(__fastcall**)(__int64))(*(_QWORD*)a1[373] + 16i64))(a1[373]);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1[374] + 16i64))(a1[374], a2);
	(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)a1[375] + 16i64))(a1[375], a2);
	v4 = a1[2];
	if (v4)
	{
		v5 = *a1;
		v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 72i64))(v4);
		(*(void(__fastcall**)(__int64*, __int64))(v5 + 32))(a1, v6);
	}
	return 0i64;
}

