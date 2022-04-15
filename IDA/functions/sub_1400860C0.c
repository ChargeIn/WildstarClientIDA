//----- (00000001400860C0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1400860C0(__int64* a1, _QWORD* a2, _DWORD* a3)
{
	__int64 v4; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // edi
	unsigned __int64 result; // rax
	int* v11; // rcx

	v4 = *a1;
	if (v4)
	{
		v7 = -1i64;
		do
			++v7;
		while (*(_WORD*)(v4 + 2 * v7));
	}
	else
	{
		v7 = 0i64;
	}
	*(_QWORD*)a3 += 2 * v7;
	if (v7 <= 0x7F)
		v8 = 16 * v7 + 8;
	else
		v8 = 16 * (v7 + 1);
	v9 = 0;
	*a2 += v8 + 5;
	result = 104i64 * *((unsigned int*)a1 + 2);
	*(_QWORD*)a3 += result;
	if (*((_DWORD*)a1 + 2))
	{
		do
		{
			v11 = (int*)(a1[2] + 104i64 * v9);
			*a2 += 36i64;
			result = *v11;
			if (result < 0xC)
				result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_140085DF6[result])(
					(__int64)(v11 + 2),
					(__int64)a2,
					a3);
			else
				*a2 = 0i64;
			++v9;
		} while (v9 < *((_DWORD*)a1 + 2));
		*a2 += 17i64;
	}
	else
	{
		*a2 += 17i64;
	}
	return result;
}
// 140C1EBD0: using guessed type __int64 (__fastcall *funcs_140085DF6[67])();

