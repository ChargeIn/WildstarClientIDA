#include "../winhttp.h"

//----- (00000001400C2DE0) ----------------------------------------------------
void __fastcall sub_1400C2DE0(__int64 a1, __int64* a2, unsigned int a3)
{
	__int64 v3; // r10
	unsigned int v4; // esi
	char v5; // r11
	char v7; // r9
	__int64* v9; // r8
	__int64 v10; // rbx
	__int64 v11; // rdx
	char v12; // al
	__int64 v13; // rcx
	unsigned int v14; // r11d
	char* v15; // rax
	__int64 v16; // r10
	__int64 v17; // rdx
	__int64 v18; // r8
	char* v19; // r9
	char v20; // cl
	__int64 v21; // [rsp+10h] [rbp+8h] BYREF

	v3 = *(_QWORD*)(a1 + 168);
	v4 = a3 >> 3;
	v5 = a3;
	v7 = -86 * a3;
	v21 = v3;
	if (a3 >> 3)
	{
		v9 = a2;
		v10 = v4;
		do
		{
			v11 = *v9;
			v12 = v7++;
			++v9;
			v13 = v3 ^ v11 ^ *(_QWORD*)(a1 + 8i64 * (v12 & 0xF) + 40);
			v3 = v11;
			*(v9 - 1) = v13;
			--v10;
		} while (v10);
		v21 = v11;
	}
	v14 = v5 & 7;
	if (v14)
	{
		v15 = (char*)&a2[v4];
		v16 = a1 + 8i64 * (v7 & 0xF);
		v17 = 0i64;
		v18 = v14;
		v19 = (char*)((char*)&v21 - v15);
		do
		{
			v20 = v17++;
			++v15;
			*(v15 - 1) ^= v15[(_QWORD)v19 - 1] ^ *(_BYTE*)((v20 & 7) + v16 + 40);
			--v18;
		} while (v18);
	}
}
// 1400C2E6E: conditional instruction was optimized away because r11d.4 is in (1..7)

