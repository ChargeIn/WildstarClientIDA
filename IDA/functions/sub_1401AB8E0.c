#include "../winhttp.h"

//----- (00000001401AB8E0) ----------------------------------------------------
__int64 __fastcall sub_1401AB8E0(__int64* a1)
{
	int v2; // r15d
	__int64 v3; // rcx
	__int64 v4; // rax
	__int64 v5; // rdx
	int v6; // eax
	unsigned __int8* v7; // rdx
	__int64 v8; // rbp
	__int64 v9; // rsi
	unsigned int v10; // r14d
	bool v11; // zf
	int v13; // eax
	unsigned __int8* v14; // rdx

	v2 = 0;
	while (1)
	{
		if (!*((_DWORD*)a1 + 39))
		{
			sub_1401AA730((__int64)a1);
			if (!*((_DWORD*)a1 + 39))
				break;
		}
		v3 = *((unsigned int*)a1 + 37);
		v4 = a1[10];
		*((_DWORD*)a1 + 34) = 0;
		v5 = *(unsigned __int8*)(v3 + v4);
		*(_WORD*)(a1[735] + 2i64 * *((unsigned int*)a1 + 1469)) = 0;
		*(_BYTE*)((unsigned int)(*((_DWORD*)a1 + 1469))++ + a1[733]) = v5;
		++* ((_WORD*)a1 + 2 * v5 + 94);
		++* ((_DWORD*)a1 + 37);
		LODWORD(v4) = *((_DWORD*)a1 + 1468);
		--* ((_DWORD*)a1 + 39);
		if (*((_DWORD*)a1 + 1469) == (_DWORD)v4 - 1)
		{
			v6 = *((_DWORD*)a1 + 33);
			if (v6 < 0)
				v7 = 0i64;
			else
				v7 = (unsigned __int8*)(a1[10] + (unsigned int)v6);
			sub_1401CCB30((__int64)a1, v7, *((_DWORD*)a1 + 37) - v6, 0);
			v8 = *a1;
			*((_DWORD*)a1 + 33) = *((_DWORD*)a1 + 37);
			v9 = *(_QWORD*)(v8 + 40);
			sub_1401CD200(v9);
			v10 = *(_DWORD*)(v9 + 40);
			if (v10 > *(_DWORD*)(v8 + 24))
				v10 = *(_DWORD*)(v8 + 24);
			if (v10)
			{
				sub_1407DB590(*(int**)(v8 + 16), *(int**)(v9 + 32), v10);
				*(_QWORD*)(v8 + 16) += v10;
				*(_QWORD*)(v9 + 32) += v10;
				*(_DWORD*)(v8 + 28) += v10;
				*(_DWORD*)(v8 + 24) -= v10;
				v11 = *(_DWORD*)(v9 + 40) == v10;
				*(_DWORD*)(v9 + 40) -= v10;
				if (v11)
					*(_QWORD*)(v9 + 32) = *(_QWORD*)(v9 + 16);
			}
			if (!*(_DWORD*)(*a1 + 24))
				return 0i64;
		}
	}
	v13 = *((_DWORD*)a1 + 33);
	*((_DWORD*)a1 + 1475) = 0;
	if (v13 < 0)
		v14 = 0i64;
	else
		v14 = (unsigned __int8*)(a1[10] + (unsigned int)v13);
	sub_1401CCB30((__int64)a1, v14, *((_DWORD*)a1 + 37) - v13, 1);
	*((_DWORD*)a1 + 33) = *((_DWORD*)a1 + 37);
	sub_1401A9A10(*a1);
	LOBYTE(v2) = *(_DWORD*)(*a1 + 24) != 0;
	return (unsigned int)(v2 + 2);
}

