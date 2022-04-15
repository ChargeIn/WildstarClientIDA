//----- (00000001400AC130) ----------------------------------------------------
__int64 __fastcall sub_1400AC130(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 2ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 3ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 3ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_140337160(a1, (_BYTE*)(a3 + 40), 16i64);
									if ((int)result >= 0)
									{
										result = sub_1400ABC00(a1, a2, a3 + 56);
										if ((int)result >= 0)
										{
											result = sub_14006BF60(a1, (_WORD*)(a3 + 80), 0x10ui64);
											if ((int)result >= 0)
											{
												result = sub_14006BF60(a1, (_WORD*)(a3 + 82), 0x10ui64);
												if ((int)result >= 0)
												{
													result = sub_14006BF60(a1, (_WORD*)(a3 + 84), 0x10ui64);
													if ((int)result >= 0)
														return sub_14006BF60(a1, (_WORD*)(a3 + 86), 0x10ui64);
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
		}
	}
	return result;
}

