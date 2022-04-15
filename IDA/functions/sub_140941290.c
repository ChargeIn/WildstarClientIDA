//----- (0000000140941290) ----------------------------------------------------
__int64 sub_140941290()
{
	__int128 v0; // xmm0
	__int64 v1; // rcx
	__int128* v2; // rax

	v0 = xmmword_140B7AD50;
	v1 = 5i64;
	qword_140C46C10 = 0i64;
	dword_140C46C18 = 0;
	qword_140C46C20 = 0i64;
	xmmword_140C46C00 = xmmword_140B7AD50;
	v2 = xmmword_140C46B90;
	while (1)
	{
		*v2++ = v0;
		if (!--v1)
			break;
		v0 = xmmword_140C46C00;
	}
	return sub_1407DD89C(sub_140951410);
}
// 140B7AD50: using guessed type __int128 xmmword_140B7AD50;
// 140C46B90: using guessed type _OWORD xmmword_140C46B90[7];
// 140C46C00: using guessed type __int128 xmmword_140C46C00;
// 140C46C10: using guessed type __int64 qword_140C46C10;
// 140C46C18: using guessed type int dword_140C46C18;
// 140C46C20: using guessed type __int64 qword_140C46C20;

