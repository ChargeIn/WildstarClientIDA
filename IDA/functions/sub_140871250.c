#include "../winhttp.h"

//----- (0000000140871250) ----------------------------------------------------
__int16 __fastcall sub_140871250(__int64* a1, __int64 a2, int a3)
{
	__int64 v3; // rbx
	unsigned int v5; // edx
	__int64 v7; // rbx
	char v8; // cl
	__int64 v9; // rdi
	bool v10; // r13
	__int128 v11; // xmm1
	int v12; // r14d
	__int128 v13; // xmm1
	int v14; // ecx
	unsigned __int64 v15; // rcx
	__int64 v16; // rax
	void* v17; // rsp
	unsigned __int8 v18; // bl
	int i; // esi
	int v20; // eax
	int v21; // r10d
	int v22; // r8d
	__int64 v23; // rcx
	__int64 v24; // rax
	__int64 v25; // rax
	__int64 v26; // rcx
	unsigned int v27; // r9d
	unsigned int v28; // r8d
	__int64 v29; // r11
	__int64 v30; // rax
	__int64 v31; // rcx
	__int128 v33[6]; // [rsp+20h] [rbp+0h] BYREF

	v3 = *(_QWORD*)(*(_QWORD*)(a2 + 64) + 16i64);
	v5 = 0;
	if (v3)
		v7 = *(_QWORD*)(v3 + 24);
	else
		v7 = 0i64;
	if ((*(_BYTE*)(v7 + 382) & 0x40) == 0)
	{
		sub_1408605D0(v7);
		v5 = 0;
	}
	v8 = *(_BYTE*)(v7 + 379);
	v9 = *(_QWORD*)(v7 + 496);
	v10 = (v8 & 0xC) == 4 && (v8 & 3) == 1;
	v11 = *(_OWORD*)(a2 + 16);
	v12 = 0;
	v33[0] = *(_OWORD*)a2;
	v33[1] = v11;
	v13 = *(_OWORD*)(a2 + 48);
	v33[2] = *(_OWORD*)(a2 + 32);
	v33[3] = v13;
	v14 = *(unsigned __int16*)(v9 + 52);
	if (*(_WORD*)(v9 + 52))
	{
		do
		{
			++v12;
			v14 &= v14 - 1;
		} while (v14);
	}
	v15 = (unsigned __int64)(v12 * (unsigned int)*((unsigned __int8*)a1 + 24)) << 6;
	v16 = v15 + 15;
	if (v15 + 15 <= v15)
		v16 = 0xFFFFFFFFFFFFFF0i64;
	v17 = alloca(v16 & 0xFFFFFFFFFFFFFFF0ui64);
	if (!v10)
	{
		sub_140870CF0(v9, 0, (__int64)v33);
		v5 = 0;
	}
	v18 = 0;
	for (i = *(_DWORD*)(v9 + 48); v18 < *((_BYTE*)a1 + 24); ++v18)
	{
		v20 = a3;
		v21 = v18;
		if (_bittest(&v20, v18))
		{
			if (v10)
			{
				v22 = v18 * (*(_WORD*)(v9 + 54) & 7);
				if ((*(_WORD*)(v9 + 54) & 7) != 0)
				{
					do
					{
						v23 = v5 + v22;
						v24 = v5++;
						v25 = (v12 * (unsigned int)v18 + v24) << 6;
						v26 = (v23 + 1) << 6;
						*(__int128*)((char*)v33 + v25) = *(_OWORD*)(v26 + v9);
						*(__int128*)((char*)&v33[1] + v25) = *(_OWORD*)(v26 + v9 + 16);
						*(__int128*)((char*)&v33[2] + v25) = *(_OWORD*)(v26 + v9 + 32);
						*(__int128*)((char*)&v33[3] + v25) = *(_OWORD*)(v26 + v9 + 48);
					} while (v5 < (*(_WORD*)(v9 + 54) & 7u));
				}
				v5 = 0;
			}
			v27 = *((unsigned __int8*)a1 + 25);
			v28 = 0;
			if (*((_BYTE*)a1 + 25))
			{
				v29 = *a1;
				v30 = v18 * v27;
				while (*(_DWORD*)(v29 + 24 * v30 + 16) != i)
				{
					++v28;
					v30 = (unsigned int)(v30 + 1);
					if (v28 >= v27)
						goto LABEL_31;
				}
				v31 = *(_QWORD*)(v29 + 24 * v30 + 8);
				if (v31)
				{
					if (!v10)
						v21 = 0;
					sub_140862C40(v31, (__int64)v33, (__int64)&v33[4 * (unsigned __int64)(unsigned int)(v21 * v12)]);
				}
			LABEL_31:
				v5 = 0;
			}
		}
	}
	return sub_140870860(v9);
}

