//----- (000000014001C590) ----------------------------------------------------
__int64 __fastcall sub_14001C590(__int64 a1)
{
	__int64 v1; // rdx
	__int64 v2; // r8
	__int64 result; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = off_140B552F0;
	*(_DWORD*)(a1 + 40) = 0;
	sub_140001EB0(a1 + 72);
	*(_QWORD*)(v1 + 560) = v2;
	*(_QWORD*)(v1 + 568) = v2;
	*(_QWORD*)(v1 + 576) = v2;
	*(_QWORD*)(v1 + 584) = v2;
	result = v1;
	*(_DWORD*)(v1 + 592) = 6;
	*(_DWORD*)(v1 + 600) = -1;
	*(_QWORD*)(v1 + 608) = v2;
	return result;
}
// 14001C5D9: variable 'v2' is possibly undefined
// 14001C5D9: variable 'v1' is possibly undefined
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B552F0: using guessed type __int64 (__fastcall *off_140B552F0[9])();

