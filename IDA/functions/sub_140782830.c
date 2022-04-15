#include "../winhttp.h"

//----- (0000000140782830) ----------------------------------------------------
__int64 sub_140782830(__int64 a1, int a2, unsigned int* a3, ...)
{
	unsigned int v3; // eax
	float* v4; // rdx
	_QWORD* v7; // rdx
	__int64 v8; // rcx
	unsigned int v9; // eax
	int* v11; // rbx
	unsigned __int64 v12; // rdi
	unsigned int v13; // ebp
	int v14; // r15d
	float* v15; // r15
	__int64 v16; // r13
	int* v17; // rax
	__int64* v18; // rsi
	float v19; // xmm0_4
	unsigned int v20; // edx
	__int64 v21; // r8
	int v22; // r8d
	unsigned int v23; // r9d
	unsigned int v24; // ebp
	__int64 v25; // rsi
	__int64 v26; // rcx
	__int64 v27; // rcx
	float v28; // xmm0_4
	unsigned int v29; // ebp
	__int64 v30; // rsi
	__int64 v31; // rcx
	__int64* v32; // [rsp+40h] [rbp-88h] BYREF
	__int64 v33; // [rsp+48h] [rbp-80h]
	_DWORD v34[8]; // [rsp+50h] [rbp-78h] BYREF
	char v35[4]; // [rsp+70h] [rbp-58h] BYREF
	int v36; // [rsp+74h] [rbp-54h]
	float* v37; // [rsp+E8h] [rbp+20h] BYREF
	va_list va; // [rsp+E8h] [rbp+20h]
	float* v39; // [rsp+F0h] [rbp+28h] BYREF
	va_list va1; // [rsp+F0h] [rbp+28h]
	va_list va2; // [rsp+F8h] [rbp+30h] BYREF

	va_start(va2, a3);
	va_start(va1, a3);
	va_start(va, a3);
	v37 = va_arg(va1, float*);
	va_copy(va2, va1);
	v39 = va_arg(va2, float*);
	v3 = a3[11];
	*(_DWORD*)(a1 + 8) = a2;
	v4 = v39;
	*(_DWORD*)(a1 + 12) = v3;
	*(_QWORD*)(a1 + 16) = v4;
	if (v4)
	{
		v7 = v4 + 36;
		if (!*(_QWORD*)(a1 + 24))
		{
			*(_QWORD*)(a1 + 24) = v7;
			v8 = a1 + 32;
			*(_QWORD*)v8 = *v7;
			*v7 = a1;
			if (*(_QWORD*)v8)
				*(_QWORD*)(*(_QWORD*)v8 + 24i64) = v8;
		}
	}
	v9 = *a3;
	if (!*a3)
		return 2147500037i64;
	v11 = 0i64;
	v12 = 0i64;
	v33 = 0i64;
	v13 = 0;
	v32 = 0i64;
	if (v9)
	{
		while (1)
		{
			v14 = sub_140633CB0(v13, *(_DWORD*)(*((_QWORD*)a3 + 1) + 4i64 * v13), (float**)va);
			if (v14 < 0)
				break;
			v15 = v37;
			if ((unsigned __int64)(*(__int64(__fastcall**)(float*))(*(_QWORD*)v37 + 32i64))(v37) < 2)
			{
				v14 = -2147467259;
				goto LABEL_26;
			}
			v16 = v12 + 1;
			v17 = sub_14018DB00((__int64)v11, v12 + 1, 8i64);
			*(_QWORD*)&v17[2 * v12] = v15;
			v18 = (__int64*)v17;
			if (v11 != v17)
			{
				sub_1407DB590(v17, v11, 8 * v12);
				if (v11)
					(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
				v11 = (int*)v18;
				v32 = v18;
			}
			++v13;
			++v12;
			v33 = v16;
			if (v13 >= *a3)
				goto LABEL_15;
		}
		v29 = 0;
		if (v12)
		{
			v30 = 0i64;
			do
			{
				v31 = *(_QWORD*)&v11[2 * v30];
				if (v31)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
					*(_QWORD*)&v11[2 * v30] = 0i64;
				}
				v30 = ++v29;
			} while (v29 < v12);
		}
	}
	else
	{
	LABEL_15:
		v19 = sub_1401C9770((unsigned __int16*)a3 + 8);
		v37 = 0i64;
		v39 = 0i64;
		*(float*)(a1 + 64) = v19;
		v20 = a3[10];
		*(_DWORD*)(a1 + 84) = v20;
		*(_DWORD*)(a1 + 72) = a3[6];
		*(_DWORD*)(a1 + 76) = a3[7];
		sub_1407A6E40(&v32, v20, v21, (__int64)v35, v34, (float**)va, (float**)va1);
		if (v37)
			v36 = *(_DWORD*)(a1 + 72);
		if (v39)
			v34[1] = *(_DWORD*)(a1 + 76);
		v24 = 0;
		v14 = sub_1407A5BA0((__int64**)(a1 + 56), &v32, v22, v23, v37, v39);
		if (v12)
		{
			v25 = 0i64;
			do
			{
				v26 = *(_QWORD*)&v11[2 * v25];
				if (v26)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
					*(_QWORD*)&v11[2 * v25] = 0i64;
				}
				v25 = ++v24;
			} while (v24 < v12);
		}
		if (v14 >= 0)
		{
			v27 = *(_QWORD*)(a1 + 56);
			*(_DWORD*)(a1 + 64) = -1082130432;
			*(_DWORD*)(a1 + 68) = a3[5];
			*(_DWORD*)(a1 + 80) = a3[8];
			*(_DWORD*)(a1 + 88) = a3[9];
			v28 = (*(float(__fastcall**)(__int64))(*(_QWORD*)v27 + 112i64))(v27);
			v14 = 0;
			*(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 8);
			*(float*)(a1 + 92) = v28;
		}
	}
LABEL_26:
	if (v11)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
	return (unsigned int)v14;
}
// 140782A0C: variable 'v21' is possibly undefined
// 140782A62: variable 'v22' is possibly undefined
// 140782A62: variable 'v23' is possibly undefined
// 140782830: using guessed type char var_58[4];

