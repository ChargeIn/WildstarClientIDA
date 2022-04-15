//----- (000000014011DEA0) ----------------------------------------------------
__int64 __fastcall sub_14011DEA0(__int64 a1)
{
	__int64 v1; // r10
	unsigned __int64 v2; // r8
	unsigned int v3; // edx
	__int64 v4; // r9
	__int64 v5; // rax
	unsigned int i; // eax
	__int64 v7; // rax

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	v3 = 0;
	if (v2)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v5 = ++v3;
			if (v3 >= v2)
				goto LABEL_7;
		}
		v1 = *(_QWORD*)(v4 + 8i64 * v3);
	}
LABEL_7:
	for (i = *(_DWORD*)(v1 + 108); i > 1; i >>= 1)
		;
	v7 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v7 = 0x3FF0000000000000i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)(a1 + 16) += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

