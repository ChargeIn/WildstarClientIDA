//----- (0000000140711010) ----------------------------------------------------
__int64 __fastcall sub_140711010(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // rcx
	__int64 v4; // r8
	__int64 v5; // rax
	__int64 v6; // rcx
	unsigned int v7; // edx
	__int64 v9; // r8
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int v12; // edx
	__int64 v13; // [rsp+38h] [rbp+10h]

	v2 = 0i64;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	if (v3)
	{
		v4 = *(_QWORD*)(qword_140C63650 + 760);
		v5 = 0i64;
		while (*(_QWORD**)(*(_QWORD*)(v4 + 8 * v5) + 400i64) != a1)
		{
			v2 = (unsigned int)(v2 + 1);
			v5 = (unsigned int)v2;
			if ((unsigned int)v2 >= v3)
				goto LABEL_5;
		}
		v6 = *(_QWORD*)(v4 + 8 * v2);
	}
	else
	{
	LABEL_5:
		v6 = 0i64;
	}
	v7 = sub_1400F26A0(v6 + 384, 1);
	if (v7)
	{
		v9 = *(_QWORD*)(qword_140C65948 + 80);
		v10 = v9;
		v11 = *(_QWORD*)(v9 + 8);
		while (v11)
		{
			if (*(_DWORD*)(v11 + 32) < v7)
			{
				v11 = *(_QWORD*)(v11 + 24);
			}
			else
			{
				v10 = v11;
				v11 = *(_QWORD*)(v11 + 16);
			}
		}
		if (v10 == v9 || (v13 = v10, v7 < *(_DWORD*)(v10 + 32)))
			v13 = *(_QWORD*)(qword_140C65948 + 80);
		if (v13 == v9 || (v12 = *(_DWORD*)(v13 + 36)) == 0)
		{
			*(_DWORD*)(a1[2] + 8i64) = 0;
			a1[2] += 16i64;
			return 1i64;
		}
		else
		{
			sub_1406B9790(a1, v12);
			return 1i64;
		}
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
}
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65948: using guessed type __int64 qword_140C65948;

