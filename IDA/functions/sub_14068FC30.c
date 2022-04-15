#include "../winhttp.h"

//----- (000000014068FC30) ----------------------------------------------------
void __fastcall sub_14068FC30(__int64 a1, __m128* a2, double a3, int a4, __int64 a5)
{
	__int64 v7; // rcx
	unsigned __int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // eax
	__int64 v12; // rdx
	int v13; // esi
	unsigned __int64 v14; // rcx
	__int64 v15; // r15
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // r12d
	__int64 v19; // rbx
	__int64 v20; // rdx
	__int64 v21; // rax
	__int64 i; // rax
	__int64 j; // rax
	int v24; // r13d
	_QWORD* v25; // rax
	__int64 v26; // rdx
	unsigned __int64* v27; // r14
	unsigned __int64 v28; // rsi
	__int64 v29; // rbx
	__int64 v30; // rax
	__int64 v31; // rcx
	__int64 v32; // rax
	__int64* v33; // rax
	__int64 v34; // rdx
	char v35[8]; // [rsp+20h] [rbp-71h] BYREF
	int* v36; // [rsp+28h] [rbp-69h]
	__int64 v37; // [rsp+30h] [rbp-61h]
	__int64(__fastcall * *v38)(); // [rsp+40h] [rbp-51h] BYREF
	__int64 v39; // [rsp+48h] [rbp-49h]
	__int64 v40; // [rsp+50h] [rbp-41h]
	int v41; // [rsp+58h] [rbp-39h]
	__int64(__fastcall * *v42)(); // [rsp+60h] [rbp-31h] BYREF
	int v43; // [rsp+68h] [rbp-29h]
	__int64 v44; // [rsp+70h] [rbp-21h]
	int v45; // [rsp+78h] [rbp-19h]
	__int64(__fastcall * *v46)(); // [rsp+80h] [rbp-11h] BYREF
	int v47; // [rsp+88h] [rbp-9h]
	__int64 v48; // [rsp+90h] [rbp-1h]
	__m128 v49; // [rsp+A0h] [rbp+Fh] BYREF

	v36 = sub_14018B280(40i64, 0);
	v37 = 0i64;
	*(_BYTE*)v36 = 0;
	*((_QWORD*)v36 + 1) = 0i64;
	*((_QWORD*)v36 + 2) = v36;
	*((_QWORD*)v36 + 3) = v36;
	sub_140449B10(a2, a3, (__int64)v35);
	if (v37)
	{
		v7 = *(_QWORD*)(a1 + 32);
		v8 = *(_QWORD*)(v7 + 112);
		v44 = a1;
		v45 = 1;
		v42 = off_140B569F0;
		if (*(_QWORD*)(v7 + 120) >= v8)
			sub_14005E2C0(a1);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = sub_1400578C0(a1);
		v12 = *(_QWORD*)(a1 + 32);
		v38 = off_140B569F0;
		v13 = v11;
		v14 = *(_QWORD*)(v12 + 112);
		v43 = v11;
		v15 = a1;
		v40 = a1;
		v41 = 1;
		if (*(_QWORD*)(v12 + 120) >= v14)
			sub_14005E2C0(a1);
		v16 = *(_QWORD*)(a1 + 16);
		v17 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v16 + 8) = 5;
		*(_QWORD*)v16 = v17;
		*(_QWORD*)(a1 + 16) += 16i64;
		v18 = sub_1400578C0(a1);
		LODWORD(v39) = v18;
		v19 = *((_QWORD*)v36 + 2);
		if ((int*)v19 != v36)
		{
			do
			{
				v49 = _mm_cvtepi32_ps(
					_mm_unpacklo_epi32(
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 32)), _mm_cvtsi32_si128(0)),
						_mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD*)(v19 + 36)), _mm_cvtsi32_si128(0))));
				sub_1400FA180((__int64)&v46, a1, v49.m128_f32);
				sub_1400FB1D0((__int64)&v38);
				v46 = off_140B56A08;
				if (v48)
					sub_1400579E0(v48, v20, v47);
				v21 = *(_QWORD*)(v19 + 24);
				if (v21)
				{
					v19 = *(_QWORD*)(v19 + 24);
					for (i = *(_QWORD*)(v21 + 16); i; i = *(_QWORD*)(i + 16))
						v19 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v19 + 8); v19 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v19 = j;
					if (*(_QWORD*)(v19 + 24) != j)
						v19 = j;
				}
			} while ((int*)v19 != v36);
			v15 = v40;
			v18 = v39;
		}
		sub_1400FB2A0((__int64)&v42, (__int64)L"tHexes", v18);
		sub_1400FA3C0((__int64)&v46, a1, a2->m128_f32);
		v24 = v47;
		sub_1400FB2A0((__int64)&v42, (__int64)L"tIndicator", v47);
		v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v13);
		v26 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v26 = *v25;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v25 + 2);
		*(_QWORD*)(a1 + 16) += 16i64;
		v27 = (unsigned __int64*)sub_14018F0E0(&v38, L"nWorldZoneId")[1];
		if (v27)
		{
			v28 = -1i64;
			do
				++v28;
			while (*((_BYTE*)v27 + v28));
			if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
				sub_14005E2C0(a1);
			v29 = *(_QWORD*)(a1 + 16);
			v30 = sub_140062650(a1, v27, v28);
			v13 = v43;
			*(_DWORD*)(v29 + 8) = 4;
			*(_QWORD*)v29 = v30;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		}
		v31 = v39;
		*(_QWORD*)(a1 + 16) += 16i64;
		if (v31)
			sub_14018B900(v31, 0);
		v32 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v32 + 8) = 3;
		*(double*)v32 = (double)a4;
		*(_QWORD*)(a1 + 16) += 16i64;
		v33 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v33, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 48i64;
		sub_1400FB1D0(a5);
		if (v48)
			sub_1400579E0(v48, v34, v24);
		if (v15)
			sub_1400579E0(v15, v34, v18);
		sub_1400579E0(a1, v34, v13);
	}
	sub_140008410((__int64)v35);
	sub_14018B900((__int64)v36, 0);
}
// 14068FDE4: variable 'v20' is possibly undefined
// 14068FF89: variable 'v34' is possibly undefined
// 140B33868: using guessed type wchar_t aTindicator_4[11];
// 140B338F8: using guessed type wchar_t aNworldzoneid_1[13];
// 140B33918: using guessed type wchar_t aThexes_2[7];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 14068FC30: using guessed type char var_C0[8];

