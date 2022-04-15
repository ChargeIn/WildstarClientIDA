#include "../winhttp.h"

//----- (000000014076D2C0) ----------------------------------------------------
__int64 __fastcall sub_14076D2C0(_QWORD* a1)
{
	int v2; // eax
	__int64 v3; // rcx
	int v4; // edx
	__int16* v5; // rax
	unsigned __int64* v6; // rdx
	unsigned __int64 v7; // r8
	__int64 v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]

	v2 = sub_140056D60(a1, 1u);
	v4 = 0;
	if (v2)
		v4 = sub_1405C42C0(v2);
	v5 = sub_14034BDD0(v3, v4);
	v6 = (unsigned __int64*)sub_14018F0E0(&v9, (unsigned __int16*)v5)[1];
	if (v6)
	{
		v7 = -1i64;
		do
			++v7;
		while (*((_BYTE*)v6 + v7));
		sub_140058710((__int64)a1, v6, v7);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v10)
		sub_14018B900(v10, 0);
	return 1i64;
}
// 14076D2E2: variable 'v3' is possibly undefined

