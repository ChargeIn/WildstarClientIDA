#include "../winhttp.h"

//----- (00000001402CE850) ----------------------------------------------------
void __fastcall sub_1402CE850(__int64* a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
	__int64 v6; // r8
	__int64 v9; // r15
	__int64 v10; // rbx
	unsigned __int64 v11; // r14
	__int64 v12; // rdi
	__int64 v13; // rdx
	unsigned __int64 v14; // rdi
	unsigned __int64 i; // rsi
	__int64* v16; // rax
	__int64 v17; // rsi
	int* v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rdi
	__int64 v22; // rcx
	unsigned __int64 v23; // [rsp+30h] [rbp-1A8h] BYREF
	char v24[304]; // [rsp+40h] [rbp-198h] BYREF
	__int64 v25; // [rsp+170h] [rbp-68h]
	unsigned __int64 v26; // [rsp+1F0h] [rbp+18h] BYREF

	if (a3)
	{
		v26 = a3;
		v6 = a1[2];
		if ((a1[3] - v6) / 368 + a1[3] - v6 < a3)
		{
			v16 = (__int64*)&v26;
			v23 = (v6 - a1[1]) / 368;
			if (v23 >= a3)
				v16 = (__int64*)&v23;
			v17 = 92 * (sub_14018A3E0(368 * (v23 + *v16)) / 0x170ui64);
			v18 = sub_14018B280(v17 * 4, 0);
			v19 = sub_1402CEF90(a1[1], a2, (__int64)v18);
			v20 = sub_1402CF1B0(v19, a3, a4);
			v21 = sub_1402CEF90(a2, a1[2], v20);
			sub_1402CED90((_QWORD*)a1[1], (_QWORD*)a1[2]);
			v22 = a1[1];
			if (v22)
				sub_14018B900(v22, 0);
			a1[1] = (__int64)v18;
			a1[2] = v21;
			a1[3] = (__int64)&v18[v17];
		}
		else
		{
			sub_1402CEE00((__int64)v24, a4);
			v9 = a1[2];
			v10 = v9;
			v11 = (v9 - a2) / 368;
			if (v11 <= a3)
			{
				v14 = a3 - v11;
				for (i = v14; i; --i)
				{
					if (v10)
						sub_1402CEE00(v10, (__int64)v24);
					v10 += 368i64;
				}
				a1[2] += 368 * v14;
				sub_1402CEF90(a2, v9, a1[2]);
				v13 = v9;
				a1[2] += 368 * v11;
			}
			else
			{
				v12 = 368 * a3;
				sub_1402CEF90(v9 - v12, a1[2], a1[2]);
				a1[2] += v12;
				sub_1402CF260(a2, v9 - v12, v9);
				v13 = v12 + a2;
			}
			sub_1402CEFF0(a2, v13, (__int64)v24);
			if (v25)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
		}
	}
}

