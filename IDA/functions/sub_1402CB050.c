//----- (00000001402CB050) ----------------------------------------------------
__int64 __fastcall sub_1402CB050(__int64 a1)
{
	__int64 v1; // r8
	_QWORD* v2; // r8
	__int64 v3; // rax

	v1 = qword_140C657F0;
	*(_QWORD*)a1 = off_140B628D0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 256) = 0i64;
	*(_QWORD*)(a1 + 248) = 0i64;
	*(_QWORD*)(a1 + 272) = 0i64;
	*(_QWORD*)(a1 + 264) = 0i64;
	*(_QWORD*)(a1 + 288) = 0i64;
	*(_QWORD*)(a1 + 296) = 0i64;
	*(_QWORD*)(a1 + 304) = 0i64;
	*(_QWORD*)(a1 + 320) = 0i64;
	*(_QWORD*)(a1 + 328) = 0i64;
	*(_QWORD*)(a1 + 336) = 0i64;
	*(_QWORD*)(a1 + 352) = 0i64;
	*(_QWORD*)(a1 + 344) = 0i64;
	*(_QWORD*)(a1 + 360) = -1i64;
	*(_QWORD*)(a1 + 368) = 0i64;
	*(_QWORD*)(a1 + 392) = 0i64;
	*(_QWORD*)(a1 + 384) = 0i64;
	*(_QWORD*)(a1 + 400) = -1i64;
	*(_QWORD*)(a1 + 408) = 0i64;
	*(_QWORD*)(a1 + 488) = 0i64;
	*(_QWORD*)(a1 + 496) = 0i64;
	*(_QWORD*)(a1 + 504) = 0i64;
	*(_QWORD*)(a1 + 512) = 0i64;
	*(_QWORD*)(a1 + 520) = 0i64;
	*(_QWORD*)(a1 + 528) = 0i64;
	v2 = (_QWORD*)(v1 + 40);
	*(_DWORD*)(a1 + 8) = 1;
	*(_DWORD*)(a1 + 240) = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	if (!*(_QWORD*)(a1 + 504))
	{
		*(_QWORD*)(a1 + 504) = v2;
		*(_QWORD*)(a1 + 512) = *v2;
		*v2 = a1;
		v3 = *(_QWORD*)(a1 + 512);
		if (v3)
			*(_QWORD*)(v3 + 504) = a1 + 512;
	}
	return a1;
}
// 140B628D0: using guessed type __int64 (__fastcall *off_140B628D0[55])();
// 140C657F0: using guessed type __int64 qword_140C657F0;

