//----- (00000001402BC8D0) ----------------------------------------------------
__int64 __fastcall sub_1402BC8D0(__int64 a1, unsigned __int64 a2, unsigned __int64* a3)
{
	unsigned __int64 v3; // r9
	__int64 result; // rax
	_QWORD* v7; // rdi
	__int64 v8; // rcx
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // r8
	unsigned __int16* v11; // rdx

	v3 = *(_QWORD*)(a1 + 40);
	if (a2 == v3)
	{
		*a3 = v3;
		return 0i64;
	}
	else if (a2 <= v3)
	{
		v7 = (_QWORD*)(a1 + 64);
		if (*(_QWORD*)(a1 + 64)
			|| (result = sub_140283D30(
				*(_QWORD*)(a1 + 16),
				*(void(__fastcall****)(_QWORD))(a1 + 24),
				*(int**)(a1 + 32),
				v3,
				*(_DWORD*)(a1 + 56),
				v7),
				(int)result >= 0))
		{
			v8 = *v7;
			v9 = a2 + 1;
			v10 = *(_QWORD*)(*v7 + 40i64);
			if (a2 + 1 < v10)
			{
				v11 = (unsigned __int16*)(*(_QWORD*)(v8 + 64) + 2 * v9);
				do
				{
					if ((*(_BYTE*)(*v11 + *(_QWORD*)(v8 + 72)) & 8) != 0)
						break;
					++v9;
					++v11;
				} while (v9 < v10);
			}
			*a3 = v9;
			return 0i64;
		}
	}
	else
	{
		return 2147942487i64;
	}
	return result;
}

