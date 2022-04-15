//----- (000000014038E5B0) ----------------------------------------------------
__int64 __fastcall sub_14038E5B0(__int64 a1, __int64 a2)
{
	int v3; // edx
	int v4; // ecx
	int v5; // r8d
	__int64 v6; // rdx
	_QWORD* v7; // rdx
	__int64 v8; // rax

	*(_QWORD*)a1 = off_140B65ED0;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 440) = 0i64;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_QWORD*)(a1 + 472) = 0i64;
	*(_QWORD*)(a1 + 480) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_QWORD*)(a1 + 16) = a2;
	*(_DWORD*)(a1 + 8) = 1;
	*(_OWORD*)(a1 + 352) = xmmword_140C798C0;
	*(_OWORD*)(a1 + 368) = xmmword_140C798D0;
	v3 = (int)*(float*)&xmmword_140C784F0;
	v4 = (int)*((float*)&xmmword_140C784E0 + 1);
	v5 = (int)*((float*)&xmmword_140C784F0 + 1);
	*(_DWORD*)(a1 + 416) = (int)*(float*)&xmmword_140C784E0;
	*(_DWORD*)(a1 + 420) = v4;
	*(_DWORD*)(a1 + 424) = v3;
	*(_DWORD*)(a1 + 428) = v5;
	v6 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(a1 + 432) = 0i64;
	v7 = (_QWORD*)(v6 + 5368);
	*(_DWORD*)(a1 + 448) = 1;
	if (!*(_QWORD*)(a1 + 456))
	{
		*(_QWORD*)(a1 + 456) = v7;
		*(_QWORD*)(a1 + 464) = *v7;
		*v7 = a1;
		v8 = *(_QWORD*)(a1 + 464);
		if (v8)
			*(_QWORD*)(v8 + 456) = a1 + 464;
	}
	return a1;
}
// 140B65ED0: using guessed type __int64 (__fastcall *off_140B65ED0[41])();
// 140C784E0: using guessed type __int128 xmmword_140C784E0;
// 140C784F0: using guessed type __int128 xmmword_140C784F0;
// 140C798C0: using guessed type __int128 xmmword_140C798C0;
// 140C798D0: using guessed type __int128 xmmword_140C798D0;

