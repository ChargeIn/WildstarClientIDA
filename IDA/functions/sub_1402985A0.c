//----- (00000001402985A0) ----------------------------------------------------
__int64 __fastcall sub_1402985A0(_QWORD* a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rsi
	__int64 result; // rax
	__int64* v5; // rcx
	__int64 v6; // rcx

	v2 = a1 + 1;
	v3 = 4i64;
	do
	{
		if (*v2)
		{
			result = (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v2 + 8i64))(*v2);
			*v2 = 0i64;
		}
		v2 += 3;
		--v3;
	} while (v3);
	v5 = (__int64*)a1[15];
	if (v5)
	{
		result = a1[16];
		*v5 = result;
	}
	v6 = a1[16];
	if (v6)
	{
		result = a1[15];
		*(_QWORD*)(v6 + 120) = result;
	}
	a1[16] = 0i64;
	a1[15] = 0i64;
	return result;
}

