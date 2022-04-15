//----- (00000001404BEF20) ----------------------------------------------------
__int64 __fastcall sub_1404BEF20(__int64 a1, __int64 a2)
{
	__int64 v3; // rbx
	unsigned __int64 v4; // rdi
	__m128* v5; // r8
	__int64 v6; // rcx
	__m128 v8[4]; // [rsp+30h] [rbp-178h] BYREF
	char v9[64]; // [rsp+70h] [rbp-138h] BYREF
	char v10[64]; // [rsp+B0h] [rbp-F8h] BYREF
	__int64 v11; // [rsp+F0h] [rbp-B8h] BYREF
	double v12[8]; // [rsp+100h] [rbp-A8h] BYREF
	__m128* v13[10]; // [rsp+140h] [rbp-68h] BYREF

	v3 = **(_QWORD**)(a1 + 304);
	(*(void(__fastcall**)(__int64, _QWORD, __int64))(*(_QWORD*)v3 + 48i64))(v3, 0i64, a2);
	v4 = 1i64;
	v11 = (*(__int64(__fastcall**)(__int64, char*))(*(_QWORD*)v3 + 120i64))(v3, v9);
	(*(void(__fastcall**)(__int64, char*, __int64))(*(_QWORD*)v3 + 144i64))(v3, v10, 1i64);
	sub_1401AFC20(&v11, v12);
	v13[0] = (__m128*)v12;
	v13[1] = v5;
	sub_1401AFB10(v13, v8);
	if (*(_QWORD*)(a1 + 312) > 1ui64)
	{
		do
		{
			v6 = *(_QWORD*)(*(_QWORD*)(a1 + 304) + 8 * v4);
			(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v6 + 40i64))(v6, v8);
			++v4;
		} while (v4 < *(_QWORD*)(a1 + 312));
	}
	return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 160i64))(a1);
}
// 1404BF00D: variable 'v5' is possibly undefined
// 1404BEF20: using guessed type char var_138[64];
// 1404BEF20: using guessed type char var_F8[64];
// 1404BEF20: using guessed type double var_A8[8];
// 1404BEF20: using guessed type __m128 var_178[4];

