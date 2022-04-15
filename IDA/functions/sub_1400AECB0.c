//----- (00000001400AECB0) ----------------------------------------------------
__int64 __fastcall sub_1400AECB0(__int64 a1, _QWORD* a2, unsigned int* a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 0xAui64);
	if ((int)result < 0)
		return result;
	v7 = (_BYTE*)sub_1403374E0(a2, 4i64 * *a3);
	*((_QWORD*)a3 + 1) = v7;
	if (!v7)
		return 2147500037i64;
	result = sub_140337160(a1, v7, 4i64 * *a3);
	if ((int)result < 0)
		return result;
	if (a3 == (unsigned int*)-16i64)
		return 2147500037i64;
	result = sub_14006BF60(a1, (_WORD*)a3 + 8, 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C1C0(a1, a3 + 5);
		if ((int)result >= 0)
		{
			result = sub_14006C1C0(a1, a3 + 6);
			if ((int)result >= 0)
			{
				result = sub_14006C1C0(a1, a3 + 7);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 8, 4ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, a3 + 9, 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, a3 + 10, 0x20ui64);
							if ((int)result >= 0)
								return sub_14006C090(a1, a3 + 11, 1ui64);
						}
					}
				}
			}
		}
	}
	return result;
}

