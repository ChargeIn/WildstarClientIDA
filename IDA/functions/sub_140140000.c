//----- (0000000140140000) ----------------------------------------------------
__int64 __fastcall sub_140140000(__int64 a1, __int64 a2, int* a3, float a4)
{
	__int64 v5; // rcx
	int* v8; // rax

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	v5 = a1 + 24;
	*(_QWORD*)(v5 - 24) = off_140B57F58;
	sub_1401A72E0(v5);
	*(_QWORD*)(a1 + 664) = 0i64;
	sub_14013FD70(a1 + 704);
	v8 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 768) = v8;
	*(_QWORD*)v8 = v8;
	*(_QWORD*)(*(_QWORD*)(a1 + 768) + 8i64) = *(_QWORD*)(a1 + 768);
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	sub_1400523E0((__int64*)(a1 + 784));
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_DWORD*)(a1 + 776) = 0;
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_BYTE*)(a1 + 826) = 0;
	sub_1400ED880(a2, (__int64*)(a1 + 16));
	*(_DWORD*)(a1 + 672) = 1134559232;
	sub_140140280(a1);
	*(float*)(a1 + 672) = a4;
	sub_140140F70(a1, a3);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B57F58: using guessed type __int64 (__fastcall *off_140B57F58[14])();

