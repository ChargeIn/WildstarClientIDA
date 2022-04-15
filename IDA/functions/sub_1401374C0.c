#include "../winhttp.h"

//----- (00000001401374C0) ----------------------------------------------------
void __fastcall sub_1401374C0(__int64 a1)
{
	__int64 v2; // rsi
	int* v3; // rdi
	int* v4; // r15
	__int64 v5; // rsi
	char* v6; // rax
	__int64 v7; // rax
	__int64 v9; // rsi
	__int64 v10; // rax
	int* v11; // r12
	__int64 v12; // rax
	unsigned __int64 v13; // r15
	unsigned __int64 v14; // r13
	int* v15; // rdi
	__int64 v16; // rsi
	__int64 v17; // rax
	unsigned __int64 v18; // r15
	unsigned __int64 v19; // r13
	int* v20; // rdi
	unsigned __int16* v21; // rbx
	__int64 v22; // [rsp+20h] [rbp-58h] BYREF
	int* v23; // [rsp+28h] [rbp-50h]
	char* v24; // [rsp+30h] [rbp-48h]
	__int64 v25; // [rsp+38h] [rbp-40h]
	__int64 v26; // [rsp+40h] [rbp-38h] BYREF
	unsigned __int16* v27; // [rsp+48h] [rbp-30h]
	__int64 v28; // [rsp+50h] [rbp-28h]
	__int64 v29; // [rsp+58h] [rbp-20h]

	if (*(_QWORD*)(a1 + 8))
	{
		v2 = *(_QWORD*)(a1 + 168);
		v3 = 0i64;
		v4 = *(int**)(a1 + 160);
		v23 = 0i64;
		v25 = 0i64;
		v5 = (v2 - (__int64)v4) >> 1;
		if ((unsigned __int64)(v5 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v3 = sub_14018B280(2 * (v5 + 1), 0);
			v23 = v3;
			v25 = (__int64)v3 + 2 * v5 + 2;
		}
		sub_1407DB590(v3, v4, 2 * v5);
		v6 = (char*)v3 + 2 * v5;
		v24 = v6;
		if (v6)
			*(_WORD*)v6 = 0;
		v7 = 0i64;
		while (*((_WORD*)&unk_1409D8F04 + ++v7) != 0)
			;
		sub_14001C310(&v22, (int*)&unk_1409D8F04, (int*)((char*)&unk_1409D8F04 + 2 * v7));
		v9 = *(_QWORD*)(a1 + 392);
		v10 = (__int64)v24;
		v11 = v23;
		if (v9 != *(_QWORD*)(a1 + 400))
		{
			v12 = (v24 - (char*)v23) >> 1;
			v13 = v12 + 1;
			v14 = 2 * v12;
			do
			{
				v15 = 0i64;
				v27 = 0i64;
				v29 = 0i64;
				if (v13 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v15 = sub_14018B280(2 * v13, 0);
					v27 = (unsigned __int16*)v15;
					v29 = (__int64)v15 + 2 * v13;
				}
				sub_1407DB590(v15, v11, v14);
				v28 = (__int64)v15 + v14;
				if ((int*)((char*)v15 + v14))
					*(_WORD*)((char*)v15 + v14) = 0;
				sub_14001C310(&v26, *(int**)(v9 + 8), *(int**)(v9 + 16));
				if (v27)
					sub_14018B900((__int64)v27, 0);
				v9 += 32i64;
			} while (v9 != *(_QWORD*)(a1 + 400));
			v10 = (__int64)v24;
		}
		v16 = *(_QWORD*)(a1 + 328);
		*(_DWORD*)(a1 + 536) = 4;
		if (v16 != *(_QWORD*)(a1 + 336))
		{
			v17 = (v10 - (__int64)v11) >> 1;
			v18 = v17 + 1;
			v19 = 2 * v17;
			do
			{
				v20 = 0i64;
				v27 = 0i64;
				v29 = 0i64;
				if (v18 <= 0x7FFFFFFFFFFFFFFEi64)
				{
					v20 = sub_14018B280(2 * v18, 0);
					v27 = (unsigned __int16*)v20;
					v29 = (__int64)v20 + 2 * v18;
				}
				sub_1407DB590(v20, v11, v19);
				v28 = (__int64)v20 + v19;
				if ((int*)((char*)v20 + v19))
					*(_WORD*)((char*)v20 + v19) = 0;
				sub_14001C310(&v26, *(int**)(v16 + 8), *(int**)(v16 + 16));
				v21 = v27;
				sub_1400F1C50(*(_QWORD*)(a1 + 8) + 384i64, v27, a1);
				if (v21)
					sub_14018B900((__int64)v21, 0);
				v16 += 32i64;
			} while (v16 != *(_QWORD*)(a1 + 336));
		}
		if (v11)
			sub_14018B900((__int64)v11, 0);
	}
}

