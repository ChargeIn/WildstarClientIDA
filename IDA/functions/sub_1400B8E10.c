#include "../winhttp.h"

//----- (00000001400B8E10) ----------------------------------------------------
int* __fastcall sub_1400B8E10(__int64 a1, __int64 a2)
{
	__int64 v2; // rbp
	int* v4; // rdi
	int* v6; // rbx
	unsigned __int16* v7; // rsi
	int* v8; // rax
	int* v9; // rdi
	__int64 v10; // r8
	int* v11; // rdx
	__int64 v13; // [rsp+20h] [rbp-68h] BYREF
	__int64 v14; // [rsp+28h] [rbp-60h]
	__int64 v15; // [rsp+30h] [rbp-58h]
	__int64 v16; // [rsp+38h] [rbp-50h]
	__int64 v17; // [rsp+40h] [rbp-48h] BYREF
	__int64 v18; // [rsp+48h] [rbp-40h]
	__int64 v19; // [rsp+50h] [rbp-38h]
	__int64 v20; // [rsp+58h] [rbp-30h]
	int* v21; // [rsp+90h] [rbp+8h] BYREF
	int* v22; // [rsp+A0h] [rbp+18h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(int**)(v2 + 8);
	v6 = (int*)v2;
	if (v4)
	{
		v7 = *(unsigned __int16**)(a2 + 8);
		do
		{
			if ((int)sub_14018E2C0(*((_QWORD*)v4 + 5), v7) < 0)
			{
				v4 = (int*)*((_QWORD*)v4 + 3);
			}
			else
			{
				v6 = v4;
				v4 = (int*)*((_QWORD*)v4 + 2);
			}
		} while (v4);
	}
	if (v6 == (int*)v2 || (int)sub_14018E2C0(*(_QWORD*)(a2 + 8), *((unsigned __int16**)v6 + 5)) < 0)
	{
		v8 = sub_14018B280(16i64, 0);
		v9 = v8;
		if (v8)
			*(_WORD*)v8 = 0;
		v10 = *(_QWORD*)(a2 + 16);
		v11 = *(int**)(a2 + 8);
		v14 = 0i64;
		v15 = 0i64;
		v16 = 0i64;
		sub_14001C1B0(&v13, v11, v10);
		v18 = 0i64;
		v19 = 0i64;
		v20 = 0i64;
		sub_14001C1B0(&v17, v9, (__int64)v9);
		v21 = v6;
		sub_1400B9100(a1, &v22, (__int64*)&v21, (__int64)&v13);
		v6 = v22;
		if (v18)
			sub_14018B900(v18, 0);
		if (v14)
			sub_14018B900(v14, 0);
		if (v9)
			sub_14018B900((__int64)v9, 0);
	}
	return v6 + 16;
}

