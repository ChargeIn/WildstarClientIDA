#include "../winhttp.h"

//----- (000000014088FEE0) ----------------------------------------------------
__int64 __fastcall sub_14088FEE0(__int64* a1, __int64 a2, int a3, __int64 a4, _DWORD* a5, int a6)
{
	__int64** v6; // rbx
	unsigned int v7; // edi
	int v9; // r14d
	__int64* v11; // rax
	int v12; // ebp
	__int64 v13; // r12
	__int16 v14; // ax
	bool v15; // al
	int v16; // eax
	int v17; // eax
	__int64 v18; // rax
	unsigned int v19; // ecx
	int v20; // r8d
	int v21; // edx
	__int64* v22; // rax
	int v23; // ecx
	int v25[4]; // [rsp+30h] [rbp-38h] BYREF
	unsigned int v26; // [rsp+70h] [rbp+8h] BYREF

	v6 = (__int64**)a1[16];
	v7 = 0;
	v26 = 0;
	v9 = a3;
	if (a2)
	{
		v11 = v6[3];
		v12 = 0;
		if (v11)
		{
			v13 = v11[16];
			if (a4)
			{
				if (*(_BYTE*)(a4 + 4))
					v9 = (int)(float)((float)(int)sub_140891630(v11[16]) * *(float*)a4);
				else
					v9 = *(_DWORD*)a4;
			}
			sub_140891AA0(v13, a2, v9, a6, a5, (int*)&v26);
			v14 = *(_WORD*)(a2 + 20);
			v7 = v26;
			v15 = (v14 & 8) != 0 && !v26 && (v14 & 7) != 1;
			v12 = v26;
			if (v15)
			{
				v16 = sub_140892310(v13);
				v7 = v26;
				v12 -= v16;
			}
		}
		(*(void(__fastcall**)(__int64*, _QWORD))(*a1 + 192))(a1, v7);
		v17 = sub_14088D6B0((__int64)v6, v26, v12, (int*)a2);
	}
	else
	{
		v18 = *a1;
		v19 = 0;
		if (a3 > 0)
			v19 = a3;
		v26 = v19;
		(*(void(__fastcall**)(__int64*, _QWORD))(v18 + 192))(a1, v19);
		v25[0] = 0;
		v25[2] = 0;
		v17 = sub_14088D6B0((__int64)v6, v26, v9, v25);
	}
	v20 = v26;
	*((_DWORD*)a1 + 36) = v26;
	v21 = v17;
	v22 = *v6;
	while (v22)
	{
		v23 = v20 - *((_DWORD*)v22 + 8) - *((_DWORD*)v22 + 2);
		v22 = (__int64*)*v22;
		if (v23 > v21)
			v21 = v23;
	}
	return (unsigned int)v21;
}

