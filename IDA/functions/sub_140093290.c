//----- (0000000140093290) ----------------------------------------------------
__int64 __fastcall sub_140093290(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	unsigned __int64 v5; // rdi
	_DWORD* v6; // rbx

	if (!a3)
		return 2147500037i64;
	v5 = 0i64;
	v6 = (_DWORD*)(a3 + 8);
	while (v6 != (_DWORD*)8)
	{
		result = sub_14006C090(a1, v6 - 2, 0x20ui64);
		if ((int)result >= 0)
		{
			result = sub_14006C090(a1, v6 - 1, 0x20ui64);
			if ((int)result >= 0)
			{
				result = sub_14006C090(a1, v6, 0x20ui64);
				if ((int)result >= 0)
				{
					result = sub_14006C090(a1, v6 + 1, 0x20ui64);
					if ((int)result >= 0)
					{
						++v5;
						v6 += 4;
						if (v5 < 2)
							continue;
					}
				}
			}
		}
		return result;
	}
	return 2147500037i64;
}

