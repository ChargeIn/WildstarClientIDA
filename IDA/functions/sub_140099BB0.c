//----- (0000000140099BB0) ----------------------------------------------------
__int64 __fastcall sub_140099BB0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // r8
	__int64 v7; // r8
	__int64 v8; // r8
	__int64 v9; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x12ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 12), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C120(a1, (__int64*)(a3 + 16), v6);
				if ((int)result >= 0)
				{
					result = sub_14006C120(a1, (__int64*)(a3 + 24), v7);
					if ((int)result >= 0)
					{
						result = sub_14006C090(a1, (_DWORD*)(a3 + 32), 1ui64);
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 36), 1ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C120(a1, (__int64*)(a3 + 40), v8);
								if ((int)result >= 0)
									return sub_14006C120(a1, (__int64*)(a3 + 48), v9);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 140099C18: variable 'v6' is possibly undefined
// 140099C28: variable 'v7' is possibly undefined
// 140099C64: variable 'v8' is possibly undefined
// 140099C74: variable 'v9' is possibly undefined

