#include "../winhttp.h"

//----- (000000014088D750) ----------------------------------------------------
void __fastcall sub_14088D750(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
	__int64 v6; // rbx
	__int64 v7; // rcx
	__int64 v9; // rbp
	__int16 v10; // r9
	__int64 v11; // rax
	__int64 v12; // r8
	__int64 v13; // rcx
	char v14; // al
	__int64 v15; // rbx
	__int64 v16; // rsi
	__int64 v17; // rax
	__int64 v18; // [rsp+20h] [rbp-28h]

	v6 = a2 - *(_QWORD*)(a1 + 8);
	v7 = *(_QWORD*)(a1 + 24);
	v9 = v6 + a3;
	if (v7)
	{
		v10 = *(_WORD*)(a1 + 60);
		if ((v10 & 1) != 0)
		{
			v11 = *(int*)(a1 + 32);
			if ((int)v6 <= (int)v11 && v9 > v11)
			{
				if (a4)
					*(_WORD*)(a1 + 60) = v10 | 4;
				else
					sub_14088B940(v7, (int*)(a1 + 36));
				*(_WORD*)(a1 + 60) &= ~1u;
			}
		}
		else if (a4 && (*(_BYTE*)(v7 + 98) & 1) != 0 && (v10 & 4) == 0)
		{
			sub_14088E200(a1, v6);
		}
		if ((*(_BYTE*)(a1 + 60) & 2) != 0)
		{
			v12 = *(int*)(a1 + 48);
			if (v9 > v12 && (int)v6 <= (int)v12)
			{
				sub_14088BB90(*(_QWORD*)(a1 + 24), (int*)(a1 + 52), v12 - v6);
				*(_WORD*)(a1 + 60) &= ~2u;
			}
		}
		v13 = *(_QWORD*)(a1 + 24);
		if (v13)
		{
			v14 = *(_BYTE*)(v13 + 98);
			if ((v14 & 3) != 0 && (v14 & 0x10) == 0)
				sub_14088F4D0(v13, v6, a3);
		}
	}
	v15 = *(_QWORD*)(a1 + 16);
	v16 = 0i64;
	while (v15)
	{
		if (v9 <= *(_QWORD*)v15)
		{
			v16 = v15;
			v15 = *(_QWORD*)(v15 + 24);
		}
		else
		{
			if (*(_DWORD*)(v15 + 8) == 1)
				sub_14088A800(qword_140C629C0, *(_QWORD*)(v15 + 16));
			v17 = *(_QWORD*)(v15 + 24);
			v18 = v17;
			if (v15 == *(_QWORD*)(a1 + 16))
				*(_QWORD*)(a1 + 16) = v17;
			else
				*(_QWORD*)(v16 + 24) = v17;
			sub_140881720(dword_140C10F20, v15);
			v15 = v18;
		}
	}
}
// 140C10F20: using guessed type int dword_140C10F20;
// 140C629C0: using guessed type __int64 qword_140C629C0;

