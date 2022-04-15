//----- (000000014086C340) ----------------------------------------------------
__int64 __fastcall sub_14086C340(__int64 a1, int a2, char a3)
{
	__int64 result; // rax

	sub_14087BC10(a1, a2);
	*(_QWORD*)a1 = off_1409A5380;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_DWORD*)(a1 + 448) = 0;
	*(_QWORD*)(a1 + 456) = 0i64;
	*(_QWORD*)(a1 + 464) = 0i64;
	*(_DWORD*)(a1 + 472) = 0;
	*(_DWORD*)(a1 + 480) = 0;
	*(_WORD*)(a1 + 484) = 0;
	*(_BYTE*)(a1 + 478) &= 0xC0u;
	*(_BYTE*)(a1 + 479) = a3 & 7 | 0x90;
	*(_WORD*)(a1 + 480) = 1;
	*(_BYTE*)(a1 + 486) = 0;
	result = a1;
	*(_WORD*)(a1 + 476) = 0;
	return result;
}
// 1409A5380: using guessed type __int64 (__fastcall *off_1409A5380[4])();

