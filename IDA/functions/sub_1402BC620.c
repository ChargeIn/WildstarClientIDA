//----- (00000001402BC620) ----------------------------------------------------
__int64 __fastcall sub_1402BC620(__int64 a1, unsigned __int64 a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned __int64 v6; // r9
	_QWORD* v7; // rdi

	if (a2)
	{
		v6 = *(_QWORD*)(a1 + 40);
		if (a2 <= v6)
		{
			v7 = (_QWORD*)(a1 + 64);
			if (*(_QWORD*)(a1 + 64)
				|| (result = sub_140283D30(
					*(_QWORD*)(a1 + 16),
					*(void(__fastcall****)(_QWORD))(a1 + 24),
					*(int**)(a1 + 32),
					v6,
					*(_DWORD*)(a1 + 56),
					v7),
					(int)result >= 0))
			{
				result = 0i64;
				*a3 = *(_DWORD*)(*(_QWORD*)(*v7 + 152i64)
					+ 4i64
					* *(unsigned __int16*)(*(_QWORD*)(*v7 + 80i64)
						+ 2i64 * *(unsigned __int16*)(*(_QWORD*)(*v7 + 64i64) + 2 * a2)));
			}
		}
		else
		{
			return 2147942487i64;
		}
	}
	else
	{
		*a3 = 0;
		return 0i64;
	}
	return result;
}

