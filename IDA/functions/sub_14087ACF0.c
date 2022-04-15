//----- (000000014087ACF0) ----------------------------------------------------
__int64 __fastcall sub_14087ACF0(unsigned __int16* a1, __int64 a2, __int64 a3, __int64 a4)
{
	__int64 result; // rax

	switch (*(_DWORD*)(a3 + 8))
	{
	case 3:
		sub_14087B5D0((__int64)a1, a2, a3, a4);
		break;
	case 4:
		sub_14087B520((__int64)a1, a2, (__int64*)a3, a4);
		result = *a1;
		*(_WORD*)(a3 + 18) = result;
		return result;
	case 0x33:
		sub_14087B3E0((__int64)a1, a2, a3, a4);
		result = *a1;
		*(_WORD*)(a3 + 18) = result;
		return result;
	case 0x3F:
		sub_14087B190((__int64)a1, a2, a3, a4);
		result = *a1;
		*(_WORD*)(a3 + 18) = result;
		return result;
	}
	result = *a1;
	*(_WORD*)(a3 + 18) = result;
	return result;
}

