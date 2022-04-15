#include "../winhttp.h"

//----- (000000014045B550) ----------------------------------------------------
__m128 __fastcall sub_14045B550(__int64 a1)
{
	int v1; // edi
	int v3; // eax
	float v4; // xmm9_4
	__int64 v5; // rcx
	int v6; // eax
	__int64 v7; // rax
	unsigned int v8; // ecx
	__int64 v9; // rax
	float v10; // xmm6_4
	float v11; // xmm8_4
	unsigned int v12; // eax
	__int64 v13; // rax
	__int64 v14; // rax
	__int128 v15; // xmm7
	__int64 v16; // rax

	v1 = 0;
	if ((dword_140DC28F8 & 1) == 0)
	{
		dword_140DC2904 = 0;
		dword_140DC28F8 |= 1u;
	}
	v3 = *(_DWORD*)(a1 + 60);
	if (!v3)
		v3 = *(_DWORD*)(a1 + 56);
	v4 = (float)v3;
	if ((*(_BYTE*)(a1 + 36) & 8) != 0)
	{
		v5 = *(_QWORD*)(qword_140C65898 + 120);
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 60);
			if (!v6)
				v6 = *(_DWORD*)(v5 + 56);
		}
		else
		{
			v6 = 0;
		}
		v4 = (float)v6;
	}
	v7 = *(_QWORD*)(a1 + 24);
	if (v7)
		v8 = *(_DWORD*)(v7 + 24);
	else
		v8 = 1;
	v9 = sub_1401F6920(v8);
	v10 = 1.0;
	if (v9)
		v11 = *(float*)(v9 + 4);
	else
		v11 = 1.0;
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 16i64))(a1);
	v13 = sub_1401F64E0(v12);
	if (v13)
		v1 = *(_DWORD*)(v13 + 16);
	v14 = *(_QWORD*)(a1 + 24);
	v15 = COERCE_UNSIGNED_INT((float)v1);
	if (v14 && *(_DWORD*)(v14 + 16) == 30)
	{
		if (dword_140DC2904)
		{
			v10 = *(float*)&dword_140DC2900;
		}
		else
		{
			dword_140DC2904 = 1;
			v16 = sub_140200220(0x525u);
			if (v16)
			{
				v10 = *(float*)(v16 + 28);
				dword_140DC2900 = LODWORD(v10);
			}
			else
			{
				v10 = 0.0;
				dword_140DC2900 = 0;
			}
		}
	}
	*(float*)&v15 = (float)((float)(*(float*)&v15 + v4) * v11) * v10;
	return (__m128)v15;
}
// 140C65898: using guessed type __int64 qword_140C65898;
// 140DC28F8: using guessed type int dword_140DC28F8;
// 140DC2900: using guessed type int dword_140DC2900;
// 140DC2904: using guessed type int dword_140DC2904;

