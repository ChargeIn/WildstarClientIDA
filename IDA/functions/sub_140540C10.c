#include "../winhttp.h"

//----- (0000000140540C10) ----------------------------------------------------
void __fastcall sub_140540C10(__int64 a1)
{
	_QWORD* i; // rbx
	__int64 v3; // rcx
	__int64 v4; // rsi
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int v7; // ecx
	unsigned int* v8; // rbx
	unsigned int v9; // eax
	unsigned int v10; // eax
	unsigned int v11; // eax
	__int64 v12; // rcx
	unsigned int v13; // edx
	__int64 v14; // rax
	__int64 v15; // rsi
	_QWORD* v16; // rbx
	__int64 v17; // r8
	__int64 v18; // rax
	_QWORD* j; // rax
	__int64 k; // rax
	__int64 v21; // rdx
	_DWORD* v22; // rax
	unsigned int v23; // ecx
	int v24; // r8d
	BOOL v25; // ebx
	bool v26; // zf
	_BOOL8 v27; // r14
	__int64 v28; // rsi
	_QWORD* v29; // rbx
	__int64 v30; // r8
	__int64 v31; // rcx
	int v32; // eax
	__int64 v33; // rax
	_QWORD* m; // rax
	__int64 n; // rax
	__m128i v36; // [rsp+50h] [rbp-B0h] BYREF
	_BYTE v37[20]; // [rsp+60h] [rbp-A0h] BYREF
	int v38[3]; // [rsp+80h] [rbp-80h] BYREF
	__int64 v39; // [rsp+8Ch] [rbp-74h]
	__m128 v40[3]; // [rsp+A0h] [rbp-60h] BYREF
	__int64 v41; // [rsp+D8h] [rbp-28h]
	__int64 v42; // [rsp+130h] [rbp+30h]

	sub_140546060(a1, 1);
	for (i = (_QWORD*)(a1 + 536); *i; (*(void(__fastcall**)(_QWORD))(*(_QWORD*)*i + 32i64))(*i))
		;
	while (*(_QWORD*)(a1 + 544))
		sub_140454090(*(__int64**)(a1 + 544));
	v3 = *(_QWORD*)(a1 + 568);
	if (v3)
	{
		do
		{
			v4 = *(_QWORD*)(v3 + 32);
			if (*(_QWORD**)(v3 + 80) == i)
				(**(void(__fastcall***)(__int64, __int64))v3)(v3, 1i64);
			v3 = v4;
		} while (v4);
	}
	v5 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v6 = sub_14023D840(*(_DWORD*)(a1 + 840));
	if (v5)
	{
		if (v6)
		{
			v7 = *(_DWORD*)(v6 + 148);
			if (v7)
			{
				v8 = (unsigned int*)sub_140248F00(v7);
				if (v8)
				{
					*(_DWORD*)(a1 + 84) = sub_1401AE6A0(0, 0xFFFF);
					v9 = v8[10];
					if (v9)
						*(_DWORD*)(a1 + 88) = v9;
					v10 = v8[11];
					if (v10)
						*(_DWORD*)(a1 + 88) = v10;
					v11 = v8[12];
					if (v11)
						*(_DWORD*)(a1 + 88) = v11;
					sub_1407E4830((int*)v40, 0i64, 0xA0ui64);
					sub_1405620A0(v12, v40, 0i64, *v8, 0);
					sub_140543630(a1, 0, (__int64)v40, *(_DWORD*)(a1 + 340), 1, 1, 0, 0i64, 0.0, 0);
					sub_14018B900(v41, 0);
					sub_14018B900(v42, 0);
				}
			}
		}
	}
	v13 = *(_DWORD*)(a1 + 840);
	if (v13)
	{
		v14 = *(_QWORD*)(a1 + 312);
		*(_QWORD*)&v37[4] = v13;
		*(_DWORD*)v37 = *(_DWORD*)(*(_QWORD*)(v14 + 112) + 24i64) == 8;
		*(_QWORD*)&v37[12] = 1i64;
		sub_1405663F0(qword_140C65B70 + 1616, &v36, v37);
		if (v36.m128i_i64[0] != _mm_srli_si128(v36, 8).m128i_u64[0])
		{
			v15 = v36.m128i_i64[1];
			v16 = (_QWORD*)v36.m128i_i64[0];
			do
			{
				v17 = v16[7];
				if (v17)
					sub_140543630(a1, 0, v17, *(_DWORD*)(a1 + 340), 1, 0, 0, 0i64, 0.0, 0);
				v18 = v16[3];
				if (v18)
				{
					v16 = (_QWORD*)v16[3];
					for (j = *(_QWORD**)(v18 + 16); j; j = (_QWORD*)j[2])
						v16 = j;
				}
				else
				{
					for (k = v16[1]; v16 == *(_QWORD**)(k + 24); k = *(_QWORD*)(k + 8))
						v16 = (_QWORD*)k;
					if (v16[3] != k)
						v16 = (_QWORD*)k;
				}
			} while (v16 != (_QWORD*)v15);
		}
		v21 = *(_QWORD*)(a1 + 312);
		v22 = *(_DWORD**)(v21 + 112);
		v23 = v22[31];
		v25 = v23 <= 7 && (v24 = 133, _bittest(&v24, v23)) || v22[6] == 3 && !v22[39] && ((v23 - 4) & 0xFFFFFFFB) == 0;
		v26 = *(_DWORD*)(*(_QWORD*)(v21 + 112) + 24i64) == 8;
		v38[1] = *(_DWORD*)(a1 + 840);
		v38[2] = 1;
		v38[0] = v26;
		v39 = 1i64;
		sub_1405663F0(qword_140C65B70 + 1616, v37, v38);
		v27 = v25;
		v36 = *(__m128i*)v37;
		if (*(_QWORD*)v37 != _mm_srli_si128(*(__m128i*)v37, 8).m128i_u64[0])
		{
			v28 = v36.m128i_i64[1];
			v29 = (_QWORD*)v36.m128i_i64[0];
			do
			{
				v30 = v29[7];
				if (v30)
				{
					if (!v27
						|| (v31 = *(_QWORD*)(*(_QWORD*)(a1 + 312) + 112i64), *(_DWORD*)(v31 + 24) == 3)
						|| (v32 = *(_DWORD*)(v31 + 124), v32 == 4)
						|| (unsigned int)(v32 - 7) <= 1)
					{
						sub_140543630(a1, 1, v30, *(_DWORD*)(a1 + 344), 1, 0, *(_DWORD*)(a1 + 340), 0i64, 0.0, 0);
					}
					else
					{
						sub_140543630(a1, 0, v30, *(_DWORD*)(a1 + 340), 1, 0, 0, 0i64, 0.0, 0);
					}
				}
				v33 = v29[3];
				if (v33)
				{
					v29 = (_QWORD*)v29[3];
					for (m = *(_QWORD**)(v33 + 16); m; m = (_QWORD*)m[2])
						v29 = m;
				}
				else
				{
					for (n = v29[1]; v29 == *(_QWORD**)(n + 24); n = *(_QWORD*)(n + 8))
						v29 = (_QWORD*)n;
					if (v29[3] != n)
						v29 = (_QWORD*)n;
				}
			} while (v29 != (_QWORD*)v28);
		}
	}
}
// 140540D60: variable 'v12' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140540C10: using guessed type __m128 var_D0[3];

