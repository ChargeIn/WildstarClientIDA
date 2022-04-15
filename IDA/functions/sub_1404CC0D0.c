#include "../winhttp.h"

//----- (00000001404CC0D0) ----------------------------------------------------
void sub_1404CC0D0()
{
	__int64 v0; // rsi
	__int64 v1; // rdi
	__int64 v2; // rbx
	__int64 v3; // rcx
	int* v4; // rdi
	int* v5; // rbx
	int v6; // eax
	__int64 v7; // rax
	int v8; // edx
	int v9; // [rsp+20h] [rbp-28h] BYREF
	__int64 v10; // [rsp+28h] [rbp-20h]
	__int64(__fastcall * v11)(_QWORD); // [rsp+30h] [rbp-18h]
	__int64 v12; // [rsp+38h] [rbp-10h]

	v0 = qword_140C65A00;
	v1 = *(_QWORD*)(qword_140C65A00 + 40);
	v2 = *(_QWORD*)(qword_140C65A00 + 48);
	if (v1 != v2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(v0 + 40)
			+ 8i64
			* (int)((*(double(__fastcall**)(__int64*))(qword_140C77890 + 48))(&qword_140C77890)
				* ((double)(int)(((v2 - v1) >> 3) - 1) + 1.0)));
		if (v3)
			sub_14047A1F0(v3);
		v4 = *(int**)(v0 + 48);
		v5 = *(int**)(v0 + 40);
		sub_1407DB590(v5, v4, 0i64);
		v6 = dword_140DC31A0;
		*(_QWORD*)(v0 + 48) += -8 * (((char*)v4 - (char*)v5) >> 3);
		if ((v6 & 1) != 0)
		{
			v8 = dword_140DC31A4;
		}
		else
		{
			dword_140DC31A0 = v6 | 1;
			v7 = sub_140200220(0x1F6u);
			if (v7)
			{
				v8 = *(_DWORD*)(v7 + 4);
				dword_140DC31A4 = v8;
			}
			else
			{
				v8 = 0;
				dword_140DC31A4 = 0;
			}
		}
		v9 = 0;
		v10 = v0;
		v11 = nullsub_1;
		v12 = 0i64;
		sub_140195960(v0 + 64, v8, (__int64)&v9, 4);
	}
}
// 140001B70: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// 140C65A00: using guessed type __int64 qword_140C65A00;
// 140C77890: using guessed type __int64 qword_140C77890;
// 140DC31A0: using guessed type int dword_140DC31A0;
// 140DC31A4: using guessed type int dword_140DC31A4;

