#include "../winhttp.h"

//----- (00000001405F3BD0) ----------------------------------------------------
__int64 __fastcall sub_1405F3BD0(__int64 a1, int a2, int a3)
{
	_DWORD* v5; // rax
	int v6; // edx
	__int64 v7; // rbx
	__int64 v8; // rax

	v5 = (_DWORD*)sub_1405F8A80(a1 + 236, a2);
	if (*v5 != a3)
	{
		v6 = dword_140C636A8;
		*v5 = a3;
		v5[1] = v6;
	}
	if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 176i64))(a1))
	{
		v7 = *(_QWORD*)(qword_140C65898 + 29504);
		v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 24i64))(a1);
		sub_1400EA3E0(v7, "PublicEventStatsUpdate", byte_1409ECEAC, v8);
	}
	return 0i64;
}
// 1409ECEAC: using guessed type _BYTE byte_1409ECEAC[4];
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

