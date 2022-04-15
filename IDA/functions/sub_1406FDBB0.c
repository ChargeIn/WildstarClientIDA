//----- (00000001406FDBB0) ----------------------------------------------------
__int64 __fastcall sub_1406FDBB0(_QWORD* a1)
{
	unsigned int v2; // r8d
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rdi
	_DWORD* v7; // rax
	int v8; // ecx
	int v9; // edx
	__int64 v10; // r8
	int v11; // eax
	_DWORD* v12; // rcx
	bool v13; // zf
	__int64 result; // rax
	__int64 v15; // [rsp+38h] [rbp+10h]

	v2 = sub_140056D60(a1, 1u);
	v3 = *(_QWORD*)(qword_140C658D8 + 8);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v15 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v15 = *(_QWORD*)(qword_140C658D8 + 8);
	if (v15 == v3)
		return 0i64;
	v6 = *(_QWORD*)(v15 + 40);
	if (!v6)
		return 0i64;
	v7 = (_DWORD*)(a1[3] + 16i64);
	if ((unsigned __int64)v7 >= a1[2] || v7 == dword_140A12138 || *(int*)(a1[3] + 24i64) <= 0)
	{
		v8 = 1;
		goto LABEL_17;
	}
	v8 = sub_140056D60(a1, 2u);
	if (v8 > 0)
	{
	LABEL_17:
		v9 = 0;
		goto LABEL_18;
	}
	v9 = 0;
	v8 = 0;
LABEL_18:
	v10 = *(_QWORD*)(*(_QWORD*)(v6 + 16) + 8i64 * (unsigned int)(v8 - 1));
	v11 = 0;
	if (v10)
		LOBYTE(v11) = *(_DWORD*)(v10 + 56) != 0;
	v12 = (_DWORD*)a1[2];
	v13 = v11 == 0;
	result = 1i64;
	LOBYTE(v9) = !v13;
	v12[2] = 1;
	*v12 = v9;
	a1[2] += 16i64;
	return result;
}
// 1406FDC73: conditional instruction was optimized away because ecx.4>=1
// 1406FDC7C: conditional instruction was optimized away because eax.4>=1
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C658D8: using guessed type __int64 qword_140C658D8;

