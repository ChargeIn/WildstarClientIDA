//----- (000000014063F690) ----------------------------------------------------
__int64 __fastcall sub_14063F690(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 v4; // rdx
	__int64 v5; // rcx
	__int64 v6; // rax
	__int16* v7; // r9
	__int16* v8; // rcx

	v4 = *(_QWORD*)(a1 + 8);
	v5 = (*(_QWORD*)(a1 + 16) - v4) >> 1;
	if (!v5)
		return -1i64;
	v6 = v4 + 2 * v5;
	if (v6 == v4)
	{
	LABEL_8:
		v6 = v4;
	}
	else
	{
		v7 = &word_1409F3F7C[a4];
		while (1)
		{
			v8 = word_1409F3F7C;
			if (word_1409F3F7C != v7)
				break;
		LABEL_7:
			v6 -= 2i64;
			if (v6 == v4)
				goto LABEL_8;
		}
		while (*(_WORD*)(v6 - 2) != *v8)
		{
			if (++v8 == v7)
				goto LABEL_7;
		}
	}
	if (v6 == v4)
		return -1i64;
	else
		return (v6 - v4 - 2) >> 1;
}
// 1409F3F7C: using guessed type __int16 word_1409F3F7C[];

