#include "../winhttp.h"

//----- (00000001404BF090) ----------------------------------------------------
__int64 __fastcall sub_1404BF090(__int64 a1)
{
	__int64 v2; // rbx
	unsigned __int64 v3; // rdi
	__m128* v4; // r8
	__int64 v5; // rcx
	__m128 v7[4]; // [rsp+30h] [rbp-178h] BYREF
	char v8[64]; // [rsp+70h] [rbp-138h] BYREF
	char v9[64]; // [rsp+B0h] [rbp-F8h] BYREF
	__int64 v10; // [rsp+F0h] [rbp-B8h] BYREF
	double v11[8]; // [rsp+100h] [rbp-A8h] BYREF
	__m128* v12[10]; // [rsp+140h] [rbp-68h] BYREF

	v2 = **(_QWORD**)(a1 + 304);
	(*(void(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, 0i64, 0i64);
	v3 = 1i64;
	v10 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v2 + 120i64))(v2, v8);
	(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v2 + 144i64))(v2, v9, 1i64);
	sub_1401AFC20(&v10, v11);
	v12[0] = (__m128*)v11;
	v12[1] = v4;
	sub_1401AFB10(v12, v7);
	if (*(_QWORD*)(a1 + 312) > 1ui64)
	{
		do
		{
			v5 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 8 * v3);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v5 + 40i64))(v5, v7);
			++v3;
		} while (v3 < *(_QWORD*)(a1 + 312));
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
}
// 1404BF150: variable 'v4' is possibly undefined
// 1404BF090: using guessed type char var_138[64];
// 1404BF090: using guessed type char var_F8[64];
// 1404BF090: using guessed type double var_A8[8];
// 1404BF090: using guessed type __m128 var_178[4];

