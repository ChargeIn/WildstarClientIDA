#include "../winhttp.h"

//----- (00000001407D1F00) ----------------------------------------------------
__int64 __fastcall sub_1407D1F00(__int64 a1, __int64 a2, int* a3)
{
	__int64* v3; // rdx
	__int64 v6; // rcx
	unsigned int v7; // esi
	__int64 v8; // rax
	unsigned __int64 v10; // rbx
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rcx
	__int64 result; // rax
	__int64 v15; // rcx
	__int64 v16; // rcx
	int v17; // eax
	__int64 v18; // [rsp+30h] [rbp-48h] BYREF
	int v19; // [rsp+38h] [rbp-40h]
	__int64 v20; // [rsp+40h] [rbp-38h]
	__int64(__fastcall * v21)(__int64); // [rsp+48h] [rbp-30h]
	__int64 v22; // [rsp+50h] [rbp-28h]
	__int64 v23; // [rsp+58h] [rbp-20h]
	__int64 v24; // [rsp+80h] [rbp+8h] BYREF

	*(_QWORD*)(a1 + 24) = a2;
	v3 = (__int64*)(a2 + 1248);
	if (!*(_QWORD*)(a1 + 96))
	{
		*(_QWORD*)(a1 + 96) = v3;
		v6 = a1 + 104;
		*(_QWORD*)v6 = *v3;
		*v3 = a1;
		if (*(_QWORD*)v6)
			*(_QWORD*)(*(_QWORD*)v6 + 96i64) = v6;
	}
	v7 = 0;
	if (!a3)
		goto LABEL_11;
	v8 = -1i64;
	while (*((_WORD*)a3 + ++v8) != 0)
		;
	v10 = (unsigned int)(v8 + 1);
	v11 = 2 * v10;
	if (!is_mul_ok(v10, 2ui64))
		v11 = -1i64;
	v12 = sub_14018B280(v11, 0);
	*(_QWORD*)(a1 + 144) = v12;
	sub_1407DB590(v12, a3, 2 * v10);
	result = sub_1401B6DE0(v13, *(const __m128i**)(a1 + 144), (int**)(a1 + 224), a1 + 216, 0i64);
	if ((int)result >= 0)
	{
		v15 = *(_QWORD*)(a1 + 24) + 1272i64;
		*(_DWORD*)(a1 + 232) = 1;
		v24 = a1;
		sub_14040ADF0(v15, (_QWORD*)(a1 + 144), &v24);
		v18 = *(_QWORD*)(a1 + 144);
		v19 = 0;
		v20 = a1;
		v22 = 0i64;
		v21 = sub_1407D2080;
		v23 = 0i64;
		sub_1401B6BF0(v16, &v18, (int**)(a1 + 240));
	LABEL_11:
		result = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 176i64))(
			qword_140C65670,
			a1 + 440);
		if ((int)result >= 0)
		{
			v17 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 176i64))(
				qword_140C65670,
				a1 + 448);
			if (v17 < 0)
				return (unsigned int)v17;
			return v7;
		}
	}
	return result;
}
// 1407D1FB4: variable 'v13' is possibly undefined
// 1407D2031: variable 'v16' is possibly undefined
// 140C65670: using guessed type __int64 qword_140C65670;

