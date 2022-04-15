#include "../winhttp.h"

//----- (0000000140442220) ----------------------------------------------------
__int64 __fastcall sub_140442220(int* a1, int* a2, __int64 a3)
{
	unsigned int v3; // ebx
	unsigned int v6; // esi
	__int64 v7; // rdi
	unsigned int v8; // ebx
	__int64 v9; // rbx
	__int64 v10; // rbp
	__int64 v11; // rax
	unsigned int v12; // ecx
	unsigned int v13; // eax
	unsigned int v15; // eax
	unsigned int v16; // ecx

	v3 = *a1;
	v6 = 0;
	if (sub_140444550(a3, *a1))
		v7 = sub_1402096E0(v3);
	else
		v7 = 0i64;
	v8 = *a2;
	if (sub_140444550(a3, *a2))
		v9 = sub_1402096E0(v8);
	else
		v9 = 0i64;
	if (!v7)
		return 0i64;
	if (!v9)
		return 0i64;
	v10 = sub_140244280(*(_DWORD*)(v7 + 108));
	v11 = sub_140244280(*(_DWORD*)(v9 + 108));
	if (!v10 || !v11)
		return 0i64;
	v12 = *(_DWORD*)(v10 + 8);
	v13 = *(_DWORD*)(v11 + 8);
	if (v12 > v13)
		return 0xFFFFFFFFi64;
	if (v12 < v13)
		return 1i64;
	v15 = *(_DWORD*)(v7 + 60);
	v16 = *(_DWORD*)(v9 + 60);
	if (v15 > v16)
		return 0xFFFFFFFFi64;
	LOBYTE(v6) = v15 < v16;
	return v6;
}

