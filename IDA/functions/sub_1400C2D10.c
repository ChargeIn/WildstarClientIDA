#include "../winhttp.h"

//----- (00000001400C2D10) ----------------------------------------------------
void __fastcall sub_1400C2D10(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r10
	unsigned int v4; // ebx
	char v5; // r11
	char v7; // r9
	__int64 v9; // r8
	__int64 v10; // rdx
	char v11; // al
	__int64 v12; // rcx
	unsigned int v13; // r11d
	__int64 v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	__int64 v17; // r8
	char* v18; // r9
	char v19; // cl
	__int64 v20; // [rsp+8h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 168);
	v4 = a3 >> 3;
	v5 = a3;
	v7 = -86 * a3;
	v20 = v3;
	if (a3 >> 3)
	{
		v9 = a2;
		v10 = v4;
		do
		{
			v11 = v7++;
			v9 += 8i64;
			v12 = v3 ^ *(_QWORD*)(v9 - 8) ^ *(_QWORD*)(a1 + 8i64 * (v11 & 0xF) + 40);
			*(_QWORD*)(v9 - 8) = v12;
			v3 = v12;
			v20 = v12;
			--v10;
		} while (v10);
	}
	v13 = v5 & 7;
	if (v13)
	{
		v14 = a2 + 8 * v4;
		v15 = a1 + 8i64 * (v7 & 0xF);
		v16 = 0i64;
		v17 = v13;
		v18 = (char*)&v20 - v14;
		do
		{
			v19 = v16++;
			++v14;
			*(_BYTE*)(v14 - 1) ^= v18[v14 - 1] ^ *(_BYTE*)((v19 & 7) + v15 + 40);
			--v17;
		} while (v17);
	}
}
// 1400C2D97: conditional instruction was optimized away because r11d.4 is in (1..7)

