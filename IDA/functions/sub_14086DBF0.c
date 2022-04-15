//----- (000000014086DBF0) ----------------------------------------------------
__int64 __fastcall sub_14086DBF0(__int64 a1, __int64 a2, _BYTE* a3, __int64 a4)
{
	int v8; // esi
	char v9; // al
	bool v10; // zf
	__int16 v12; // ax
	char v13; // al

	*a3 = 1;
	if (*(_BYTE*)(a2 + 24))
	{
		v8 = *(__int16*)(a2 + 26);
		if (v8 + 1 == (*(unsigned int(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 192) + 24i64))(*(_QWORD*)(a1 + 192)))
		{
			if ((*(_BYTE*)(a1 + 479) & 0x20) != 0)
			{
				*(_BYTE*)(a2 + 24) = 0;
				*(_WORD*)(a2 + 26) = v8 - 1;
			}
			else
			{
				*(_WORD*)(a2 + 26) = 0;
				if (a4)
				{
					v9 = *(_BYTE*)(a4 + 2);
					if ((v9 & 1) == 0 || (v9 & 2) == 0 && (v10 = *(_WORD*)a4 == 1, -- * (_WORD*)a4, v10))
					{
						*a3 = 0;
						return 0i64;
					}
				}
			}
		}
		else
		{
			*(_WORD*)(a2 + 26) = v8 + 1;
		}
	}
	else
	{
		v12 = *(_WORD*)(a2 + 26);
		if (v12)
		{
			*(_WORD*)(a2 + 26) = v12 - 1;
		}
		else
		{
			*(_WORD*)(a2 + 26) = 1;
			*(_BYTE*)(a2 + 24) = 1;
			if (a4)
			{
				v13 = *(_BYTE*)(a4 + 2);
				if ((v13 & 1) == 0 || (v13 & 2) == 0 && (v10 = *(_WORD*)a4 == 1, -- * (_WORD*)a4, v10))
				{
					*a3 = 0;
					return 0i64;
				}
			}
		}
	}
	return *(unsigned __int16*)(a2 + 26);
}

