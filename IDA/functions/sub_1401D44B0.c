//----- (00000001401D44B0) ----------------------------------------------------
__int64 __fastcall sub_1401D44B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
	_WORD* v6; // rax
	__int64 v7; // rdx
	__int64 v8; // r8
	__int16 v9; // cx

	*(_QWORD*)a1 = off_140B5FCC0;
	*(_DWORD*)(a1 + 568) = 1;
	v6 = (_WORD*)(a1 + 16);
	*(_QWORD*)(a1 + 8) = a2;
	v7 = 260i64;
	v8 = a3 - (a1 + 16);
	while (v7 != -2147483386)
	{
		v9 = *(_WORD*)((char*)v6 + v8);
		if (!v9)
			break;
		*v6++ = v9;
		if (!--v7)
		{
			--v6;
			break;
		}
	}
	*v6 = 0;
	*(_QWORD*)(a1 + 536) = *(_QWORD*)a4;
	*(_QWORD*)(a1 + 544) = *(_QWORD*)(a4 + 8);
	*(_DWORD*)(a1 + 552) = *(_DWORD*)(a4 + 16);
	*(_QWORD*)(a1 + 560) = a5;
	return a1;
}
// 1401D4507: conditional instruction was optimized away because rdx.8!=0
// 140B5FCC0: using guessed type __int64 (__fastcall *off_140B5FCC0[14])();

