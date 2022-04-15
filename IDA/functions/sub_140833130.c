//----- (0000000140833130) ----------------------------------------------------
__int64 __fastcall sub_140833130(unsigned int a1, __int64 a2)
{
	__int64 v2; // r9
	unsigned int* v3; // r8
	__int64 result; // rax
	__int64* v5; // rcx

	if (a1 < 0x400)
		a1 = 1024;
	v2 = dword_140C61D00[6 * ((unsigned __int64)(a1 - 1) >> 10)];
	v3 = &dword_140C61D00[6 * ((unsigned __int64)(a1 - 1) >> 10)];
	if ((unsigned int)v2 >= 2)
		return sub_140881720(dword_140C10F28, a2);
	result = (unsigned int)(v2 + 1);
	v5 = (__int64*)&v3[2 * v2 + 2];
	*v3 = result;
	if (!v5)
		return sub_140881720(dword_140C10F28, a2);
	*v5 = a2;
	return result;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C61D00: using guessed type unsigned int dword_140C61D00[146];

