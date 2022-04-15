//----- (0000000140096E80) ----------------------------------------------------
__int64 __fastcall sub_140096E80(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x12ui64);
	if ((int)result >= 0)
	{
		result = sub_14006BF60(a1, (_WORD*)(a3 + 4), 0x10ui64);
		if ((int)result >= 0)
		{
			v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int16*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v7;
			if (v7)
				return sub_140337160(a1, v7, 4i64 * *(unsigned __int16*)(a3 + 4));
			else
				return 2147500037i64;
		}
	}
	return result;
}

