//----- (000000014017B4C0) ----------------------------------------------------
__int64 __fastcall sub_14017B4C0(__int64 a1, __int64 a2, __int64 a3, _QWORD* a4, _OWORD* a5, __int64 a6, __int64 a7)
{
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax

	sub_1400C5920(a1, a2, a3, a4, a5, a6, a7);
	*(_QWORD*)a1 = off_140B5DAD0;
	v8 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 1032) = v8;
	*(_QWORD*)v8 = v8;
	*(_QWORD*)(*(_QWORD*)(a1 + 1032) + 8i64) = *(_QWORD*)(a1 + 1032);
	v9 = sub_14018B280(24i64, 0);
	*(_QWORD*)(a1 + 1048) = v9;
	*(_QWORD*)v9 = v9;
	*(_QWORD*)(*(_QWORD*)(a1 + 1048) + 8i64) = *(_QWORD*)(a1 + 1048);
	v10 = sub_14018B280(40i64, 0);
	*(_QWORD*)(a1 + 1064) = v10;
	*(_QWORD*)(a1 + 1072) = 0i64;
	*(_BYTE*)v10 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 1064) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 1064) + 16i64) = *(_QWORD*)(a1 + 1064);
	*(_QWORD*)(*(_QWORD*)(a1 + 1064) + 24i64) = *(_QWORD*)(a1 + 1064);
	sub_1401095E0(a1 + 1096);
	*(_QWORD*)(a1 + 432) |= 0x200000ui64;
	*(_BYTE*)(a1 + 1092) = 0;
	*(_DWORD*)(a1 + 1088) = 1112014848;
	return a1;
}
// 140B5DAD0: using guessed type __int64 (__fastcall *off_140B5DAD0[25])();

