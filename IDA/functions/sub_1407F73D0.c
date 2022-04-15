#include "../winhttp.h"

//----- (00000001407F73D0) ----------------------------------------------------
__int64 __fastcall sub_1407F73D0(int a1, LARGE_INTEGER a2)
{
	__int64 v3; // rdi
	LARGE_INTEGER v5; // r15
	LARGE_INTEGER v6; // rax
	__int64 v7; // rbx
	HANDLE ProcessHeap; // rax
	_BYTE* v9; // rbp
	int v11; // r14d
	unsigned int v12; // r8d
	int v13; // eax
	HANDLE v14; // rax
	void* v15; // rax
	int v16; // eax
	char* v17; // rbx

	v3 = 0i64;
	v5 = sub_1407F1094(a1, 0i64, 1u);
	if (v5.QuadPart == -1)
		return *(unsigned int*)sub_1407DE1B0();
	v6 = sub_1407F1094(a1, 0i64, 2u);
	if (v6.QuadPart == -1)
		return *(unsigned int*)sub_1407DE1B0();
	v7 = a2.QuadPart - v6.QuadPart;
	if (a2.QuadPart - v6.QuadPart > 0)
	{
		ProcessHeap = GetProcessHeap();
		v9 = HeapAlloc(ProcessHeap, 8u, 0x1000ui64);
		if (!v9)
		{
			*(_DWORD*)sub_1407DE1B0() = 12;
			return *(unsigned int*)sub_1407DE1B0();
		}
		v11 = sub_1407F7F18(a1, 0x8000);
		while (1)
		{
			v12 = v7;
			if (v7 >= 4096)
				v12 = 4096;
			v13 = sub_1407EF02C(a1, v9, v12);
			if (v13 == -1)
				break;
			v7 -= v13;
			if (v7 <= 0)
				goto LABEL_16;
		}
		if (*(_DWORD*)sub_1407DE140() == 5)
			*(_DWORD*)sub_1407DE1B0() = 13;
		v3 = -1i64;
	LABEL_16:
		sub_1407F7F18(a1, v11);
		v14 = GetProcessHeap();
		HeapFree(v14, 0, v9);
		goto LABEL_21;
	}
	if (a2.QuadPart - v6.QuadPart < 0)
	{
		if (sub_1407F1094(a1, a2, 0) == -1i64)
			return *(unsigned int*)sub_1407DE1B0();
		v15 = (void*)sub_1407F55A4(a1);
		v16 = -SetEndOfFile(v15);
		v3 = (v16 != 0) - 1i64;
		if (!v16)
		{
			*(_DWORD*)sub_1407DE1B0() = 13;
			v17 = sub_1407DE140();
			*(_DWORD*)v17 = GetLastError();
		LABEL_21:
			if (v3 == -1)
				return *(unsigned int*)sub_1407DE1B0();
		}
	}
	if (sub_1407F1094(a1, v5, 0) == -1i64)
		return *(unsigned int*)sub_1407DE1B0();
	return 0i64;
}

