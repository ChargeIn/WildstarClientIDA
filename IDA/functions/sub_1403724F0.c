#include "../winhttp.h"

//----- (00000001403724F0) ----------------------------------------------------
__int64 __fastcall sub_1403724F0(__int64 a1, __int64 a2, __int64 a3)
{
	int v6; // eax
	__int64 v7; // rbx
	int** v8; // rsi
	__int64 v9; // rcx
	int* v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	float v13; // xmm1_4
	double v14; // xmm0_8
	float v15; // xmm1_4
	__int64 v16; // rcx
	__int64 v17; // rcx
	int v18; // edx

	if ((*(_BYTE*)(a2 + 232) & 1) == 0)
		return 0i64;
	v6 = *(_DWORD*)a1;
	v7 = *(_QWORD*)(a1 + 8);
	v8 = (int**)(a1 + 8);
	if (*(_DWORD*)a1)
	{
		if (!v7 || *(_DWORD*)(v7 + 32) != v6)
			goto LABEL_4;
		v12 = *(_QWORD*)(v7 + 40);
		if (v12)
		{
			v13 = *(float*)(a1 + 28);
			LODWORD(v14) = 0;
			if (v13 != 0.0)
			{
			LABEL_31:
				v15 = (float)(v13 * *(float*)(a2 + 892)) + *(float*)(a1 + 24);
				if (v15 > 1.0)
					v15 = 1.0;
				*(float*)(a1 + 24) = v15;
				if (v15 == 1.0)
				{
					v16 = *(_QWORD*)(a1 + 16);
					if (v16)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
						*(_QWORD*)(a1 + 16) = 0i64;
					}
				}
				return 0i64;
			}
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 48i64))(v12);
		LABEL_30:
			v13 = *(float*)&v14;
			goto LABEL_31;
		}
	LABEL_29:
		v14 = (*(double(__fastcall**)(__int64))(*(_QWORD*)a3 + 256i64))(a3);
		goto LABEL_30;
	}
	if (!v7)
		goto LABEL_29;
LABEL_4:
	v9 = *(_QWORD*)(a1 + 16);
	if (v9)
	{
		if (*(_DWORD*)(v9 + 32) != v6)
			goto LABEL_36;
	}
	else if (v6)
	{
	LABEL_36:
		if (v9 != v7)
		{
			if (v7)
				(**(void(__fastcall***)(__int64))v7)(v7);
			v17 = *(_QWORD*)(a1 + 16);
			if (v17)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
			*(_QWORD*)(a1 + 16) = *v8;
		}
		if (*v8)
		{
			(*(void(__fastcall**)(int*))(*(_QWORD*)*v8 + 8i64))(*v8);
			*v8 = 0i64;
		}
		v18 = *(_DWORD*)a1;
		*(_DWORD*)(a1 + 24) = 0;
		if (v18)
			sub_1403543E0(a2, v18, a3, v8);
		return 0i64;
	}
	if (v7)
		(**(void(__fastcall***)(__int64))v7)(v7);
	v10 = *(int**)(a1 + 16);
	if (*v8 != v10)
	{
		if (v10)
			(**(void(__fastcall***)(int*))v10)(v10);
		if (*v8)
			(*(void(__fastcall**)(int*))(*(_QWORD*)*v8 + 8i64))(*v8);
		*v8 = *(int**)(a1 + 16);
	}
	if (*(_QWORD*)(a1 + 16) != v7)
	{
		if (v7)
			(**(void(__fastcall***)(__int64))v7)(v7);
		v11 = *(_QWORD*)(a1 + 16);
		if (v11)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v11 + 8i64))(v11);
		*(_QWORD*)(a1 + 16) = v7;
	}
	*(float*)(a1 + 24) = 1.0 - *(float*)(a1 + 24);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
	return 0i64;
}
// 14037254C: conditional instruction was optimized away because rcx.8!=0
// 1403725F3: conditional instruction was optimized away because rbx.8!=0

