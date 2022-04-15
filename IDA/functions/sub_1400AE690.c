//----- (00000001400AE690) ----------------------------------------------------
__int64 __fastcall sub_1400AE690(unsigned int* a1, _QWORD* a2, _QWORD* a3)
{
	__int64 result; // rax

	*a2 += 10i64;
	*a2 += 32i64 * *a1;
	*a3 += 4i64 * *a1;
	*a2 += 48i64 * *a1;
	result = *a1;
	*a3 += 6 * result;
	*a2 += 35i64;
	return result;
}

