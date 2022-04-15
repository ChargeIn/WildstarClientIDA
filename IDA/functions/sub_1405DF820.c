#include "../winhttp.h"

//----- (00000001405DF820) ----------------------------------------------------
void __fastcall sub_1405DF820(__int64 a1)
{
	__int64 v2; // r15
	int* v3; // rax
	__int64 v4; // rsi
	bool v5; // zf
	int* v6; // rax
	int* v7; // rbx
	__int64 v8; // rbp
	int* v9; // rax
	int* v10; // rdi
	__int64 v11; // rax
	_QWORD* v12; // rdx
	__int64 v13; // rdx
	__int64 v14[2]; // [rsp+20h] [rbp-28h] BYREF

	v2 = 0i64;
	v3 = sub_14018B280(96i64, 0);
	if (v3)
	{
		*((_QWORD*)v3 + 1) = 10i64;
		*(_QWORD*)v3 = off_140B55060;
	}
	else
	{
		v3 = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 616);
	v5 = v3 + 4 == 0i64;
	v6 = v3 + 4;
	v7 = 0i64;
	if (!v5)
		v7 = v6;
	if (v4)
	{
		do
		{
			v8 = v2 + 1;
			v9 = sub_14018DB00((__int64)v7, v2 + 1, 8i64);
			v10 = v9;
			*(_QWORD*)&v9[2 * v2] = *(_QWORD*)(v4 + 16);
			if (v7 != v9)
			{
				sub_1407DB590(v9, v7, 8 * v2);
				if (v7)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
				v7 = v10;
			}
			v11 = *(_QWORD*)(a1 + 616);
			++v2;
			v12 = *(_QWORD**)(v11 + 112);
			if (v12)
				*v12 = *(_QWORD*)(v11 + 120);
			v13 = *(_QWORD*)(v11 + 120);
			if (v13)
				*(_QWORD*)(v13 + 112) = *(_QWORD*)(v11 + 112);
			*(_QWORD*)(v11 + 112) = 0i64;
			*(_QWORD*)(v11 + 120) = 0i64;
			v4 = *(_QWORD*)(a1 + 616);
		} while (v4);
		if ((unsigned __int64)(v8 - 1) <= 0xFD)
		{
			v14[0] = (unsigned __int8)v8;
			v14[1] = (__int64)v7;
			sub_1403F4740(qword_140C65898, 0x3BDu, (__int64)v14);
		}
	}
	if (v7)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v7 - 2) + 8i64))(v7 - 4);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;

