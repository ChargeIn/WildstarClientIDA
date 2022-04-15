//----- (0000000140830570) ----------------------------------------------------
__int64 __fastcall sub_140830570(__int64 a1, __int64 a2)
{
	__int64 v4; // rsi
	_QWORD* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rdi
	_QWORD* v8; // rcx
	_QWORD* v9; // rax
	_QWORD* v11; // rax
	int v12; // ebx

	v4 = (unsigned int)a2 % 0xC1;
	v5 = *(_QWORD**)(a1 + 8 * v4 + 56);
	if (v5)
	{
		while (v5[1] != a2)
		{
			v5 = (_QWORD*)*v5;
			if (!v5)
				goto LABEL_4;
		}
		v9 = v5 + 2;
		if (v9)
			return *v9;
	}
LABEL_4:
	v6 = sub_1408819F0(dword_140C10F20, 144i64);
	if (!v6)
		return 0i64;
	v7 = sub_14084BCC0(v6, a2);
	if (v7)
	{
		v8 = *(_QWORD**)(a1 + 8 * v4 + 56);
		if (v8)
		{
			while (v8[1] != a2)
			{
				v8 = (_QWORD*)*v8;
				if (!v8)
					goto LABEL_13;
			}
			v11 = v8 + 2;
			if (v8 != (_QWORD*)-16i64)
				goto LABEL_14;
		}
	LABEL_13:
		v11 = (_QWORD*)sub_1408302A0((int*)(a1 + 48), a2, v4);
		if (v11)
		{
		LABEL_14:
			*v11 = v7;
			return v7;
		}
		v12 = dword_140C10F20;
		sub_14084BD30(v7);
		sub_140881720(v12, v7);
		return 0i64;
	}
	return v7;
}
// 140C10F20: using guessed type int dword_140C10F20;

