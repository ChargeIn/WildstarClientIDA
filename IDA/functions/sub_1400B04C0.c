//----- (00000001400B04C0) ----------------------------------------------------
__int64 __fastcall sub_1400B04C0(__int64 a1, _QWORD* a2, _DWORD* a3)
{
	__int64 result; // rax
	unsigned int v4; // ebx
	unsigned __int64 v8; // r9

	*a2 += 64i64;
	result = *(unsigned int*)(a1 + 4);
	v4 = 0;
	*(_QWORD*)a3 += 72 * result;
	if (*(_DWORD*)(a1 + 4))
	{
		do
		{
			result = *(_QWORD*)(a1 + 8);
			*a2 += 5i64;
			v8 = *(int*)(result + 72i64 * v4);
			if (v8 < 0x1E)
				result = ((__int64(__fastcall*)(__int64, __int64, _DWORD*))funcs_1400B011A[v8])(
					result + 8 * (9i64 * v4 + 1),
					(__int64)a2,
					a3);
			else
				*a2 = 0i64;
			++v4;
		} while (v4 < *(_DWORD*)(a1 + 4));
	}
	return result;
}
// 140C1EE90: using guessed type __int64 (__fastcall *funcs_1400B011A[96])();

