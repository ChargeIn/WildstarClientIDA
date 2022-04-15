//----- (00000001406863E0) ----------------------------------------------------
__int64 __fastcall sub_1406863E0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	unsigned int* v4; // rcx
	unsigned int v5; // edx
	__int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // r8
	int v10; // ecx
	__int64 v11; // rdx
	__int64 result; // rax
	__int64 v13; // [rsp+38h] [rbp+10h]

	if (!*(_QWORD*)(qword_140C65898 + 120))
		goto LABEL_16;
	v2 = sub_140056AB0(a1, 1u);
	if (!v2)
		goto LABEL_16;
	v3 = *(_QWORD*)(v2 + 8);
	if (!v3)
		goto LABEL_16;
	v4 = *(unsigned int**)(v3 + 8);
	if (!v4)
		goto LABEL_16;
	v5 = *v4;
	v6 = *(_QWORD*)(qword_140C65948 + 48);
	v7 = v6;
	v8 = *(_QWORD*)(v6 + 8);
	while (v8)
	{
		if (*(_DWORD*)(v8 + 32) < v5)
		{
			v8 = *(_QWORD*)(v8 + 24);
		}
		else
		{
			v7 = v8;
			v8 = *(_QWORD*)(v8 + 16);
		}
	}
	if (v7 == v6 || (v13 = v7, v5 < *(_DWORD*)(v7 + 32)))
		v13 = *(_QWORD*)(qword_140C65948 + 48);
	if (v13 != v6 && (v9 = *(_QWORD*)(v13 + 40)) != 0)
	{
		v10 = *(_DWORD*)(v9 + 64);
		v11 = a1[2];
		*(_DWORD*)(v11 + 8) = 3;
		result = 1i64;
		*(double*)v11 = (float)((float)v10 * 0.001);
		a1[2] += 16i64;
	}
	else
	{
	LABEL_16:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	return result;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65948: using guessed type __int64 qword_140C65948;

