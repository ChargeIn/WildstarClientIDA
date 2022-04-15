#include "../winhttp.h"

//----- (0000000140827170) ----------------------------------------------------
_DWORD* __fastcall sub_140827170(unsigned int a1, __int64 a2)
{
	_DWORD* result; // rax
	_DWORD* v5; // rsi
	unsigned int v6; // edi
	unsigned int v7; // ebp
	__int64 v8; // rbx
	char* v9; // r12
	__int64 v10; // rax
	bool v11; // zf
	unsigned int v12; // r14d
	int* v13; // rax
	__int64 v14; // rdx

	result = (_DWORD*)sub_1408819F0(dword_140C10F20, 32 * (a1 - 1) + 40);
	v5 = result;
	if (!result)
		return result;
	v6 = 0;
	*result = 1;
	result[1] = a1;
	v7 = 0;
	if (!a1)
		return v5;
	v8 = a2 + 8;
	v9 = (char*)result - a2;
	while (1)
	{
		*(_QWORD*)&v9[v8] = *(_QWORD*)(v8 - 8);
		*(_QWORD*)&v9[v8 + 8] = *(_QWORD*)v8;
		*(_QWORD*)&v9[v8 + 16] = *(_QWORD*)(v8 + 8);
		*(_QWORD*)&v9[v8 + 24] = *(_QWORD*)(v8 + 16);
		if (*(_QWORD*)v8)
			break;
	LABEL_9:
		++v7;
		v8 += 32i64;
		if (v7 >= a1)
			return v5;
	}
	v10 = -1i64;
	do
		v11 = *(_WORD*)(*(_QWORD*)v8 + 2 * v10++ + 2) == 0;
	while (!v11);
	v12 = 2 * v10 + 2;
	v13 = (int*)sub_1408819F0(dword_140C10F20, v12);
	*(_QWORD*)&v9[v8 + 8] = v13;
	if (v13)
	{
		sub_1407DB590(v13, *(int**)v8, v12);
		goto LABEL_9;
	}
	v11 = (*v5)-- == 1;
	v5[1] = v7;
	if (v11)
	{
		if (v7)
		{
			do
			{
				v14 = *(_QWORD*)&v5[8 * v6 + 4];
				if (v14)
					sub_140881720(dword_140C10F20, v14);
				++v6;
			} while (v6 < v5[1]);
		}
		sub_140881720(dword_140C10F20, (__int64)v5);
	}
	return 0i64;
}
// 140C10F20: using guessed type int dword_140C10F20;

