//----- (00000001407F5A24) ----------------------------------------------------
__int64 __fastcall sub_1407F5A24(unsigned __int8* a1, unsigned __int8* a2, unsigned __int64 a3, _OWORD* a4)
{
	__int64 result; // rax
	__int64 v8; // r8
	__int64 v9; // rdx
	__int16 v10; // ax
	__int16 v11; // ax
	__int64 v12; // [rsp+20h] [rbp-28h] BYREF
	__int64 v13; // [rsp+28h] [rbp-20h]
	__int64 v14; // [rsp+30h] [rbp-18h]
	char v15; // [rsp+38h] [rbp-10h]

	sub_1407DE348((__int64)&v12, a4);
	if (!a3)
	{
	LABEL_37:
		result = 0i64;
		goto LABEL_39;
	}
	if (!*(_DWORD*)(v13 + 8))
	{
		result = sub_1407F8138(a1, a2, a3);
		goto LABEL_39;
	}
	if (!a1 || !a2)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		result = 0x7FFFFFFFi64;
		goto LABEL_39;
	}
	while (1)
	{
		v8 = *a1;
		--a3;
		++a1;
		if ((*(_BYTE*)(v8 + v13 + 25) & 4) == 0)
		{
			if ((*(_BYTE*)((unsigned __int16)v8 + v13 + 25) & 0x10) != 0)
				LOWORD(v8) = *(unsigned __int8*)((unsigned __int16)v8 + v13 + 281);
			goto LABEL_21;
		}
		if (a3)
		{
			if (*a1)
			{
				v10 = *a1++;
				LOWORD(v8) = v10 | ((_WORD)v8 << 8);
				if ((unsigned __int16)v8 < *(_WORD*)(v13 + 12) || (unsigned __int16)v8 > *(_WORD*)(v13 + 14))
				{
					if ((unsigned __int16)v8 >= *(_WORD*)(v13 + 18) && (unsigned __int16)v8 <= *(_WORD*)(v13 + 20))
						LOWORD(v8) = *(_WORD*)(v13 + 22) + v8;
				}
				else
				{
					LOWORD(v8) = *(_WORD*)(v13 + 16) + v8;
				}
			}
			else
			{
				LOWORD(v8) = 0;
			}
		LABEL_21:
			v9 = *a2++;
			if ((*(_BYTE*)(v9 + v13 + 25) & 4) != 0)
			{
				if (a3)
				{
					--a3;
					if (*a2)
					{
						v11 = *a2++;
						LOWORD(v9) = v11 | ((_WORD)v9 << 8);
						if ((unsigned __int16)v9 < *(_WORD*)(v13 + 12) || (unsigned __int16)v9 > *(_WORD*)(v13 + 14))
						{
							if ((unsigned __int16)v9 >= *(_WORD*)(v13 + 18) && (unsigned __int16)v9 <= *(_WORD*)(v13 + 20))
								LOWORD(v9) = *(_WORD*)(v13 + 22) + v9;
						}
						else
						{
							LOWORD(v9) = *(_WORD*)(v13 + 16) + v9;
						}
					}
					else
					{
						LOWORD(v9) = 0;
					}
				}
				else
				{
					LOWORD(v9) = 0;
				}
			}
			else if ((*(_BYTE*)((unsigned __int16)v9 + v13 + 25) & 0x10) != 0)
			{
				LOWORD(v9) = *(unsigned __int8*)((unsigned __int16)v9 + v13 + 281);
			}
			goto LABEL_34;
		}
		LOWORD(v8) = 0;
		if ((*(_BYTE*)(*a2 + v13 + 25) & 4) != 0)
			goto LABEL_37;
		LOWORD(v9) = *a2;
	LABEL_34:
		if ((_WORD)v9 != (_WORD)v8)
			break;
		if (!(_WORD)v8 || !a3)
			goto LABEL_37;
	}
	result = (unsigned __int16)v9 < (unsigned __int16)v8 ? 1 : -1;
LABEL_39:
	if (v15)
		*(_DWORD*)(v14 + 200) &= ~2u;
	return result;
}

