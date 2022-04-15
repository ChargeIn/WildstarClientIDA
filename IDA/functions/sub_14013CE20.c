#include "../winhttp.h"

//----- (000000014013CE20) ----------------------------------------------------
int* __fastcall sub_14013CE20(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v5; // rdi
	int* v6; // rbx
	__int64 v7; // r14
	unsigned __int16* v8; // r15
	int* v9; // rax
	int* v10; // rdi
	__int64 v11; // r8
	int* v12; // rdx
	__int64 v14; // [rsp+20h] [rbp-68h] BYREF
	__int64 v15; // [rsp+28h] [rbp-60h]
	__int64 v16; // [rsp+30h] [rbp-58h]
	__int64 v17; // [rsp+38h] [rbp-50h]
	__int64 v18; // [rsp+40h] [rbp-48h] BYREF
	__int64 v19; // [rsp+48h] [rbp-40h]
	__int64 v20; // [rsp+50h] [rbp-38h]
	__int64 v21; // [rsp+58h] [rbp-30h]
	int* v22; // [rsp+90h] [rbp+8h] BYREF
	int* v23; // [rsp+A0h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v5)
	{
		v7 = *(_QWORD*)(a2 + 16);
		v8 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_1400454D0(*((_QWORD*)v5 + 5), *((_QWORD*)v5 + 6), v8, v7) < 0)
			{
				v5 = (int*)*((_QWORD*)v5 + 3);
			}
			else
			{
				v6 = v5;
				v5 = (int*)*((_QWORD*)v5 + 2);
			}
		} while (v5);
	}
	if (v6 == (int*)v2
		|| (int)sub_1400454D0(
			*(_QWORD*)(a2 + 8),
			*(_QWORD*)(a2 + 16),
			*((unsigned __int16**)v6 + 5),
			*((_QWORD*)v6 + 6)) < 0)
	{
		v9 = sub_14018B280(16i64, 0);
		v10 = v9;
		if (v9)
			*(_WORD*)v9 = 0;
		v11 = *(_QWORD*)(a2 + 16);
		v12 = *(int**)(a2 + 8);
		v15 = 0i64;
		v16 = 0i64;
		v17 = 0i64;
		sub_14001C1B0(&v14, v12, v11);
		v19 = 0i64;
		v20 = 0i64;
		v21 = 0i64;
		sub_14001C1B0(&v18, v10, (__int64)v10);
		v22 = v6;
		sub_14013D150(a1, &v23, (__int64*)&v22, (__int64)&v14);
		v6 = v23;
		if (v19)
			sub_14018B900(v19, 0);
		if (v15)
			sub_14018B900(v15, 0);
		if (v10)
			sub_14018B900((__int64)v10, 0);
	}
	return v6 + 16;
}

