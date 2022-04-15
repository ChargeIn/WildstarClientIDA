//----- (000000014016E100) ----------------------------------------------------
__int64 __fastcall sub_14016E100(__int64 a1, int* a2)
{
	__int64 v4; // rsi
	int* v5; // rbp
	int v6; // r9d
	__int64 v7; // rcx
	int v8; // r8d
	__int64 v9; // r10
	__int64 v10; // r11
	__int64 i; // rdx
	__int64 v12; // rax
	int v13; // r9d
	__int64 v14; // rcx
	int v15; // eax
	int v16; // xmm1_4
	float v17; // xmm2_4
	__int64 v18; // rdx
	double v19; // xmm0_8
	int v20; // edx
	__int64 result; // rax
	__int128 v22; // [rsp+50h] [rbp-38h] BYREF
	__int64 v23; // [rsp+60h] [rbp-28h] BYREF
	float v24; // [rsp+70h] [rbp-18h]
	int v25; // [rsp+74h] [rbp-14h]

	if (*a2 < 0)
		return 0i64;
	if (*a2 >= (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3))
		return 0i64;
	v4 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8i64 * *a2);
	if (!v4)
		return 0i64;
	v5 = (int*)(*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(*(_QWORD*)(a1 + 696) + 96i64) + 32i64))(*(_QWORD*)(*(_QWORD*)(a1 + 696) + 96i64));
	if (*(_QWORD*)(a1 + 1400) > 1ui64)
	{
		if (*(int*)(a1 + 1400) > 0)
			v6 = *(_DWORD*)(**(_QWORD**)(a1 + 1392) + 4i64);
		else
			v6 = 0;
	}
	else
	{
		v6 = *(_DWORD*)(a1 + 724) - *(_DWORD*)(a1 + 716);
	}
	v7 = *a2;
	v8 = -2;
	if ((int)v7 >= 0)
	{
		v9 = (__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3;
		if ((int)v7 < (int)v9)
		{
			v10 = *(_QWORD*)(a1 + 1416);
			for (i = *(_QWORD*)(v10 + 8 * v7); i; ++v8)
			{
				v12 = *(int*)(i + 104);
				if ((int)v12 < 0 || (int)v12 >= (int)v9)
					i = 0i64;
				else
					i = *(_QWORD*)(v10 + 8 * v12);
			}
		}
	}
	v13 = -16 - 16 * v8 + v6;
	if ((int)v7 >= 0
		&& (int)v7 < (int)((__int64)(*(_QWORD*)(a1 + 1424) - *(_QWORD*)(a1 + 1416)) >> 3)
		&& (v14 = *(_QWORD*)(*(_QWORD*)(a1 + 1416) + 8 * v7)) != 0)
	{
		v15 = *(_DWORD*)(v14 + 116);
	}
	else
	{
		v15 = 0;
	}
	v16 = *v5;
	v23 = 0i64;
	v25 = v16;
	v17 = 0.0;
	v24 = (float)(v13 - v15 - 4);
	if (*(_QWORD*)(v4 + 24))
		v18 = **(_QWORD**)(v4 + 16);
	else
		v18 = 0i64;
	if (v18)
	{
		v22 = xmmword_140B7B240;
		v19 = (*(double(__fastcall**)(__int64, __int64, _QWORD, __int64, __int64*, int, __int128*, int, _QWORD))(*(_QWORD*)qword_140C65680 + 280i64))(
			qword_140C65680,
			v18,
			0i64,
			-1i64,
			&v23,
			1024,
			&v22,
			1,
			0i64);
		v17 = *(float*)&v19;
	}
	v20 = *(_DWORD*)(a1 + 1376);
	result = *(unsigned int*)(v4 + 116);
	if (v20 < (int)v17)
		v20 = (int)v17;
	if ((int)result < v20)
		return (unsigned int)v20;
	return result;
}
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C65680: using guessed type __int64 qword_140C65680;

