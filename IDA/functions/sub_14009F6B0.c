//----- (000000014009F6B0) ----------------------------------------------------
__int64 __fastcall sub_14009F6B0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 3ui64);
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
						result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 0x20ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 1ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
								if ((int)result >= 0)
								{
									v7 = sub_1403374E0(a2, 20i64 * *(unsigned int*)(a3 + 28));
									*(_QWORD*)(a3 + 32) = v7;
									if (v7)
									{
										v9 = 0i64;
										if (*(_DWORD*)(a3 + 28))
										{
											while (1)
											{
												result = sub_14009F610(a1, v8, (_DWORD*)(*(_QWORD*)(a3 + 32) + 20 * v9));
												if ((int)result < 0)
													break;
												v9 = (unsigned int)(v9 + 1);
												if ((unsigned int)v9 >= *(_DWORD*)(a3 + 28))
													return sub_14009F0A0(a1, v8, (_DWORD*)(a3 + 40));
											}
										}
										else
										{
											return sub_14009F0A0(a1, v8, (_DWORD*)(a3 + 40));
										}
									}
									else
									{
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
	return result;
}
// 14009F7EF: variable 'v8' is possibly undefined

