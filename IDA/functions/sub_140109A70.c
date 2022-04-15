//----- (0000000140109A70) ----------------------------------------------------
__int64 __fastcall sub_140109A70(__int64* a1, unsigned int* a2, __m128* a3)
{
	__int64 result; // rax

	result = *a1;
	if (*a1)
		return sub_140103CF0(
			(_QWORD*)*a1,
			a2,
			a3,
			0,
			COERCE_INT((float)(*(float*)&dword_140C63664 - *((float*)a1 + 2)) * *((float*)a1 + 3)));
	return result;
}
// 140C63664: using guessed type int dword_140C63664;

