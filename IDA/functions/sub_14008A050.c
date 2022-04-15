//----- (000000014008A050) ----------------------------------------------------
__int64 __fastcall sub_14008A050(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	*a2 += (unsigned __int64)*a1 << 6;
	result = 8i64 * *a1;
	*a3 += result;
	return result;
}

