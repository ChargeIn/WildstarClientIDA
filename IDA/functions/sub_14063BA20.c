#include "../winhttp.h"

//----- (000000014063BA20) ----------------------------------------------------
void __fastcall sub_14063BA20(__int64 a1)
{
	int* v2; // rax
	int* v3; // rdi
	int* v4; // rax
	__int64 v5; // rcx
	__int64(__fastcall * v6)(); // rax
	_QWORD* v7; // rcx
	__int64 v8; // rax
	int* v9; // rbx
	int* v10; // rbx
	__int64 v11; // rsi
	__int64 v12; // rcx
	void (*v13)(); // [rsp+20h] [rbp-38h] BYREF
	int* v14; // [rsp+28h] [rbp-30h]
	int v15; // [rsp+30h] [rbp-28h] BYREF
	void (*v16)(); // [rsp+38h] [rbp-20h]
	__int64(__fastcall * v17)(); // [rsp+40h] [rbp-18h]
	__int64 v18; // [rsp+48h] [rbp-10h]

	v2 = sub_14018B280(48i64, 0);
	*(_QWORD*)v2 = v2;
	*((_QWORD*)v2 + 1) = v2;
	v14 = v2;
	sub_14063D850(a1, (char*)&v13);
	v3 = v14;
	v4 = *(int**)v14;
	v5 = 0i64;
	if (*(int**)v14 != v14)
	{
		do
		{
			v4 = *(int**)v4;
			++v5;
		} while (v4 != v14);
		if (v5)
		{
			v6 = sub_14063FB00;
			v13 = sub_14063D450;
			v16 = sub_14063D450;
			if (!sub_14063D450)
				v6 = 0i64;
			v15 = 0;
			v18 = 0i64;
			v14 = (int*)v6;
			v17 = v6;
			sub_140195960((__int64)aEvnt, 16, (__int64)&v15, 4);
			v8 = qword_140C7E648;
			v9 = v3;
			do
			{
				v9 = (int*)*((_QWORD*)v9 + 1);
				if (v8 == qword_140C7E650)
				{
					sub_14063F870((__int64)v7, (__int64)(v9 + 4));
					v8 = qword_140C7E648;
				}
				else
				{
					v7 = (_QWORD*)(v8 - 32);
					if (v8 != 32)
					{
						v7[1] = 0i64;
						v7[2] = 0i64;
						v7[3] = 0i64;
						sub_14001B240(v7, *((int**)v9 + 3), *((_QWORD*)v9 + 4));
						v8 = qword_140C7E648;
					}
					v8 -= 32i64;
					qword_140C7E648 = v8;
				}
			} while (v9 != *(int**)v3);
		}
	}
	v10 = *(int**)v3;
	while (v10 != v3)
	{
		v11 = (__int64)v10;
		v10 = *(int**)v10;
		v12 = *(_QWORD*)(v11 + 24);
		if (v12)
			sub_14018B900(v12, 0);
		sub_14018B900(v11, 0);
	}
	*(_QWORD*)v3 = v3;
	*((_QWORD*)v3 + 1) = v3;
	sub_14018B900((__int64)v3, 0);
}
// 14063BB27: variable 'v7' is possibly undefined
// 14063FB00: using guessed type __int64 __fastcall sub_14063FB00();
// 140C7E648: using guessed type __int64 qword_140C7E648;
// 140C7E650: using guessed type __int64 qword_140C7E650;

