#include "../winhttp.h"

//----- (000000014084E930) ----------------------------------------------------
__int64 __fastcall sub_14084E930(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
	unsigned int v8; // eax
	__int64 v9; // r9
	unsigned int v10; // r8d
	unsigned int v11; // r10d
	unsigned __int8* v12; // r9
	unsigned int v13; // r11d
	int v14; // ecx
	__int64 v15; // rdx
	float* v16; // rdx
	__int64 v17; // rcx
	_QWORD* v18; // rax
	_QWORD* v19; // rcx
	_QWORD* v20; // rax
	unsigned __int8* v21; // rdx
	unsigned int v22; // r9d
	__int64 v23; // rcx
	__int64 result; // rax
	__int64 v25; // rcx
	unsigned __int8* v26; // rax
	bool v27; // zf
	float* v28; // rcx

	v8 = sub_140852AE0(a1, a2, a3, a4, a5);
	v9 = *(_QWORD*)(a1 + 40);
	v10 = 0;
	v11 = v8;
	if (v9)
	{
		v12 = *(unsigned __int8**)(v9 + 24);
		if (v12)
		{
			v13 = *v12;
			v14 = 0;
			while (1)
			{
				v15 = (unsigned int)(v14 + 1);
				if (v12[v15] == 8)
					break;
				++v14;
				if ((unsigned int)v15 >= v13)
					goto LABEL_9;
			}
			v16 = (float*)&v12[16 * v14 + ((v13 + 4) & 0xFFFFFFFC)];
			if (v16)
				*(float*)(a2 + 8) = *v16 + *(float*)(a2 + 8);
		}
	}
LABEL_9:
	v17 = *(_QWORD*)(a1 + 112);
	if (!v17)
		return v11;
	v18 = *(_QWORD**)v17;
	v19 = *(_QWORD**)(v17 + 8);
	if (v18 == v19)
		return v11;
	do
	{
		if (*v18 == a4)
			break;
		v18 += 2;
	} while (v18 != v19);
	if (v18 == v19)
		return v11;
	v20 = v18 + 1;
	if (!v20)
		return v11;
	v21 = *(unsigned __int8**)(*v20 + 24i64);
	if (!v21)
		return v11;
	v22 = *v21;
	while (1)
	{
		v23 = v10 + 1;
		if (v21[v23] == 8)
			break;
		++v10;
		if ((unsigned int)v23 >= v22)
			return v11;
	}
	v25 = 16i64 * v10;
	v26 = &v21[(v22 + 4) & 0xFFFFFFFC];
	v27 = &v26[v25] == 0i64;
	v28 = (float*)&v26[v25];
	result = v11;
	if (!v27)
		*(float*)(a2 + 8) = *v28 + *(float*)(a2 + 8);
	return result;
}

