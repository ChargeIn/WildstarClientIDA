//----- (0000000140361170) ----------------------------------------------------
__int64 __fastcall sub_140361170(__int64 a1)
{
	__int64 v2; // rcx
	int v3; // r14d
	__int64 v4; // rdx
	__m128 v5; // xmm0
	__int64 v6; // rcx
	const void*** v7; // rdx
	int v8; // ebx
	__int64 v9; // rcx
	int v10; // eax
	int v11; // ebp
	int v12; // r8d
	__int64 v13; // rbx
	__int64 v14; // rax
	__m128 v16; // [rsp+40h] [rbp-B8h] BYREF
	_QWORD v17[18]; // [rsp+50h] [rbp-A8h] BYREF

	sub_1407C1FE0(v17);
	(*(void(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 288i64))(qword_140C65670);
	v2 = qword_140C65670;
	v3 = 1;
	if ((*(_BYTE*)(a1 + 128) & 2) != 0)
	{
		v4 = 7i64;
		v5 = _mm_shuffle_ps((__m128)(unsigned int)dword_140C440D8, (__m128)(unsigned int)dword_140C440D8, 0);
	}
	else
	{
		(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 632i64))(qword_140C65670, 1i64);
		v2 = qword_140C65670;
		v4 = 6i64;
		v5 = 0i64;
	}
	v16 = v5;
	(*(void(__fastcall**)(__int64, __int64, __m128*))(*(_QWORD*)v2 + 624i64))(v2, v4, &v16);
	v6 = *(_QWORD*)(a1 + 6176);
	v16.m128_i32[0] = -1;
	(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v6 + 32i64))(v6, &v16);
	if ((*(_BYTE*)(a1 + 128) & 4) == 0 || (v8 = sub_140361A10(a1), v8 >= 0))
	{
		v9 = *(_QWORD*)(a1 + 6232);
		v16.m128_i32[0] = -1;
		(*(void(__fastcall**)(__int64, __m128*))(*(_QWORD*)v9 + 32i64))(v9, &v16);
		v10 = *(_DWORD*)(a1 + 128);
		v11 = 4;
		if ((v10 & 0x1000) == 0)
			goto LABEL_28;
		v12 = 4;
		if ((*(_DWORD*)(a1 + 132) & 0x400) != 0 || (v10 & 0x4000000) != 0)
			v12 = 262148;
		if (!qword_140C657F0 || (v8 = sub_1402C89C0(qword_140C657F0, (__int64)v17, v12), v8 >= 0))
		{
		LABEL_28:
			if ((*(_DWORD*)(a1 + 128) & 0x800) == 0)
				goto LABEL_29;
			if ((*(_DWORD*)(a1 + 132) & 0x4000) != 0)
				v3 = 3;
			v8 = (*(__int64(__fastcall**)(_QWORD, __int64, __int64, __int64, int))(**(_QWORD**)(a1 + 40) + 80i64))(
				*(_QWORD*)(a1 + 40),
				a1 + 1152,
				a1 + 1216,
				a1 + 1600,
				v3);
			if (v8 >= 0)
			{
				if ((*(_DWORD*)(a1 + 132) & 0x400) != 0 || (*(_DWORD*)(a1 + 128) & 0x4000000) != 0)
					v11 = 260;
				v13 = **(_QWORD**)(a1 + 40);
				v14 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 288) + 240i64))(*(_QWORD*)(a1 + 288));
				v8 = (*(__int64(__fastcall**)(_QWORD, _QWORD*, __int64, __int64, int, _DWORD, __int64, _QWORD))(v13 + 120))(
					*(_QWORD*)(a1 + 40),
					v17,
					a1 + 1344,
					a1 + 3504,
					v11,
					0,
					v14,
					0i64);
				if (v8 >= 0)
				{
				LABEL_29:
					if (!v17[8] || (v8 = sub_1407C2170(v17, 0, 0xFFFFFFFF), v8 >= 0))
					{
						if ((*(_BYTE*)(a1 + 128) & 2) != 0 || (v8 = sub_140364CC0(a1), v8 >= 0))
							v8 = 0;
					}
				}
			}
		}
	}
	sub_1407C20B0((__int64)v17, v7);
	return (unsigned int)v8;
}
// 1403613B9: variable 'v7' is possibly undefined
// 140C440D8: using guessed type int dword_140C440D8;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C657F0: using guessed type __int64 qword_140C657F0;

