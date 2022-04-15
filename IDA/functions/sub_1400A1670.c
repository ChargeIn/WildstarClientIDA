//----- (00000001400A1670) ----------------------------------------------------
__int64 __fastcall sub_1400A1670(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 1ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 5ui64);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 8));
			if ((int)result >= 0)
			{
				result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
				if ((int)result >= 0)
				{
					result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
					if ((int)result >= 0)
					{
						result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
						if ((int)result >= 0)
						{
							result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 40));
							if ((int)result >= 0)
							{
								result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 48));
								if ((int)result >= 0)
								{
									result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 56));
									if ((int)result >= 0)
									{
										result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 64));
										if ((int)result >= 0)
										{
											result = sub_14006C1C0(a1, (_DWORD*)(a3 + 72));
											if ((int)result >= 0)
											{
												result = sub_14006C1C0(a1, (_DWORD*)(a3 + 76));
												if ((int)result >= 0)
												{
													result = sub_14006C1C0(a1, (_DWORD*)(a3 + 80));
													if ((int)result >= 0)
														return sub_140336A40(a1, a2, (_QWORD*)(a3 + 88));
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

