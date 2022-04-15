//----- (0000000140090590) ----------------------------------------------------
__int64 __fastcall sub_140090590(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 2ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 44), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C1C0(a1, (_DWORD*)(a3 + 48));
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0x20ui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
											if ((int)result >= 0)
											{
												result = sub_14006C090(a1, (_DWORD*)(a3 + 60), 0x20ui64);
												if ((int)result >= 0)
												{
													result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 64));
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, (_DWORD*)(a3 + 72), 0x20ui64);
														if ((int)result >= 0)
															return sub_14006C090(a1, (_DWORD*)(a3 + 76), 0x20ui64);
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
	}
	return result;
}
// 1400905DF: variable 'v7' is possibly undefined

