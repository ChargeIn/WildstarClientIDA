//----- (00000001407DFBF8) ----------------------------------------------------
__int64 __fastcall sub_1407DFBF8(_WORD* a1, unsigned __int64 a2, _WORD* a3, __int16* a4, _WORD* a5, _WORD* a6)
{
	__int64 v7; // r11
	_WORD* v8; // r10
	__int16 v9; // ax
	_WORD* v10; // rcx
	_WORD* v11; // rcx
	_QWORD* v12; // rax
	unsigned int v13; // ebx

	if (!a1 || !a2)
	{
		v12 = sub_1407DE1B0();
		v13 = 22;
		goto LABEL_32;
	}
	v7 = 0i64;
	v8 = a1;
	if (a3 && *a3)
	{
		v7 = 2i64;
		if (a2 <= 2)
			goto LABEL_29;
		*a1 = *a3;
		a1[1] = 58;
		v8 = a1 + 2;
	}
	if (a4 && *a4)
	{
		while (++v7 < a2)
		{
			v9 = *a4++;
			*v8++ = v9;
			if (!*a4)
			{
				if (*(a4 - 1) != 47 && *(a4 - 1) != 92)
				{
					if (++v7 >= a2)
						goto LABEL_29;
					*v8++ = 92;
				}
				goto LABEL_15;
			}
		}
		goto LABEL_29;
	}
LABEL_15:
	v10 = a5;
	if (a5)
	{
		while (*v10)
		{
			if (++v7 >= a2)
				goto LABEL_29;
			*v8++ = *v10++;
		}
	}
	v11 = a6;
	if (!a6 || !*a6)
	{
	LABEL_28:
		if (v7 + 1 <= a2)
		{
			*v8 = 0;
			return 0i64;
		}
		goto LABEL_29;
	}
	if (*a6 == 46)
		goto LABEL_27;
	if (++v7 < a2)
	{
		*v8++ = 46;
	LABEL_27:
		while (*v11)
		{
			if (++v7 >= a2)
				goto LABEL_29;
			*v8++ = *v11++;
		}
		goto LABEL_28;
	}
LABEL_29:
	*a1 = 0;
	v12 = sub_1407DE1B0();
	v13 = 34;
LABEL_32:
	*(_DWORD*)v12 = v13;
	sub_1407DC370();
	return v13;
}

