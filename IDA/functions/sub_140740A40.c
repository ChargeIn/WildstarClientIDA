//----- (0000000140740A40) ----------------------------------------------------
__int64 __fastcall sub_140740A40(_QWORD* a1)
{
	__int64 v2; // rax
	unsigned int* v3; // rsi
	int v4; // ebp
	unsigned int v5; // r15d
	_DWORD* v6; // rax
	int v8; // r12d
	__int64 v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // r14d
	unsigned int* v12; // rax
	_DWORD* v13; // rcx
	_DWORD* v14; // rax
	__int64 v15; // rax
	_DWORD* v16; // rax
	int v17; // [rsp+58h] [rbp+10h] BYREF
	int v18; // [rsp+5Ch] [rbp+14h]

	v2 = sub_140056AB0(a1, 1u);
	if (!v2 || (v3 = *(unsigned int**)(v2 + 8)) == 0i64 || v3[2] == -1)
	{
		v16 = (_DWORD*)a1[2];
		*v16 = 0;
		v16[2] = 1;
		a1[2] += 16i64;
		return 1i64;
	}
	v4 = sub_140056D60(a1, 2u);
	if ((unsigned int)(v4 - 1) > 5)
	{
		if (v4 != 20)
			goto LABEL_6;
		v5 = 6;
	}
	else
	{
		v5 = v4 - 1;
		if ((unsigned int)(v4 - 1) >= 7)
		{
		LABEL_6:
			v6 = (_DWORD*)a1[2];
			*v6 = 0;
			v6[2] = 1;
			a1[2] += 16i64;
			return 1i64;
		}
	}
	v8 = sub_140056D60(a1, 3u);
	v17 = BYTE1(v8);
	v18 = (unsigned __int8)v8;
	v9 = sub_1403AC780(qword_140C65898 + 160, &v17);
	v11 = 0;
	if (v9)
	{
		v12 = *(unsigned int**)(v9 + 64);
		v11 = *v12;
	}
	else
	{
		if (v8 <= -1)
			goto LABEL_18;
		v11 = sub_140417B50(a1, 3u);
		v12 = (unsigned int*)sub_1400B5DF0(qword_140C658F0, v11, 0i64);
	}
	if (!v12)
		goto LABEL_18;
	if (v4 == v12[95])
	{
		if (!(unsigned int)sub_1403B91D0(v10, v11))
		{
			v14 = (_DWORD*)a1[2];
			*v14 = 0;
		LABEL_21:
			v14[2] = 1;
			goto LABEL_22;
		}
	LABEL_18:
		if (v11 != v3[v5 + 6])
		{
			v3[v5 + 6] = v11;
			v15 = 3i64 * v5;
			*(_QWORD*)&v3[v15 + 35] = 0i64;
			v3[v15 + 37] = 0;
		}
		sub_14073FA10(v3);
		v14 = (_DWORD*)a1[2];
		*v14 = 1;
		goto LABEL_21;
	}
	v13 = (_DWORD*)a1[2];
	*v13 = 0;
	v13[2] = 1;
LABEL_22:
	a1[2] += 16i64;
	return 1i64;
}
// 140740B6A: variable 'v10' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

