#include "../winhttp.h"

//----- (0000000140712B60) ----------------------------------------------------
void __fastcall sub_140712B60(__int64 a1)
{
	__int64 v1; // rdi
	_QWORD* v3; // rcx
	__int64 v4; // rax
	unsigned int v5; // edx
	__int64 v6; // rcx

	v1 = *(_QWORD*)(a1 + 48);
	v3 = *(_QWORD**)(v1 + 24);
	if (v3)
	{
		if (!*(_DWORD*)(a1 + 40))
		{
			v4 = *(_QWORD*)(a1 + 16);
			if ((!v4 || (v5 = *(_DWORD*)(v4 + 8)) == 0 || dword_140C636A8 - *(_DWORD*)(a1 + 24) <= v5)
				&& (int)sub_140712A40(v3, *(_DWORD*)v1, *(_QWORD*)(v1 + 8), *(_QWORD*)(v1 + 16)) < 0
				&& qword_140C65A28)
			{
				sub_1404CF930(qword_140C65A28);
			}
		}
	}
	v6 = *(_QWORD*)(v1 + 24);
	if (v6)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
	sub_14018B900(v1, 0);
	if (*(_QWORD*)a1)
		sub_1403D6480(*(_QWORD*)a1, (_QWORD*)a1);
	sub_14018B900(a1, 0);
}
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65A28: using guessed type __int64 qword_140C65A28;

