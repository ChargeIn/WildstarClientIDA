#include "../winhttp.h"

//----- (0000000140366690) ----------------------------------------------------
__int64 __fastcall sub_140366690(__int64 a1)
{
	__int64 v2; // rcx
	__int64* i; // rbx
	__int64 v4; // rax
	int v6[6]; // [rsp+20h] [rbp-18h] BYREF

	v2 = *(_QWORD*)(a1 + 6200);
	v6[0] = -1;
	(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v2 + 32i64))(v2, v6);
	for (i = *(__int64**)(a1 + 5384); i; i = (__int64*)i[62])
	{
		if ((*((_DWORD*)i + 75) & 0x3A0) != 0)
		{
			v4 = *i;
			v6[0] = -1;
			(*(void(__fastcall**)(__int64*, int*))(v4 + 56))(i, v6);
			(*(void(__fastcall**)(__int64, __int64*))(*(_QWORD*)qword_140C65688 + 104i64))(qword_140C65688, i + 4);
		}
	}
	if (*(_QWORD*)(a1 + 744) || *(_QWORD*)(a1 + 752))
		(*(void (**)(void))(a1 + 752))();
	return 0i64;
}
// 140C65688: using guessed type __int64 qword_140C65688;

