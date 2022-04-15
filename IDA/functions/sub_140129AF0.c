#include "../winhttp.h"

//----- (0000000140129AF0) ----------------------------------------------------
__int64 __fastcall sub_140129AF0(__int64 a1, __m128i* a2)
{
	int* v4; // rax
	__int64 i; // rax

	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)a1 = off_140B57C40;
	sub_1401A72E0(a1 + 16);
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 688) = 0i64;
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_DWORD*)(a1 + 672) = 0;
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_QWORD*)(a1 + 728) = 0i64;
	*(_QWORD*)(a1 + 736) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 720) = v4;
	*(_QWORD*)(a1 + 728) = v4;
	*(_QWORD*)(a1 + 736) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_DWORD*)(a1 + 760) = 1;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_DWORD*)(a1 + 776) = -2147483638;
	*(_QWORD*)(a1 + 800) = 0i64;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_QWORD*)(a1 + 824) = 0i64;
	*(_QWORD*)(a1 + 832) = 0i64;
	*(_DWORD*)(a1 + 784) = 1414420037;
	*(_DWORD*)(a1 + 852) = 0;
	*(_QWORD*)(a1 + 864) = 0i64;
	*(_QWORD*)(a1 + 856) = 0i64;
	if (a2)
	{
		for (i = 0i64; a2->m128i_i16[i]; ++i)
			;
		sub_14001C480(a1 + 712, a2->m128i_i32, (int*)((char*)a2->m128i_i32 + 2 * i));
		sub_140129F70(a1, a2);
	}
	*(_QWORD*)(a1 + 656) = 0i64;
	return a1;
}
// 140B57C40: using guessed type __int64 (__fastcall *off_140B57C40[29])();

