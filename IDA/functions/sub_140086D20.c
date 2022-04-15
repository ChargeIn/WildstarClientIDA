//----- (0000000140086D20) ----------------------------------------------------
__int64 __fastcall sub_140086D20(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rbx

	if (!a3)
		return 2147500037i64;
	result = sub_14006BF60(a1, (_WORD*)a3, 0x10ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 1ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 5ui64);
			if ((int)result >= 0)
			{
				v7 = sub_1403374E0(a2, 96i64 * *(unsigned int*)(a3 + 8));
				*(_QWORD*)(a3 + 16) = v7;
				if (v7)
				{
					v8 = 0i64;
					if (*(_DWORD*)(a3 + 8))
					{
						while (1)
						{
							result = sub_140085790(a1, a2, *(_QWORD*)(a3 + 16) + 96 * v8);
							if ((int)result < 0)
								break;
							v8 = (unsigned int)(v8 + 1);
							if ((unsigned int)v8 >= *(_DWORD*)(a3 + 8))
								goto LABEL_11;
						}
					}
					else
					{
					LABEL_11:
						result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
						if ((int)result >= 0)
						{
							result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 0x20ui64);
								if ((int)result >= 0)
									return sub_14006BE30(a1, (_BYTE*)(a3 + 44), 8ui64);
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
	}
	return result;
}

