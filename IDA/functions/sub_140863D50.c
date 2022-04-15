//----- (0000000140863D50) ----------------------------------------------------
__int64 __fastcall sub_140863D50(__int64 a1, __int64 a2)
{
	__int64 v4; // rsi
	_BYTE* v5; // rbx
	__int64 v6; // rcx
	char v7; // al
	__int16 v8; // ax
	int v9; // eax
	__int64 result; // rax

	if (*(_DWORD*)(a1 + 1056) == 1)
	{
		v4 = 4i64;
		v5 = (_BYTE*)(a1 + 920);
		do
		{
			v6 = *((_QWORD*)v5 - 2);
			if (v6)
			{
				v7 = *v5 | *(_BYTE*)(a1 + 1048);
				if ((v7 & 1) != 0)
				{
					if ((v7 & 2) == 0)
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 16i64))(v6);
				}
				else
				{
					(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v6 + 56i64))(v6, a1 + 848);
				}
				*v5 ^= (*v5 ^ (2 * *v5)) & 2;
			}
			v5 += 40;
			--v4;
		} while (v4);
		v8 = *(_WORD*)(a1 + 864);
		*(_BYTE*)(a1 + 1048) ^= (*(_BYTE*)(a1 + 1048) ^ (2 * *(_BYTE*)(a1 + 1048))) & 2;
		*(_WORD*)(a2 + 18) = v8;
	}
	*(_DWORD*)(a1 + 872) = *(_DWORD*)(a1 + 780);
	*(_DWORD*)(a1 + 876) = *(_DWORD*)(a1 + 784);
	v9 = *(_DWORD*)(a1 + 856);
	if (v9 == 3)
	{
		sub_14087AD90(a1 + 840, a1 + 848, a2);
	}
	else if (v9 == 63)
	{
		sub_14087AD80(a1 + 840, a1 + 848, a2);
	}
	*(_DWORD*)(a1 + 784) = *(_DWORD*)(a1 + 780);
	result = *(unsigned int*)(a1 + 788);
	*(_DWORD*)(a1 + 792) = result;
	return result;
}
// 14087AD80: using guessed type __int64 __fastcall sub_14087AD80(_QWORD, _QWORD, _QWORD);
// 14087AD90: using guessed type __int64 __fastcall sub_14087AD90(_QWORD, _QWORD, _QWORD);

