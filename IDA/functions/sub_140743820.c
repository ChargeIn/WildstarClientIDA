//----- (0000000140743820) ----------------------------------------------------
__int64 __fastcall sub_140743820(__int64 a1)
{
	int v1; // edi
	unsigned __int64 v3; // r8
	unsigned int v4; // eax
	__int64 v5; // r9
	__int64 v6; // rdx
	__int64 v7; // rbx
	int v8; // eax
	_DWORD* v9; // rdx
	unsigned int v10; // r9d
	__int64 v11; // rax
	int v12; // eax
	BOOL v13; // eax
	int v14; // eax
	_DWORD* v15; // rcx
	bool v16; // zf
	__int64 result; // rax

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
	v8 = sub_1400F26A0(v7 + 384, 1);
	v9 = dword_140A12138;
	v10 = v8 - 1;
	v11 = *(_QWORD*)(v7 + 400);
	if ((unsigned __int64)(*(_QWORD*)(v11 + 24) + 16i64) < *(_QWORD*)(v11 + 16))
		v9 = (_DWORD*)(*(_QWORD*)(v11 + 24) + 16i64);
	v12 = v9[2];
	v13 = v12 && (v12 != 1 || *v9);
	v14 = sub_140601D20(qword_140C65898 + 27664, v10, v13, 256);
	v15 = *(_DWORD**)(a1 + 16);
	v16 = v14 == 0;
	v15[2] = 1;
	result = 1i64;
	LOBYTE(v1) = !v16;
	*v15 = v1;
	*(_QWORD*)(a1 + 16) += 16i64;
	return result;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C63650: using guessed type __int64 qword_140C63650;
// 140C65898: using guessed type __int64 qword_140C65898;

