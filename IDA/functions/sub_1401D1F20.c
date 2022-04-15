//----- (00000001401D1F20) ----------------------------------------------------
__int64 __fastcall sub_1401D1F20(
	__int64 a1,
	__int64 a2,
	__int64 a3,
	int a4,
	_QWORD* a5,
	void(__fastcall*** a6)(_QWORD))
{
	__int64 v7; // rax
	int v8; // ecx
	unsigned int v9; // eax
	__int64 result; // rax

	sub_1401D80D0(a1, a2, a3, a4);
	*(_QWORD*)a1 = off_140B5FB00;
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
	v8 = 262128;
	*(_QWORD*)(a1 + 552) = *(_QWORD*)(a1 + 704);
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_QWORD*)(a1 + 800) = sub_1401C3610;
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_QWORD*)(a1 + 808) = sub_14002D9C0;
	v9 = *(_DWORD*)(a1 + 712);
	*(_QWORD*)(a1 + 840) = 0i64;
	*(_QWORD*)(a1 + 856) = 0i64;
	if (v9 < 0x3FFF0)
		v8 = v9;
	result = a1;
	*(_DWORD*)(a1 + 848) = v8;
	return result;
}
// 140B5FB00: using guessed type __int64 (__fastcall *off_140B5FB00[10])();

