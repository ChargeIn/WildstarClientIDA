//----- (000000014088F230) ----------------------------------------------------
__int64 __fastcall sub_14088F230(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	__int64* v4; // rbx
	__int16 v5; // ax
	unsigned __int64 v6; // rcx
	__int16 v7; // r12
	unsigned __int64 v8; // r15
	int v9; // ebp
	__int64 v10; // r14
	__int64 v11; // rdx
	__int64 v12; // rcx
	__int64 v13; // rsi
	unsigned __int64 i; // rdx
	_WORD* v15; // rcx

	sub_14088B4A0(a1);
	v2 = (__int64)(*(_QWORD*)(a1 + 160) - *(_QWORD*)(a1 + 152)) >> 3;
	if ((_DWORD)v2)
	{
		v3 = sub_1408819F0(dword_140C10F20, 2i64 * (unsigned int)v2);
		*(_QWORD*)(a1 + 176) = v3;
		*(_QWORD*)(a1 + 184) = v3;
		if (!v3)
			return 52i64;
		*(_DWORD*)(a1 + 192) = v2;
	}
	v4 = *(__int64**)(a1 + 152);
	if (v4 != *(__int64**)(a1 + 160))
	{
		while (1)
		{
			v5 = sub_140894250(*v4);
			v6 = *(unsigned int*)(a1 + 192);
			v7 = v5;
			v8 = (unsigned int)((__int64)(*(_QWORD*)(a1 + 184) - *(_QWORD*)(a1 + 176)) >> 1);
			if (v8 < v6)
				goto LABEL_12;
			v9 = v6 + 16;
			v10 = sub_1408819F0(dword_140C10F20, 2i64 * (unsigned int)(v6 + 16));
			if (v10)
				break;
		LABEL_15:
			if (++v4 == *(__int64**)(a1 + 160))
				return 1i64;
		}
		v11 = *(_QWORD*)(a1 + 176);
		v12 = (*(_QWORD*)(a1 + 184) - v11) >> 1;
		v13 = (unsigned int)v12;
		if (v11)
		{
			for (i = 0i64; i < (unsigned int)v12; *(_WORD*)(v10 + 2 * i - 2) = *(_WORD*)(*(_QWORD*)(a1 + 176) + 2 * i - 2))
				++i;
			sub_140881720(dword_140C10F20, *(_QWORD*)(a1 + 176));
		}
		*(_QWORD*)(a1 + 176) = v10;
		*(_DWORD*)(a1 + 192) = v9;
		*(_QWORD*)(a1 + 184) = v10 + 2 * v13;
	LABEL_12:
		if (v8 < *(unsigned int*)(a1 + 192))
		{
			v15 = *(_WORD**)(a1 + 184);
			*(_QWORD*)(a1 + 184) = v15 + 1;
			if (v15)
				*v15 = v7;
		}
		goto LABEL_15;
	}
	return 1i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

