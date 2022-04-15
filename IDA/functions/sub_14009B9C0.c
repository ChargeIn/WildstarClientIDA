//----- (000000014009B9C0) ----------------------------------------------------
__int64 __fastcall sub_14009B9C0(unsigned __int8* a1, _QWORD* a2, _QWORD* a3)
{
	unsigned __int8 i; // al
	__int64 result; // rax

	*a2 += 8i64;
	*a3 += 16i64 * *a1;
	for (i = 0; i < *a1; ++i)
		*a2 += 78i64;
	*a2 += 8i64;
	*a2 += (unsigned __int64)a1[16] << 6;
	result = 8i64 * a1[16];
	*a3 += result;
	return result;
}

