//----- (0000000140099650) ----------------------------------------------------
__int64 __fastcall sub_140099650(__int64 a1, __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // rbx
	_DWORD* v7; // rdi

	if (!a3)
		return 2147500037i64;
	result = sub_14006C090(a1, a3, 4ui64);
	if ((int)result >= 0)
	{
		result = sub_14006C090(a1, a3 + 1, 5ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, a3 + 2, 5ui64);
			if ((int)result >= 0)
			{
				v6 = 0i64;
				v7 = a3 + 3;
				do
				{
					result = sub_14006C090(a1, v7, 1ui64);
					if ((int)result < 0)
						break;
					++v6;
					++v7;
				} while (v6 < 0x10);
			}
		}
	}
	return result;
}

