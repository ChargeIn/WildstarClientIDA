#include "../winhttp.h"

//----- (0000000140701A20) ----------------------------------------------------
__int64 __fastcall sub_140701A20(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	unsigned int i; // ebx
	unsigned int v5; // eax
	__int64 v6; // rax
	unsigned int* v7; // rcx
	__m128i v8; // xmm0
	__int64 v9; // rax
	__int64 v10; // r10
	__int64 v11; // r8
	unsigned __int64 v12; // rdx
	unsigned __int64 v13; // rax
	_DWORD* v14; // r9
	unsigned int v15; // r8d
	_DWORD* v16; // rcx
	int v17; // edx
	__int64 v18; // rax
	BOOL v19; // edx
	BOOL* v20; // rcx

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	for (i = 0; ; ++i)
	{
		if (qword_140C63838)
		{
			v5 = qword_140C63838(off_140A6D968, qword_140C63858);
			goto LABEL_9;
		}
		if (dword_140C642C0 || (int)sub_140240D20() < 0)
			break;
		v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C64B30 + 40i64))(qword_140C64B30);
	LABEL_9:
		if (i >= v5)
			return 1i64;
		if (qword_140C63848)
		{
			v6 = qword_140C63848(off_140A6D968, i, qword_140C63858);
		LABEL_17:
			v7 = (unsigned int*)v6;
			goto LABEL_18;
		}
		if (dword_140C642C0)
		{
			v7 = 0i64;
		}
		else
		{
			if ((int)sub_140240D20() >= 0)
			{
				v6 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64B30 + 32i64))(qword_140C64B30, i);
				goto LABEL_17;
			}
			v7 = 0i64;
		}
	LABEL_18:
		v8 = _mm_cvtsi32_si128(*v7);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = qword_140C65898;
		*(_DWORD*)(v9 + 8) = 3;
		*(_QWORD*)v9 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = *(_QWORD*)(v10 + 27728);
		if (v11 && (v12 = *(_QWORD*)(v11 + 120), v13 = 0i64, v12))
		{
			v14 = *(_DWORD**)(v11 + 112);
			v15 = *v7;
			v16 = v14;
			while (*v16 != v15)
			{
				++v13;
				v16 += 2;
				if (v13 >= v12)
					goto LABEL_23;
			}
			v17 = v14[2 * v13 + 1];
		}
		else
		{
		LABEL_23:
			v17 = 0;
		}
		v18 = sub_1403D90D0(v10, v17);
		v19 = !v18 || *(_DWORD*)(v18 + 592);
		v20 = *(BOOL**)(a1 + 16);
		v20[2] = 1;
		*v20 = v19;
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
	}
	return 1i64;
}
// 140A6D968: using guessed type wchar_t *off_140A6D968[2];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C642C0: using guessed type int dword_140C642C0;
// 140C64B30: using guessed type __int64 qword_140C64B30;
// 140C65898: using guessed type __int64 qword_140C65898;

