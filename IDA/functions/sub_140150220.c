#include "../winhttp.h"

//----- (0000000140150220) ----------------------------------------------------
void __fastcall sub_140150220(__int64 a1)
{
	__int64 v2; // rcx
	_QWORD* v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx

	v2 = *(_QWORD*)(a1 + 184);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 184) = 0i64;
	}
	*(_BYTE*)a1 = 0;
	v3 = *(_QWORD**)(a1 + 200);
	if (v3)
		*v3 = *(_QWORD*)(a1 + 208);
	v4 = *(_QWORD*)(a1 + 208);
	if (v4)
		*(_QWORD*)(v4 + 200) = *(_QWORD*)(a1 + 200);
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	v5 = *(_QWORD*)(a1 + 136);
	if (v5)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		*(_QWORD*)(a1 + 136) = 0i64;
	}
	v6 = *(_QWORD*)(a1 + 160);
	if (v6)
		sub_14018B900(v6, 0);
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 16));
	sub_1401429A0(qword_140C63678, *(_DWORD*)(a1 + 12));
}
// 140C63678: using guessed type __int64 qword_140C63678;

