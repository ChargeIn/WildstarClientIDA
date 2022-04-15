#include "../winhttp.h"

//----- (00000001408863A0) ----------------------------------------------------
__int64 __fastcall sub_1408863A0(__int64 a1)
{
	__int64 v1; // rax
	__int64 v3; // r9
	__int64* v4; // rcx
	__int64 v5; // r10
	unsigned __int64 v6; // rdx
	__int64 v7; // r11
	int v8; // edx
	__int64 result; // rax

	v1 = *(_QWORD*)(a1 + 200);
	*(_DWORD*)(v1 + 20) &= 0xFFFFFFFA;
	*(_DWORD*)(v1 + 20) |= 2u;
	v3 = *(_QWORD*)(a1 + 200);
	v4 = *(__int64**)(v3 + 8);
	v5 = *(unsigned int*)(v3 + 16);
	v6 = *(unsigned int*)(a1 + 148);
	v7 = *v4;
	if (*v4 + v5 >= v6 || v7 + (unsigned __int64)*((unsigned int*)v4 + 6) <= v6)
		v8 = *((_DWORD*)v4 + 6);
	else
		v8 = v6 - v7;
	*(_DWORD*)(a1 + 156) -= v8 - v5;
	result = *(_QWORD*)(v3 + 8);
	*(_DWORD*)(v3 + 16) = *(_DWORD*)(result + 24);
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_BYTE*)(a1 + 208) = 1;
	return result;
}

