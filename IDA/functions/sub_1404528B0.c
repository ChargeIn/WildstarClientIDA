#include "../winhttp.h"

//----- (00000001404528B0) ----------------------------------------------------
__int64 __fastcall sub_1404528B0(__int64 a1, int* a2, int a3)
{
	__int64 v3; // r12
	__int64 v5; // rax
	__int64 v7; // rax
	unsigned int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // r15
	int v11; // esi
	__int64 v12; // r14
	int v13; // ebp
	int v14; // ebx
	unsigned int* v15; // rdi
	__int64 v16; // rax
	__int64 v17; // rax
	int v18; // edx
	int v19; // ecx
	__int64 v21; // [rsp+78h] [rbp+20h] BYREF

	v3 = qword_140C65910;
	v5 = sub_1403AC780(qword_140C65898 + 160, a2);
	if (!v5)
		return 2i64;
	v7 = *(_QWORD*)(v5 + 64);
	if (!v7)
		return 2i64;
	v8 = *(_DWORD*)(v7 + 472);
	if (!v8)
		return 2i64;
	v9 = sub_140201760(v8);
	v10 = v9;
	if (!v9)
		return 2i64;
	v11 = 0;
	v12 = 6i64;
	v13 = 0;
	v14 = 0;
	v15 = (unsigned int*)(v9 + 8);
	do
	{
		if (*v15)
		{
			v16 = sub_140201320(*v15);
			if (v16)
			{
				v17 = sub_1404530F0(v3, *(_DWORD*)(v16 + 24), *(_DWORD*)(v16 + 28));
				if (v17)
				{
					v18 = *(_DWORD*)(v17 + 8);
					++v11;
					if (v18 || *(_DWORD*)(v17 + 4))
						++v13;
					v19 = *(_DWORD*)(v10 + 4);
					if (!v19 && v18)
						++v14;
					if (v19 == 1 && *(_DWORD*)(v17 + 4))
						++v14;
				}
			}
		}
		++v15;
		--v12;
	} while (v12);
	if (!v11)
		return 2i64;
	if (v11 == v13)
	{
		if (v13 == v14 || *(_DWORD*)(v10 + 4) == 1)
			return 0i64;
	}
	else if (v13 && !a3)
	{
		return 3i64;
	}
	v21 = *(_QWORD*)a2;
	sub_1403F4900(qword_140C65898, 0x400u, (__int64)&v21);
	return 4i64;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65910: using guessed type __int64 qword_140C65910;

