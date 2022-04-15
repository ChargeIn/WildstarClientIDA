//----- (000000014013FEB0) ----------------------------------------------------
__int64 __fastcall sub_14013FEB0(__int64 a1, __int64 a2)
{
	__int64 v3; // rcx
	int* v5; // rax
	__int64 v6; // rax
	__int64(__fastcall * **v7)(); // rcx
	bool v8; // zf

	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	v3 = a1 + 24;
	*(_QWORD*)(v3 - 24) = off_140B57F58;
	sub_1401A72E0(v3);
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_DWORD*)(a1 + 672) = 1134559232;
	sub_14013FD70(a1 + 704);
	v5 = sub_14018B280(72i64, 0);
	*(_QWORD*)(a1 + 768) = v5;
	*(_QWORD*)v5 = v5;
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
	v6 = qword_140C63670;
	v7 = off_140C3C518;
	v8 = qword_140C63670 == 0;
	*(_DWORD*)(a1 + 672) = 1134559232;
	if (!v8)
		v7 = (__int64(__fastcall***)())v6;
	qword_140C63670 = (__int64)v7;
	sub_140140280(a1);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B57F58: using guessed type __int64 (__fastcall *off_140B57F58[14])();
// 140C3C518: using guessed type __int64 (__fastcall **off_140C3C518[2])();
// 140C63670: using guessed type __int64 qword_140C63670;

