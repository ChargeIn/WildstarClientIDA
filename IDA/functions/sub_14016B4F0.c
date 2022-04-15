//----- (000000014016B4F0) ----------------------------------------------------
__int64 __fastcall sub_14016B4F0(_QWORD* a1)
{
	__int64 v1; // rbx
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	__int64 v6; // rax
	__int64 v7; // r8
	__int64 result; // rax
	__int64 v9; // rdx
	__int64 v10; // rcx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	v6 = sub_1400D66A0(a1, 1u);
	v7 = v6;
	if (!v6 || (*(_BYTE*)(v6 + 432) & 8) == 0)
		return 0i64;
	v9 = *(_QWORD*)(v1 + 400);
	result = 1i64;
	v10 = *(_QWORD*)(v9 + 16);
	*(double*)v10 = *(float*)(v7 + 1312);
	*(_DWORD*)(v10 + 8) = 3;
	*(_QWORD*)(v9 + 16) += 16i64;
	return result;
}
// 140C63650: using guessed type __int64 qword_140C63650;

