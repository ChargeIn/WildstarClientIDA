//----- (000000014073D240) ----------------------------------------------------
__int64 __fastcall sub_14073D240(_QWORD* a1)
{
	_DWORD* v1; // rax
	__int64 v3; // rsi
	_DWORD* v5; // rax
	unsigned int v6; // eax
	__int64 v7; // rdx
	__m128i v8; // xmm0
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rbx
	__int64 v14; // rdi
	_QWORD* v15; // rax
	__int64 v16; // r11
	__int64 v17; // r9
	int v18; // r8d
	__int64 v19; // rdx
	__int64(__fastcall * *v20)(); // [rsp+20h] [rbp-28h] BYREF
	int v21; // [rsp+28h] [rbp-20h]
	_QWORD* v22; // [rsp+30h] [rbp-18h]
	int v23; // [rsp+38h] [rbp-10h]

	v1 = (_DWORD*)a1[3];
	if ((unsigned __int64)v1 < a1[2] && v1 != dword_140A12138 && !v1[2])
		return 0i64;
	v3 = sub_140056AB0(a1, 1u);
	if (!v3)
		return 0i64;
	v5 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v5 >= a1[2]
		|| v5 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v6 = sub_140056D60(a1, 2u)) == 0)
	{
		v9 = a1[4];
		v22 = a1;
		v20 = off_140B569F0;
		v10 = *(_QWORD*)(v9 + 112);
		v23 = 1;
		if (*(_QWORD*)(v9 + 120) >= v10)
			sub_14005E2C0((__int64)a1);
		v11 = a1[2];
		v12 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v11 + 8) = 5;
		*(_QWORD*)v11 = v12;
		a1[2] += 16i64;
		v21 = sub_1400578C0((__int64)a1);
		v13 = v3 + 8;
		v14 = 4i64;
		do
		{
			sub_1400FA9E0((__int64)&v20);
			v13 += 4i64;
			--v14;
		} while (v14);
		v15 = sub_14005C3C0(*(_QWORD*)(v22[4] + 160i64), v21);
		v17 = *(_QWORD*)(v16 + 16);
		v18 = v21;
		*(_QWORD*)v17 = *v15;
		v19 = *((unsigned int*)v15 + 2);
		*(_DWORD*)(v17 + 8) = v19;
		*(_QWORD*)(v16 + 16) += 16i64;
		sub_1400579E0(v16, v19, v18);
	}
	else
	{
		if (v6 > 4)
			return 0i64;
		v7 = a1[2];
		v8 = _mm_cvtsi32_si128(*(_DWORD*)(v3 + 4i64 * (v6 - 1) + 8));
		*(_DWORD*)(v7 + 8) = 3;
		*(_QWORD*)v7 = *(_OWORD*)&_mm_cvtepi32_pd(v8);
		a1[2] += 16i64;
	}
	return 1i64;
}
// 14073D37F: variable 'v16' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

