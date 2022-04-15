#include "../winhttp.h"

//----- (0000000140030420) ----------------------------------------------------
__int64 __fastcall sub_140030420(__int64 a1, __int64 a2, unsigned __int16** a3, int a4)
{
	unsigned int v6; // ebx
	int v8; // eax
	__int64 v9; // r13
	int v10; // eax
	_DWORD* v11; // r14
	__int64 v12; // r15
	int v13; // ebx
	__int64 v14; // r10
	__int64 v15; // r8
	int v16; // edx
	__int64 v17; // rcx
	int v18; // eax
	int v19; // eax
	BOOL v20; // r9d
	BOOL v21; // r8d
	int v22; // eax
	bool v23; // zf
	unsigned int v24; // esi
	__int64 v25; // rax
	unsigned int* v26; // r10
	__int64 v27; // rcx
	_DWORD* v28; // rdx
	__int64* v29; // rcx
	unsigned __int64 v30; // rcx
	__int64 v31; // rdx
	__int64 v32; // r9
	_DWORD* v33; // r10
	_DWORD* v34; // r11
	unsigned __int64 v35; // rcx
	unsigned __int64 v36; // rdx
	_DWORD* v37; // rax
	_DWORD* v39; // [rsp+20h] [rbp-48h] BYREF
	unsigned __int64 v40; // [rsp+28h] [rbp-40h]
	__int64 v41; // [rsp+30h] [rbp-38h] BYREF
	__int64 v42; // [rsp+38h] [rbp-30h]

	*(_QWORD*)a2 = 0i64;
	*(_QWORD*)(a2 + 8) = 0i64;
	*(_QWORD*)(a2 + 16) = 0i64;
	*(_QWORD*)(a2 + 24) = 0i64;
	v6 = 0;
	v42 = 0i64;
	v41 = 0i64;
	v8 = sub_14002E180((__int64)&v41, a3);
	v9 = v41;
	if (!v8)
	{
		v6 = -2147467259;
		goto LABEL_56;
	}
	v40 = 0i64;
	v39 = 0i64;
	v10 = sub_14002DAF0((__int64)&v39, v41, v42);
	v11 = v39;
	if (v10 < 0)
		goto LABEL_51;
	if (v40 < 0x1C)
		goto LABEL_51;
	v12 = 7i64;
	if (*v39 != 61453)
		goto LABEL_51;
	if (v39[1] != 2)
	{
		v13 = -2147467260;
	LABEL_52:
		v16 = v13;
		goto LABEL_53;
	}
	v14 = (unsigned int)v39[5];
	if (6i64 * (unsigned int)v39[6] + 8 * v14 + 28 != v40)
	{
	LABEL_51:
		v13 = -2147467259;
		goto LABEL_52;
	}
	if (a4 == 23)
		a4 = *(_DWORD*)(a1 + 4864);
	v15 = (int)v39[2];
	v16 = 1;
	if ((int)v15 >= 17 || a4 >= 23)
	{
		v17 = 0i64;
	}
	else
	{
		v17 = a1 + 12 * (a4 + 23 * v15);
		if (v17 && *(_DWORD*)(v17 + 8))
		{
			*(_DWORD*)a2 = 0;
			goto LABEL_20;
		}
	}
	*(_DWORD*)a2 = 1;
	if (v17)
	{
		v18 = *(_DWORD*)(v17 + 4);
		if (v18)
			*(_DWORD*)(a2 + 28) = v18;
	}
LABEL_20:
	v19 = v11[3];
	v20 = v15 != *(_DWORD*)(a1 + 4852);
	v23 = v19 == *(_DWORD*)(a1 + 4856);
	*(_DWORD*)(a2 + 16) = v15;
	v21 = !v23;
	*(_DWORD*)(a2 + 20) = v19;
	v22 = v11[4];
	*(_DWORD*)(a2 + 4) = v20;
	v23 = v22 == *(_DWORD*)(a1 + 4860);
	*(_DWORD*)(a2 + 8) = v21;
	*(_DWORD*)(a2 + 24) = v22;
	*(_DWORD*)(a2 + 12) = !v23;
	if (!*(_DWORD*)a2 && v23 && !v20 && !v21)
	{
		v24 = 0;
		if ((_DWORD)v14)
		{
			do
			{
				v25 = *(_QWORD*)(a1 + 4728);
				v26 = &v11[v12];
				v12 += 2i64;
				v27 = *(_QWORD*)(v25 + 8);
				v28 = (_DWORD*)v25;
				while (v27)
				{
					if (*(_DWORD*)(v27 + 32) < *v26)
					{
						v27 = *(_QWORD*)(v27 + 24);
					}
					else
					{
						v28 = (_DWORD*)v27;
						v27 = *(_QWORD*)(v27 + 16);
					}
				}
				if (v28 == (_DWORD*)v25 || *v26 < v28[8])
				{
					v41 = *(_QWORD*)(a1 + 4728);
					v29 = &v41;
				}
				else
				{
					v39 = v28;
					v29 = (__int64*)&v39;
				}
				if (*v29 != v25)
					sub_14002EC40(a1, *v26, v26[1]);
				++v24;
			} while (v24 < v11[5]);
		}
		v30 = 0i64;
		v31 = (__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3;
		if (v31 >= 4)
		{
			do
			{
				v30 += 4i64;
				*(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v30 - 28) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v30 - 20) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v30 - 12) = 0;
				*(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v30 - 4) = 0;
			} while (v30 < v31 - 3);
		}
		for (; v30 < v31; *(_DWORD*)(*(_QWORD*)(a1 + 4824) + 8 * v30 - 4) = 0)
			++v30;
		v32 = (unsigned int)v11[6];
		if (v11[6])
		{
			v33 = &v11[v12];
			do
			{
				v34 = v33;
				v33 = (_DWORD*)((char*)v33 + 6);
				v35 = 0i64;
				v36 = (__int64)(*(_QWORD*)(a1 + 4832) - *(_QWORD*)(a1 + 4824)) >> 3;
				if (v36)
				{
					v37 = *(_DWORD**)(a1 + 4824);
					while (*v34 != *v37)
					{
						++v35;
						v37 += 2;
						if (v35 >= v36)
							goto LABEL_49;
					}
					*(float*)(*(_QWORD*)(a1 + 4824) + 8 * v35 + 4) = fmaxf(
						-1.0,
						fminf((float)*((__int16*)v34 + 2) * 0.000030518509, 1.0));
				}
			LABEL_49:
				--v32;
			} while (v32);
		}
		goto LABEL_54;
	}
LABEL_53:
	v6 = v16;
LABEL_54:
	if (v11)
		(*(void(__fastcall**)(_DWORD*))(*((_QWORD*)v11 - 2) + 8i64))(v11 - 4);
LABEL_56:
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	return v6;
}

