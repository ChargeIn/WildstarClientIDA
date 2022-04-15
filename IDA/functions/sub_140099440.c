//----- (0000000140099440) ----------------------------------------------------
__int64 __fastcall sub_140099440(__int64 a1, __int64 a2, int* a3)
{
	__int64 result; // rax
	unsigned __int64 v7; // rax
	unsigned __int64 v8; // rax

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 2ui64);
	if ((int)result >= 0)
	{
		v7 = *a3;
		if (v7 >= 3)
			return 2147500037i64;
		result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400994AC[v7])(a1, a2, a3 + 2);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 8, 2ui64);
			if ((int)result >= 0)
			{
				v8 = a3[8];
				if (v8 >= 3)
					return 2147500037i64;
				result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400994AC[v8])(a1, a2, a3 + 10);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, a3 + 16, 2ui64);
					if ((int)result >= 0)
						return sub_14006C090(a1, a3 + 17, 3ui64);
				}
			}
		}
	}
	return result;
}
// 140C1E990: using guessed type __int64 (__fastcall *funcs_1400994AC[71])();

