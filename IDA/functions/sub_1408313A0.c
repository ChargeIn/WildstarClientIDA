//----- (00000001408313A0) ----------------------------------------------------
__int64 sub_1408313A0()
{
	unsigned int v0; // edx
	int v1; // eax

	if (dword_140C10F28 != -1)
		return 1i64;
	v0 = 0x1000000;
	if ((unsigned int)xmmword_140C61C90 > 0x40)
		v0 = xmmword_140C61C90;
	v1 = sub_140881BC0(0i64, v0, 0x40u, 1, 0x10u);
	dword_140C10F28 = v1;
	if (v1 != -1)
	{
		dword_140C10F78 = v1;
		return 1i64;
	}
	return 52i64;
}
// 140C10F28: using guessed type int dword_140C10F28;
// 140C10F78: using guessed type int dword_140C10F78;
// 140C61C90: using guessed type __int128 xmmword_140C61C90;

