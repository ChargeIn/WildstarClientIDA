#include "../winhttp.h"

//----- (00000001406322C0) ----------------------------------------------------
void __fastcall sub_1406322C0(__int64 a1, _QWORD* a2)
{
	_QWORD* v2; // rdi
	__int64 v3; // rax
	__int64 v4; // rdx
	__int64 v5; // r9
	__int64 v6; // r10
	__int64 v7; // r11
	__int64 v8; // rbx
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rbp
	__int64* v12; // rbx
	unsigned __int64 i; // rsi
	__int64 v14[4]; // [rsp+20h] [rbp-48h] BYREF
	__int64 v15[5]; // [rsp+40h] [rbp-28h] BYREF

	if (a2)
	{
		v2 = a2;
		v3 = a1;
		do
		{
			sub_1406322C0(v3, v2[3]);
			v4 = v2[10];
			v5 = v2[12];
			v6 = v2[13];
			v7 = v2[14];
			v8 = v2[15];
			v9 = v2[8];
			v10 = v2[11];
			v11 = (_QWORD*)v2[2];
			v15[1] = v2[9];
			v15[2] = v4;
			v14[0] = v5;
			v14[1] = v6;
			v14[2] = v7;
			v14[3] = v8;
			v15[0] = v9;
			v15[3] = v10;
			sub_140633270(v15, v14);
			if (v2[6])
			{
				v12 = (__int64*)v2[11];
				for (i = v2[15] + 8i64; (unsigned __int64)v12 < i; ++v12)
					sub_14018B900(*v12, 0);
				sub_14018B900(v2[6], 0);
			}
			sub_14018B900((__int64)v2, 0);
			v3 = a1;
			v2 = v11;
		} while (v11);
	}
}

