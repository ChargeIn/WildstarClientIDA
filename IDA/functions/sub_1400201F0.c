#include "../winhttp.h"

//----- (00000001400201F0) ----------------------------------------------------
__int64 __fastcall sub_1400201F0(__int64 a1, __int64 a2)
{
	_WORD* v3; // r9
	_WORD* v4; // rdx
	__int64 v6; // r8
	int* v7; // rcx
	unsigned int i; // edx
	int* v9; // rax
	__int64 v10; // rcx
	unsigned int v11; // r13d
	int* v12; // r15
	unsigned int v13; // ecx
	unsigned int v14; // ebx
	__int64 v15; // rax
	int* v16; // rbx
	__int64 v17; // rbp
	__int64 v18; // r12
	unsigned int v19; // esi
	__int64 v20; // rax
	unsigned int v21; // edx
	__int64 v22; // rcx
	int v23; // r8d
	int v24; // r8d
	__int64 v25; // rax
	float v26; // xmm1_4
	int v28; // [rsp+20h] [rbp-58h] BYREF
	int v29; // [rsp+24h] [rbp-54h]
	int v30; // [rsp+28h] [rbp-50h]

	*(_QWORD*)a1 = *(_QWORD*)a2;
	v3 = *(_WORD**)(a2 + 8);
	v4 = (_WORD*)(a1 + 8);
	v6 = 33i64;
	while (v6 != -2147483613 && *v3)
	{
		*v4++ = *v3++;
		if (!--v6)
		{
			--v4;
			break;
		}
	}
	v7 = (int*)(a1 + 100);
	*v4 = 0;
	*(v7 - 6) = *(_DWORD*)(a2 + 16);
	*(v7 - 4) = *(_DWORD*)(a2 + 20);
	*(v7 - 3) = *(_DWORD*)(a2 + 24);
	*(v7 - 2) = *(_DWORD*)(a2 + 28);
	*(v7 - 1) = *(_DWORD*)(a2 + 32);
	*(v7 - 5) = *(_DWORD*)(a2 + 96);
	v7[152] = *(_DWORD*)(a2 + 100);
	v7[153] = *(_DWORD*)(a2 + 104);
	sub_1407E4830(v7, 0i64, 0x120ui64);
	sub_1407E4830((int*)(a1 + 388), 0i64, 0x120ui64);
	for (i = 0; i < *(_DWORD*)(a2 + 36); ++i)
	{
		v9 = (int*)(*(_QWORD*)(a2 + 40) + 16i64 * i);
		v10 = *v9;
		if ((int)v10 < 72)
			*(_DWORD*)(a1 + 4 * v10 + 100) = v9[1];
	}
	v11 = 0;
	if (*(_DWORD*)(a2 + 48))
	{
		while (1)
		{
			v12 = (int*)(*(_QWORD*)(a2 + 56) + 16i64 * v11);
			if (*v12 < 72)
			{
				*(_DWORD*)(a1 + 4i64 * *v12 + 100) = v12[1];
				v13 = v12[3];
				if (v13)
					goto LABEL_31;
				v14 = v12[2];
				if (v14)
					break;
			}
		LABEL_32:
			if (++v11 >= *(_DWORD*)(a2 + 48))
				goto LABEL_33;
		}
		if (qword_140C63840)
		{
			v15 = qword_140C63840(off_140A6AD70, v14, qword_140C63858);
		}
		else
		{
			if (dword_140C63DA4 || (int)sub_14020B680() < 0)
				goto LABEL_32;
			v15 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(qword_140C64BA8, v14);
		}
		if (!v15)
			goto LABEL_32;
		v16 = &v28;
		v17 = 3i64;
		v18 = v15 - (_QWORD)&v28;
		while (1)
		{
			v19 = *(int*)((char*)v16 + v18 + 4);
			if (qword_140C63840)
			{
				v20 = qword_140C63840(off_140A6A168, v19, qword_140C63858);
			}
			else
			{
				if (dword_140C63EAC || (int)sub_1401FCCC0() < 0)
				{
				LABEL_28:
					*v16 = 0;
					goto LABEL_29;
				}
				v20 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(qword_140C63AE0, v19);
			}
			if (!v20)
				goto LABEL_28;
			*v16 = *(_DWORD*)(v20 + 12);
		LABEL_29:
			++v16;
			if (!--v17)
			{
				v13 = v28 & 0x3FF | ((v29 & 0x3FF | ((v30 & 0x3FF | 0xFFFFF800) << 10)) << 10);
			LABEL_31:
				*(_DWORD*)(a1 + 4i64 * *v12 + 388) = v13;
				goto LABEL_32;
			}
		}
	}
LABEL_33:
	v21 = 0;
	*(_DWORD*)(a1 + 716) = *(_DWORD*)(a2 + 108);
	v22 = 0i64;
	do
	{
		if (v21 >= *(_DWORD*)(a2 + 112))
			v23 = 0;
		else
			v23 = *(_DWORD*)(v22 + *(_QWORD*)(a2 + 120));
		*(_DWORD*)(v22 + a1 + 720) = v23;
		if (v21 >= *(_DWORD*)(a2 + 112))
			v24 = 0;
		else
			v24 = *(_DWORD*)(v22 + *(_QWORD*)(a2 + 128));
		++v21;
		*(_DWORD*)(v22 + a1 + 748) = v24;
		v22 += 4i64;
	} while (v21 < 7);
	*(_DWORD*)(a1 + 676) = *(_DWORD*)(a2 + 72);
	*(_DWORD*)(a1 + 680) = *(_DWORD*)(a2 + 64);
	*(_DWORD*)(a1 + 684) = *(_DWORD*)(a2 + 68);
	*(_DWORD*)(a1 + 688) = *(_DWORD*)(a2 + 76);
	*(_DWORD*)(a1 + 692) = *(_DWORD*)(a2 + 80);
	*(_DWORD*)(a1 + 696) = *(_DWORD*)(a2 + 84);
	*(_DWORD*)(a1 + 700) = *(_DWORD*)(a2 + 88);
	*(_DWORD*)(a1 + 704) = *(_DWORD*)(a2 + 92);
	v25 = *(unsigned int*)(a2 + 136);
	if ((_DWORD)v25)
		sub_140020590((_QWORD*)(a1 + 776), *(int**)(a2 + 144), *(_QWORD*)(a2 + 144) + 4 * v25);
	*(_QWORD*)(a1 + 808) = 0i64;
	v26 = *(float*)(a2 + 152);
	if (v26 != 0.0 && a1 != -808)
		sub_1401E82F0((__int64*)(a1 + 808), v26);
	return 0i64;
}
// 14002025A: conditional instruction was optimized away because r8.8!=0
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C63EAC: using guessed type int dword_140C63EAC;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;

