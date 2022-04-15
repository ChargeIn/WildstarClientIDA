//----- (0000000140870690) ----------------------------------------------------
__int64 __fastcall sub_140870690(unsigned __int16 a1, int a2, int a3, int a4)
{
	__int16 v4; // si
	int v7; // edx
	unsigned int v8; // eax
	__int64 result; // rax
	__int64 v10; // rdi

	v4 = a2;
	if (a3 != 1 || a4 != 1)
		a1 = 1;
	v7 = 0;
	v8 = a2 & 0xFFFFFFF7;
	if (!v8)
		return 0i64;
	do
	{
		++v7;
		v8 &= v8 - 1;
	} while (v8);
	if (!v7)
		return 0i64;
	result = sub_140881960(dword_140C10F20, ((unsigned int)a1 * v7 + 1) << 6, 0x10u);
	v10 = result;
	if (result)
	{
		sub_1408701F0(result, a1, v4);
		return v10;
	}
	return result;
}
// 140C10F20: using guessed type int dword_140C10F20;

