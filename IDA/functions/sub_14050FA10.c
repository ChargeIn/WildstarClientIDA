//----- (000000014050FA10) ----------------------------------------------------
__int64 __fastcall sub_14050FA10(__int64 a1)
{
	int v1; // edx
	unsigned __int64 v3; // r8

	v1 = xmmword_140C7DCB0;
	if ((_QWORD)xmmword_140C7DCB0)
	{
		v3 = -1i64;
		do
			++v3;
		while (*(_BYTE*)(xmmword_140C7DCB0 + v3));
		sub_140058710(a1, (unsigned __int64*)xmmword_140C7DCB0, v3);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = xmmword_140C7DCB0;
		*(_QWORD*)(a1 + 16) += 16i64;
		return (unsigned int)(v1 + 1);
	}
}
// 140C7DCB0: using guessed type __int128 xmmword_140C7DCB0;

