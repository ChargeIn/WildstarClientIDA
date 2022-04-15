#include "../winhttp.h"

//----- (0000000140484D00) ----------------------------------------------------
void __fastcall sub_140484D00(_QWORD* a1, __int64* a2, int* a3)
{
	int* v3; // rbp
	unsigned __int64 v7; // rsi
	__int64 v8; // rbx
	unsigned __int64 v9; // rax
	__int64 v10; // rdx
	unsigned __int64 v11; // rbx
	unsigned __int64 v12; // r12
	unsigned __int64 v13; // r15
	_QWORD* v14; // rax
	unsigned __int64 v15; // r13
	__int64 v16; // rsi
	unsigned __int64 v17; // r11
	unsigned __int64 v18; // r9
	_DWORD* v19; // rcx
	unsigned __int64 v20; // rax
	__int64 v21; // r10
	__int64 v22; // rbx
	__int64 v23; // rdi
	int* v24; // rax
	unsigned __int64 v25[2]; // [rsp+30h] [rbp-58h] BYREF
	unsigned __int64 v26[2]; // [rsp+40h] [rbp-48h] BYREF
	__int64 v27; // [rsp+50h] [rbp-38h]

	v3 = 0i64;
	a2[1] = 0i64;
	v7 = 0i64;
	if (a1[1])
	{
		v8 = 0i64;
		do
		{
			sub_140029250((__int64*)(v8 + *a1), (__int64)sub_1404851B0, 0i64);
			++v7;
			v8 += 24i64;
		} while (v7 < a1[1]);
	}
	v9 = a1[1];
	v25[0] = 0i64;
	v25[1] = v9;
	sub_1401D3110(v26, (__int64(__fastcall*)(unsigned __int64, __int64, __int64))sub_1404851D0, v25, (__int64)a1, 2);
	sub_140003460(a2, a3);
	v10 = v27;
	v11 = 0i64;
	v12 = 1i64;
	v13 = 0i64;
	if (a1[1])
	{
		do
		{
			if (*(_QWORD*)(*a1 + 24i64 * *(_QWORD*)(v10 + 8 * v11) + 8))
				break;
			v14 = *(_QWORD**)(*a1 + 24i64 * *(_QWORD*)(v10 + 8 * v11++) + 16);
			*v14 = 0i64;
		} while (v11 < a1[1]);
		if (v11 < a1[1])
		{
			while (1)
			{
				v15 = a2[1];
				v16 = *a1 + 24i64 * *(_QWORD*)(v10 + 8 * v11);
				if (v12 >= v15)
					goto LABEL_17;
				v17 = *(_QWORD*)(v16 + 8);
				v18 = v17;
				v19 = (_DWORD*)(*a2 + 4 * v12);
				if (v13 < v17)
					v18 = v13;
				v20 = 0i64;
				if (v18)
					break;
			LABEL_15:
				if (v17 != v13)
					goto LABEL_17;
				**(_QWORD**)(v16 + 16) = v12;
			LABEL_18:
				v10 = v27;
				if (++v11 >= a1[1])
					goto LABEL_19;
			}
			v21 = *(_QWORD*)v16 - (_QWORD)v19;
			while (*(_DWORD*)((char*)v19 + v21) == *v19)
			{
				++v20;
				++v19;
				if (v20 >= v18)
					goto LABEL_15;
			}
		LABEL_17:
			v13 = *(_QWORD*)(v16 + 8);
			v12 = a2[1];
			sub_1400291A0(a2, *(int**)v16, v13);
			sub_140003460(a2, a3);
			**(_QWORD**)(v16 + 16) = v15;
			goto LABEL_18;
		}
	}
LABEL_19:
	v22 = a2[1];
	v23 = *a2;
	if (v22)
	{
		if (v23 && (**(unsigned int(__fastcall***)(__int64, __int64))(v23 - 16))(v23 - 16, 4 * v22 + 16))
		{
			*(_QWORD*)(v23 - 8) = v22;
			v3 = (int*)v23;
		}
		else
		{
			v24 = sub_14018B280(4 * v22 + 16, 0);
			if (v24)
			{
				*((_QWORD*)v24 + 1) = v22;
				*(_QWORD*)v24 = off_140B55060;
			}
			else
			{
				v24 = 0i64;
			}
			v3 = v24 + 4;
		}
	}
	if ((int*)*a2 != v3)
	{
		sub_1407DB590(v3, (int*)*a2, 4 * a2[1]);
		if (*a2)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(*a2 - 16) + 8i64))(*a2 - 16);
		*a2 = (__int64)v3;
	}
	if (v26[0] < v26[1])
		sub_14018B900(v27 + 8 * v26[0], 0);
}
// 140484E7C: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 1404851D0: using guessed type __int64 __fastcall sub_1404851D0();
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();

