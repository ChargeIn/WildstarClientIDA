//----- (00000001400ACD60) ----------------------------------------------------
__int64 __fastcall sub_1400ACD60(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 2ui64);
			if ((int)result >= 0)
			{
				v7 = (int)a3[2];
				if (v7 < 3)
					return ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400ACDF7[v7])(a1, a2, a3 + 3);
				else
					return 2147500037i64;
			}
		}
	}
	return result;
}
// 140C1F178: using guessed type __int64 (__fastcall *funcs_1400ACDF7[3])();

