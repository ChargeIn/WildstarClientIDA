#include "../winhttp.h"

//----- (00000001405F1B60) ----------------------------------------------------
__int64 __fastcall sub_1405F1B60(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	_QWORD* v4; // rbx
	__int64 v5; // rsi
	float v6; // xmm6_4
	__int64 v7; // rax
	__m128* v8; // r14
	__int64 v9; // rbx
	__int64 v10; // r8
	__m128* v11; // rax
	__m128 v12; // xmm1
	__m128 v13; // xmm2
	float v14; // xmm2_4
	__int64 v15; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v18; // r13
	unsigned __int64 v19; // r15
	__int64 v20; // r12
	unsigned __int64 v21; // r14
	__m128* v22; // rbx
	__m128* v23; // rbx
	__m128 v24; // xmm1
	__m128 v25; // xmm2
	float v26; // xmm2_4
	unsigned __int64 v27; // r14
	__m128* v28; // rbx
	__m128* v29; // rcx
	__int64 v30; // rax
	unsigned int v31; // ebx
	unsigned int v32; // r12d
	__int64 v33; // rax
	__int64 v34; // r13
	__int64 v35; // r15
	int* v36; // rax
	__int64 v37; // r14
	__int64 v38; // rax
	int* v39; // rax
	int v40; // [rsp+48h] [rbp-29h] BYREF
	int v41; // [rsp+50h] [rbp-21h] BYREF
	unsigned int v42; // [rsp+54h] [rbp-1Dh]
	int v43; // [rsp+58h] [rbp-19h]
	unsigned int* v44; // [rsp+60h] [rbp-11h] BYREF
	unsigned int v45; // [rsp+68h] [rbp-9h]
	__int128 v46; // [rsp+78h] [rbp+7h] BYREF
	unsigned int v47; // [rsp+E0h] [rbp+6Fh] BYREF
	unsigned int v48; // [rsp+E8h] [rbp+77h] BYREF
	int v49; // [rsp+F0h] [rbp+7Fh] BYREF

	result = qword_140C65898;
	if (*(_QWORD*)(qword_140C65898 + 25744))
	{
		v3 = a1[18];
		if (v3)
		{
			v4 = *(_QWORD**)(qword_140C65920 + 8);
			if (v4)
			{
				while (v4[9] != v3)
				{
					v4 = (_QWORD*)v4[4];
					if (!v4)
						goto LABEL_8;
				}
				(*(void(__fastcall**)(_QWORD*))(*v4 + 8i64))(v4);
				(*(void(__fastcall**)(_QWORD*, __int64)) * v4)(v4, 1i64);
			}
		}
	LABEL_8:
		(*(void(__fastcall**)(_QWORD*, unsigned int**, __int64, int*))(*a1 + 464i64))(a1, &v44, 1i64, &v40);
		v5 = 0i64;
		v6 = 3.4028235e38;
		if ((*(_DWORD*)((*(__int64(__fastcall**)(_QWORD*))(*a1 + 328i64))(a1) + 8) & 0x2000) != 0 && !v40)
		{
			v7 = a1[20];
			v8 = 0i64;
			v9 = *(_QWORD*)(v7 + 16);
			if (v9 != v7)
			{
				v10 = qword_140C65898;
				do
				{
					v11 = (__m128*)sub_1403D90D0(v10, *(_DWORD*)(v9 + 32));
					v10 = qword_140C65898;
					if (v11)
					{
						v12 = _mm_sub_ps(v11[286], *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64));
						v13 = _mm_mul_ps(v12, v12);
						v14 = (float)(v13.m128_f32[0] + _mm_shuffle_ps(v13, v13, 85).m128_f32[0])
							+ _mm_shuffle_ps(v13, v13, 170).m128_f32[0];
						if (v14 < v6)
						{
							v8 = v11;
							v6 = v14;
						}
					}
					v15 = *(_QWORD*)(v9 + 24);
					if (v15)
					{
						v9 = *(_QWORD*)(v9 + 24);
						for (i = *(_QWORD*)(v15 + 16); i; i = *(_QWORD*)(i + 16))
							v9 = i;
					}
					else
					{
						for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
							v9 = j;
						if (*(_QWORD*)(v9 + 24) != j)
							v9 = j;
					}
				} while (v9 != a1[20]);
			}
			v47 = -1;
			if (v8)
			{
				result = sub_14047EA60(v8);
				a1[18] = result;
				goto LABEL_69;
			}
			v18 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 320i64))(a1);
			if (*(_QWORD*)(v18 + 32))
			{
				v19 = 0i64;
				v46 = xmmword_140B7B4F0;
				do
				{
					v20 = *(_QWORD*)(v18 + 24) + 4 * v19;
					v21 = ((__int64(__fastcall*)(__int64))a1[26])(v20);
					v22 = *(__m128**)(a1[25] + 8 * (v21 % a1[24]));
					if (v22)
					{
						while (v21 != v22->m128_u64[0] || !((unsigned int(__fastcall*)(__int64, __m128*))a1[27])(v20, &v22[1]))
						{
							v22 = (__m128*)v22->m128_u64[1];
							if (!v22)
								goto LABEL_35;
						}
						v23 = v22 + 2;
						if (v23)
						{
							v24 = _mm_sub_ps(*v23, *(__m128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4576i64));
							v25 = _mm_mul_ps(v24, v24);
							v26 = (float)(v25.m128_f32[0] + _mm_shuffle_ps(v25, v25, 85).m128_f32[0])
								+ _mm_shuffle_ps(v25, v25, 170).m128_f32[0];
							if (v26 < v6)
							{
								v6 = v26;
								v47 = *(_DWORD*)(*(_QWORD*)(v18 + 24) + 4 * v19);
							}
						}
					}
				LABEL_35:
					++v19;
				} while (v19 < *(_QWORD*)(v18 + 32));
			}
			if (v47 != -1)
			{
				v41 = 5;
				v42 = v47;
				v43 = 0;
				v27 = ((__int64(__fastcall*)(unsigned int*))a1[26])(&v47);
				v28 = *(__m128**)(a1[25] + 8 * (v27 % a1[24]));
				if (v28)
				{
					while (v27 != v28->m128_u64[0]
						|| !((unsigned int(__fastcall*)(unsigned int*, __m128*))a1[27])(&v47, &v28[1]))
					{
						v28 = (__m128*)v28->m128_u64[1];
						if (!v28)
							goto LABEL_41;
					}
					v29 = v28 + 2;
				}
				else
				{
				LABEL_41:
					v29 = 0i64;
				}
				if (sub_1404860D0(v29, 10.0, 20.0))
				{
					result = qword_140C65898;
					v46 = 0ui64;
					if (*(_DWORD*)qword_140C65920)
					{
						result = sub_140486F10(
							qword_140C65920,
							(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
							(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
							&v41,
							(__int64*)&v46);
						a1[18] = result;
						goto LABEL_69;
					}
				}
				else
				{
					result = (__int64)sub_1405F2370;
					*(_QWORD*)&v46 = a1;
					*((_QWORD*)&v46 + 1) = sub_1405F2370;
					if (*(_DWORD*)qword_140C65920)
					{
						result = sub_140486DC0(
							qword_140C65920,
							(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
							&v41,
							&v46,
							0,
							0);
						v5 = result;
					}
				}
				a1[18] = v5;
			LABEL_69:
				if (v44)
					return (*(__int64(__fastcall**)(unsigned int*))(*((_QWORD*)v44 - 2) + 8i64))(v44 - 4);
				return result;
			}
		}
		v30 = *a1;
		v31 = 0;
		v49 = 2139095039;
		v32 = 0;
		v48 = 0;
		v47 = 0;
		v33 = (*(__int64(__fastcall**)(_QWORD*))(v30 + 48))(a1);
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			sub_1403F7E50(qword_140C65898, v44, v45, &v47, (float*)&v49, *(_DWORD*)(v33 + 496), &v48);
			v31 = v47;
			v32 = v48;
		}
		v34 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 312i64))(a1);
		v35 = *(_QWORD*)(v34 + 8);
		if (v35)
		{
			v36 = sub_14018B280(8 * v35 + 16, 0);
			if (v36)
			{
				*((_QWORD*)v36 + 1) = v35;
				v37 = (__int64)(v36 + 4);
				*(_QWORD*)v36 = off_140B55060;
			}
			else
			{
				v37 = 16i64;
			}
		}
		else
		{
			v37 = 0i64;
		}
		result = (__int64)sub_1407DB590((int*)v37, *(int**)v34, 8 * v35);
		if (*(_QWORD*)(qword_140C65898 + 120))
		{
			result = sub_1403F8070(qword_140C65898, v37, v35, &v47, (float*)&v49, &v48);
			v31 = v47;
			v32 = v48;
		}
		if (!v31)
		{
		LABEL_67:
			if (v37)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v37 - 16) + 8i64))(v37 - 16);
			goto LABEL_69;
		}
		v38 = (*(__int64(__fastcall**)(_QWORD*))(*a1 + 320i64))(a1);
		v41 = 4;
		v39 = *(int**)(v38 + 8);
		v43 = 0;
		v42 = *v39;
		if (sub_140485FA0(v31, v32))
		{
			result = qword_140C65898;
			v46 = 0ui64;
			if (*(_DWORD*)qword_140C65920)
			{
				result = sub_140486F10(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Destination_Arrow_01_BLU\\Destination_Arrow_01_BLU.m3",
					(__int128*)(*(_QWORD*)(qword_140C65898 + 25744) + 4528i64),
					&v41,
					(__int64*)&v46);
			LABEL_65:
				v5 = result;
			}
		}
		else
		{
			result = (__int64)sub_1405F2130;
			*(_QWORD*)&v46 = a1;
			*((_QWORD*)&v46 + 1) = sub_1405F2130;
			if (*(_DWORD*)qword_140C65920)
			{
				result = sub_140486DC0(
					qword_140C65920,
					(__int64)L"Art\\FX\\Model\\Props\\Explorer_Arrow_01_BLU\\Explorer_Arrow_01_BLU.m3",
					&v41,
					&v46,
					v31,
					v32);
				goto LABEL_65;
			}
		}
		a1[18] = v5;
		goto LABEL_67;
	}
	return result;
}
// 140B24490: using guessed type wchar_t aArtFxModelProp_22[72];
// 140B24520: using guessed type wchar_t aArtFxModelProp_23[66];
// 140B245B0: using guessed type wchar_t aArtFxModelProp_20[72];
// 140B24640: using guessed type wchar_t aArtFxModelProp_21[66];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B7B4F0: using guessed type __int128 xmmword_140B7B4F0;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65920: using guessed type __int64 qword_140C65920;

