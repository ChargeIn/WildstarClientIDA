//----- (0000000140550680) ----------------------------------------------------
_QWORD* __fastcall sub_140550680(__int64 a1, _QWORD* a2)
{
	int v5; // r15d
	unsigned __int64 i; // rbx
	__int64 v7; // rax
	int* v8; // rax
	__int64 v9; // r8
	int* v10; // rax
	__int64 v11; // r8
	__int64 v12; // rsi
	__int64 v13; // rdi
	__int64 v14; // [rsp+30h] [rbp-68h] BYREF
	__int64 v15; // [rsp+38h] [rbp-60h]
	int v16; // [rsp+40h] [rbp-58h] BYREF
	__int64 v17; // [rsp+48h] [rbp-50h]
	__int64 v18; // [rsp+50h] [rbp-48h]
	int v19; // [rsp+60h] [rbp-38h] BYREF
	__int64 v20; // [rsp+68h] [rbp-30h]
	__int64 v21; // [rsp+70h] [rbp-28h]

	v15 = 0i64;
	v14 = 0i64;
	if ((unsigned int)sub_140552F50(a1)
		|| (unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(a1 + 8)) == 3)
	{
		v5 = 0;
		if (*(_QWORD*)(a1 + 128))
			v5 = **(_DWORD**)(a1 + 120);
		for (i = 332i64; i < 0x160; i += 4i64)
		{
			v7 = *(_QWORD*)(a1 + 8);
			if (!*(_DWORD*)(i + v7 - 20) || !*(_DWORD*)(i + v7))
				break;
			v8 = (int*)sub_1404835C0(qword_140C65918, v5);
			sub_14054F9E0(&v16, *(_DWORD*)(i + *(_QWORD*)(a1 + 8) - 20), v9, 0i64, v8, 0i64);
			v10 = (int*)sub_1404835C0(qword_140C65918, v5);
			sub_14054F9E0(&v19, *(_DWORD*)(i + *(_QWORD*)(a1 + 8)), v11, 0i64, v10, 0i64);
			v12 = v17;
			v13 = v20;
			if (v17 == v18 || v20 == v21)
			{
				if (v20)
					sub_14018B900(v20, 0);
				if (v12)
					sub_14018B900(v12, 0);
				break;
			}
			sub_140554170(&v14, (__int64)&v16);
			sub_140554170(&v14, (__int64)&v19);
			if (v13)
				sub_14018B900(v13, 0);
			if (v12)
				sub_14018B900(v12, 0);
		}
		a2[1] = v15;
		*a2 = v14;
		return a2;
	}
	else
	{
		a2[1] = 0i64;
		*a2 = 0i64;
		return a2;
	}
}
// 140550762: variable 'v9' is possibly undefined
// 14055078F: variable 'v11' is possibly undefined
// 140C65918: using guessed type __int64 qword_140C65918;
// 140C65B80: using guessed type __int64 qword_140C65B80;

