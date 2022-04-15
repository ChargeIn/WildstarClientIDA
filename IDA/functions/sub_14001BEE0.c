#include "../winhttp.h"

//----- (000000014001BEE0) ----------------------------------------------------
void __fastcall sub_14001BEE0(__int64 a1, int a2, int a3)
{
	__int64 v3; // r15
	unsigned __int64 v5; // rsi
	int* v6; // rdi
	__int64 v7; // rax
	__int64 v8; // rbp
	int* v9; // r12
	__int64 v10; // rbp
	int* v11; // rdx
	int v12; // eax
	__int64 v13; // rbx
	__int64 v14; // rdi
	__int64 v15; // rbp
	void(__fastcall * v16)(char*, __int64); // r11
	__int64 v17; // r10
	_WORD* v18; // rcx
	unsigned __int64 v19; // rdx
	__int64 v20; // rax
	char v21[8]; // [rsp+20h] [rbp-38h] BYREF
	int* v22; // [rsp+28h] [rbp-30h]
	int* v23; // [rsp+30h] [rbp-28h]
	__int64 v24; // [rsp+38h] [rbp-20h]

	v3 = a3;
	if (a3 < a2)
	{
		v5 = 0i64;
		v6 = 0i64;
		v7 = 32 * (a2 + 1i64);
		v22 = 0i64;
		v23 = 0i64;
		v8 = *(_QWORD*)(v7 + a1 + 16);
		v9 = *(int**)(v7 + a1 + 8);
		v24 = 0i64;
		v10 = (v8 - (__int64)v9) >> 1;
		if ((unsigned __int64)(v10 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v6 = sub_14018B280(2 * (v10 + 1), 0);
			v22 = v6;
			v23 = v6;
			v24 = (__int64)v6 + 2 * v10 + 2;
		}
		sub_1407DB590(v6, v9, 2 * v10);
		v11 = (int*)((char*)v6 + 2 * v10);
		v23 = v11;
		if (v11)
		{
			*(_WORD*)v11 = 0;
			v11 = v23;
		}
		v12 = v3 + 1;
		v13 = a1 + 32 * (v3 + 1);
		if ((unsigned __int64)((int)v3 + 1) < 5)
		{
			v14 = a1 + 32 * (v12 + 1i64);
			v15 = 5i64 - v12;
			do
			{
				if (v13 != v14)
					sub_14001C480(v14, *(int**)(v13 + 8), *(int**)(v13 + 16));
				v14 += 32i64;
				--v15;
			} while (v15);
			v11 = v23;
		}
		v16 = *(void(__fastcall**)(char*, __int64))(a1 + 304);
		v17 = (__int64)v22;
		*(_DWORD*)(a1 + 24) &= (2 << v3) - 1;
		if (!v16)
			goto LABEL_20;
		v18 = *(_WORD**)(v13 + 8);
		v19 = ((__int64)v11 - v17) >> 1;
		if (v19 == (__int64)(*(_QWORD*)(v13 + 16) - (_QWORD)v18) >> 1)
		{
			if (!v19)
				goto LABEL_20;
			v20 = v17 - (_QWORD)v18;
			while (*(_WORD*)((char*)v18 + v20) == *v18)
			{
				++v5;
				++v18;
				if (v5 >= v19)
					goto LABEL_20;
			}
		}
		v16(v21, a1 + 32 * (v3 + 1));
		v17 = (__int64)v22;
	LABEL_20:
		if (v17)
			sub_14018B900(v17, 0);
	}
}
// 14001C07E: conditional instruction was optimized away because eax.4 is in (==1|==FFFFFFFF)
// 14001BEE0: using guessed type char var_38[8];

