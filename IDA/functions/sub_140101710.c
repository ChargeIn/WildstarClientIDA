#include "../winhttp.h"

//----- (0000000140101710) ----------------------------------------------------
int* __fastcall sub_140101710(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v2; // rbx
	__int64* v4; // rax
	unsigned int v5; // ebp
	__int64 v6; // rbx
	__int64 v7; // rdi
	__int64 v8; // rcx
	int* v9; // rdi
	int* v10; // rbx
	int* result; // rax

	v1 = *(_QWORD*)(a1 + 64);
	v2 = *(_QWORD*)(a1 + 56);
	v4 = sub_14010AA70(v1, v1, v2);
	sub_14010A3E0((unsigned int*)v4, *(unsigned int**)(a1 + 64));
	v5 = 0;
	*(_QWORD*)(a1 + 64) += 304 * ((v1 - v2) / -304);
	if ((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3)
	{
		v6 = 0i64;
		do
		{
			v7 = *(_QWORD*)(a1 + 88);
			v8 = *(_QWORD*)(v7 + 8 * v6);
			if (v8)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
				*(_QWORD*)(v7 + 8 * v6) = 0i64;
			}
			v6 = ++v5;
		} while (v5 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 96) - *(_QWORD*)(a1 + 88)) >> 3));
	}
	v9 = *(int**)(a1 + 96);
	v10 = *(int**)(a1 + 88);
	result = sub_1407DB590(v10, v9, 0i64);
	*(_QWORD*)(a1 + 96) += -8 * (((char*)v9 - (char*)v10) >> 3);
	*(_DWORD*)(a1 + 112) = 0;
	return result;
}

