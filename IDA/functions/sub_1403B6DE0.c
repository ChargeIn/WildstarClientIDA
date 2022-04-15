#include "../winhttp.h"

//----- (00000001403B6DE0) ----------------------------------------------------
__int64 __fastcall sub_1403B6DE0(__int64 a1, float* a2, double a3, double a4)
{
	__int64 v6; // rdx
	__int64 v7; // r8
	__int64 v8; // rcx
	__int64 v9; // rbx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	_QWORD* v11; // rax
	_QWORD* v12; // rbx
	__int64 v13; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v16; // rsi
	_QWORD* v17; // rcx
	_QWORD* v18; // rcx
	__int64 v19; // rsi
	_QWORD* v20; // rcx
	_QWORD* v21; // rcx
	__int64 v22; // r9
	float v23; // xmm2_4
	double v24; // xmm0_8
	double v25; // xmm1_8
	unsigned int v26; // edx
	__int64 result; // rax
	int* v28; // rax
	__int64 v29; // rbx
	unsigned int v30; // edx
	void(__fastcall * **v31)(_QWORD); // r14
	int v32; // esi
	__m128 v33[2]; // [rsp+40h] [rbp-28h] BYREF
	__int64 v34; // [rsp+70h] [rbp+8h] BYREF

	*(_OWORD*)(a1 + 32512) = 0i64;
	*(_QWORD*)(a1 + 32528) = 0i64;
	sub_1403FA730(a1);
	sub_1403FA3D0(a1);
	sub_140016480(qword_140C635F0);
	sub_1405CE420(*(_QWORD*)(a1 + 29080), v6, a3, a4);
	v8 = *(_QWORD*)(a1 + 29080);
	if (*(_DWORD*)(v8 + 24))
	{
		if (*(_DWORD*)(v8 + 12) == 1)
		{
			sub_14062CF20(*(_QWORD**)v8, (unsigned int)(*(_DWORD*)(v8 + 12) - 1), v7, a4);
		}
		else if (*(_DWORD*)(v8 + 12) == 2)
		{
			sub_1405CE500((_QWORD**)v8, 0, a3, a4);
		}
	}
	sub_1405FE120(*(_QWORD**)(a1 + 32144));
	sub_140195D70(a1 + 26472);
	sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "PendingWorldRemovalCancel", &unk_1409D0D62);
	while (*(_QWORD*)(a1 + 28464))
		sub_1403D9590(a1, *(_QWORD*)(a1 + 28464), a3, a4);
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 25744) = 0i64;
	sub_1403B55E0((_QWORD*)a1);
	sub_14053B3C0((_QWORD*)a1);
	sub_1403E5AE0((_QWORD*)a1);
	sub_1403BABA0(a1);
	sub_1403BF780((_QWORD*)a1);
	sub_1403B7F50(a1);
	sub_1403C2230(a1);
	v9 = qword_140C65920;
	if (*(_DWORD*)qword_140C65920)
	{
		*(_DWORD*)qword_140C65920 = 0;
		while (*(_QWORD*)(v9 + 8))
		{
			v10 = *(void(__fastcall****)(_QWORD, __int64))(v9 + 8);
			if (v10)
				(**v10)(v10, 1i64);
		}
	}
	sub_140575C50((const void***)qword_140C65B78);
	sub_140600750(qword_140C65BB0);
	sub_14055E0E0();
	sub_1404A5F90(qword_140C659A8);
	sub_1404B4AE0(qword_140C659F0);
	if (qword_140C65970)
		sub_14056E380(qword_140C65970);
	sub_1405F4DF0();
	sub_14049A790();
	sub_1403BA4A0(a1);
	sub_14039F920(a1);
	v11 = *(_QWORD**)(a1 + 28584);
	v12 = (_QWORD*)v11[2];
	if (v12 != v11)
	{
		do
		{
			sub_14018B900(v12[5], 0);
			v13 = v12[3];
			if (v13)
			{
				v12 = (_QWORD*)v12[3];
				for (i = *(_QWORD**)(v13 + 16); i; i = (_QWORD*)i[2])
					v12 = i;
			}
			else
			{
				for (j = v12[1]; v12 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
					v12 = (_QWORD*)j;
				if (v12[3] != j)
					v12 = (_QWORD*)j;
			}
		} while (v12 != *(_QWORD**)(a1 + 28584));
	}
	sub_140008410(a1 + 28576);
	sub_1401DC3F0();
	v16 = *(_QWORD*)(a1 + 28792);
	if (v16)
	{
		if (*(_QWORD*)(v16 + 32))
			sub_140195D70(v16 + 16);
		sub_140195D70(v16 + 16);
		*(_DWORD*)(v16 + 16) = 0;
		v17 = *(_QWORD**)(v16 + 32);
		if (v17)
			*v17 = *(_QWORD*)(v16 + 40);
		v18 = *(_QWORD**)(v16 + 40);
		if (v18)
			*v18 = *(_QWORD*)(v16 + 32);
		*(_QWORD*)(v16 + 32) = 0i64;
		*(_QWORD*)(v16 + 40) = 0i64;
		sub_14018B900(v16, 0);
	}
	v19 = *(_QWORD*)(a1 + 28800);
	*(_QWORD*)(a1 + 28792) = 0i64;
	if (v19)
	{
		if (*(_QWORD*)(v19 + 32))
			sub_140195D70(v19 + 16);
		sub_140195D70(v19 + 16);
		*(_DWORD*)(v19 + 16) = 0;
		v20 = *(_QWORD**)(v19 + 32);
		if (v20)
			*v20 = *(_QWORD*)(v19 + 40);
		v21 = *(_QWORD**)(v19 + 40);
		if (v21)
			*v21 = *(_QWORD*)(v19 + 32);
		*(_QWORD*)(v19 + 32) = 0i64;
		*(_QWORD*)(v19 + 40) = 0i64;
		sub_14018B900(v19, 0);
	}
	*(_QWORD*)(a1 + 28800) = 0i64;
	v22 = *(unsigned int*)a2;
	v23 = a2[1];
	v24 = a2[3];
	v25 = a2[2];
	v34 = 0x141DF03C0i64;
	sub_1401A3130(5, 2, &v34, v22, v23, v25, v24);
	*(_DWORD*)(a1 + 29940) = 0;
	*(_DWORD*)(a1 + 29008) = 0;
	*(_DWORD*)(a1 + 25632) = 0;
	*(_DWORD*)(a1 + 25636) = 2;
	*(_QWORD*)(a1 + 28384) = 0i64;
	v26 = *(_DWORD*)a2;
	v33[0] = _mm_unpacklo_ps(
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a2 + 1), (__m128) * ((unsigned int*)a2 + 3)),
		_mm_unpacklo_ps((__m128) * ((unsigned int*)a2 + 2), (__m128)0i64));
	result = sub_1403E70D0(a1, v26, v33);
	if ((int)result >= 0)
	{
		if (*(_DWORD*)(a1 + 40) != 4)
		{
			if (qword_140C65A48 && *(_QWORD*)(qword_140C65A48 + 24))
				sub_1404D5AE0(qword_140C65A48);
			v28 = sub_14018B280(1280i64, 0);
			if (v28)
				v29 = sub_140033E00((__int64)v28);
			else
				v29 = 0i64;
			v30 = *(_DWORD*)a2;
			v31 = *(void(__fastcall****)(_QWORD))(a1 + 31016);
			*(_DWORD*)(v29 + 104) = 0;
			v32 = sub_1400360F0(v29, v30);
			if (v32 < 0
				|| (*(_QWORD*)(v29 + 88) = v31,
					(**v31)(v31),
					*(_QWORD*)(v29 + 96) = a1,
					(**(void(__fastcall***)(__int64))a1)(a1),
					v32 = sub_140048100(a1, v29, 1),
					v32 < 0)
				|| (v32 = sub_140048100(v29, *(_QWORD*)(v29 + 96), 4), v32 < 0))
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
				return (unsigned int)v32;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
		}
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "P2PCancelTrade", L"i", 1i64);
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ChangeWorld", &unk_1409D091B);
		sub_140008410(a1 + 28504);
		return 0i64;
	}
	return result;
}
// 1403B6E2B: variable 'v6' is possibly undefined
// 1403B6E51: variable 'v7' is possibly undefined
// 1409EE9E4: using guessed type wchar_t aI_5[2];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65920: using guessed type __int64 qword_140C65920;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659A8: using guessed type __int64 qword_140C659A8;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C65A48: using guessed type __int64 qword_140C65A48;
// 140C65B78: using guessed type __int64 qword_140C65B78;
// 140C65BB0: using guessed type __int64 qword_140C65BB0;
// 1403B6DE0: using guessed type __m128 var_28[2];

