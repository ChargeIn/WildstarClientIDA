//----- (0000000140542F80) ----------------------------------------------------
__int64 __fastcall sub_140542F80(__int64 a1)
{
	__int64 v2; // rax
	__int64 v3; // r8
	int v4; // edx
	__int64 v6; // rax
	int v7; // ecx
	__int64 v8; // rax
	__int64 v9; // rax
	int v10; // ecx
	__int64 v11; // rax

	v2 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 340));
	v3 = v2;
	if (v2)
	{
		v4 = *(_DWORD*)(v2 + 128);
		if (v4 != 20 && v4 != 23)
			return 1i64;
	}
	v6 = *(_QWORD*)(qword_140C65898 + 120);
	if (v6)
	{
		if (v3 == v6)
			return 1i64;
		v7 = *(_DWORD*)(v6 + 8);
		v8 = *(_QWORD*)(a1 + 72);
		if (v8)
		{
			while (*(_DWORD*)(v8 + 64) != v7)
			{
				v8 = *(_QWORD*)(v8 + 40);
				if (!v8)
					goto LABEL_10;
			}
			return 1i64;
		}
	}
LABEL_10:
	v9 = *(_QWORD*)(qword_140C65898 + 25744);
	if (!v9)
		return 0i64;
	if (v3 == v9)
		return 1i64;
	v10 = *(_DWORD*)(v9 + 8);
	v11 = *(_QWORD*)(a1 + 72);
	if (v11)
	{
		while (*(_DWORD*)(v11 + 64) != v10)
		{
			v11 = *(_QWORD*)(v11 + 40);
			if (!v11)
				return 0i64;
		}
		return 1i64;
	}
	return 0i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;

