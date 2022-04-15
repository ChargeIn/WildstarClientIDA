//----- (00000001400A00B0) ----------------------------------------------------
__int64 __fastcall sub_1400A00B0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v6; // rdx
	__int64 v7; // rdx
	__int64 v8; // r8
	__int64 v9; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, (_DWORD*)a3, 0x20ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, (_DWORD*)(a3 + 4), 1ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 8), 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_1400852F0(a1, v6, a3 + 16);
				if ((int)result >= 0)
				{
					result = sub_1400852F0(a1, v7, a3 + 32);
					if ((int)result >= 0)
					{
						result = sub_14006C120(a1, (__int64*)(a3 + 48), v8);
						if ((int)result >= 0)
							return sub_14006C120(a1, (__int64*)(a3 + 56), v9);
					}
				}
			}
		}
	}
	return result;
}
// 1400A011A: variable 'v6' is possibly undefined
// 1400A012A: variable 'v7' is possibly undefined
// 1400A013A: variable 'v8' is possibly undefined
// 1400A014A: variable 'v9' is possibly undefined

