//----- (00000001406AA740) ----------------------------------------------------
__int64 __fastcall sub_1406AA740(_QWORD* a1)
{
	int v2; // esi
	__int64 v3; // rbp
	unsigned int v4; // ecx
	unsigned __int64 v5; // rdx
	__int64 v6; // r8
	__int64 v7; // rax
	__int64 v8; // rbx
	int v9; // eax
	__int64 v10; // rcx
	_DWORD* v11; // r8
	int v12; // r14d
	int v13; // ecx
	BOOL v14; // eax
	int v15; // ebx
	__int64 v16; // rax
	__int64 v17; // rcx
	__int64 v18; // r8
	int v19; // eax
	__int64 v20; // rcx

	v2 = 0;
	v3 = sub_1406A93C0(a1);
	if (v3)
	{
		v4 = 0;
		v5 = *(_QWORD*)(qword_140C63650 + 768);
		if (v5)
		{
			v6 = *(_QWORD*)(qword_140C63650 + 760);
			v7 = 0i64;
			while (*(_QWORD**)(*(_QWORD*)(v6 + 8 * v7) + 400i64) != a1)
			{
				v7 = ++v4;
				if (v4 >= v5)
					goto LABEL_7;
			}
			v8 = *(_QWORD*)(v6 + 8i64 * v4);
		}
		else
		{
		LABEL_7:
			v8 = 0i64;
		}
		v9 = sub_1400F26A0(v8 + 384, 2);
		v10 = *(_QWORD*)(v8 + 400);
		v11 = dword_140A12138;
		v12 = v9;
		if ((unsigned __int64)(*(_QWORD*)(v10 + 24) + 32i64) < *(_QWORD*)(v10 + 16))
			v11 = (_DWORD*)(*(_QWORD*)(v10 + 24) + 32i64);
		v13 = v11[2];
		v14 = v13 && (v13 != 1 || *v11);
		v15 = v14;
		v16 = sub_140205FA0(*(_DWORD*)(v3 + 184));
		if (v16)
			v2 = *(_DWORD*)(v16 + 4);
		v19 = sub_1404CA000(v17, v2, v18, v12, v15);
		v20 = a1[2];
		*(_DWORD*)(v20 + 8) = 3;
		*(double*)v20 = (double)v19;
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
	}
	a1[2] += 16i64;
	return 1i64;
}
// 1406AA833: variable 'v17' is possibly undefined
// 1406AA833: variable 'v18' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;

