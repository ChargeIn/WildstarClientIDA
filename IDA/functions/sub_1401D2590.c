#include "../winhttp.h"

//----- (00000001401D2590) ----------------------------------------------------
__int64 __fastcall sub_1401D2590(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	int a4,
	_QWORD* a5,
	void(__fastcall*** a6)(_QWORD))
{
	__int64 v7; // rax
	__int64 v8; // rax
	unsigned int v9; // eax
	int v10; // ecx
	__int64 result; // rax

	sub_1401D80D0(a1, a2, a3, a4);
	*(_QWORD*)a1 = off_140B5FA20;
	*(_QWORD*)(a1 + 696) = *a5;
	*(_QWORD*)(a1 + 704) = a5[1];
	*(_QWORD*)(a1 + 712) = a5[2];
	*(_QWORD*)(a1 + 720) = a5[3];
	*(_QWORD*)(a1 + 728) = a5[4];
	v7 = a5[5];
	*(_QWORD*)(a1 + 744) = a6;
	*(_QWORD*)(a1 + 736) = v7;
	(**a6)(a6);
	*(_QWORD*)(a1 + 560) = *(_QWORD*)(a1 + 696);
	v8 = *(_QWORD*)(a1 + 704);
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 552) = v8;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_DWORD*)(a1 + 848) = 1;
	*(_DWORD*)(a1 + 844) = 0;
	*(_DWORD*)(a1 + 860) = 0;
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_DWORD*)(a1 + 852) = 1;
	*(_QWORD*)(a1 + 888) = 0i64;
	*(_QWORD*)(a1 + 896) = 0i64;
	*(_QWORD*)(a1 + 904) = 0i64;
	*(_QWORD*)(a1 + 912) = 0i64;
	*(_QWORD*)(a1 + 920) = 0i64;
	*(_QWORD*)(a1 + 928) = 0i64;
	v9 = *(_DWORD*)(a1 + 712);
	v10 = 262128;
	*(_QWORD*)(a1 + 936) = 0i64;
	*(_QWORD*)(a1 + 952) = 0i64;
	if (v9 < 0x3FFF0)
		v10 = v9;
	result = a1;
	*(_DWORD*)(a1 + 944) = v10;
	return result;
}
// 140B5FA20: using guessed type __int64 (__fastcall *off_140B5FA20[10])();

