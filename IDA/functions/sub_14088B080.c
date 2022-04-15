//----- (000000014088B080) ----------------------------------------------------
char __fastcall sub_14088B080(int a1, int a2)
{
	__int64 v2; // rbx
	int v3; // r14d
	__int64 v4; // r15
	__int64 v7; // rdi
	__int64 i; // rbp
	char v9; // al
	__int64 v10; // rax
	__int64 j; // rax
	__int64 v12; // rcx
	int* v13; // rbx
	int v14; // eax
	_QWORD* v15; // rdx
	__int64 v16; // rax
	__int64 v18; // [rsp+70h] [rbp+18h] BYREF
	__int64 v19; // [rsp+78h] [rbp+20h] BYREF

	v2 = qword_140C629D8;
	v3 = v18;
	v4 = v18;
	v7 = 0i64;
	for (i = 0i64; v2; v2 = *(_QWORD*)(v2 + 120))
	{
		v9 = *(_BYTE*)(v2 + 98);
		if ((v9 & 1) != 0 && (v9 & 0x10) == 0)
		{
			v10 = sub_14088DC90(*(_QWORD*)(v2 + 104), a1, &v18, &v19);
			if (!i || v10 < v7)
			{
				v4 = v19;
				v3 = v18;
				v7 = v10;
				i = v2;
			}
		}
	}
	if (v7 - 1024 <= 0)
		goto LABEL_32;
	j = qword_140C62A40;
	if (!qword_140C62A40)
	{
		if ((unsigned int)dword_140C62A50 >= HIDWORD(qword_140C62A48) || (j = sub_1408819F0(dword_140C10F20, 24i64)) == 0)
		{
		LABEL_16:
			for (j = qword_140C62A30; j; j = *(_QWORD*)j)
			{
				if (*(_DWORD*)(j + 8) == a1)
					*(_DWORD*)(j + 16) |= 1u;
			}
		LABEL_32:
			LOBYTE(v14) = 0;
			return v14;
		}
		*(_QWORD*)j = qword_140C62A40;
		qword_140C62A40 = j;
	}
	v12 = qword_140C62A38;
	v13 = (int*)(j + 8);
	if (!qword_140C62A30)
		v12 = j;
	qword_140C62A38 = v12;
	qword_140C62A40 = *(_QWORD*)j;
	*(_QWORD*)j = qword_140C62A30;
	++dword_140C62A50;
	qword_140C62A30 = j;
	if (j == -8)
		goto LABEL_16;
	v14 = sub_14088D8D0(*(_QWORD*)(i + 104), j + 8, v3, v4);
	if (v14 != 1)
	{
		v15 = (_QWORD*)qword_140C62A30;
		if (qword_140C62A30)
		{
			qword_140C62A30 = *(_QWORD*)qword_140C62A30;
			v16 = qword_140C62A38;
			if (v15 == (_QWORD*)qword_140C62A38)
				v16 = 0i64;
			qword_140C62A38 = v16;
			if ((unsigned __int64)v15 < qword_140C62A58
				|| (unsigned __int64)v15 >= qword_140C62A58 + 24 * (unsigned __int64)(unsigned int)qword_140C62A48)
			{
				sub_140881720(dword_140C10F20, (__int64)v15);
			}
			else
			{
				*v15 = qword_140C62A40;
				qword_140C62A40 = (__int64)v15;
			}
			--dword_140C62A50;
		}
		goto LABEL_32;
	}
	v13[2] &= ~1u;
	v13[2] |= 2u;
	*v13 = a1;
	v13[1] = a2;
	return v14;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629D8: using guessed type __int64 qword_140C629D8;
// 140C62A30: using guessed type __int64 qword_140C62A30;
// 140C62A38: using guessed type __int64 qword_140C62A38;
// 140C62A40: using guessed type __int64 qword_140C62A40;
// 140C62A48: using guessed type __int64 qword_140C62A48;
// 140C62A50: using guessed type int dword_140C62A50;
// 140C62A58: using guessed type __int64 qword_140C62A58;

