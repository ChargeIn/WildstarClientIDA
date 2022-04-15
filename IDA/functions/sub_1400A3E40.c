//----- (00000001400A3E40) ----------------------------------------------------
__int64 __fastcall sub_1400A3E40(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006BE30(a1, (_BYTE*)(a3 + 12), 4ui64);
			if ((int)result >= 0)
			{
				v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int8*)(a3 + 12));
				*(_QWORD*)(a3 + 16) = v7;
				if (v7)
					return sub_140337160(a1, v7, 4i64 * *(unsigned __int8*)(a3 + 12));
				else
					return 2147500037i64;
			}
		}
	}
	return result;
}

