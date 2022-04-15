//----- (000000014008DC30) ----------------------------------------------------
__int64 __fastcall sub_14008DC30(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	_BYTE* v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 4ui64);
			if ((int)result >= 0)
			{
				v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 8));
				*(_QWORD*)(a3 + 16) = v7;
				if (!v7)
					return 2147500037i64;
				result = sub_140337160(a1, v7, 4i64 * *(unsigned int*)(a3 + 8));
				if ((int)result < 0)
					return result;
				v8 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 8));
				*(_QWORD*)(a3 + 24) = v8;
				if (v8)
					return sub_140337160(a1, v8, 4i64 * *(unsigned int*)(a3 + 8));
				else
					return 2147500037i64;
			}
		}
	}
	return result;
}

