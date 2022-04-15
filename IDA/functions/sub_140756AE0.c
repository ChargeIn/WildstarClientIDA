#include "../winhttp.h"

//----- (0000000140756AE0) ----------------------------------------------------
__int64 __fastcall sub_140756AE0(__int64 a1)
{
	__int64 v1; // rbx
	__int64 v4; // rcx
	int v5; // eax
	__int64 v6; // rdx
	__int64 v7; // rax
	__int64 v8; // r15
	unsigned int v9; // ebp
	__int64 v10; // rax
	__int64 v11; // rbx
	unsigned int v12; // edi
	__int64 v13; // rax
	_DWORD* v14; // r14
	__int64 v15; // rax
	__m128i v16; // xmm0
	__int64 v17; // rcx
	__int64 v18; // rdi
	__int64 v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rcx
	__int16* v23; // rax
	__int64 v24; // rdx
	__int64 v25; // rax
	__int64 i; // rax
	__int64 j; // rax

	v1 = qword_140C659B0;
	if (!qword_140C659B0)
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = qword_140C659B0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v1 + 1);
	}
	v4 = *(_QWORD*)(qword_140C65898 + 7152);
	if (!v4)
		goto LABEL_30;
	v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4);
	if (v5 == 166)
	{
		v7 = v1 + 240;
	}
	else
	{
		if (v5 != 167)
		{
		LABEL_30:
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
			*(_QWORD*)(a1 + 16) += 16i64;
			return 1i64;
		}
		v7 = v1 + 496;
	}
	if (!v7)
		goto LABEL_30;
	v8 = v7 + 96;
	if (v7 == -96)
		goto LABEL_30;
	v9 = 1;
	sub_140058900(a1, v6, 0);
	v10 = *(_QWORD*)(v8 + 8);
	v11 = *(_QWORD*)(v10 + 16);
	if (v11 != v10)
	{
		while (1)
		{
			v12 = *(_DWORD*)(v11 + 32);
			if (qword_140C63840)
				break;
			if (!dword_140C64634 && (int)sub_14024D920() >= 0)
			{
				v13 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64270 + 24i64))(qword_140C64270, v12);
			LABEL_16:
				v14 = (_DWORD*)v13;
				if (v13)
				{
					v15 = *(_QWORD*)(a1 + 16);
					v16 = _mm_cvtsi32_si128(v9++);
					*(_DWORD*)(v15 + 8) = 3;
					*(_QWORD*)v15 = *(_OWORD*)&_mm_cvtepi32_pd(v16);
					v17 = *(_QWORD*)(a1 + 32);
					*(_QWORD*)(a1 + 16) += 16i64;
					if (*(_QWORD*)(v17 + 120) >= *(_QWORD*)(v17 + 112))
						sub_14005E2C0(a1);
					v18 = *(_QWORD*)(a1 + 16);
					v19 = sub_14005C1B0(a1, 0, 0);
					*(_DWORD*)(v18 + 8) = 5;
					*(_QWORD*)v18 = v19;
					*(_QWORD*)(a1 + 16) += 16i64;
					LODWORD(v18) = *v14;
					sub_140058710(a1, (unsigned __int64*)"nZoneId", 7ui64);
					v20 = *(_QWORD*)(a1 + 16);
					*(_DWORD*)(v20 + 8) = 3;
					*(double*)v20 = (double)(int)v18;
					*(_QWORD*)(a1 + 16) += 16i64;
					v21 = (__int64*)sub_1400580E0(a1, -3);
					sub_14005EA50(a1, v21, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
					v23 = sub_14034BDD0(v22, v14[1]);
					sub_1400F0090(a1, v24, (unsigned __int64*)"strName", (unsigned __int16*)v23);
					sub_14005EA50(
						a1,
						(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
						(int*)(*(_QWORD*)(a1 + 16) - 32i64),
						(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
					*(_QWORD*)(a1 + 16) -= 32i64;
				}
			}
			v25 = *(_QWORD*)(v11 + 24);
			if (v25)
			{
				v11 = *(_QWORD*)(v11 + 24);
				for (i = *(_QWORD*)(v25 + 16); i; i = *(_QWORD*)(i + 16))
					v11 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v11 + 8); v11 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v11 = j;
				if (*(_QWORD*)(v11 + 24) != j)
					v11 = j;
			}
			if (v11 == *(_QWORD*)(v8 + 8))
				return 1i64;
		}
		v13 = qword_140C63840(off_140A6E3E8, v12, qword_140C63858);
		goto LABEL_16;
	}
	return 1i64;
}
// 140756B76: variable 'v6' is possibly undefined
// 140756CAD: variable 'v22' is possibly undefined
// 140756CBF: variable 'v24' is possibly undefined
// 140A6E3E8: using guessed type wchar_t *off_140A6E3E8[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64270: using guessed type __int64 qword_140C64270;
// 140C64634: using guessed type int dword_140C64634;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659B0: using guessed type __int64 qword_140C659B0;

