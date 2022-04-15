#include "../winhttp.h"

//----- (00000001403548B0) ----------------------------------------------------
__int64 __fastcall sub_1403548B0(__int64 a1)
{
	bool v1; // zf
	__int64 v2; // rdx
	__int64 v4; // rbx
	int i; // edi
	__int64 v6; // rcx

	v1 = *(_DWORD*)(a1 + 24) == 0;
	v2 = a1 + 24;
	*(_QWORD*)a1 = off_140B65A90;
	if (!v1)
		sub_1400B6120(*(_QWORD*)(a1 + 16) + 2040i64, v2);
	v4 = a1 + 96;
	for (i = 5; i >= 0; --i)
	{
		v6 = *(_QWORD*)(v4 - 8);
		v4 -= 8i64;
		if (v6)
			(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 8i64))(v6, v2);
	}
	sub_14018B900(a1, 0);
	return a1;
}
// 140354900: variable 'v2' is possibly undefined
// 140B65A90: using guessed type __int64 (__fastcall *off_140B65A90[8])();

