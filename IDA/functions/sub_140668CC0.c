//----- (0000000140668CC0) ----------------------------------------------------
__int64 __fastcall sub_140668CC0(_QWORD* a1)
{
	__int64 v2; // rdi
	_DWORD* v4; // rax
	int v5; // eax
	__int64 v6; // rsi
	int* v7; // rcx
	int* v8; // r8
	int v9; // r8d
	int v10; // edx
	int* v11; // rax
	int v12; // [rsp+38h] [rbp+10h] BYREF

	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v4 >= a1[2]
		|| v4 == dword_140A12138
		|| *(int*)(a1[3] + 24i64) <= 0
		|| (v5 = sub_140056D60(a1, 2u), v6 = (unsigned int)v5, v5 < 0))
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64)) == 2
			&& (*(_DWORD*)(*(_QWORD*)(*(_QWORD*)v2 + 8i64) + 12i64) & 0x2000) == 0)
		{
			goto LABEL_17;
		}
		v10 = 1;
		v7 = *(int**)(*(_QWORD*)v2 + 8i64);
		v9 = *v7;
	}
	else
	{
		if ((unsigned int)sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*(_QWORD*)v2 + 8i64)) == 2)
			goto LABEL_17;
		v7 = *(int**)v2;
		if ((unsigned int)v6 > *(_DWORD*)(*(_QWORD*)v2 + 16i64))
			goto LABEL_17;
		v8 = *(int**)&v7[2 * v6 + 6];
		if (!v8)
			goto LABEL_17;
		v9 = *v8;
		v10 = 2;
	}
	v11 = (int*)sub_1403BA420((__int64)v7, v10, v9);
	if (!v11 || (v12 = *v11) == 0)
	{
	LABEL_17:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	sub_1403D3470(a1, &v12);
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65B80: using guessed type __int64 qword_140C65B80;

