//----- (00000001407E43E0) ----------------------------------------------------
__int64 __fastcall sub_1407E43E0(unsigned __int16* a1, _QWORD* a2, _WORD* a3, _DWORD* a4, _DWORD* a5)
{
	_QWORD* v6; // r10
	BOOL v7; // edx
	__int64 result; // rax
	BOOL v9; // edi
	int v10; // r9d
	unsigned int v11; // edx

	*a5 = 0;
	v6 = a2;
	*a4 = 1;
	if (a2)
	{
		*a2 = a3;
		v6 = a2 + 1;
	}
	v7 = 0;
	do
	{
		if (*a1 == 34)
		{
			++a1;
			v7 = !v7;
			result = 34i64;
		}
		else
		{
			++* a5;
			if (a3)
				*a3++ = *a1;
			result = *a1++;
			if (!(_WORD)result)
			{
				--a1;
				goto LABEL_15;
			}
		}
	} while (v7 || (_WORD)result != 32 && (_WORD)result != 9);
	if (a3)
		*(a3 - 1) = 0;
LABEL_15:
	v9 = 0;
	while (*a1)
	{
		while (*a1 == 32 || *a1 == 9)
			++a1;
		if (!*a1)
			break;
		if (v6)
			*v6++ = a3;
		++* a4;
		while (1)
		{
			v10 = 1;
			v11 = 0;
			while (*a1 == 92)
			{
				++a1;
				++v11;
			}
			if (*a1 == 34)
			{
				if ((v11 & 1) == 0)
				{
					if (v9 && a1[1] == 34)
					{
						++a1;
					}
					else
					{
						v10 = 0;
						v9 = !v9;
					}
				}
				v11 >>= 1;
			}
			while (v11)
			{
				--v11;
				if (a3)
					*a3++ = 92;
				++* a5;
			}
			result = *a1;
			if (!(_WORD)result || !v9 && ((_WORD)result == 32 || (_WORD)result == 9))
				break;
			if (v10)
			{
				if (a3)
					*a3++ = result;
				++* a5;
			}
			++a1;
		}
		if (a3)
			*a3++ = 0;
		++* a5;
	}
	if (v6)
		*v6 = 0i64;
	++* a4;
	return result;
}

