#include "../winhttp.h"

//----- (000000014017B280) ----------------------------------------------------
__int64 __fastcall sub_14017B280(__int64 a1, __int64 a2, int a3, float a4, int a5)
{
	_DWORD* v7; // rax
	__int64 v8; // rax
	__int64 result; // rax
	int v10[6]; // [rsp+20h] [rbp-18h] BYREF

	*(float*)(a1 + 24) = a4;
	*(_QWORD*)a1 = a2;
	*(_DWORD*)(a1 + 8) = a3;
	*(_DWORD*)(a1 + 16) = a5;
	*(_DWORD*)(a1 + 12) = 0;
	*(_DWORD*)(a1 + 20) = 0;
	*(_DWORD*)(a1 + 32) = 0;
	*(_QWORD*)(a1 + 40) = 0i64;
	sub_1401095E0(a1 + 48);
	*(_DWORD*)(a1 + 96) = 0;
	if (a2)
		(**(void(__fastcall***)(__int64))a2)(a2);
	if (*(char*)(a2 + 29) >= 0)
	{
		v7 = sub_1400CB0E0(a2, v10, a2 + 64);
		*(_DWORD*)(a2 + 396) = *v7;
		*(_DWORD*)(a2 + 400) = v7[1];
		*(_DWORD*)(a2 + 404) = v7[2];
		*(_DWORD*)(a2 + 408) = v7[3];
		*(_BYTE*)(a2 + 29) |= 0x80u;
		v8 = a2;
		do
		{
			if (!*(_DWORD*)(v8 + 392))
				break;
			*(_DWORD*)(v8 + 392) = 0;
			v8 = *(_QWORD*)(v8 + 16);
		} while (v8);
	}
	result = a1;
	*(float*)(a1 + 28) = (float)(*(_DWORD*)(a2 + 404) - *(_DWORD*)(a2 + 396));
	return result;
}
// 14017B280: using guessed type int var_18[6];

