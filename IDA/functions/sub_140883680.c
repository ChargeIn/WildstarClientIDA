//----- (0000000140883680) ----------------------------------------------------
__int64 __fastcall sub_140883680(__int64 a1, __int64 a2)
{
	__int64 result; // rax

	sub_140888F20(a1);
	*(_QWORD*)a1 = &off_1409A79F0;
	*(_QWORD*)(a1 + 120) = 0i64;
	InitializeCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
	sub_1408895A0(a1 + 168);
	*(_QWORD*)(a1 + 256) = a2;
	*(_QWORD*)(a1 + 280) = 0i64;
	result = a1;
	*(_QWORD*)(a1 + 288) = 0i64;
	return result;
}
// 1409A79F0: using guessed type __int64 (__fastcall *off_1409A79F0)();

