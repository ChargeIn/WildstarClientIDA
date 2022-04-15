//----- (000000014011CED0) ----------------------------------------------------
__int64 __fastcall sub_14011CED0(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v2; // r8
	__int64 v3; // r9
	__int64 v4; // rax
	__int64 v5; // rdx
	__int64 v6; // rdx

	v1 = 0i64;
	v2 = *(_QWORD*)(qword_140C63650 + 768);
	if (v2)
	{
		v3 = *(_QWORD*)(qword_140C63650 + 760);
		v4 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v3 + 8 * v4) + 400i64) != a1)
		{
			v1 = (unsigned int)(v1 + 1);
			v4 = (unsigned int)v1;
			if ((unsigned int)v1 >= v2)
				goto LABEL_5;
		}
		v5 = *(_QWORD*)(v3 + 8 * v1);
	}
	else
	{
	LABEL_5:
		v5 = 0i64;
	}
	v6 = *(_QWORD*)(v5 + 2896);
	if (v6)
		return sub_1400D62A0(a1, v6);
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	return 1i64;
}
// 140C63650: using guessed type __int64 qword_140C63650;

