//----- (00000001400AF140) ----------------------------------------------------
__int64 __fastcall sub_1400AF140(_DWORD* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 8i64;
	*a2 += 32i64 * (unsigned int)*a1;
	*a3 += 4i64 * (unsigned int)*a1;
	result = 0i64;
	*a3 += 2i64 * (unsigned int)*a1;
	if (*a1)
	{
		do
		{
			*a2 += 16i64;
			result = (unsigned int)(result + 1);
		} while ((unsigned int)result < *a1);
	}
	*a2 += 35i64;
	return result;
}

