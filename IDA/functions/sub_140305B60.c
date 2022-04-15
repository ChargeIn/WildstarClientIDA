//----- (0000000140305B60) ----------------------------------------------------
__int64 __fastcall sub_140305B60(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 result; // rax
	__int64 v6; // rax
	__int64 v7; // r11
	__int64 v8; // rax
	__int64 v9; // rcx
	__int64 v10; // r11

	if ((*(_BYTE*)(a1 + 48) & 1) == 0)
		return 2147483658i64;
	if (*(_DWORD*)(a2 + 1200))
	{
		v6 = *(_QWORD*)(a2 + 1208);
		if (!v6)
			return 0i64;
		v7 = *(unsigned __int16*)(v6 + 2);
		v8 = *(_QWORD*)(*(_QWORD*)(a1 + 64) + 392i64);
		v9 = (unsigned int)v7;
		v10 = *(_QWORD*)(a1 + 824) + (v7 << 6);
		if ((*(_BYTE*)(a2 + 48) & 1) != 0)
		{
			result = sub_140300FD0(a2, v10, *(_QWORD*)(a1 + 496) + 96i64 * *(unsigned __int16*)(v8 + 352 * v9 + 6), a3);
			if ((int)result < 0)
				return result;
			return 0i64;
		}
		return 2147483658i64;
	}
	if ((*(_BYTE*)(a2 + 48) & 1) == 0)
		return 2147483658i64;
	result = sub_140300FD0(a2, a1 + 1264, a1 + 400, a3);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 140300FD0: using guessed type __int64 __fastcall sub_140300FD0(_QWORD, _QWORD, _QWORD, _QWORD);

