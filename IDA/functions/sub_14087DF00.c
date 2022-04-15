#include "../winhttp.h"

//----- (000000014087DF00) ----------------------------------------------------
__int64 __fastcall sub_14087DF00(__int64 a1, __int64 a2, int a3, unsigned int* a4)
{
	unsigned int v4; // eax
	unsigned int v5; // r15d
	int v7; // edx
	unsigned int v8; // esi
	unsigned int v10; // ecx
	__int64 v12; // rbp
	unsigned __int64 v13; // rdx
	__int64 v14; // r12
	__int64 v15; // r15
	__int64 v16; // rsi
	int* v17; // rbx
	unsigned __int64 v19; // [rsp+20h] [rbp-58h]
	unsigned int v20; // [rsp+80h] [rbp+8h]
	unsigned int v21; // [rsp+88h] [rbp+10h]
	unsigned int i; // [rsp+90h] [rbp+18h]

	v4 = *(unsigned __int16*)(a1 + 18);
	v5 = a3 - a4[7];
	v7 = *(_DWORD*)(a1 + 8);
	v8 = v4;
	if (v5 < v4)
		v8 = a3 - a4[7];
	v10 = 0;
	v21 = v4;
	v20 = a3 - a4[7];
	for (i = v8; v7; v7 &= v7 - 1)
		++v10;
	v12 = 0i64;
	if (v10)
	{
		v13 = 4 * v8;
		v14 = 0i64;
		v15 = v10;
		v16 = (int)(v8 - 1);
		v19 = v13;
		do
		{
			v17 = (int*)(*(_QWORD*)a1 + 4 * (a4[6] + v12 * *(unsigned __int16*)(a1 + 16)));
			sub_1407DB590((int*)(*(_QWORD*)a2 + 4 * (a4[7] + v14 * *(unsigned __int16*)(a2 + 16))), v17, v13);
			v13 = v19;
			a4[v12++] = v17[v16];
			++v14;
			--v15;
		} while (v15);
		v8 = i;
		v5 = v20;
	}
	*(_WORD*)(a1 + 18) -= v8;
	*(_WORD*)(a2 + 18) = *((_WORD*)a4 + 14) + v8;
	a4[8] = 0x10000;
	if (v8 == v21)
		a4[6] = 0;
	else
		a4[6] += v8;
	if (v8 == v5)
		return 45i64;
	a4[7] += v8;
	return 43i64;
}

