//----- (00000001406A0620) ----------------------------------------------------
__int64 __fastcall sub_1406A0620(__int64 a1, __int64 a2)
{
	__int64* v3; // rcx
	struct _FILETIME SystemTimeAsFileTime; // [rsp+30h] [rbp+8h] BYREF

	v3 = (__int64*)(a1 + 120);
	*(v3 - 15) = (__int64)off_140B6FFC0;
	*(v3 - 14) = *(_QWORD*)a2;
	*(v3 - 13) = *(_QWORD*)(a2 + 8);
	*(v3 - 12) = *(_QWORD*)(a2 + 16);
	*(v3 - 11) = *(_QWORD*)(a2 + 24);
	*(v3 - 10) = *(_QWORD*)(a2 + 32);
	*(v3 - 9) = *(_QWORD*)(a2 + 40);
	*(v3 - 8) = *(_QWORD*)(a2 + 48);
	*(v3 - 7) = *(_QWORD*)(a2 + 56);
	*(v3 - 6) = *(_QWORD*)(a2 + 64);
	*(v3 - 5) = *(_QWORD*)(a2 + 72);
	*(v3 - 4) = *(_QWORD*)(a2 + 80);
	*(v3 - 3) = *(_QWORD*)(a2 + 88);
	*(v3 - 2) = *(_QWORD*)(a2 + 96);
	*(v3 - 1) = *(_QWORD*)(a2 + 104);
	sub_1406A2150(v3, *(int**)(a2 + 72), *(unsigned __int8*)(a2 + 68));
	GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
	*(struct _FILETIME*)(a1 + 136) = SystemTimeAsFileTime;
	*(_QWORD*)(a1 + 80) = *(_QWORD*)(a1 + 120);
	return a1;
}
// 140B6FFC0: using guessed type __int64 (__fastcall *off_140B6FFC0[4])();

