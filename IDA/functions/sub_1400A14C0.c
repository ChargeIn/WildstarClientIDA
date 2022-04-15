//----- (00000001400A14C0) ----------------------------------------------------
__int64 __fastcall sub_1400A14C0(__int64 a1, _QWORD* a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // r8
	__int64 v8; // r8

	if (!a3)
		return 2147500037i64;
	result = sub_14006C120(a1, (__int64*)a3, a3);
	if ((int)result >= 0)
	{
		result = sub_14006C120(a1, (__int64*)(a3 + 8), v7);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, (_DWORD*)(a3 + 16), 5ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, (_DWORD*)(a3 + 20), 3ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C1C0(a1, (_DWORD*)(a3 + 24));
					if ((int)result >= 0)
					{
						result = sub_140336A40(a1, a2, (_QWORD*)(a3 + 32));
						if ((int)result >= 0)
						{
							result = sub_14006C090(a1, (_DWORD*)(a3 + 40), 1ui64);
							if ((int)result >= 0)
							{
								result = sub_14006C120(a1, (__int64*)(a3 + 48), v8);
								if ((int)result >= 0)
									return sub_14006C090(a1, (_DWORD*)(a3 + 56), 0x20ui64);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 1400A1509: variable 'v7' is possibly undefined
// 1400A1582: variable 'v8' is possibly undefined

