//----- (000000014008F170) ----------------------------------------------------
__int64 __fastcall sub_14008F170(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax
	_BYTE* v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xFui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 4ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
					if ((int)result >= 0)
					{
						v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 16));
						*(_QWORD*)(a3 + 24) = v7;
						if (!v7)
							return 2147500037i64;
						result = sub_140337160(a1, v7, 4i64 * *(unsigned int*)(a3 + 16));
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
							if ((int)result >= 0)
							{
								v8 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 16));
								*(_QWORD*)(a3 + 40) = v8;
								if (!v8)
									return 2147500037i64;
								return sub_140337160(a1, v8, 4i64 * *(unsigned int*)(a3 + 16));
							}
						}
					}
				}
			}
		}
	}
	return result;
}
