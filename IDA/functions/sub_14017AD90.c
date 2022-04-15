//----- (000000014017AD90) ----------------------------------------------------
__int64 __fastcall sub_14017AD90(_QWORD* a1)
{
	__int64 v2; // rdx
	unsigned __int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // rbp
	int v7; // edi
	__int64 v8; // rax
	__int64 v9; // rsi
	_QWORD* v10; // r9
	__int64 v11; // rax
	_DWORD* v12; // rdx
	int v13; // eax

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
	v7 = 1;
	v8 = sub_14017AB00(a1, 1u);
	v9 = v8;
	if (v8)
	{
		if ((*(_DWORD*)(v8 + 432) & 0x1000i64) != 0)
		{
			v10 = (_QWORD*)sub_14017AB00(a1, 2u);
			if (v10)
			{
				v11 = *(_QWORD*)(v6 + 400);
				v12 = dword_140A12138;
				if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 32i64) < *(_QWORD*)(v11 + 16))
					v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 32i64);
				v13 = v12[2];
				if (!v13 || v13 == 1 && !*v12)
					v7 = 0;
				sub_14017A290(v10, v9, v7 != 0);
			}
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

