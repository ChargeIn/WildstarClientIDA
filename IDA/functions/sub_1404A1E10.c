#include "../winhttp.h"

//----- (00000001404A1E10) ----------------------------------------------------
__int64 __fastcall sub_1404A1E10(__int64 a1, _QWORD* a2, unsigned int a3)
{
	__int64 v3; // rdi
	unsigned __int64 v6; // rsi
	_QWORD* v7; // rbx
	__int64* v9; // rbx
	__int64 v10; // rsi
	__int16* v11; // rdi
	wchar_t* v12; // rdx
	__int64 v13; // rax
	_QWORD* v14; // rax
	_QWORD* v15; // rax
	wchar_t* v16; // rdx
	__int64 v17; // rax
	BOOL v18; // eax
	const wchar_t* v19; // r8
	unsigned int v20; // edi
	_QWORD* v21; // rax
	__int64 v22; // [rsp+20h] [rbp-38h] BYREF
	__int64 v23; // [rsp+28h] [rbp-30h]
	unsigned int v24; // [rsp+70h] [rbp+18h] BYREF

	v24 = a3;
	v3 = *(_QWORD*)(a1 + 8);
	v6 = (*(__int64(__fastcall**)(unsigned int*))(v3 + 24))(&v24);
	v7 = *(_QWORD**)(*(_QWORD*)(v3 + 16) + 8 * (v6 % *(_QWORD*)(v3 + 8)));
	if (!v7)
		return 0i64;
	while (v6 != *v7 || !(*(unsigned int(__fastcall**)(unsigned int*, _QWORD*))(v3 + 32))(&v24, v7 + 2))
	{
		v7 = (_QWORD*)v7[1];
		if (!v7)
			return 0i64;
	}
	v9 = v7 + 3;
	if (!v9)
		return 0i64;
	v10 = *v9;
	v11 = &word_140B7B704;
	*(_DWORD*)(a1 + 108) = 1;
	*(_DWORD*)(a1 + 104) = 1;
	sub_14001C480(a1 + 72, (int*)&word_140B7B704, (int*)&word_140B7B704);
	v12 = L"Client check\n";
	if (*(_DWORD*)(a1 + 112))
		v12 = L"Server check\n";
	v13 = 0i64;
	if (*v12)
	{
		do
			++v13;
		while (v12[v13]);
	}
	sub_14001C310((_QWORD*)(a1 + 72), (int*)v12, (int*)&v12[v13]);
	if (*(_QWORD*)(*a2 + 16i64))
		v11 = *(__int16**)(*a2 + 16i64);
	v14 = sub_14018EFA0(&v22, (__int64)L"Evaluating (%d) for (%s): \n", *(unsigned int*)(*a2 + 8i64), v11);
	sub_14001C310((_QWORD*)(a1 + 72), (int*)v14[1], (int*)v14[2]);
	if (v23)
		sub_14018B900(v23, 0);
	v15 = sub_14018EFA0(&v22, (__int64)L"Prereq Id (%d)", v24);
	sub_14001C310((_QWORD*)(a1 + 72), (int*)v15[1], (int*)v15[2]);
	if (v23)
		sub_14018B900(v23, 0);
	v16 = L"  AND\n";
	if ((*(_BYTE*)(v10 + 4) & 1) != 0)
		v16 = L"  OR\n";
	v17 = 0i64;
	if (*v16)
	{
		do
			++v17;
		while (v16[v17]);
	}
	sub_14001C310((_QWORD*)(a1 + 72), (int*)v16, (int*)&v16[v17]);
	v18 = sub_1404A1CA0(a1, a2, v24);
	v19 = L"FAIL";
	v20 = v18;
	if (v18)
		v19 = L"PASS";
	v21 = sub_14018EFA0(&v22, (__int64)L"FINAL RESULT: %s\n", v19);
	sub_14001C310((_QWORD*)(a1 + 72), (int*)v21[1], (int*)v21[2]);
	if (v23)
		sub_14018B900(v23, 0);
	*(_DWORD*)(a1 + 108) = 0;
	return v20;
}
// 140B684F8: using guessed type wchar_t aPrereqIdD[15];
// 140B68518: using guessed type wchar_t aOr[6];
// 140B68528: using guessed type wchar_t aClientCheck[14];
// 140B68548: using guessed type wchar_t aEvaluatingDFor[28];
// 140B68580: using guessed type wchar_t aServerCheck[14];
// 140B685C8: using guessed type wchar_t aFail[5];
// 140B685D8: using guessed type wchar_t aFinalResultS[18];
// 140B68600: using guessed type wchar_t aAnd[7];
// 140B68610: using guessed type wchar_t aPass[5];
// 140B7B704: using guessed type __int16 word_140B7B704;

