//----- (0000000140196B30) ----------------------------------------------------
__int64 __fastcall sub_140196B30(_WORD* a1)
{
	const __m128i* v2; // rax
	__int64 v3; // r8
	LPWSTR FilePart; // [rsp+30h] [rbp-448h] BYREF
	WCHAR Filename[264]; // [rsp+40h] [rbp-438h] BYREF
	WCHAR Buffer[264]; // [rsp+250h] [rbp-228h] BYREF

	GetModuleFileNameW(0i64, Filename, 0x104u);
	GetFullPathNameW(Filename, 0x104u, Buffer, &FilePart);
	v2 = sub_1407DD8D8((const __m128i*)FilePart, 0x2Eu);
	if (v2)
		v2->m128i_i16[0] = 0;
	return sub_14001B680(a1, 260i64, v3, (__int64)FilePart);
}
// 140196BA4: variable 'v3' is possibly undefined
// 140196B30: using guessed type WCHAR Buffer[264];

