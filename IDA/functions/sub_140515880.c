//----- (0000000140515880) ----------------------------------------------------
__int64 __fastcall sub_140515880(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rcx
	_QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B6B630;
	*(_DWORD*)(a1 + 16) = 300;
	*(_DWORD*)(a1 + 20) = -1;
	*(_DWORD*)(a1 + 24) = 300;
	*(_DWORD*)(a1 + 28) = -1;
	*(_DWORD*)(a1 + 32) = 300;
	*(_DWORD*)(a1 + 36) = -1;
	*(_DWORD*)(a1 + 40) = 300;
	*(_DWORD*)(a1 + 44) = -1;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v3;
	*(_QWORD*)(a1 + 64) = v3;
	*(_QWORD*)(a1 + 72) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	sub_1400E2630((__int64)(v3 + 4), v6, L"CRB_EldanForge", (int*)L"EldanForge:");
	v4 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = v6[1];
	*(_QWORD*)(a1 + 64) = v6[2];
	*(_QWORD*)(a1 + 72) = v6[3];
	if (v4)
		sub_14018B900(v4, 0);
	return a1;
}
// 140B6B630: using guessed type __int64 (__fastcall *off_140B6B630[31])();
// 140B6B858: using guessed type wchar_t aEldanforge[12];
// 140B6B870: using guessed type wchar_t aCrbEldanforge[15];

