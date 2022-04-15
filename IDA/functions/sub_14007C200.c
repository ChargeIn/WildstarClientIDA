//----- (000000014007C200) ----------------------------------------------------
__int64 __fastcall sub_14007C200(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0xEui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 0xEui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0xEui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
				if ((int)result >= 0)
				{
					v7 = sub_1403374E0(a2, 8i64 * *(unsigned int*)(a3 + 12));
					*(_QWORD*)(a3 + 16) = v7;
					if (v7)
					{
						v8 = 0i64;
						if (*(_DWORD*)(a3 + 12))
						{
							while (1)
							{
								result = sub_14007A040(a1, (__int64)a2, (_DWORD*)(*(_QWORD*)(a3 + 16) + 8 * v8));
								if ((int)result < 0)
									break;
								v8 = (unsigned int)(v8 + 1);
								if ((unsigned int)v8 >= *(_DWORD*)(a3 + 12))
									goto LABEL_12;
							}
						}
						else
						{
						LABEL_12:
							result = sub_14006C090(a1, (_DWORD*)(a3 + 24), 1ui64);
							if ((int)result >= 0)
								return sub_14006C090(a1, (_DWORD*)(a3 + 28), 0x20ui64);
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
	return result;
}

