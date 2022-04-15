//----- (0000000140500700) ----------------------------------------------------
__int64 __fastcall sub_140500700(__int64 a1, unsigned int a2, unsigned int a3)
{
	unsigned __int64 v3; // r9
	unsigned __int64 v5; // r10
	__int64 v6; // rbx
	unsigned __int64 v7; // rax
	unsigned int v8; // edx
	unsigned int v9; // edx

	v3 = 0i64;
	v5 = *(_QWORD*)(qword_140C63600 + 88);
	if (!v5)
		return 0i64;
	v6 = *(_QWORD*)(qword_140C63600 + 80);
	while (1)
	{
		v7 = v3 + ((v5 - v3) >> 1);
		v8 = *(_DWORD*)(v6 + 16 * v7);
		if (a2 < v8)
		{
		LABEL_8:
			v5 = v3 + ((v5 - v3) >> 1);
			goto LABEL_9;
		}
		if (a2 <= v8)
		{
			v9 = *(_DWORD*)(v6 + 16 * (v3 + ((v5 - v3) >> 1)) + 4);
			if (a3 < v9)
				goto LABEL_8;
			if (a3 <= v9)
				return *(_QWORD*)(v6 + 16 * v7 + 8);
		}
		v3 = v7 + 1;
	LABEL_9:
		if (v3 >= v5)
			return 0i64;
	}
}
// 140C63600: using guessed type __int64 qword_140C63600;

