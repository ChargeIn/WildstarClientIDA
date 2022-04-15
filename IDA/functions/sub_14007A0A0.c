//----- (000000014007A0A0) ----------------------------------------------------
__int64 __fastcall sub_14007A0A0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdx
	__int64 v9; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0x20ui64);
		if ((int)result >= 0)
		{
			v7 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 4));
			*(_QWORD*)(a3 + 8) = v7;
			if (v7)
			{
				v9 = 0i64;
				if (*(_DWORD*)(a3 + 4))
				{
					while (1)
					{
						result = sub_14007A040(a1, v8, (_DWORD*)(*(_QWORD*)(a3 + 8) + 8 * v9));
						if ((int)result < 0)
							break;
						v9 = (unsigned int)(v9 + 1);
						if ((unsigned int)v9 >= *(_DWORD*)(a3 + 4))
							goto LABEL_10;
					}
				}
				else
				{
				LABEL_10:
					result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 1ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 0x20ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
									if ((int)result >= 0)
									{
										result = sub_14006C1C0(a1, (_DWORD*)(a3 + 36));
										if ((int)result >= 0)
										{
											result = sub_14006C1C0(a1, (_DWORD*)(a3 + 40));
											if ((int)result >= 0)
												return sub_14006C090(a1, (_DWORD*)(a3 + 44), 0x20ui64);
										}
									}
								}
							}
						}
					}
				}
			}
			else
			{
				return 2147500037i64;
			}
		}
	}
	return result;
}
// 14007A14B: variable 'v8' is possibly undefined

