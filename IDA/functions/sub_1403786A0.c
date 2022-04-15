#include "../winhttp.h"

//----- (00000001403786A0) ----------------------------------------------------
void __fastcall sub_1403786A0(__int64 a1)
{
	__int64 v2; // r11
	__m128* v3; // rdx
	BOOL v4; // ecx
	__int64 v5; // rcx
	__m128 v6; // xmm2
	__int64 v7; // rax
	__int64 v8; // rcx
	__m128 v9; // xmm1
	_QWORD* i; // rdi
	int* v11; // rax
	__m128 v12; // [rsp+20h] [rbp-38h] BYREF
	__m128 v13[2]; // [rsp+30h] [rbp-28h] BYREF

	if (!*(_DWORD*)(a1 + 1112))
	{
		while (*(_QWORD*)(a1 + 1120))
		{
			if (*(_QWORD*)(a1 + 1120))
			{
				sub_14038FBF0(*(_QWORD**)(a1 + 1120));
				sub_14018B900(v2, 0);
			}
		}
		if (*(_QWORD*)(a1 + 24) && !*(_DWORD*)(*(_QWORD*)(a1 + 32) + 1052i64)
			|| (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 48) + 8i64))(*(_QWORD*)(a1 + 48)) == 1)
		{
			*(_DWORD*)(a1 + 1048) = 1;
		}
		else
		{
			v3 = (__m128*)(a1 + 496);
			if (*(float*)(a1 + 512) <= *(float*)(a1 + 496)
				|| *(float*)(a1 + 516) <= *(float*)(a1 + 500)
				|| *(float*)(a1 + 520) <= *(float*)(a1 + 504))
			{
				v4 = *(float*)(a1 + 448) <= *(float*)(a1 + 432)
					|| *(float*)(a1 + 452) <= *(float*)(a1 + 436)
					|| *(float*)(a1 + 456) <= *(float*)(a1 + 440);
				v3 = (__m128*)(a1 + 368);
				if (!v4)
					v3 = (__m128*)(a1 + 432);
			}
			v5 = *(_QWORD*)(a1 + 16);
			if (*(_QWORD*)(a1 + 24))
			{
				v6 = _mm_mul_ps(_mm_add_ps(v3[1], *v3), (__m128)xmmword_140B7AC50);
				v12 = _mm_add_ps(
					_mm_add_ps(
						_mm_add_ps(
							_mm_mul_ps(_mm_shuffle_ps(v6, v6, 85), *(__m128*)(a1 + 192)),
							_mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), *(__m128*)(a1 + 176))),
						_mm_mul_ps(_mm_shuffle_ps(v6, v6, 170), *(__m128*)(a1 + 208))),
					*(__m128*)(a1 + 224));
				v7 = sub_1403589F0(v5, &v12);
			}
			else
			{
				v7 = sub_140358B00(v5, v3, (__m128*)(a1 + 176));
			}
			v8 = *(_QWORD*)(a1 + 16);
			v9 = _mm_max_ps(_mm_max_ps(*(__m128*)(a1 + 640), *(__m128*)(a1 + 704)), *(__m128*)(a1 + 768));
			v13[0] = _mm_min_ps(_mm_min_ps(*(__m128*)(a1 + 624), *(__m128*)(a1 + 688)), *(__m128*)(a1 + 752));
			v13[1] = v9;
			*(_DWORD*)(a1 + 1048) = sub_140359110(v8, v7, v13, (__m128*)(a1 + 752));
			for (i = *(_QWORD**)(*(_QWORD*)(a1 + 16) + 5456i64); i; i = (_QWORD*)i[39])
			{
				if (!(*(unsigned int(__fastcall**)(_QWORD*))(*i + 24i64))(i))
				{
					v11 = sub_14018B280(48i64, 0);
					if (v11)
						sub_14038FB20(v11, (__int64)i, a1);
				}
			}
		}
	}
}
// 1403786D9: variable 'v2' is possibly undefined
// 140B7AC50: using guessed type __int128 xmmword_140B7AC50;

