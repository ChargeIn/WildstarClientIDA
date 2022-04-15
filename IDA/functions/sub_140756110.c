//----- (0000000140756110) ----------------------------------------------------
__int64 __fastcall sub_140756110(_QWORD* a1)
{
	unsigned int v3; // edi
	_DWORD* v4; // rcx
	int v5; // eax
	__int64 v6; // rsi
	__int64 v7; // rbp
	unsigned int** v8; // rdx
	int v9; // eax
	unsigned int** v10; // rax

	if (!qword_140C659B0)
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
		return 1i64;
	}
	v3 = sub_140056D60(a1, 1u);
	if (!v3)
		goto LABEL_17;
	v4 = dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v4 = (_DWORD*)(a1[3] + 16i64);
	v5 = v4[2];
	if (v5 && (v5 != 1 || *v4))
	{
		v6 = qword_140C659B0;
		v7 = sub_1404A88A0(qword_140C659B0, v3);
		if (v7)
		{
			v9 = sub_1404A8310(v6, v3, 1) - 1;
			if (v9 < 0)
				v9 = 0;
			v8 = *(unsigned int***)(*(_QWORD*)(v7 + 8) + 8i64 * v9);
		}
		else
		{
			v8 = 0i64;
		}
		if ((unsigned int)sub_140755660((__int64)a1, v8))
			return 1i64;
		goto LABEL_17;
	}
	v10 = (unsigned int**)sub_1404A7EB0(qword_140C659B0, v3);
	if (!(unsigned int)sub_140755660((__int64)a1, v10))
	{
	LABEL_17:
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	return 1i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C659B0: using guessed type __int64 qword_140C659B0;

