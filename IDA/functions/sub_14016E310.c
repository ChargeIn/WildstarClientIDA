#include "../winhttp.h"

//----- (000000014016E310) ----------------------------------------------------
__int64 __fastcall sub_14016E310(__int64 a1, int* a2)
{
	__int64 v2; // rdx
	__int64 v3; // rsi
	__int64 v4; // r15
	int v5; // edi
	int v6; // ebx
	int v7; // eax
	int v8; // edx
	__int64 v9; // rcx
	__int64 v10; // r9
	__int64 v11; // r10
	int v12; // r11d
	__int64 v13; // rbp
	unsigned __int64 v14; // r14
	int v15; // eax
	int v17; // ebx
	__int64 v18; // rcx
	__int64 v19; // rax
	unsigned int v20; // ebx
	__int64 v21; // rdx
	__m128 v22; // xmm1
	int v23; // eax
	__int128 v24; // [rsp+50h] [rbp-48h] BYREF
	__int128 v25; // [rsp+60h] [rbp-38h] BYREF
	__int128 v26; // [rsp+70h] [rbp-28h]

	v2 = *a2;
	if ((int)v2 < 0)
		return 0i64;
	if ((int)v2 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
		return 0i64;
	v3 = *(_QWORD*)(a1 + 1416);
	v4 = *(_QWORD*)(v3 + 8 * v2);
	if (!v4)
		return 0i64;
	v5 = 0;
	v6 = 0;
	v7 = sub_14016DC20(a1);
	v13 = v7;
	if (v7 > 0)
	{
		v14 = *(_QWORD*)(v9 + 1400);
		do
		{
			if (v14 > 1)
			{
				if ((int)v14 > v6)
					v15 = *(_DWORD*)(*(_QWORD*)(*(_QWORD*)(v10 + 1392) + 8 * v11) + 4i64);
				else
					v15 = 0;
			}
			else
			{
				v15 = *(_DWORD*)(v10 + 724) - *(_DWORD*)(v10 + 716);
			}
			++v11;
			v5 += v15;
			++v6;
		} while (v11 < v13);
		if (v5 > 0)
			return (unsigned int)v5;
	}
	v17 = -2;
	if (v8 >= 0 && v8 < v12)
	{
		v18 = v4;
		do
		{
			v19 = *(int*)(v18 + 104);
			if ((int)v19 < 0 || (int)v19 >= v12)
				v18 = 0i64;
			else
				v18 = *(_QWORD*)(v3 + 8 * v19);
			++v17;
		} while (v18);
	}
	v20 = 16 * v17;
	v25 = xmmword_140C784E0;
	v26 = xmmword_140C784F0;
	if (*(_QWORD*)(v4 + 24))
	{
		v21 = **(_QWORD**)(v4 + 16);
		if (v21)
		{
			v24 = xmmword_140B7B240;
			(*(void(__fastcall**)(__int64, __int64, _QWORD, __int64, __int128*, int, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
				qword_140C65680,
				v21,
				0i64,
				-1i64,
				&v25,
				1024,
				&v24,
				1,
				0i64);
			v22 = (__m128)(unsigned int)v26;
			v22.m128_f32[0] = *(float*)&v26 - *(float*)&v25;
			v23 = (int)(float)(*(float*)&v26 - *(float*)&v25);
			if (v23 != 0x80000000 && (float)v23 != v22.m128_f32[0])
				v22.m128_f32[0] = (float)(!(_mm_movemask_ps(_mm_unpacklo_ps(v22, v22)) & 1) + v23);
			v20 += (int)v22.m128_f32[0];
		}
	}
	return v20;
}
// 14016E407: conditional instruction was optimized away because r15.8!=0
// 14016E381: variable 'v9' is possibly undefined
// 14016E38E: variable 'v10' is possibly undefined
// 14016E3AE: variable 'v11' is possibly undefined
// 14016E3FA: variable 'v8' is possibly undefined
// 14016E3FF: variable 'v12' is possibly undefined
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;

