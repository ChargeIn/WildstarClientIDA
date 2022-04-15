#include "../winhttp.h"

//----- (00000001408D1290) ----------------------------------------------------
void __fastcall sub_1408D1290(__int64 a1, int a2, int a3, float* a4)
{
	__int64 v4; // rbx
	unsigned int v7; // r11d
	int i; // r10d
	unsigned __int64 v10; // rax
	__int64 v11; // rcx
	signed __int64 v12; // rcx
	void* v13; // rsp
	void* v14; // rsp
	float v15[4]; // [rsp+20h] [rbp+0h] BYREF

	v4 = 0i64;
	v7 = 0;
	for (i = a2; i; i &= i - 1)
		++v7;
	*(_DWORD*)(a1 + 144) = v7;
	if (v7)
	{
		v10 = 4i64 * v7;
		v11 = v10 + 15;
		if (v10 + 15 <= v10)
			v11 = 0xFFFFFFFFFFFFFF0i64;
		v12 = v11 & 0xFFFFFFFFFFFFFFF0ui64;
		v13 = alloca(v12);
		v14 = alloca(v12);
		sub_1408A5B90(a2, (__int64)(a4 + 4), (__int64)v15);
		if (*(_DWORD*)(a1 + 144))
		{
			do
			{
				sub_1408D1160(a1 + 24 * v4, a3, a4, v15[v4]);
				v4 = (unsigned int)(v4 + 1);
			} while ((unsigned int)v4 < *(_DWORD*)(a1 + 144));
		}
	}
}
// 1408D1290: using guessed type float var_10[4];

