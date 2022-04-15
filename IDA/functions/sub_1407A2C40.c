//----- (00000001407A2C40) ----------------------------------------------------
__int64 __fastcall sub_1407A2C40(__int64 a1, _DWORD* a2)
{
	int* v4; // rax

	*(_QWORD*)a1 = off_140B784D0;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v4 = sub_14018B280(48i64, 0);
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 64) = v4;
	*(_BYTE*)v4 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 16i64) = *(_QWORD*)(a1 + 64);
	*(_QWORD*)(*(_QWORD*)(a1 + 64) + 24i64) = *(_QWORD*)(a1 + 64);
	*(_DWORD*)(a1 + 88) = 1;
	*(_DWORD*)(a1 + 8) = a2[2];
	*(_DWORD*)(a1 + 12) = a2[3];
	*(_DWORD*)(a1 + 16) = a2[4];
	sub_1407A7030((__int64*)(a1 + 24), (__int64)(a2 + 6));
	sub_1407A4640(a1);
	return a1;
}
// 140B784D0: using guessed type __int64 (__fastcall *off_140B784D0[16])();

