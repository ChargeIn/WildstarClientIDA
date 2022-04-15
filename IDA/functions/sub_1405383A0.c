#include "../winhttp.h"

//----- (00000001405383A0) ----------------------------------------------------
_OWORD* __fastcall sub_1405383A0(_OWORD* a1, char* a2)
{
	__int64 v4; // rcx
	signed __int64 v5; // rdi
	int v6; // esi
	int** v7; // rbx
	int* v8; // rax
	void(__fastcall * **v9)(_QWORD); // rcx
	int* v10; // rax

	*a1 = *(_OWORD*)a2;
	v4 = (__int64)(a1 + 2);
	*(_OWORD*)(v4 - 16) = *((_OWORD*)a2 + 1);
	sub_140109690(v4, (__int64)(a2 + 32));
	v5 = a2 - (char*)a1;
	v6 = 5;
	v7 = (int**)(a1 + 7);
	do
	{
		*(v7 - 1) = 0i64;
		*v7 = 0i64;
		v7[1] = 0i64;
		v8 = sub_14018B280(16i64, 0);
		*(v7 - 1) = v8;
		*v7 = v8;
		v7[1] = v8 + 4;
		if (v8)
			*(_WORD*)v8 = 0;
		v9 = *(void(__fastcall****)(_QWORD))((char*)v7 + v5 - 32);
		if (v9)
			(**v9)(v9);
		v10 = *(int**)((char*)v7 + v5 - 32);
		v7 += 6;
		--v6;
		*(v7 - 10) = v10;
		*((_DWORD*)v7 - 18) = *(_DWORD*)((char*)v7 + v5 - 72);
	} while (v6 >= 0);
	return a1;
}

