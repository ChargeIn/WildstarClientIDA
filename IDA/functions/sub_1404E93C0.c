//----- (00000001404E93C0) ----------------------------------------------------
__int64 __fastcall sub_1404E93C0(_QWORD* a1)
{
	int v2; // r9d
	int v3; // r8d
	int v4; // r10d
	int v5; // eax
	unsigned int(__fastcall * v6)(int*); // rax
	__int64 v7; // rax
	int v9; // [rsp+38h] [rbp+10h] BYREF

	if (!qword_140C63658)
		sub_140056830(a1, (unsigned __int64*)"AlienFx not loaded.");
	v2 = dword_140C3CB80;
	v3 = 0;
	v4 = *(_DWORD*)qword_140C63750;
	v5 = dword_140C3CB80;
	v9 = 0;
	if (v4 < dword_140C3CB80)
		v5 = v4;
	if (*((_BYTE*)&off_140C3CB70 + v5 + 32) && *(_QWORD*)(qword_140C63658 + 32) && *(_DWORD*)(qword_140C63658 + 44))
	{
		if (v4 < dword_140C3CB80)
			v2 = v4;
		if (*((_BYTE*)&off_140C3CB70 + v2 + 32))
		{
			v6 = *(unsigned int(__fastcall**)(int*))(qword_140C63658 + 96);
			if (!v6 || v6(&v9))
				sub_140056830(a1, (unsigned __int64*)"GetDeviceCount failed to get the device count.");
			v3 = v9;
		}
	}
	v7 = a1[2];
	*(_DWORD*)(v7 + 8) = 3;
	*(double*)v7 = (double)v3;
	a1[2] += 16i64;
	return 1i64;
}
// 140C3CB70: using guessed type __int64 (__fastcall *off_140C3CB70)();
// 140C3CB80: using guessed type int dword_140C3CB80;
// 140C63658: using guessed type __int64 qword_140C63658;
// 140C63750: using guessed type __int64 qword_140C63750;

