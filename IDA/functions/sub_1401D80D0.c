//----- (00000001401D80D0) ----------------------------------------------------
__int64 __fastcall sub_1401D80D0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	_WORD* v5; // rax
	__int64 v6; // rdx
	__int64 v7; // r8
	__int16 v8; // cx

	*(_QWORD*)a1 = off_140B5FDB0;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_QWORD*)(a1 + 672) = 0i64;
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 688) = 0i64;
	*(_DWORD*)(a1 + 544) = a4;
	*(_QWORD*)(a1 + 592) = a1 + 584;
	*(_QWORD*)(a1 + 16) = a2;
	*(_QWORD*)(a1 + 584) = 0i64;
	v5 = (_WORD*)(a1 + 24);
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 568) = 0i64;
	*(_DWORD*)(a1 + 576) = 0;
	v6 = 260i64;
	v7 = a3 - (a1 + 24);
	while (v6 != -2147483386)
	{
		v8 = *(_WORD*)((char*)v5 + v7);
		if (!v8)
			break;
		*v5++ = v8;
		if (!--v6)
		{
			*(v5 - 1) = 0;
			return a1;
		}
	}
	*v5 = 0;
	return a1;
}
// 1401D8171: conditional instruction was optimized away because rdx.8!=0
// 140B5FDB0: using guessed type __int64 (__fastcall *off_140B5FDB0[10])();

