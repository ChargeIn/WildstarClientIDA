//----- (00000001400A2740) ----------------------------------------------------
__int64 __fastcall sub_1400A2740(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	_BYTE* v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_140337160(a1, (_BYTE*)(a3 + 8), 49i64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006BF60(a1, (_WORD*)(a3 + 64), 0x10ui64);
					if ((int)result >= 0)
					{
						result = sub_14006BF60(a1, (_WORD*)(a3 + 66), 0x10ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 68), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_140337160(a1, (_BYTE*)(a3 + 72), 33i64);
								if ((int)result >= 0)
								{
									result = sub_140337160(a1, (_BYTE*)(a3 + 105), 17i64);
									if ((int)result >= 0)
									{
										result = sub_14006BF60(a1, (_WORD*)(a3 + 122), 0x10ui64);
										if ((int)result >= 0)
										{
											v7 = (_BYTE*)sub_1403374E0(a2, *(unsigned __int16*)(a3 + 122));
											*(_QWORD*)(a3 + 128) = v7;
											if (v7)
												return sub_140337160(a1, v7, *(unsigned __int16*)(a3 + 122));
											else
												return 2147500037i64;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return result;
}

