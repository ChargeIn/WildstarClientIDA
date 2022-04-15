#include "../winhttp.h"

//----- (000000014032D6B0) ----------------------------------------------------
__int64 __fastcall sub_14032D6B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v5; // rax
	__int64 v6; // rcx
	float v7; // xmm2_4
	__int64 v8; // rsi
	float v9; // xmm1_4
	unsigned int* v10; // r11
	__int64 v11; // rdi
	unsigned __int16* v12; // r9
	__int64 v13; // r10
	int v14; // edx
	int v15; // eax
	unsigned int v16; // edx
	unsigned int v17; // ecx
	int i; // eax
	unsigned int v19; // eax
	unsigned __int16* v20; // r9
	__int64 v21; // r10
	int v22; // edx
	int v23; // eax
	unsigned int v24; // edx
	unsigned int v25; // ecx
	int j; // eax
	__int64 v27; // rcx
	__int64 v28; // rcx
	_QWORD* v29; // rdx
	__int64 v30; // rdx

	*(_QWORD*)(a1 + 416) = *(_QWORD*)(a3 + 144);
	result = sub_14032F6F0(a1, a2, (unsigned __int16*)a3);
	if ((int)result >= 0)
	{
		v5 = *(_QWORD*)(a1 + 416);
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 40) + 496i64)
			+ 96i64
			* *(unsigned __int16*)(352i64 * **(unsigned __int16**)(a1 + 8)
				+ *(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 40) + 64i64) + 392i64)
				+ 6);
		*(_DWORD*)(a1 + 976) = 0;
		*(_QWORD*)(a1 + 1048) = v6;
		if ((*(_BYTE*)(v5 + 2128) & 1) != 0)
			*(_DWORD*)(a1 + 976) = 1;
		if ((*(_BYTE*)(v5 + 2128) & 2) != 0)
			++* (_DWORD*)(a1 + 976);
		if ((*(_BYTE*)(v5 + 2128) & 4) != 0)
			++* (_DWORD*)(a1 + 976);
		*(_DWORD*)(a1 + 1056) = 0;
		v7 = -3.4028235e38;
		*(__m128*)(a1 + 880) = _mm_unpacklo_ps(
			_mm_unpacklo_ps(
				(__m128) * *(unsigned int**)(v5 + 648),
				(__m128) * (unsigned int*)(*(_QWORD*)(v5 + 648) + 8i64)),
			_mm_unpacklo_ps((__m128) * (unsigned int*)(*(_QWORD*)(v5 + 648) + 4i64), (__m128)0i64));
		v8 = *(_QWORD*)(a1 + 416);
		v9 = -3.4028235e38;
		if (*(_WORD*)(v8 + 1272))
		{
			v10 = (unsigned int*)(v8 + 1280);
			v11 = *(unsigned __int16*)(v8 + 1272);
			do
			{
				if (*v10)
				{
					v12 = (unsigned __int16*)*((_QWORD*)v10 + 2);
					v13 = *v10;
					do
					{
						v14 = *v12;
						v15 = v14 & 0xFFFF7FFF;
						v16 = (v14 & 0xFFFF8000) << 16;
						if ((v15 & 0x7C00) != 0)
						{
							v15 = (v15 + 114688) << 13;
						}
						else if ((v15 & 0x3FF) != 0)
						{
							v17 = (v15 & 0x3FF) << 13;
							for (i = 113; v17 <= 0x7FFFFF; --i)
								v17 *= 2;
							v15 = v17 & 0x7FFFFF | (i << 23);
						}
						if (v9 < COERCE_FLOAT(v16 | v15))
							v9 = sub_1401C9770(v12);
						++v12;
						--v13;
					} while (v13);
				}
				v10 += 6;
				--v11;
			} while (v11);
		}
		v19 = *(_DWORD*)(v8 + 584);
		if (v19)
		{
			v20 = *(unsigned __int16**)(v8 + 600);
			v21 = v19;
			do
			{
				v22 = *v20;
				v23 = v22 & 0xFFFF7FFF;
				v24 = (v22 & 0xFFFF8000) << 16;
				if ((v23 & 0x7C00) != 0)
				{
					v23 = (v23 + 114688) << 13;
				}
				else if ((v23 & 0x3FF) != 0)
				{
					v25 = (v23 & 0x3FF) << 13;
					for (j = 113; v25 <= 0x7FFFFF; --j)
						v25 *= 2;
					v23 = v25 & 0x7FFFFF | (j << 23);
				}
				if (v7 < COERCE_FLOAT(v24 | v23))
					v7 = sub_1401C9770(v20);
				++v20;
				--v21;
			} while (v21);
		}
		v27 = *(_QWORD*)(a1 + 424);
		*(_BYTE*)(a1 + 1063) = 0;
		*(float*)(a1 + 916) = v7 * v9;
		if (v27)
			sub_1403131D0(v27);
		*(_QWORD*)(a1 + 424) = 0i64;
		*(_QWORD*)(a1 + 432) = 0i64;
		*(_QWORD*)(a1 + 440) = 0i64;
		*(_QWORD*)(a1 + 448) = 0i64;
		*(_QWORD*)(a1 + 456) = 0i64;
		*(_QWORD*)(a1 + 464) = 0i64;
		for (*(_QWORD*)(a1 + 472) = 0i64; *(_QWORD*)(a1 + 1064); *(_QWORD*)(v28 + 16) = 0i64)
		{
			v28 = *(_QWORD*)(a1 + 1064);
			v29 = *(_QWORD**)(v28 + 8);
			if (v29)
				*v29 = *(_QWORD*)(v28 + 16);
			v30 = *(_QWORD*)(v28 + 16);
			if (v30)
				*(_QWORD*)(v30 + 8) = *(_QWORD*)(v28 + 8);
			*(_QWORD*)(v28 + 8) = 0i64;
		}
		return 0i64;
	}
	return result;
}
// 14032D83F: variable 'v12' is possibly undefined
// 14032D843: variable 'v13' is possibly undefined
// 14032D848: variable 'v10' is possibly undefined
// 14032D8EF: variable 'v20' is possibly undefined
// 14032D8F3: variable 'v21' is possibly undefined

