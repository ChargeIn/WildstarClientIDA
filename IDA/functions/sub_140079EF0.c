//----- (0000000140079EF0) ----------------------------------------------------
unsigned __int64 __fastcall sub_140079EF0(unsigned int** a1, unsigned __int64* a2, _QWORD* a3)
{
	unsigned __int64 v3; // rax
	unsigned int* v4; // rcx
	__int64 v5; // rcx
	unsigned __int64 result; // rax

	v3 = (*a2 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
	if (v3 != *a2)
		++* a3;
	*a2 = v3;
	v4 = *a1;
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
		*a2 = result;
		*a3 += 4i64;
	}
	return result;
}

