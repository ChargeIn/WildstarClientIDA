//----- (0000000140884110) ----------------------------------------------------
__m128 __fastcall sub_140884110(__int64 a1)
{
	__m128 result; // xmm0
	__int128 v2; // xmm2

	v2 = *(unsigned int*)(a1 + 172);
	result = 0i64;
	*(float*)&v2 = (float)(*(float*)&v2
		/ (float)(int)((unsigned int)(*(_DWORD*)(*(_QWORD*)(a1 + 96) + 264i64)
			+ *(_DWORD*)(a1 + 152)
			- *(_DWORD*)(a1 + 168)
			- 1)
			/ *(_DWORD*)(*(_QWORD*)(a1 + 96) + 264i64)))
		- (float)((float)(*(_DWORD*)(*(_QWORD*)(a1 + 96) + 112i64) - *(_DWORD*)(a1 + 88))
			/ *(float*)&dword_140C61FE8);
	if (*(float*)&v2 > 0.0)
		return (__m128)v2;
	return result;
}
// 140C61FE8: using guessed type int dword_140C61FE8;

