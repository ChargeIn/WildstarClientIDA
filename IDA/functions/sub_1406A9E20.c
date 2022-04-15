//----- (00000001406A9E20) ----------------------------------------------------
__int64 __fastcall sub_1406A9E20(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rax
	int v4; // r11d
	int v5; // eax
	int v6; // r11d
	__int64 v7; // rcx
	__int64 result; // rax
	__int64 v9; // rax

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || !*(_QWORD*)(v2 + 8))
	{
		v9 = a1[2];
		*(_QWORD*)v9 = 0i64;
		*(_DWORD*)(v9 + 8) = 3;
		a1[2] += 16i64;
		return 1i64;
	}
	if ((dword_140DC4B14 & 1) != 0)
	{
		if (dword_140DC4B1C)
		{
			v4 = dword_140DC4B18;
			goto LABEL_10;
		}
	}
	else
	{
		dword_140DC4B14 |= 1u;
	}
	dword_140DC4B1C = 1;
	v3 = sub_140200220(0x49Au);
	if (v3)
	{
		v4 = *(_DWORD*)(v3 + 4);
		dword_140DC4B18 = v4;
	}
	else
	{
		v4 = 0;
		dword_140DC4B18 = 0;
	}
LABEL_10:
	if (qword_140C65898)
	{
		v5 = sub_1403ABFE0(qword_140C65898 + 7160, 31, 0);
		v4 = v5 + v6;
	}
	v7 = a1[2];
	result = 1i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v4;
	a1[2] += 16i64;
	return result;
}
// 1406A9EC4: variable 'v6' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC4B14: using guessed type int dword_140DC4B14;
// 140DC4B18: using guessed type int dword_140DC4B18;
// 140DC4B1C: using guessed type int dword_140DC4B1C;

