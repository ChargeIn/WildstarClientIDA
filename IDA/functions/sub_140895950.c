//----- (0000000140895950) ----------------------------------------------------
__int128* sub_140895950()
{
	_DWORD* v0; // rcx
	unsigned int v1; // esi
	unsigned __int64 v2; // rbp
	__int64 v3; // rbx
	__int64 v4; // rdx
	unsigned __int64 v5; // rdi
	unsigned __int64 v6; // rcx
	int v7; // eax
	_DWORD* v8; // rcx
	unsigned int v9; // esi
	unsigned __int64 v10; // rbp
	__int64 v11; // rbx
	__int64 v12; // rdx
	unsigned __int64 v13; // rdi
	unsigned __int64 v14; // rcx
	int v15; // eax
	__int128* result; // rax

	if ((dword_140C62AD8 & 1) == 0)
	{
		dword_140C62A80 = 0;
		qword_140C62A88 = 0i64;
		qword_140C62A90 = 0i64;
		xmmword_140C62A70 = 0i64;
		dword_140C62AD8 |= 1u;
		dword_140C62A98 = 0;
		qword_140C62AD0 = 0i64;
		sub_1407DD89C(sub_140957B90);
	}
	v0 = (_DWORD*)*((_QWORD*)&xmmword_140C62A70 + 1);
	v1 = dword_140C62A80;
	v2 = (unsigned int)((__int64)(*((_QWORD*)&xmmword_140C62A70 + 1) - xmmword_140C62A70) >> 2);
	if (v2 >= (unsigned int)dword_140C62A80)
	{
		v1 = dword_140C62A80 + 16;
		v3 = sub_1408819F0(dword_140C10F20, 4i64 * (unsigned int)(dword_140C62A80 + 16));
		if (!v3)
			goto LABEL_13;
		v4 = xmmword_140C62A70;
		v5 = (unsigned int)((__int64)(*((_QWORD*)&xmmword_140C62A70 + 1) - xmmword_140C62A70) >> 2);
		if ((_QWORD)xmmword_140C62A70)
		{
			v6 = 0i64;
			if ((unsigned int)((__int64)(*((_QWORD*)&xmmword_140C62A70 + 1) - xmmword_140C62A70) >> 2))
			{
				do
				{
					v7 = *(_DWORD*)(v4 + 4 * v6++);
					*(_DWORD*)(v3 + 4 * v6 - 4) = v7;
					v4 = xmmword_140C62A70;
				} while (v6 < v5);
			}
			sub_140881720(dword_140C10F20, v4);
		}
		v0 = (_DWORD*)(v3 + 4 * v5);
		*(_QWORD*)&xmmword_140C62A70 = v3;
		dword_140C62A80 = v1;
		*((_QWORD*)&xmmword_140C62A70 + 1) = v0;
	}
	if (v2 < v1)
	{
		*((_QWORD*)&xmmword_140C62A70 + 1) = v0 + 1;
		if (v0)
			*v0 = -1;
	}
LABEL_13:
	v8 = (_DWORD*)qword_140C62A90;
	v9 = dword_140C62A98;
	dword_140C62AA0 = 0;
	qword_140C62AA8 = 0i64;
	dword_140C62AB0 = dword_140C62AB0 & 0xFFFFFFC0 | 0x27;
	v10 = (unsigned int)((qword_140C62A90 - qword_140C62A88) >> 2);
	if (v10 >= (unsigned int)dword_140C62A98)
	{
		v9 = dword_140C62A98 + 16;
		v11 = sub_1408819F0(dword_140C10F20, 4i64 * (unsigned int)(dword_140C62A98 + 16));
		if (!v11)
			goto LABEL_23;
		v12 = qword_140C62A88;
		v13 = (unsigned int)((qword_140C62A90 - qword_140C62A88) >> 2);
		if (qword_140C62A88)
		{
			v14 = 0i64;
			if ((unsigned int)((qword_140C62A90 - qword_140C62A88) >> 2))
			{
				do
				{
					v15 = *(_DWORD*)(v12 + 4 * v14++);
					*(_DWORD*)(v11 + 4 * v14 - 4) = v15;
					v12 = qword_140C62A88;
				} while (v14 < v13);
			}
			sub_140881720(dword_140C10F20, v12);
		}
		v8 = (_DWORD*)(v11 + 4 * v13);
		qword_140C62A88 = v11;
		dword_140C62A98 = v9;
		qword_140C62A90 = (__int64)v8;
	}
	if (v10 < v9)
	{
		qword_140C62A90 = (__int64)(v8 + 1);
		if (v8)
			*v8 = -1;
	}
LABEL_23:
	dword_140C62AB4 = 0;
	qword_140C62ABC = 0i64;
	dword_140C62AC4 = 0;
	word_140C62AC8 &= 0xFFE0u;
	result = &xmmword_140C62A70;
	qword_140C62AD0 = 0i64;
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C62A70: using guessed type __int128 xmmword_140C62A70;
// 140C62A80: using guessed type int dword_140C62A80;
// 140C62A88: using guessed type __int64 qword_140C62A88;
// 140C62A90: using guessed type __int64 qword_140C62A90;
// 140C62A98: using guessed type int dword_140C62A98;
// 140C62AA0: using guessed type int dword_140C62AA0;
// 140C62AA8: using guessed type __int64 qword_140C62AA8;
// 140C62AB0: using guessed type int dword_140C62AB0;
// 140C62AB4: using guessed type int dword_140C62AB4;
// 140C62ABC: using guessed type __int64 qword_140C62ABC;
// 140C62AC4: using guessed type int dword_140C62AC4;
// 140C62AC8: using guessed type __int16 word_140C62AC8;
// 140C62AD0: using guessed type __int64 qword_140C62AD0;
// 140C62AD8: using guessed type int dword_140C62AD8;

