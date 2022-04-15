//----- (00000001400A9B20) ----------------------------------------------------
__int64 __fastcall sub_1400A9B20(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // rdx
	__int64 v9; // r8
	__int64 v10; // r8
	__int64 v11; // rdx

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C120(a1, (__int64*)(a3 + 16), v7);
			if ((int)result >= 0)
			{
				result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 24));
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 0x20ui64);
					if ((int)result >= 0)
					{
						result = sub_1400852F0(a1, v8, a3 + 40);
						if ((int)result >= 0)
						{
							result = sub_14006C120(a1, (__int64*)(a3 + 56), v9);
							if ((int)result >= 0)
							{
								result = sub_14006C090(a1, (_DWORD*)(a3 + 64), 5ui64);
								if ((int)result >= 0)
								{
									result = sub_14006C120(a1, (__int64*)(a3 + 72), v10);
									if ((int)result >= 0)
										return sub_1400852F0(a1, v11, a3 + 80);
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
// 1400A9B83: variable 'v7' is possibly undefined
// 1400A9BBC: variable 'v8' is possibly undefined
// 1400A9BCC: variable 'v9' is possibly undefined
// 1400A9BF2: variable 'v10' is possibly undefined
// 1400A9C02: variable 'v11' is possibly undefined

