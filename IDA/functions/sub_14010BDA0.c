#include "../winhttp.h"

//----- (000000014010BDA0) ----------------------------------------------------
__int64 __fastcall sub_14010BDA0(__int64 a1, int* a2)
{
	int* v4; // rax
	int* v5; // rax
	int* v6; // rdx
	__int64 v7; // rax

	*(_QWORD*)a1 = 0i64;
	*(_BYTE*)(a1 + 8) = 0;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	v4 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 24) = v4;
	*(_QWORD*)(a1 + 32) = v4;
	*(_QWORD*)(a1 + 40) = v4 + 4;
	if (v4)
		*(_WORD*)v4 = 0;
	*(_QWORD*)(a1 + 56) = 0i64;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	v5 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 56) = v5;
	*(_QWORD*)(a1 + 64) = v5;
	*(_QWORD*)(a1 + 72) = v5 + 4;
	if (v5)
		*(_WORD*)v5 = 0;
	sub_14010B8D0(a1 + 168);
	sub_14010B8D0(a1 + 408);
	*(_QWORD*)(a1 + 648) = 0i64;
	*(_BYTE*)(a1 + 656) = 0;
	*(_QWORD*)(a1 + 664) = 0i64;
	*(_QWORD*)(a1 + 672) = 0i64;
	*(_QWORD*)(a1 + 680) = 0i64;
	*(_QWORD*)(a1 + 688) = 0i64;
	*(_QWORD*)(a1 + 696) = 0i64;
	*(_QWORD*)(a1 + 704) = 0i64;
	*(_QWORD*)(a1 + 712) = 0i64;
	*(_QWORD*)(a1 + 720) = 0i64;
	*(_BYTE*)(a1 + 728) = 0;
	*(_QWORD*)(a1 + 736) = 0i64;
	*(_QWORD*)(a1 + 744) = 0i64;
	*(_QWORD*)(a1 + 752) = 0i64;
	*(_QWORD*)(a1 + 760) = 0i64;
	*(_QWORD*)(a1 + 768) = 0i64;
	*(_QWORD*)(a1 + 776) = 0i64;
	*(_QWORD*)(a1 + 784) = 0i64;
	*(_QWORD*)(a1 + 792) = 0i64;
	*(_BYTE*)(a1 + 800) = 0;
	*(_QWORD*)(a1 + 808) = 0i64;
	*(_QWORD*)(a1 + 816) = 0i64;
	*(_QWORD*)(a1 + 824) = 0i64;
	*(_QWORD*)(a1 + 832) = 0i64;
	*(_QWORD*)(a1 + 840) = 0i64;
	*(_QWORD*)(a1 + 848) = 0i64;
	*(_QWORD*)(a1 + 856) = 0i64;
	*(_QWORD*)(a1 + 864) = 0i64;
	*(_BYTE*)(a1 + 872) = 0;
	*(_QWORD*)(a1 + 880) = 0i64;
	*(_QWORD*)(a1 + 888) = 0i64;
	*(_QWORD*)(a1 + 896) = 0i64;
	*(_QWORD*)(a1 + 904) = 0i64;
	*(_QWORD*)(a1 + 912) = 0i64;
	*(_QWORD*)(a1 + 920) = 0i64;
	*(_QWORD*)(a1 + 928) = 0i64;
	*(_QWORD*)(a1 + 944) = 0i64;
	*(_QWORD*)(a1 + 936) = 0i64;
	v6 = (int*)&unk_1409D556C;
	v7 = 0i64;
	if (a2)
		v6 = a2;
	*(_BYTE*)(a1 + 992) = 0;
	*(_QWORD*)(a1 + 996) = 0i64;
	*(_QWORD*)(a1 + 1004) = 0i64;
	if (*(_WORD*)v6)
	{
		do
			++v7;
		while (*((_WORD*)v6 + v7));
	}
	sub_14001C480(a1 + 16, v6, (int*)((char*)v6 + 2 * v7));
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 120) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	*(_QWORD*)(a1 + 136) = 0i64;
	*(_QWORD*)(a1 + 952) = 0i64;
	*(_QWORD*)(a1 + 960) = 0i64;
	*(_QWORD*)(a1 + 968) = 0i64;
	*(_QWORD*)(a1 + 984) = 0i64;
	*(_QWORD*)(a1 + 976) = 0i64;
	return a1;
}

