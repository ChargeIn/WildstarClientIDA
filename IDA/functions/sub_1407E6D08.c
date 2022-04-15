//----- (00000001407E6D08) ----------------------------------------------------
__int64 __fastcall sub_1407E6D08(__int64 a1, __int64 a2, char* a3, __int64 a4)
{
	unsigned int* v5; // rax
	unsigned int v6; // ebx
	_WORD* v7; // r11
	__int64 v8; // r10
	signed __int64 v9; // r11
	__int16 v10; // ax
	__int16 v11; // ax

	if (a4)
	{
		if (!a1)
		{
		LABEL_11:
			v5 = (unsigned int*)sub_1407DE1B0(a1, a2, a3);
			v6 = 22;
		LABEL_12:
			*v5 = v6;
			sub_1407DC370();
			return v6;
		}
	}
	else if (!a1)
	{
		if (!a2)
			return 0i64;
		goto LABEL_11;
	}
	if (!a2)
		goto LABEL_11;
	if (!a4)
	{
		*(_WORD*)a1 = 0;
		return 0i64;
	}
	if (!a3)
	{
		*(_WORD*)a1 = 0;
		goto LABEL_11;
	}
	v7 = (_WORD*)a1;
	v8 = a2;
	if (a4 == -1)
	{
		v9 = a1 - (_QWORD)a3;
		do
		{
			v10 = *(_WORD*)a3;
			*(_WORD*)&a3[v9] = *(_WORD*)a3;
			a3 += 2;
			if (!v10)
				break;
			--v8;
		} while (v8);
	}
	else
	{
		a3 -= a1;
		do
		{
			v11 = *(_WORD*)((char*)v7 + (_QWORD)a3);
			*v7++ = v11;
			if (!v11)
				break;
			if (!--v8)
				break;
			--a4;
		} while (a4);
		if (!a4)
			*v7 = 0;
	}
	if (v8)
		return 0i64;
	if (a4 != -1)
	{
		*(_WORD*)a1 = 0;
		v5 = (unsigned int*)sub_1407DE1B0(a1, a2, a3);
		v6 = 34;
		goto LABEL_12;
	}
	*(_WORD*)(a1 + 2 * a2 - 2) = 0;
	return 80i64;
}
// 1407DE1B0: using guessed type __int64 __fastcall sub_1407DE1B0(_QWORD, _QWORD, _QWORD);

