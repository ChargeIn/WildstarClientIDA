#include "../winhttp.h"

//----- (00000001404A5080) ----------------------------------------------------
void __fastcall sub_1404A5080(__int64 a1, unsigned int a2, int a3)
{
	unsigned int* v5; // r14
	unsigned int i; // ebx
	__int64 v7; // rax
	const wchar_t* v9; // r9
	_QWORD* v10; // rax
	__int64 v11; // [rsp+20h] [rbp-38h] BYREF
	__int64 v12; // [rsp+28h] [rbp-30h]

	v5 = (unsigned int*)sub_140225E00(a2);
	if (v5)
	{
		for (i = 0; i < *(_DWORD*)(a1 + 104); ++i)
		{
			v7 = 0i64;
			while (asc_140B685B8[++v7] != 0)
				;
			sub_14001C310((_QWORD*)(a1 + 72), (int*)L"    ", (int*)&asc_140B685B8[v7]);
		}
		v9 = L"FAIL";
		if (a3)
			v9 = L"PASS";
		v10 = sub_14018EFA0(&v11, (__int64)L"- PrereqType Id (%d): %s\n", *v5, v9);
		sub_14001C310((_QWORD*)(a1 + 72), (int*)v10[1], (int*)v10[2]);
		if (v12)
			sub_14018B900(v12, 0);
	}
}
// 140B685B8: using guessed type wchar_t asc_140B685B8[5];
// 140B685C8: using guessed type wchar_t aFail[5];
// 140B68610: using guessed type wchar_t aPass[5];
// 140B68650: using guessed type wchar_t aPrereqtypeIdDS[26];

