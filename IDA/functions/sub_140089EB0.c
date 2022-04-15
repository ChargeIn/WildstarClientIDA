//----- (0000000140089EB0) ----------------------------------------------------
__int64 __fastcall sub_140089EB0(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	*a2 += (unsigned __int64)*a1 << 6;
	result = 8i64 * *a1;
	*a3 += result;
	*a2 += 32i64;
	return result;
}

