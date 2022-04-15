//----- (000000014007E180) ----------------------------------------------------
unsigned __int64 __fastcall sub_14007E180(__int64 a1, unsigned __int64* a2, _QWORD* a3)
{
	unsigned __int64 v3; // r9
	unsigned int* v4; // rax
	__int64 v5; // rcx
	unsigned __int64 result; // rax

	*a2 += 5i64;
	v3 = (*a2 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
	if (v3 != *a2)
		++* a3;
	*a2 = v3;
	v4 = *(unsigned int**)(a1 + 8);
	if (v4)
	{
		v5 = *v4;
		result = v3 + 8 * v5;
		*a2 = result;
		*a3 += v5;
	}
	else
	{
		result = v3 + 32;
		*a2 = v3 + 32;
		*a3 += 4i64;
	}
	return result;
}

