#include "../winhttp.h"

//----- (0000000140467990) ----------------------------------------------------
__int64 __fastcall sub_140467990(__int64 a1, unsigned int* a2)
{
	__int64 result; // rax
	int v5; // ecx
	__int64 v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	__int64 v9; // rax
	unsigned int v10; // r8d
	unsigned int v11; // edx
	__int64* v12; // rbx
	__int64 v13; // rdi
	__int64 v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rcx
	__m128 v17; // xmm0
	__int64 v18; // rax
	__int64 v19; // rax
	int v20; // eax
	__int64* v21; // rcx
	bool v22; // zf
	__int64 v23; // rax
	__int64 v24; // rax
	__m128* v25; // rbx
	__int64 v26; // r10
	__int64 v27; // r8
	__int64 v28; // rax
	__m128* v29; // rax
	__m128 v30; // xmm2
	__int64 v31; // rax
	__int64 v32; // rcx
	__int64 v33; // rax
	__int64 v34; // rbx
	__int64 v35; // rax
	int v36; // eax
	__int64 v37; // rbx
	__int64 v38; // rax
	__int64 v39; // rcx
	__int64 v40; // rax
	int v41; // ecx
	__int64 v42; // rdx
	int v43; // [rsp+20h] [rbp-48h] BYREF
	float v44; // [rsp+24h] [rbp-44h]
	char v45[16]; // [rsp+30h] [rbp-38h] BYREF
	__m128 v46; // [rsp+40h] [rbp-28h] BYREF
	int v47; // [rsp+50h] [rbp-18h]

	if (!*(_QWORD*)(a1 + 3264))
		return 0i64;
	if (*(_DWORD*)(a1 + 3352))
	{
		result = sub_1404674C0(a1);
		if ((int)result < 0)
			return result;
		*(_DWORD*)(a1 + 3352) = 0;
	}
	if (!*a2 || !(unsigned int)sub_14001C520(a2))
	{
		v5 = 0;
	LABEL_11:
		v6 = (unsigned int)(v5 - 537526274);
		if ((_DWORD)v6)
		{
			if ((_DWORD)v6 == 2)
			{
				v7 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 280i64))(
					*(_QWORD*)(a1 + 3264),
					0i64);
				sub_140467F50(a1, v7);
			}
		}
		else
		{
			v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 272i64))(*(_QWORD*)(a1 + 3264), 0i64);
			v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 1168i64))(v8);
			*(_OWORD*)(a1 + 3296) = *(_OWORD*)(v9 + 32);
			*(_DWORD*)(a1 + 3312) = *(_DWORD*)(v9 + 48);
		}
		if (*(_DWORD*)(a1 + 244))
		{
			*(_DWORD*)(a1 + 244) = 0;
			if (*(_QWORD*)(a1 + 3376) != *(_QWORD*)(a1 + 3384) && !*(_DWORD*)(a1 + 240))
			{
				v10 = *(_DWORD*)(a1 + 52);
				if (*(_DWORD*)(a1 + 236) == v10)
				{
					v11 = *(_DWORD*)(a1 + 216);
					if (*(_DWORD*)(a1 + 232) == v11)
					{
						v12 = *(__int64**)(a1 + 3264);
						v13 = *v12;
						v14 = sub_1400323E0(v6, v11, v10);
						(*(void(__fastcall**)(__int64*, __int64, __int64))(v13 + 312))(v12, a1 + 3368, v14);
					}
				}
			}
		}
		v15 = *(_QWORD*)(a1 + 5872);
		if (v15)
		{
			if ((*(_DWORD*)(a1 + 8) & 0xC0000000) == 0x40000000)
			{
				v16 = *(_QWORD*)(a1 + 3264);
				v17 = *(__m128*)(a1 + 3296);
				v47 = *(_DWORD*)(a1 + 3312);
				v46 = v17;
				if (!v16)
					goto LABEL_35;
				if (!(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v16 + 272i64))(v16, 0i64))
					goto LABEL_35;
				v18 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 272i64))(
					*(_QWORD*)(a1 + 3264),
					0i64);
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v18 + 440i64))(v18))
					goto LABEL_35;
				v19 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 272i64))(
					*(_QWORD*)(a1 + 3264),
					0i64);
				v20 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)v19 + 848i64))(v19, 46i64);
				v21 = *(__int64**)(a1 + 3264);
				v22 = v20 == 0;
				v23 = *v21;
				if (v22)
				{
					v28 = (*(__int64(__fastcall**)(__int64*, _QWORD))(v23 + 272))(v21, 0i64);
					if (!(*(unsigned int(__fastcall**)(__int64, __int64))(*(_QWORD*)v28 + 848i64))(v28, 21i64))
					{
					LABEL_35:
						v31 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 5872) + 16i64))(*(_QWORD*)(a1 + 5872));
						(*(void(__fastcall**)(__int64, int*, __m128*, __int64))(*(_QWORD*)v31 + 464i64))(
							v31,
							&v43,
							&v46,
							a1 + 4528);
						v32 = *(_QWORD*)(a1 + 3264);
						v44 = v44 + *(float*)(a1 + 3288);
						(*(void(__fastcall**)(__int64, int*))(*(_QWORD*)v32 + 56i64))(v32, &v43);
						goto LABEL_37;
					}
					v24 = (*(__int64(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(a1 + 3264) + 272i64))(
						*(_QWORD*)(a1 + 3264),
						0i64);
					v25 = *(__m128**)(qword_140C65898 + 29096);
					v26 = v24;
					if (!v25)
						v25 = *(__m128**)(qword_140C65898 + 29088);
					v27 = 21i64;
				}
				else
				{
					v24 = (*(__int64(__fastcall**)(__int64*, _QWORD))(v23 + 272))(v21, 0i64);
					v25 = *(__m128**)(qword_140C65898 + 29096);
					v26 = v24;
					if (!v25)
						v25 = *(__m128**)(qword_140C65898 + 29088);
					v27 = 46i64;
				}
				v29 = (__m128*)(*(__int64(__fastcall**)(__int64, char*, __int64, _QWORD))(*(_QWORD*)v24 + 856i64))(
					v26,
					v45,
					v27,
					0i64);
				v30 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(*v29, *v29, 85), v25[11]),
							_mm_mul_ps(_mm_shuffle_ps(*v29, *v29, 0), v25[10])),
						_mm_mul_ps(_mm_shuffle_ps(*v29, *v29, 170), v25[12])),
					v25[13]);
				v46 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v30, v30, 85), *(__m128*)(a1 + 4608)),
							_mm_mul_ps(_mm_shuffle_ps(v30, v30, 0), *(__m128*)(a1 + 4592))),
						_mm_mul_ps(_mm_shuffle_ps(v30, v30, 170), *(__m128*)(a1 + 4624))),
					*(__m128*)(a1 + 4640));
				goto LABEL_35;
			}
			v33 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 16i64))(v15);
			v34 = **(_QWORD**)(a1 + 3264);
			v35 = (*(__int64(__fastcall**)(__int64, int*, __int64, __int64))(*(_QWORD*)v33 + 464i64))(
				v33,
				&v43,
				a1 + 3296,
				a1 + 4528);
			(*(void(__fastcall**)(_QWORD, __int64))(v34 + 56))(*(_QWORD*)(a1 + 3264), v35);
		}
	LABEL_37:
		if (*(_DWORD*)(a1 + 3328))
		{
			v36 = sub_14045B6B0(a1);
			v37 = sub_1403D90D0(qword_140C65898, v36);
			if (v37
				|| (v38 = *(_QWORD*)(a1 + 184)) != 0
				&& (*(_DWORD*)(v38 + 96) & 0x2000) != 0
				&& *(_QWORD*)(a1 + 408)
				&& (v37 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(*(_QWORD*)(a1 + 400) + 8i64))) != 0)
			{
				v39 = *(_QWORD*)(a1 + 5864);
				if (!v39)
					return 0i64;
				v43 = 0;
				if (!(*(unsigned int(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v39 + 16i64))(v39, &v43, 0i64))
					return 0i64;
				v40 = sub_14022D500(*(_DWORD*)(v37 + 216));
				if (v40)
				{
					if ((v41 = *(_DWORD*)(v37 + 52), v41 == 1) && (v42 = *(unsigned int*)(v40 + 136), (int)v42 > 0)
						|| !v41 && (v42 = *(unsigned int*)(v40 + 132), (int)v42 > 0))
					{
						(*(void(__fastcall**)(_QWORD, __int64, __int64))(**(_QWORD**)(a1 + 5864) + 728i64))(
							*(_QWORD*)(a1 + 5864),
							v42,
							1i64);
					}
				}
			}
			*(_DWORD*)(a1 + 3328) = 0;
		}
		return 0i64;
	}
	result = (*(__int64(__fastcall**)(_QWORD, unsigned int*))(**(_QWORD**)(a1 + 3264) + 256i64))(
		*(_QWORD*)(a1 + 3264),
		a2);
	v5 = result;
	if ((int)result >= 0)
		goto LABEL_11;
	return result;
}
// 140467ACA: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140467990: using guessed type char var_38[16];

