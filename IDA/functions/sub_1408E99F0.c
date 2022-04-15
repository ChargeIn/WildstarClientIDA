#include "../winhttp.h"

//----- (00000001408E99F0) ----------------------------------------------------
__m128* __fastcall sub_1408E99F0(__int64 a1, __m128* a2, __int64 a3, int a4, int* a5, _DWORD* a6)
{
	__m128* v6; // rbx
	int v7; // r10d
	int v8; // ecx
	_DWORD* v9; // rsi
	unsigned __int64* v10; // rdi
	__m128* v11; // rbp
	unsigned __int64 v12; // rax
	_DWORD* v13; // rax
	int v15; // edx
	int v16; // [rsp+38h] [rbp-30h]
	int v18; // [rsp+70h] [rbp+8h]
	int v20; // [rsp+88h] [rbp+20h]
	int v21; // [rsp+90h] [rbp+28h]

	v20 = a4;
	v6 = (__m128*)a1;
	v8 = *a5;
	v9 = a5 + 2;
	v10 = (unsigned __int64*)a2;
	v21 = a5[1];
	v7 = v21;
	v11 = (__m128*)((char*)v6 + 8 * v8 * v21);
	if (v21 == 1)
	{
		do
		{
			v12 = *v10;
			v6 = (__m128*)((char*)v6 + 8);
			v10 += (unsigned int)(a4 * a3);
			v6[-1].m128_u64[1] = v12;
		} while (v6 != v11);
	}
	else
	{
		v13 = a6;
		if (*a6 == 1024 && v9[1] == 1 && *v9 == 4 && a3 == 64 && a4 == 1)
			return sub_1408E9620(v6, a2, (__int64)a6);
		v15 = a3 * v8;
		v16 = a3 * v8;
		v18 = 8 * a3 * a4;
		do
		{
			sub_1408E99F0((_DWORD)v6, (_DWORD)v10, v15, a4, (__int64)v9, (__int64)v13);
			v6 = (__m128*)((char*)v6 + 8 * v21);
			LODWORD(v10) = v18 + (_DWORD)v10;
			v13 = a6;
			a4 = v20;
			v15 = v16;
		} while (v6 != v11);
		v7 = v21;
	}
	return (__m128*)sub_1408E92B0(a1, a3, (__int64)a6, v7);
}

