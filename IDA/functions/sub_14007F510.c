//----- (000000014007F510) ----------------------------------------------------
__int64 __fastcall sub_14007F510(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0xEui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0xEui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 2ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0xEui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 44), 3ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0xFui64);
										if ((int)result >= 0)
										{
											result = sub_14006C090(a1, (_DWORD*)(a3 + 52), 0xFui64);
											if ((int)result >= 0)
												return sub_14006C1C0(a1, (_DWORD*)(a3 + 56));
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

