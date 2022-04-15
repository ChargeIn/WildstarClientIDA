//----- (000000014007B620) ----------------------------------------------------
__int64 __fastcall sub_14007B620(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned int v8; // ebx
	_BYTE* v9; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0xEui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 1ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
					if ((int)result >= 0)
					{
						v7 = sub_1403374E0(a2, 88i64 * *(unsigned int*)(a3 + 16));
						*(_QWORD*)(a3 + 24) = v7;
						if (v7)
						{
							v8 = 0;
							if (*(_DWORD*)(a3 + 16))
							{
								do
								{
									result = sub_14007B490(a1, a2, *(_QWORD*)(a3 + 24) + 88i64 * v8);
									if ((int)result < 0)
										return result;
								} while (++v8 < *(_DWORD*)(a3 + 16));
							}
							result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
							if ((int)result < 0)
								return result;
							v9 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned int*)(a3 + 32));
							*(_QWORD*)(a3 + 40) = v9;
							if (v9)
							{
								result = sub_140337160(a1, v9, 4i64 * *(unsigned int*)(a3 + 32));
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_140337160(a1, (_BYTE*)(a3 + 52), 12i64);
										if ((int)result >= 0)
											return sub_14006C090(a1, (_DWORD*)(a3 + 64), 0xEui64);
									}
								}
								return result;
							}
						}
						return 2147500037i64;
					}
				}
			}
		}
	}
	return result;
}

