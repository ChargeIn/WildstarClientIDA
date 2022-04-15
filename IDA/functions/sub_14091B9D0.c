//----- (000000014091B9D0) ----------------------------------------------------
_BOOL8 __fastcall sub_14091B9D0(__int64 a1, unsigned __int16* a2)
{
	__int64 v2; // r8
	__int64 v4; // r8

	if (*(_DWORD*)(a1 + 316))
	{
		v2 = *a2;
		if ((*a2 & 0xFC00) == 55296)
			v2 = (((v2 & 0x3FF) << 10) | a2[1] & 0x3FF) + 0x10000;
		if ((unsigned int)v2 <= 0x7F)
			return *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + v2) != (_DWORD)v2;
	}
	else
	{
		v4 = *a2;
		if ((unsigned int)v4 <= 0xFF)
			return *(unsigned __int8*)(*(_QWORD*)(a1 + 64) + v4) != (_DWORD)v4;
	}
	return 0i64;
}

