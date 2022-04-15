#include "../winhttp.h"

//----- (000000014028C380) ----------------------------------------------------
__int64 __fastcall sub_14028C380(__int64 a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
	__int64 v9; // rdx
	__int64 result; // rax
	int v12; // eax
	__int64 v13; // rcx
	__int64 v14; // rdx
	int v15; // esi
	unsigned int v16; // edi
	__int64 v17; // rax
	bool v18; // cf
	__int64 v19; // rax
	int* v20; // rax
	int v21; // ecx
	int* v22; // rdx
	_QWORD* i; // rax
	__int64 v24; // rax
	__int64* v25; // rcx
	__int64 v26; // rax

	*(_DWORD*)(a1 + 28) = a2;
	v9 = *(_QWORD*)(a1 + 16);
	*(_DWORD*)(a1 + 48) = a5;
	*(_DWORD*)(a1 + 52) = a6;
	*(_DWORD*)(a1 + 56) = a7;
	*(_DWORD*)(a1 + 24) = 0;
	*(_DWORD*)(a1 + 60) = a8;
	*(_DWORD*)(a1 + 32) = a3;
	*(_QWORD*)(a1 + 36) = 1i64;
	*(_DWORD*)(a1 + 44) = a4;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_DWORD*)(a1 + 64) = a9;
	result = sub_140263970((int*)(a1 + 24), v9 + 136);
	if ((int)result >= 0)
	{
		v12 = sub_140263E70((_DWORD*)(a1 + 24));
		v13 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(a1 + 136) = v12;
		v14 = 4i64 * *(int*)(a1 + 52);
		v15 = *(_DWORD*)(v14 + *(_QWORD*)(v13 + 7032));
		if (!*(_DWORD*)(v14 + *(_QWORD*)(v13 + 7040)) && (v15 & 0x200) == 0)
		{
			v16 = *(_DWORD*)(a1 + 44);
			v17 = 16i64 * v16;
			if (!is_mul_ok(v16, 0x10ui64))
				v17 = -1i64;
			v18 = __CFADD__(v17, 8i64);
			v19 = v17 + 8;
			if (v18)
				v19 = -1i64;
			v20 = sub_14018B280(v19, 0);
			if (v20)
			{
				v21 = v16 - 1;
				v22 = v20 + 2;
				*v20 = v16;
				for (i = v20 + 2; v21 >= 0; i += 2)
				{
					--v21;
					*i = 0i64;
				}
			}
			else
			{
				v22 = 0i64;
			}
			*(_QWORD*)(a1 + 144) = v22;
		}
		if ((v15 & 1) != 0)
		{
			v24 = 4i64 * *(unsigned int*)(a1 + 44);
			if (!is_mul_ok(*(unsigned int*)(a1 + 44), 4ui64))
				v24 = -1i64;
			*(_QWORD*)(a1 + 152) = sub_14018B280(v24, 0);
		}
		result = sub_14028C810(a1, 2);
		if ((int)result >= 0)
		{
			v25 = (__int64*)(*(_QWORD*)(a1 + 16) + 7216i64);
			if (!*(_QWORD*)(a1 + 240))
			{
				*(_QWORD*)(a1 + 240) = v25;
				*(_QWORD*)(a1 + 248) = *v25;
				*v25 = a1;
				v26 = *(_QWORD*)(a1 + 248);
				if (v26)
					*(_QWORD*)(v26 + 240) = a1 + 248;
			}
			return 0i64;
		}
	}
	return result;
}

