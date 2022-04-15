//----- (0000000140042370) ----------------------------------------------------
__int64 __fastcall sub_140042370(__int64 a1)
{
	int* v2; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	*(_DWORD*)(a1 + 56) = 0;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = off_140B558C0;
	*(_DWORD*)(a1 + 40) = 0;
	v2 = sub_14018B280(64i64, 0);
	*(_QWORD*)(a1 + 120) = 0i64;
	qword_140C63620 = a1;
	*(_QWORD*)(a1 + 112) = v2;
	*(_BYTE*)v2 = 0;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 8i64) = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 16i64) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(*(_QWORD*)(a1 + 112) + 24i64) = *(_QWORD*)(a1 + 112);
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_BYTE*)(a1 + 96) = 1;
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B558C0: using guessed type __int64 (__fastcall *off_140B558C0[9])();
// 140C63620: using guessed type __int64 qword_140C63620;

