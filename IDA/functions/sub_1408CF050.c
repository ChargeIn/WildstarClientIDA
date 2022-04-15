#include "../winhttp.h"

//----- (00000001408CF050) ----------------------------------------------------
void** __fastcall sub_1408CF050(__int64 a1, __int64* a2)
{
	void** result; // rax
	_DWORD* v5; // rcx
	char v6; // cl
	int v7; // edx
	int v8; // ecx
	bool v9; // bp
	int v10; // r15d
	float v11; // xmm7_4
	float v12; // xmm8_4
	__int64 v13; // rdi
	unsigned int v14; // esi
	float v15; // xmm9_4
	float v16; // xmm10_4
	float i; // xmm6_4
	__int64 v18; // rax
	__int64 v19; // rcx
	void* retaddr; // [rsp+A8h] [rbp+0h] BYREF
	float v21; // [rsp+B0h] [rbp+8h] BYREF
	float v22; // [rsp+B4h] [rbp+Ch]

	result = &retaddr;
	if (*(_DWORD*)(a1 + 260))
	{
		v5 = *(_DWORD**)(a1 + 8);
		*(_DWORD*)(a1 + 24) = v5[2];
		*(_DWORD*)(a1 + 28) = v5[3];
		*(_DWORD*)(a1 + 32) = v5[4];
		*(_DWORD*)(a1 + 36) = v5[5];
		*(_DWORD*)(a1 + 40) = v5[6];
		*(_DWORD*)(a1 + 44) = v5[7];
		*(_DWORD*)(a1 + 48) = v5[8];
		*(_DWORD*)(a1 + 52) = v5[9];
		*(_DWORD*)(a1 + 56) = v5[10];
		*(_DWORD*)(a1 + 60) = v5[11];
		*(_DWORD*)(a1 + 64) = v5[12];
		sub_1408D1800((__int64)v5, 0);
		if (*(_BYTE*)(a1 + 66))
		{
			v6 = *(_BYTE*)(a1 + 65);
			if (*(_BYTE*)(a1 + 109) != v6 || *(_BYTE*)(a1 + 108) != *(_BYTE*)(a1 + 64))
			{
				v7 = *((_DWORD*)a2 + 2);
				if (!*(_BYTE*)(a1 + 64) && (v7 & 7) == 7)
					v7 &= ~4u;
				if (!v6)
					v7 &= ~8u;
				sub_1408D1290(a1 + 116, v7, *(_DWORD*)(a1 + 112), (float*)(a1 + 28));
			}
		}
		if (*(_BYTE*)(a1 + 60))
			sub_1408D0FF0(a1 + 116, *(_DWORD*)(a1 + 112), (float*)(a1 + 28));
		v8 = *((_DWORD*)a2 + 2);
		if (!*(_BYTE*)(a1 + 65))
			v8 &= ~8u;
		v9 = !*(_BYTE*)(a1 + 64) && (v8 & 7) == 7;
		v10 = *((unsigned __int16*)a2 + 9);
		v11 = *(float*)(a1 + 56);
		v12 = *(float*)(a1 + 24);
		v13 = 0i64;
		v14 = 0;
		v15 = *(float*)(a1 + 68);
		v16 = *(float*)(a1 + 40);
		for (i = (float)(v11 - *(float*)(a1 + 100)) / (float)v10; v8; v8 &= v8 - 1)
			++v14;
		if (v14)
		{
			do
			{
				if (!v9 || (_DWORD)v13 != 2)
				{
					v18 = *a2;
					v19 = *((unsigned __int16*)a2 + 8);
					v21 = v11;
					v22 = i;
					sub_1408CF350(a1 + 116 + 24 * v13, (float*)(v18 + 4 * (unsigned int)v13 * v19), v10, v12, v15, v16, &v21);
				}
				v13 = (unsigned int)(v13 + 1);
			} while ((unsigned int)v13 < v14);
		}
		*(_DWORD*)(a1 + 68) = *(_DWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 72) = *(_DWORD*)(a1 + 28);
		*(_DWORD*)(a1 + 76) = *(_DWORD*)(a1 + 32);
		*(_DWORD*)(a1 + 80) = *(_DWORD*)(a1 + 36);
		*(_DWORD*)(a1 + 84) = *(_DWORD*)(a1 + 40);
		*(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 44);
		*(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 48);
		*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 52);
		*(_DWORD*)(a1 + 100) = *(_DWORD*)(a1 + 56);
		*(_DWORD*)(a1 + 104) = *(_DWORD*)(a1 + 60);
		result = (void**)*(unsigned int*)(a1 + 64);
		*(_DWORD*)(a1 + 108) = (_DWORD)result;
	}
	return result;
}

