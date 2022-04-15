#include "../winhttp.h"

//----- (000000014018D060) ----------------------------------------------------
int* __fastcall sub_14018D060(__int64 a1, unsigned __int64 a2)
{
	__int64 v2; // rax
	unsigned __int64 v5; // rdx
	int* result; // rax
	unsigned __int64 v7; // rdi
	__int64 v8; // rcx
	__int64* v9; // rax
	unsigned __int64 v10; // rcx
	_WORD* v11; // rax
	__int64 v12; // rdi
	_WORD* v13; // rcx
	unsigned __int64 v14; // [rsp+30h] [rbp+8h] BYREF
	unsigned __int64 v15; // [rsp+38h] [rbp+10h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = (*(_QWORD*)(a1 + 16) - v2) >> 1;
	if (a2 <= v5)
		return sub_14001C2B0(a1, (int*)(v2 + 2 * a2), *(int**)(a1 + 16));
	v7 = a2 - v5;
	v8 = *(_QWORD*)(a1 + 24) - v2;
	result = (int*)(v5 + v7);
	v14 = v7;
	if (v5 + v7 > (v8 >> 1) - 1)
	{
		v15 = v5;
		v9 = (__int64*)&v14;
		if (v5 >= v7)
			v9 = (__int64*)&v15;
		result = (int*)sub_1400A7F20((_QWORD*)a1, *v9 + v5);
	}
	if (v7)
	{
		v10 = v7 - 1;
		v11 = (_WORD*)(*(_QWORD*)(a1 + 16) + 2i64);
		if (v7 != 1)
		{
			do
			{
				if (v11)
					*v11 = 0;
				++v11;
				--v10;
			} while (v10);
		}
		v12 = 2 * v7;
		v13 = (_WORD*)(v12 + *(_QWORD*)(a1 + 16));
		if (v13)
			*v13 = 0;
		result = *(int**)(a1 + 16);
		*(_WORD*)result = 0;
		*(_QWORD*)(a1 + 16) += v12;
	}
	return result;
}

