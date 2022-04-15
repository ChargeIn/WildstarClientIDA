#include "../winhttp.h"

//----- (000000014002F2A0) ----------------------------------------------------
__int64 __fastcall sub_14002F2A0(__int64 a1, __int64 a2)
{
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rdi
	__int64 v8; // rbx
	unsigned int v9; // esi
	__int64 v10; // rax
	unsigned int* v11; // rsi
	__int64 v12; // r8
	int v13; // r9d
	int v14; // r10d
	__int64 v15; // rax
	__int64 v16; // rcx
	__int64* v17; // rcx
	__int64 v18; // rdx
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // r11
	__int64 v22; // r8
	__int64 k; // r8
	__int64 m; // r8
	__m128i v25; // xmm0
	__int64 v26; // rax
	__int64 v27; // rax
	__int64 v28; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v31; // [rsp+40h] [rbp+8h] BYREF
	__int64 v32; // [rsp+50h] [rbp+18h] BYREF

	if (!*(_QWORD*)(a1 + 4712))
		return 0i64;
	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v5 = *(_QWORD*)(a2 + 16);
	v6 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(a2 + 16) += 16i64;
	v7 = *(_QWORD*)(*(_QWORD*)(a1 + 4712) + 8i64);
	v8 = *(_QWORD*)(v7 + 16);
	if (v8 != v7)
	{
		while (1)
		{
			v9 = *(_DWORD*)(v8 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C65200 && (int)sub_1401F0940() >= 0)
			{
				v10 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63FD8 + 24i64))(qword_140C63FD8, v9);
				goto LABEL_11;
			}
		LABEL_38:
			v28 = *(_QWORD*)(v8 + 24);
			if (v28)
			{
				v8 = *(_QWORD*)(v8 + 24);
				for (i = *(_QWORD*)(v28 + 16); i; i = *(_QWORD*)(i + 16))
					v8 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v8 + 8); v8 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v8 = j;
				if (*(_QWORD*)(v8 + 24) != j)
					v8 = j;
			}
			if (v8 == v7)
				return 1i64;
		}
		v10 = qword_140C63840(off_140A69758, v9, qword_140C63858);
	LABEL_11:
		v11 = (unsigned int*)v10;
		if (v10 && *(_QWORD*)(v8 + 56) > 1ui64)
		{
			v12 = *(_QWORD*)(a1 + 4728);
			v13 = 0;
			v14 = 0;
			v15 = *(_QWORD*)(v12 + 8);
			v16 = v12;
			while (v15)
			{
				if (*(_DWORD*)(v15 + 32) < *v11)
				{
					v15 = *(_QWORD*)(v15 + 24);
				}
				else
				{
					v16 = v15;
					v15 = *(_QWORD*)(v15 + 16);
				}
			}
			if (v16 == v12 || *v11 < *(_DWORD*)(v16 + 32))
			{
				v32 = *(_QWORD*)(a1 + 4728);
				v17 = &v32;
			}
			else
			{
				v31 = v16;
				v17 = &v31;
			}
			v18 = *(_QWORD*)(v8 + 48);
			v19 = *v17;
			v20 = *(_QWORD*)(v18 + 16);
			if (v20 != v18)
			{
				v21 = v12;
				do
				{
					++v13;
					if (v19 != v21 && *(_DWORD*)(v20 + 32) == *(_DWORD*)(v19 + 36))
						v14 = v13;
					v22 = *(_QWORD*)(v20 + 24);
					if (v22)
					{
						v20 = *(_QWORD*)(v20 + 24);
						for (k = *(_QWORD*)(v22 + 16); k; k = *(_QWORD*)(k + 16))
							v20 = k;
					}
					else
					{
						for (m = *(_QWORD*)(v20 + 8); v20 == *(_QWORD*)(m + 24); m = *(_QWORD*)(m + 8))
							v20 = m;
						if (*(_QWORD*)(v20 + 24) != m)
							v20 = m;
					}
				} while (v20 != v18);
				if (v13)
				{
					v25 = _mm_cvtsi32_si128(*v11);
					v26 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v26 + 8) = 3;
					*(_QWORD*)v26 = *(_OWORD*)&_mm_cvtepi32_pd(v25);
					*(_QWORD*)(a2 + 16) += 16i64;
					v27 = *(_QWORD*)(a2 + 16);
					*(_DWORD*)(v27 + 8) = 3;
					*(double*)v27 = (double)v14;
					*(_QWORD*)(a2 + 16) += 16i64;
					sub_14005EA50(
						a2,
						(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
						(int*)(*(_QWORD*)(a2 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
					*(_QWORD*)(a2 + 16) -= 32i64;
				}
			}
		}
		goto LABEL_38;
	}
	return 1i64;
}
// 140A69758: using guessed type wchar_t *off_140A69758[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63FD8: using guessed type __int64 qword_140C63FD8;
// 140C65200: using guessed type int dword_140C65200;

