#include "../winhttp.h"

//----- (000000014084F690) ----------------------------------------------------
unsigned __int8* __fastcall sub_14084F690(_QWORD* a1, unsigned int a2, int a3, int a4)
{
	unsigned __int8* result; // rax
	int v5; // edi
	__int64 i; // rbx
	__int64 v11; // r10
	unsigned __int8* v12; // r8
	unsigned int v13; // r9d
	int v14; // ecx
	__int64 v15; // rdx
	float* v16; // rdx
	__int64 v17; // rdx
	unsigned __int8* v18; // rdx
	unsigned int v19; // r8d
	__int64 v20; // rcx
	float* v21; // rcx

	result = (unsigned __int8*)a1[14];
	v5 = 0;
	if (result)
	{
		for (i = *(_QWORD*)result; i != *((_QWORD*)result + 1); i += 16i64)
		{
			v11 = *(_QWORD*)(i + 8);
			v12 = *(unsigned __int8**)(v11 + 24);
			if (v12)
			{
				v13 = *v12;
				v14 = 0;
				while (1)
				{
					v15 = (unsigned int)(v14 + 1);
					if (v12[v15] == (_BYTE)a2)
						break;
					++v14;
					if ((unsigned int)v15 >= v13)
						goto LABEL_11;
				}
				v16 = (float*)&v12[16 * v14 + ((v13 + 4) & 0xFFFFFFFC)];
				if (v16 && *v16 != 0.0)
					(*(void(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, _DWORD, int, _DWORD))(*a1 + 368i64))(
						a1,
						a2,
						*(_QWORD*)(v11 + 16),
						0i64,
						0,
						4,
						0);
			}
		LABEL_11:
			result = (unsigned __int8*)a1[14];
		}
	}
	v17 = a1[5];
	if (v17)
	{
		v18 = *(unsigned __int8**)(v17 + 24);
		if (v18)
		{
			v19 = *v18;
			while (1)
			{
				v20 = (unsigned int)(v5 + 1);
				if (v18[v20] == (_BYTE)a2)
					break;
				++v5;
				if ((unsigned int)v20 >= v19)
					return result;
			}
			result = &v18[(v19 + 4) & 0xFFFFFFFC];
			v21 = (float*)&result[16 * v5];
			if (v21)
			{
				if (*v21 != 0.0)
					return (unsigned __int8*)(*(__int64(__fastcall**)(_QWORD*, _QWORD, _QWORD, _QWORD, _DWORD, int, int))(*a1 + 368i64))(
						a1,
						a2,
						0i64,
						0i64,
						0,
						a3,
						a4);
			}
		}
	}
	return result;
}

