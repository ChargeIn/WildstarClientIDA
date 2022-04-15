//----- (00000001406AA0C0) ----------------------------------------------------
__int64 __fastcall sub_1406AA0C0(_QWORD* a1)
{
	__int64 v2; // rax
	int v3; // esi
	__int64 v4; // rax
	int v5; // ebx
	__int64 v6; // rdx
	__int64 v7; // rcx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // rax
	__int64 v13; // [rsp+38h] [rbp+10h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || !*(_QWORD*)(v2 + 8))
	{
		v11 = a1[2];
		*(_QWORD*)v11 = 0i64;
		*(_DWORD*)(v11 + 8) = 3;
		goto LABEL_28;
	}
	v3 = 0;
	if ((dword_140DC4B40 & 1) == 0)
	{
		dword_140DC4B40 |= 1u;
		goto LABEL_6;
	}
	if (!dword_140DC4B4C)
	{
	LABEL_6:
		dword_140DC4B4C = 1;
		v4 = sub_140200220(0x49Au);
		if (v4)
		{
			v5 = *(_DWORD*)(v4 + 4);
			dword_140DC4B48 = v5;
		}
		else
		{
			v5 = 0;
			dword_140DC4B48 = 0;
		}
		goto LABEL_10;
	}
	v5 = dword_140DC4B48;
LABEL_10:
	if (qword_140C658C8)
	{
		v6 = *(_QWORD*)(sub_140436D70(qword_140C658C8, *(_DWORD*)(qword_140C658C8 + 4)) + 8);
		v7 = v6;
		v8 = *(_QWORD*)(v6 + 8);
		while (v8)
		{
			if (*(int*)(v8 + 32) < 31)
			{
				v8 = *(_QWORD*)(v8 + 24);
			}
			else
			{
				v7 = v8;
				v8 = *(_QWORD*)(v8 + 16);
			}
		}
		if (v7 == v6 || (v9 = *(_DWORD*)(v7 + 32), v9 > 31) || v9 >= 31 && *(_DWORD*)(v7 + 36))
			v13 = v6;
		else
			v13 = v7;
		if (v13 != v6 && *(_DWORD*)(v13 + 48) == 1)
			v3 = *(_DWORD*)(v13 + 52);
		v5 += v3;
	}
	v10 = a1[2];
	*(_DWORD*)(v10 + 8) = 3;
	*(double*)v10 = (double)v5;
LABEL_28:
	a1[2] += 16i64;
	return 1i64;
}
// 140C658C8: using guessed type __int64 qword_140C658C8;
// 140DC4B40: using guessed type int dword_140DC4B40;
// 140DC4B48: using guessed type int dword_140DC4B48;
// 140DC4B4C: using guessed type int dword_140DC4B4C;

