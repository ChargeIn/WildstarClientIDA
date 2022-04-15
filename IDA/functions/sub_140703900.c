//----- (0000000140703900) ----------------------------------------------------
__int64 __fastcall sub_140703900(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rbx
	int v8; // ebp
	unsigned int v9; // r14d
	unsigned int v10; // eax
	__int64 v11; // rcx
	_DWORD* v12; // r8
	__int64 v13; // rcx

	v1 = 0;
	v3 = *(_QWORD*)(qword_140C63650 + 768);
	v4 = 0;
	if (v3)
	{
		v5 = *(_QWORD*)(qword_140C63650 + 760);
		v6 = 0i64;
		while (*(_QWORD*)(*(_QWORD*)(v5 + 8 * v6) + 400i64) != a1)
		{
			v6 = ++v4;
			if (v4 >= v3)
				goto LABEL_5;
		}
		v7 = *(_QWORD*)(v5 + 8i64 * v4);
	}
	else
	{
	LABEL_5:
		v7 = 0i64;
	}
	v8 = 1;
	v9 = sub_1400F26A0(v7 + 384, 1);
	v10 = sub_1400F26A0(v7 + 384, 2);
	v11 = *(_QWORD*)(v7 + 400);
	v12 = dword_140A12138;
	if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 32i64) < *(_QWORD*)(v11 + 16))
		v12 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 32i64);
	v13 = (unsigned int)v12[2];
	if (!(_DWORD)v13 || (_DWORD)v13 == 1 && !*v12)
		v8 = 0;
	LOBYTE(v1) = v8 != 0;
	return sub_1404B1290(v13, a1, v9, v10, v1);
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

