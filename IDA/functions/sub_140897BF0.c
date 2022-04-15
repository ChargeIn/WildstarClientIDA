//----- (0000000140897BF0) ----------------------------------------------------
__int64 __fastcall sub_140897BF0(__int64 a1, __int64 a2, _BYTE* a3)
{
	__int64 v6; // rbx
	__int64 result; // rax
	_QWORD* v8; // rsi
	int v9; // edx
	_WORD* v10; // rcx
	char v11; // dl
	bool v12; // zf

	*a3 = 0;
	if (((*(_DWORD*)(*(_QWORD*)a2 + 56i64) - 1) & 0xFFFFFFFD) != 0)
		v6 = *(_QWORD*)(a2 + 16);
	else
		v6 = sub_140896C70(*(_QWORD*)a2);
	if (!v6)
	{
		*a3 = 1;
		return 0i64;
	}
	v8 = *(_QWORD**)a2;
	if ((*(_BYTE*)(a1 + 72) & 1) != 0 && v6 == v8[8])
		sub_140897940(a1, *(_QWORD*)a2, v6);
	v9 = *(__int16*)(v6 + 26);
	if (v9 + 1 == (unsigned int)((__int64)(v8[5] - v8[4]) >> 3))
	{
		result = 0i64;
		v10 = (_WORD*)(a2 + 8);
		*(_WORD*)(v6 + 26) = 0;
		if (a2 != -8)
		{
			v11 = *(_BYTE*)(a2 + 10);
			if ((v11 & 1) == 0 || (v11 & 2) == 0 && (v12 = *v10 == 1, -- * v10, v12))
			{
				*a3 = 1;
				return result;
			}
		}
	}
	else
	{
		*(_WORD*)(v6 + 26) = v9 + 1;
	}
	return *(unsigned __int16*)(v6 + 26);
}

