//----- (000000014038DA00) ----------------------------------------------------
__int64 __fastcall sub_14038DA00(__int64 a1, __int64 a2)
{
	int v3; // edx
	int v4; // ecx
	int v5; // r8d
	__int64 v6; // rdx
	_QWORD* v7; // rdx
	__int64 v8; // rax

	*(_QWORD*)a1 = off_140B65E90;
	*(_QWORD*)(a1 + 856) = 0i64;
	*(_QWORD*)(a1 + 872) = 0i64;
	*(_QWORD*)(a1 + 880) = 0i64;
	*(_QWORD*)(a1 + 888) = 0i64;
	*(_QWORD*)(a1 + 896) = 0i64;
	*(_QWORD*)(a1 + 904) = 0i64;
	*(_QWORD*)(a1 + 912) = 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_OWORD*)(a1 + 752) = 0i64;
	*(_OWORD*)(a1 + 768) = xmmword_140C798C0;
	*(_OWORD*)(a1 + 784) = xmmword_140C798D0;
	v3 = (int)*(float*)&xmmword_140C784F0;
	v4 = (int)*((float*)&xmmword_140C784E0 + 1);
	v5 = (int)*((float*)&xmmword_140C784F0 + 1);
	*(_DWORD*)(a1 + 832) = (int)*(float*)&xmmword_140C784E0;
	*(_DWORD*)(a1 + 836) = v4;
	*(_DWORD*)(a1 + 840) = v3;
	*(_DWORD*)(a1 + 844) = v5;
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 848) = 0i64;
	v7 = (_QWORD*)(v6 + 5344);
	*(_DWORD*)(a1 + 864) = 1;
	if (!*(_QWORD*)(a1 + 872))
	{
		*(_QWORD*)(a1 + 872) = v7;
		*(_QWORD*)(a1 + 880) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 880);
		if (v8)
			*(_QWORD*)(v8 + 872) = a1 + 880;
	}
	return a1;
}
// 140B65E90: using guessed type __int64 (__fastcall *off_140B65E90[7])();
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

