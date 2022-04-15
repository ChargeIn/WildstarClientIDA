//----- (000000014009A710) ----------------------------------------------------
__int64 __fastcall sub_14009A710(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	unsigned int v6; // edi
	__int64 result; // rax
	unsigned __int64 v8; // r9

	*a2 += 74i64;
	*a2 += 32i64 * *(unsigned int*)(a1 + 12);
	v6 = 0;
	*(_QWORD*)a3 += 4i64 * *(unsigned int*)(a1 + 12);
	*a2 += 32i64;
	result = *(unsigned int*)(a1 + 24);
	*(_QWORD*)a3 += 24 * result;
	if (*(_DWORD*)(a1 + 24))
	{
		do
		{
			result = *(_QWORD*)(a1 + 32);
			*a2 += 3i64;
			v8 = *(int*)(result + 24i64 * v6);
			if (v8 < 7)
				result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_14009A79A[v8])(
					result + 8 * (3i64 * v6 + 1),
					(__int64)a2,
					a3);
			else
				*a2 = 0i64;
			++v6;
		} while (v6 < *(_DWORD*)(a1 + 24));
		*a2 += 75i64;
	}
	else
	{
		*a2 += 75i64;
	}
	return result;
}
// 140C1E9A8: using guessed type __int64 (__fastcall *funcs_14009A79A[68])();

