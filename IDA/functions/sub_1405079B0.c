//----- (00000001405079B0) ----------------------------------------------------
__int64 __fastcall sub_1405079B0(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // r14
	_DWORD* v4; // rax
	int v5; // esi
	double v6; // xmm0_8
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rdx
	bool v9; // bp
	unsigned __int64 v10; // r15
	_DWORD* v11; // rax
	_DWORD* v12; // rcx
	int v13; // eax
	BOOL v14; // eax
	int* v15; // rax
	__int64 v16; // rbx
	_DWORD* v17; // rax
	char* v18; // rax
	_DWORD* v19; // rax
	unsigned int v20; // ebx
	__m128* v21; // rax
	__int64 v22; // rsi
	__int64 v23; // rbp
	unsigned __int64* v24; // rdx
	unsigned __int64 v25; // r8
	int v26; // [rsp+30h] [rbp-58h]
	__m128 v27; // [rsp+40h] [rbp-48h] BYREF
	unsigned int v28; // [rsp+98h] [rbp+10h] BYREF

	result = sub_140506EA0(a1);
	v3 = result;
	if (result)
	{
		v4 = (_DWORD*)(a1[3] + 16i64);
		v5 = 2;
		if ((unsigned __int64)v4 >= a1[2] || v4 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
			v6 = 0.0;
		else
			v6 = sub_140056C40(a1, 2u);
		v7 = 0i64;
		if (v6 >= 9.223372036854776e18)
		{
			v6 = v6 - 9.223372036854776e18;
			if (v6 < 9.223372036854776e18)
				v7 = 0x8000000000000000ui64;
		}
		v8 = a1[2];
		v9 = 0;
		v10 = v7 + (unsigned int)(int)v6;
		v11 = (_DWORD*)(a1[3] + 32i64);
		if ((unsigned __int64)v11 < v8 && v11 != dword_140A12138 && *(_DWORD*)(a1[3] + 40i64) == 1)
		{
			v12 = dword_140A12138;
			if ((unsigned __int64)v11 < v8)
				v12 = (_DWORD*)(a1[3] + 32i64);
			v13 = v12[2];
			v14 = v13 && (v13 != 1 || *v12);
			v9 = v14;
		}
		v27 = (__m128)xmmword_140B7B240;
		sub_140143880(&v28, a1, 4u, &v27);
		v15 = sub_14018B280(16i64, 0);
		v16 = (__int64)v15;
		if (v15)
			*(_WORD*)v15 = 0;
		v17 = (_DWORD*)(a1[3] + 64i64);
		if ((unsigned __int64)v17 >= a1[2] || v17 == dword_140A12138 || *(int*)(a1[3] + 72i64) <= 0)
			v18 = "Default";
		else
			v18 = (char*)sub_140056BB0(a1, 5u, 0i64);
		sub_14018F2D0(&v27, v18);
		if (v16)
			sub_14018B900(v16, 0);
		v19 = (_DWORD*)(a1[3] + 80i64);
		if ((unsigned __int64)v19 < a1[2] && v19 != dword_140A12138 && *(int*)(a1[3] + 88i64) > 0)
			v5 = sub_140056D60(a1, 6u);
		v20 = v28;
		if ((unsigned __int64)v28 >= *(_QWORD*)(qword_140C63678 + 48))
			v21 = *(__m128**)(qword_140C63678 + 40);
		else
			v21 = (__m128*)(*(_QWORD*)(qword_140C63678 + 40) + 32i64 * v28);
		v26 = v5;
		v22 = v27.m128_i64[1];
		sub_140504780(*(_QWORD*)(v3 + 1112), (__int64)&v27, v10, v9, v21, (int*)v27.m128_u64[1], v26);
		v23 = v27.m128_i64[1];
		v24 = (unsigned __int64*)sub_14018F0E0(&v27, (unsigned __int16*)v27.m128_u64[1])[1];
		if (v24)
		{
			v25 = -1i64;
			do
				++v25;
			while (*((_BYTE*)v24 + v25));
			sub_140058710((__int64)a1, v24, v25);
		}
		else
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
		}
		if (v27.m128_u64[1])
			sub_14018B900(v27.m128_i64[1], 0);
		if (v23)
			sub_14018B900(v23, 0);
		if (v22)
			sub_14018B900(v22, 0);
		sub_1401429A0(qword_140C63678, v20);
		return 1i64;
	}
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B7B240: using guessed type __int128 xmmword_140B7B240;
// 140C63678: using guessed type __int64 qword_140C63678;
// 1405079B0: using guessed type __m128 var_48;

