#include "../winhttp.h"

//----- (0000000140331050) ----------------------------------------------------
__int64 __fastcall sub_140331050(__int64 a1, int** a2, __int64 a3)
{
	int* v3; // rbx
	int* v8; // rdi
	int* v9; // rcx
	__int64 v10; // rdi
	__int64 v11; // rdx
	int* v12; // rcx
	int* v13; // rax
	unsigned int v14; // ebx
	int* v15; // [rsp+20h] [rbp-28h] BYREF
	int v16; // [rsp+28h] [rbp-20h]
	int* v17; // [rsp+50h] [rbp+8h] BYREF
	int* v18; // [rsp+58h] [rbp+10h] BYREF

	v3 = *a2;
	v17 = v3;
	if (v3)
		(**(void(__fastcall***)(int*))v3)(v3);
	if ((*(int(__fastcall**)(_QWORD, int**))(**(_QWORD**)(a1 + 48) + 16i64))(*(_QWORD*)(a1 + 48), &v17) >= 0)
	{
		v8 = sub_14018B280(800i64, 0);
		if (v8)
		{
			v9 = *a2;
			v17 = v9;
			if (v9)
				(**(void(__fastcall***)(int*))v9)(v9);
			v10 = sub_1403303E0((__int64)v8, &v17, a3);
		}
		else
		{
			v10 = 0i64;
		}
		*(_DWORD*)(v10 + 16) = sub_14032FF20(a1 + 168, v10);
		v11 = *(_QWORD*)(a1 + 216);
		v12 = *(int**)(v11 + 8);
		v13 = (int*)v11;
		while (v12)
		{
			if (*((_QWORD*)v12 + 4) < (unsigned __int64)v3)
			{
				v12 = (int*)*((_QWORD*)v12 + 3);
			}
			else
			{
				v13 = v12;
				v12 = (int*)*((_QWORD*)v12 + 2);
			}
		}
		if (v13 == (int*)v11 || (unsigned __int64)v3 < *((_QWORD*)v13 + 4))
		{
			v15 = v3;
			v16 = 0;
			v17 = v13;
			sub_1400EDD00(a1 + 208, &v18, (_QWORD**)&v17, (unsigned __int64*)&v15);
			v13 = v18;
		}
		v13[10] = *(_DWORD*)(v10 + 16);
		v14 = *(_DWORD*)(v10 + 16);
		if (*a2)
			(*(void(__fastcall**)(int*))(*(_QWORD*)*a2 + 8i64))(*a2);
		return v14;
	}
	else
	{
		if (*a2)
			(*(void(__fastcall**)(int*))(*(_QWORD*)*a2 + 8i64))(*a2);
		return 0xFFFFFFFFi64;
	}
}

