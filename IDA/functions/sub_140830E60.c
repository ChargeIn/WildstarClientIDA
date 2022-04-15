//----- (0000000140830E60) ----------------------------------------------------
unsigned __int64 __fastcall sub_140830E60(__int64 a1, int a2)
{
	_DWORD* v2; // rdi
	unsigned __int64 result; // rax
	unsigned __int64 v5; // rcx
	_DWORD* v6; // rsi
	unsigned __int64 i; // rcx

	v2 = *(_DWORD**)a1;
	result = *(_QWORD*)(a1 + 8);
	if (*(_QWORD*)a1 != result)
	{
		do
		{
			if (*v2 == a2)
				break;
			v2 += 3;
		} while (v2 != (_DWORD*)result);
		if (v2 != (_DWORD*)result)
		{
			if ((unsigned __int64)v2 < result - 12)
			{
				v5 = result - 12 - (_QWORD)v2;
				v6 = v2 + 3;
				result = 0xAAAAAAAAAAAAAAABui64 * (v5 - 1);
				for (i = (12 * ((v5 - 1) / 0xC + 1)) >> 2; i; --i)
					*v2++ = *v6++;
			}
			*(_QWORD*)(a1 + 8) -= 12i64;
		}
	}
	return result;
}

