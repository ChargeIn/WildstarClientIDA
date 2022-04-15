#include "../winhttp.h"

//----- (00000001406E6910) ----------------------------------------------------
void __fastcall sub_1406E6910(__int64 a1, __int64* a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
	unsigned __int64 v7; // rbx
	__int64* v10; // r9
	int*** v12; // r14
	unsigned __int8 v13; // cl
	unsigned __int8 v14; // al
	int v15; // r12d
	__int64 v16; // rdi
	int* v17; // rax
	int* v18; // r15

	v7 = 0i64;
	*(_QWORD*)a4 = 0i64;
	*(_QWORD*)(a4 + 8) = 15i64;
	*(_DWORD*)(a4 + 16) = 0;
	*(_DWORD*)(a4 + 20) = 15;
	*(_QWORD*)a5 = 0i64;
	*(_QWORD*)(a5 + 8) = 15i64;
	*(_DWORD*)(a5 + 16) = 0;
	*(_DWORD*)(a5 + 20) = 17;
	v10 = a2;
	*(_QWORD*)a6 = 0i64;
	*(_QWORD*)(a6 + 8) = 15i64;
	*(_DWORD*)(a6 + 16) = 0;
	*(_DWORD*)(a6 + 20) = 16;
	*(_QWORD*)a7 = 0i64;
	*(_QWORD*)(a7 + 8) = 15i64;
	*(_DWORD*)(a7 + 16) = 0;
	for (*(_DWORD*)(a7 + 20) = 18; v7 < *(_QWORD*)(a1 + 2464); ++v7)
	{
		v12 = *(int****)(*(_QWORD*)(a1 + 2456) + 8 * v7);
		v13 = *((_BYTE*)v12 + 68);
		v14 = *((_BYTE*)*v12 + 64);
		if (v13 > v14)
		{
			v15 = v13 - v14;
			sub_140003460(v10, **v12);
			v16 = *(_QWORD*)(a3 + 8);
			v17 = sub_14018DB00(*(_QWORD*)a3, v16 + 1, 1i64);
			v18 = v17;
			*((_BYTE*)v17 + v16) = v15;
			if (*(int**)a3 != v17)
			{
				sub_1407DB590(v17, *(int**)a3, *(_QWORD*)(a3 + 8));
				if (*(_QWORD*)a3)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(*(_QWORD*)a3 - 16i64) + 8i64))(*(_QWORD*)a3 - 16i64);
				*(_QWORD*)a3 = v18;
			}
			v10 = a2;
			*(_QWORD*)(a3 + 8) = v16 + 1;
			*(_QWORD*)a4 += (unsigned int)(v15 * (**v12)[6]);
			*(_QWORD*)a5 += (unsigned int)(v15 * (**v12)[8]);
			*(_QWORD*)a6 += (unsigned int)(v15 * (**v12)[7]);
			*(_QWORD*)a7 += (unsigned int)(v15 * (**v12)[9]);
		}
	}
}

