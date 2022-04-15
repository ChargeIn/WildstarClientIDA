//----- (00000001408611D0) ----------------------------------------------------
__int64 __fastcall sub_1408611D0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v2; // rbx
	unsigned int v4; // r8d
	int v5; // edx
	__int64 v6; // rax
	__int64 v7; // rax
	__int64 v8; // rax
	_QWORD* v9; // rax
	_QWORD* v10; // rax
	_QWORD* v11; // rax

	v1 = *(_QWORD*)(a1 + 168);
	v2 = 0i64;
	v4 = *(_DWORD*)(v1 + 32);
	v5 = (*(_DWORD*)(v1 + 16) >> 2) & 0x1F;
	if (v5 == 2)
	{
		v6 = sub_1408819F0(dword_140C10F28, 136i64);
		if (v6)
		{
			v7 = sub_140879420(v6, a1);
			goto LABEL_21;
		}
	LABEL_22:
		sub_14085E170(a1, 1);
		return v2;
	}
	if (!v5 || !HIWORD(v4))
		goto LABEL_22;
	if (HIWORD(v4) == 1)
	{
		if (v5 == 1)
		{
			v10 = (_QWORD*)sub_1408819F0(dword_140C10F28, 144i64);
			if (!v10)
				goto LABEL_22;
			v7 = (__int64)sub_140878D70(v10, a1);
		}
		else
		{
			if (v5 != 3)
				goto LABEL_22;
			v11 = (_QWORD*)sub_1408819F0(dword_140C10F28, 96i64);
			if (!v11)
				goto LABEL_22;
			v7 = (__int64)sub_1408789B0(v11, a1);
		}
	}
	else if (HIWORD(v4) == 2)
	{
		if (v5 == 1)
		{
			v8 = sub_1408819F0(dword_140C10F28, 368i64);
			if (!v8)
				goto LABEL_22;
			v7 = sub_140879B50(v8, a1);
		}
		else
		{
			if (v5 != 3)
				goto LABEL_22;
			v9 = (_QWORD*)sub_1408819F0(dword_140C10F28, 112i64);
			if (!v9)
				goto LABEL_22;
			v7 = (__int64)sub_14087A210(v9, a1);
		}
	}
	else
	{
		v7 = sub_14082FB50(a1, v5, v4);
	}
LABEL_21:
	v2 = v7;
	if (!v7)
		goto LABEL_22;
	return v2;
}
// 140C10F28: using guessed type int dword_140C10F28;

