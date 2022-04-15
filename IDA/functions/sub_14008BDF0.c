//----- (000000014008BDF0) ----------------------------------------------------
__int64 __fastcall sub_14008BDF0(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 32i64;
	*a2 += 32i64 * *a1;
	*a3 += 4i64 * *a1;
	*a2 += 8i64 * *a1;
	result = *a1;
	*a3 += result;
	return result;
}

