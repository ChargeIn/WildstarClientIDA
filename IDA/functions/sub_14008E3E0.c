//----- (000000014008E3E0) ----------------------------------------------------
__int64 __fastcall sub_14008E3E0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // r8
	__int64 v10; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x12ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 32), v7);
						if ((int)result >= 0)
						{
							result = sub_14006C120(a1, (__int64*)(a3 + 40), v8);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 48), 0x12ui64);
								if ((int)result >= 0)
								{
									result = sub_140337160(a1, (_BYTE*)(a3 + 52), 20i64);
									if ((int)result >= 0)
									{
										result = sub_140337160(a1, (_BYTE*)(a3 + 72), 32i64);
										if ((int)result >= 0)
										{
											result = sub_14006C120(a1, (__int64*)(a3 + 104), v9);
											if ((int)result >= 0)
											{
												result = sub_14006C120(a1, (__int64*)(a3 + 112), v10);
												if ((int)result >= 0)
												{
													result = sub_14006C090(a1, (_DWORD*)(a3 + 120), 4ui64);
													if ((int)result >= 0)
													{
														result = sub_14006C090(a1, (_DWORD*)(a3 + 124), 4ui64);
														if ((int)result >= 0)
															return sub_14006C090(a1, (_DWORD*)(a3 + 128), 0x20ui64);
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
// 14008E456: variable 'v6' is possibly undefined
// 14008E484: variable 'v7' is possibly undefined
// 14008E498: variable 'v8' is possibly undefined
// 14008E4F2: variable 'v9' is possibly undefined
// 14008E502: variable 'v10' is possibly undefined

