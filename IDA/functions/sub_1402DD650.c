#include "../winhttp.h"

//----- (00000001402DD650) ----------------------------------------------------
__int64 __fastcall sub_1402DD650(__int64 a1, int a2)
{
	_DWORD* v3; // r8
	int v4; // ecx
	int v5; // ebx
	int* v6; // rax
	__int64 result; // rax
	char* v8; // rcx

	*(_DWORD*)(a1 + 12) = a2;
	v3 = (_DWORD*)((char*)&unk_140C41340 + 56 * a2);
	v4 = v3[10];
	v5 = v3[11] * v3[7] + v3[6] * v4;
	v6 = sub_14018B280(v3[11] * (v3[9] - v3[7]) + (v3[8] - v3[6]) * v4 - v3[11], 1u);
	*(_QWORD*)(a1 + 24) = v6;
	if (!v6)
		return 2147942414i64;
	v8 = (char*)v6 - v5;
	result = 0i64;
	*(_QWORD*)(a1 + 16) = v8;
	return result;
}

