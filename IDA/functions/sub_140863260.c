//----- (0000000140863260) ----------------------------------------------------
__int64 __fastcall sub_140863260(unsigned __int16* a1, __int64 a2, __int64 a3, char a4, __int64 a5)
{
	int v5; // eax
	int v8; // eax
	int v9; // eax
	int v10; // eax
	__int64 result; // rax

	v5 = *(_DWORD*)(a2 + 8);
	if (v5 != *(_DWORD*)(a3 + 8) || a4)
	{
		sub_14087ACF0(a1, a2, a3, a5);
	}
	else
	{
		v8 = v5 - 3;
		if (!v8)
		{
			sub_14087B910((__int64)a1, a2, a3);
			result = *a1;
			*(_WORD*)(a3 + 18) = result;
			return result;
		}
		v9 = v8 - 1;
		if (!v9)
		{
			sub_14087B8E0((__int64)a1, a2, (__int64*)a3);
			result = *a1;
			*(_WORD*)(a3 + 18) = result;
			return result;
		}
		v10 = v9 - 47;
		if (!v10)
		{
			sub_14087B800((__int64)a1, a2, a3);
			result = *a1;
			*(_WORD*)(a3 + 18) = result;
			return result;
		}
		if (v10 == 12)
		{
			sub_14087B6C0((__int64)a1, a2, a3);
			result = *a1;
			*(_WORD*)(a3 + 18) = result;
			return result;
		}
	}
	result = *a1;
	*(_WORD*)(a3 + 18) = result;
	return result;
}

