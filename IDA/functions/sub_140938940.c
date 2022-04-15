//----- (0000000140938940) ----------------------------------------------------
__int64 sub_140938940()
{
	__int128* v0; // rdx
	__int64 v1; // rcx
	int v2; // eax

	v0 = &xmmword_140C67290;
	v1 = 0i64;
	do
	{
		v2 = *(_DWORD*)((char*)&unk_140A14E90 + v1);
		*(_DWORD*)((char*)&xmmword_140C672C0 + v1) = 0;
		v0 = (__int128*)((char*)v0 + 8);
		*(_DWORD*)((char*)&xmmword_140C672B0 + v1) = v2;
		*((_QWORD*)v0 - 1) = 0i64;
		v1 += 4i64;
	} while ((__int64)v0 < (__int64)&xmmword_140C672B0);
	dword_140C672D0 |= 0x300u;
	xmmword_140C672C0 = xmmword_140C784D0;
	xmmword_140C672B0 = 0i64;
	return HIDWORD(xmmword_140C784D0);
}
// 140C67290: using guessed type __int128 xmmword_140C67290;
// 140C672B0: using guessed type __int128 xmmword_140C672B0;
// 140C672C0: using guessed type __int128 xmmword_140C672C0;
// 140C672D0: using guessed type int dword_140C672D0;
// 140C784D0: using guessed type __int128 xmmword_140C784D0;

