//----- (00000001405163C0) ----------------------------------------------------
__int64 __fastcall sub_1405163C0(__int64 a1, __int64 a2)
{
	int* v3; // rax
	__int64 v4; // rcx
	_QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

	*(_QWORD*)(a1 + 8) = a2;
	*(_QWORD*)a1 = off_140B6B4F0;
	*(_DWORD*)(a1 + 16) = 0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v3 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v3;
	*(_QWORD*)(a1 + 40) = v3;
	*(_QWORD*)(a1 + 48) = v3 + 4;
	if (v3)
		*(_WORD*)v3 = 0;
	sub_1400E2630((__int64)(v3 + 4), v6, L"CRB_Loot", (int*)L"Loot:");
	v4 = *(_QWORD*)(a1 + 32);
	*(_QWORD*)(a1 + 32) = v6[1];
	*(_QWORD*)(a1 + 40) = v6[2];
	*(_QWORD*)(a1 + 48) = v6[3];
	if (v4)
		sub_14018B900(v4, 0);
	return a1;
}
// 140B6B4F0: using guessed type __int64 (__fastcall *off_140B6B4F0[71])();
// 140B6B920: using guessed type wchar_t aCrbLoot[9];
// 140B6B950: using guessed type wchar_t aLoot[6];

