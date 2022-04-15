#include "../winhttp.h"

//----- (00000001403AAEC0) ----------------------------------------------------
void __fastcall sub_1403AAEC0(__int64 a1)
{
	int v1; // edx
	int v2; // edx
	__int64 v3; // rdx
	float v4; // xmm0_4
	float* v5; // rax
	__int64 v6; // r8
	int v7; // eax
	_DWORD* v8; // rdx
	__int64 v9; // rdx
	float v10; // xmm0_4
	float* v11; // rax
	__int64 v12; // [rsp+40h] [rbp+8h] BYREF

	v1 = *(_DWORD*)(a1 + 8);
	if (!v1)
	{
		v9 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 12) = 1065353216;
		if (v9)
		{
			v10 = 1.0;
			v11 = (float*)(*(_QWORD*)(a1 + 16) + 12i64);
			do
			{
				v10 = v10 + *v11;
				v11 += 4;
				*(float*)(a1 + 12) = v10;
				--v9;
			} while (v9);
		}
		goto LABEL_16;
	}
	v2 = v1 - 1;
	if (v2)
	{
		if (v2 != 1)
		{
			v12 = 0x141DEFEE0i64;
			sub_1401A3130(122, 0, &v12);
			return;
		}
		v3 = *(_QWORD*)(a1 + 24);
		*(_DWORD*)(a1 + 12) = 1065353216;
		if (v3)
		{
			v4 = 1.0;
			v5 = (float*)(*(_QWORD*)(a1 + 16) + 12i64);
			do
			{
				v4 = v4 * *v5;
				v5 += 4;
				*(float*)(a1 + 12) = v4;
				--v3;
			} while (v3);
			*(float*)(a1 + 12) = fmaxf(0.0, v4);
			return;
		}
	LABEL_16:
		*(float*)(a1 + 12) = fmaxf(0.0, *(float*)(a1 + 12));
		return;
	}
	v6 = *(_QWORD*)(a1 + 24);
	v7 = 0;
	*(_DWORD*)(a1 + 12) = 0;
	if (v6)
	{
		v8 = (_DWORD*)(*(_QWORD*)(a1 + 16) + 12i64);
		do
		{
			v7 += *v8;
			v8 += 4;
			*(_DWORD*)(a1 + 12) = v7;
			--v6;
		} while (v6);
	}
}

