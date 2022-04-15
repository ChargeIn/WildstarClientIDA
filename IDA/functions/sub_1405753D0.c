#include "../winhttp.h"

//----- (00000001405753D0) ----------------------------------------------------
unsigned __int64 __fastcall sub_1405753D0(int* a1, __int64 a2, unsigned __int8(__fastcall* a3)(_DWORD*, _DWORD*))
{
	__int64 v5; // rcx
	unsigned __int64 result; // rax
	int* v7; // rbx
	int v8[4]; // [rsp+30h] [rbp-38h] BYREF

	v5 = a2 - (_QWORD)a1;
	result = v5 & 0xFFFFFFFFFFFFFFF0ui64;
	if ((__int64)(v5 & 0xFFFFFFFFFFFFFFF0ui64) > 16)
	{
		v7 = (int*)(a2 - 16);
		do
		{
			v8[0] = *v7;
			v8[1] = v7[1];
			v8[2] = v7[2];
			v8[3] = v7[3];
			*v7 = *a1;
			v7[1] = a1[1];
			v7[2] = a1[2];
			v7[3] = a1[3];
			sub_140575620((__int64)a1, 0i64, (v5 - 16) >> 4, v8, a3);
			v7 -= 4;
			v5 = (char*)v7 - (char*)a1 + 16;
			result = v5 & 0xFFFFFFFFFFFFFFF0ui64;
		} while ((__int64)(v5 & 0xFFFFFFFFFFFFFFF0ui64) > 16);
	}
	return result;
}

