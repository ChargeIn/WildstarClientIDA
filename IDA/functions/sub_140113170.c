#include "../winhttp.h"

//----- (0000000140113170) ----------------------------------------------------
char __fastcall sub_140113170(__int64 a1, _WORD* a2)
{
	unsigned __int64 v2; // rbx
	unsigned __int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	unsigned __int64 v9; // rax

	v2 = 0i64;
	if (a2 && *a2)
	{
		do
			++v2;
		while (a2[v2]);
	}
	v5 = *(_QWORD*)(a1 + 1056);
	v6 = *(_QWORD*)(a1 + 1080);
	if (v2 < v5)
		v5 = v2;
	(*(void(__fastcall**)(__int64, _WORD*, unsigned __int64))(*(_QWORD*)v6 + 56i64))(v6, a2, v5);
	v7 = *(_QWORD*)(a1 + 1088);
	if (v7)
		(*(void(__fastcall**)(__int64, _WORD*, unsigned __int64))(*(_QWORD*)v7 + 56i64))(v7, a2, v2);
	v8 = *(_QWORD*)(a1 + 1080);
	*(_QWORD*)(a1 + 1032) = 0i64;
	*(_QWORD*)(a1 + 1040) = 0i64;
	v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 72i64))(v8);
	*(_QWORD*)(a1 + 1024) = v9;
	*(_QWORD*)(a1 + 1048) = v9;
	sub_14010EF50(a1, v9, 0x7C00ui64);
	if (*(_QWORD*)(a1 + 1040) == *(_QWORD*)(a1 + 1048))
		*(_QWORD*)(a1 + 1032) = -1i64;
	*(_DWORD*)(a1 + 1068) = 0;
	return sub_140110AD0(a1, 0);
}

