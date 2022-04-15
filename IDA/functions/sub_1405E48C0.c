#include "../winhttp.h"

//----- (00000001405E48C0) ----------------------------------------------------
__int64 __fastcall sub_1405E48C0(__int64 a1)
{
	__int64 v1; // rbx
	int v3; // eax

	v1 = a1 + 1080;
	*(_QWORD*)(a1 + 8) = 0i64;
	*(_QWORD*)a1 = 0i64;
	*(_QWORD*)(a1 + 1092) = 0i64;
	*(_QWORD*)(a1 + 1100) = 1i64;
	*(_QWORD*)(a1 + 1108) = 0i64;
	*(_QWORD*)(a1 + 1116) = 0i64;
	*(_DWORD*)(a1 + 1124) = 0;
	*(_DWORD*)(a1 + 1104) = 1;
	sub_1405E4BA0(a1);
	*(_DWORD*)(a1 + 544) = 0;
	sub_1407E4830((int*)v1, 0i64, 0x64ui64);
	*(_DWORD*)(v1 + 96) = 1065353216;
	*(_DWORD*)(v1 + 92) = 1065353216;
	*(_DWORD*)(v1 + 88) = 1065353216;
	*(_QWORD*)(v1 + 12) = 0i64;
	*(_QWORD*)(v1 + 20) = 1i64;
	*(_QWORD*)(v1 + 28) = 0i64;
	*(_QWORD*)(v1 + 36) = 0i64;
	*(_DWORD*)(v1 + 44) = 0;
	v3 = dword_140C636A8;
	*(_DWORD*)(v1 + 24) = 1;
	*(_DWORD*)(a1 + 1184) = v3;
	*(_DWORD*)(a1 + 1180) = 0;
	return a1;
}
// 140C636A8: using guessed type int dword_140C636A8;

