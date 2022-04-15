//----- (00000001400ADFB0) ----------------------------------------------------
__int64 __fastcall sub_1400ADFB0(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 10i64;
	*a2 += 32i64 * *a1;
	result = 4i64 * *a1;
	*a3 += result;
	*a2 += 230i64;
	return result;
}

