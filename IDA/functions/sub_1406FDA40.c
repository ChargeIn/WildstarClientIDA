//----- (00000001406FDA40) ----------------------------------------------------
__int64 __fastcall sub_1406FDA40(_QWORD* a1)
{
	unsigned int v2; // r8d
	__int64 v3; // r9
	__int64 v4; // rdx
	__int64 v5; // rax
	__int64 v6; // rcx
	int* v7; // r8
	__int64 result; // rax
	unsigned int v9; // edx
	__int64 v10; // [rsp+38h] [rbp+10h]

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
	if (v4 == v3 || (v10 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v10 = *(_QWORD*)(qword_140C658D8 + 8);
	if (v10 == v3)
		return 0i64;
	v6 = *(_QWORD*)(v10 + 40);
	if (!v6)
		return 0i64;
	v7 = (int*)a1[2];
	result = 1i64;
	v9 = *(_DWORD*)(*(_QWORD*)v6 + 4i64);
	v7[2] = 1;
	*v7 = (v9 >> 2) & 1;
	a1[2] += 16i64;
	return result;
}
// 140C658D8: using guessed type __int64 qword_140C658D8;

