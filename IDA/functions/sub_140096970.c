//----- (0000000140096970) ----------------------------------------------------
__int64 __fastcall sub_140096970(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	_BYTE* v8; // rax
	_BYTE* v9; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
		if ((int)result >= 0)
		{
			result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 16));
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 5ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 5ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 2ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C120(a1, (__int64*)(a3 + 40), v7);
							if ((int)result >= 0)
							{
								result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 48));
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 56), 4ui64);
									if ((int)result >= 0)
									{
										result = sub_14006BE30(a1, (_BYTE*)(a3 + 60), 5ui64);
										if ((int)result >= 0)
										{
											v8 = (_BYTE*)sub_1403374E0(a2, 8i64 * *(unsigned __int8*)(a3 + 60));
											*(_QWORD*)(a3 + 64) = v8;
											if (!v8)
												return 2147500037i64;
											result = sub_140337160(a1, v8, 8i64 * *(unsigned __int8*)(a3 + 60));
											if ((int)result >= 0)
											{
												result = sub_14006BF60(a1, (_WORD*)(a3 + 72), 6ui64);
												if ((int)result >= 0)
												{
													v9 = (_BYTE*)sub_1403374E0(a2, 4i64 * *(unsigned __int16*)(a3 + 72));
													*(_QWORD*)(a3 + 80) = v9;
													if (!v9)
														return 2147500037i64;
													result = sub_140337160(a1, v9, 4i64 * *(unsigned __int16*)(a3 + 72));
													if ((int)result >= 0)
														return sub_14006C090(a1, (_DWORD*)(a3 + 88), 0xEui64);
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
// 140096A3D: variable 'v7' is possibly undefined

