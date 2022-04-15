#include "../winhttp.h"

//----- (00000001408367F0) ----------------------------------------------------
void __fastcall sub_1408367F0(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64* v6; // rbx
	__int64* v7; // rdi
	__int64 v8; // r15
	unsigned __int64 v9; // rax
	unsigned __int64 v10; // r12
	int v11; // r13d
	__int64 v12; // r14
	__int64 v13; // rcx
	__int64 v14; // rbp
	unsigned __int64 i; // rdx
	_QWORD* v16; // rcx

	v4 = (__int64)(*(_QWORD*)(a1 + 32) - *(_QWORD*)(a1 + 24)) >> 4;
	if ((_DWORD)v4)
	{
		v5 = sub_1408819F0(dword_140C10F20, 8i64 * (unsigned int)v4);
		*(_QWORD*)a2 = v5;
		*(_QWORD*)(a2 + 8) = v5;
		if (v5)
			*(_DWORD*)(a2 + 16) = v4;
	}
	v6 = *(__int64**)(a1 + 24);
	v7 = *(__int64**)(a1 + 32);
	if (v6 != v7)
	{
		while (1)
		{
			v8 = *v6;
			if (*v6)
			{
				v9 = *(unsigned int*)(a2 + 16);
				v10 = (unsigned int)((__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >> 3);
				if (v10 < v9)
					goto LABEL_13;
				v11 = v9 + 8;
				v12 = sub_1408819F0(dword_140C10F20, 8i64 * (unsigned int)(v9 + 8));
				if (v12)
					break;
			}
		LABEL_16:
			v6 += 2;
			if (v6 == v7)
				return;
		}
		v13 = (__int64)(*(_QWORD*)(a2 + 8) - *(_QWORD*)a2) >> 3;
		v14 = (unsigned int)v13;
		if (*(_QWORD*)a2)
		{
			for (i = 0i64; i < (unsigned int)v13; *(_QWORD*)(v12 + 8 * i - 8) = *(_QWORD*)(*(_QWORD*)a2 + 8 * i - 8))
				++i;
			sub_140881720(dword_140C10F20, *(_QWORD*)a2);
		}
		*(_QWORD*)a2 = v12;
		*(_DWORD*)(a2 + 16) = v11;
		*(_QWORD*)(a2 + 8) = v12 + 8 * v14;
	LABEL_13:
		if (v10 < *(unsigned int*)(a2 + 16))
		{
			v16 = *(_QWORD**)(a2 + 8);
			*(_QWORD*)(a2 + 8) = v16 + 1;
			if (v16)
				*v16 = v8;
		}
		goto LABEL_16;
	}
}
// 140C10F20: using guessed type int dword_140C10F20;

