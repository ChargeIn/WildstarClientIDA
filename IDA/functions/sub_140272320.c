#include "../winhttp.h"

//----- (0000000140272320) ----------------------------------------------------
__int64 __fastcall sub_140272320(__int64 a1)
{
	int* v2; // rsi
	_DWORD* v3; // rbx
	void(__fastcall * ***v4)(_QWORD); // r14
	int* v5; // rdi
	__int64 v6; // rbp
	void(__fastcall * **v7)(_QWORD); // rcx
	int v8; // r8d
	int v9; // edx
	int v10; // eax
	int v11; // eax
	__int64 v12; // r15
	__int64 result; // rax

	v2 = sub_14018B280(136i64, 0);
	if (v2)
	{
		*((_QWORD*)v2 + 15) = 0i64;
		*((_QWORD*)v2 + 16) = 0i64;
		*((_QWORD*)v2 + 1) = 0i64;
		*((_QWORD*)v2 + 4) = 0i64;
		*((_QWORD*)v2 + 7) = 0i64;
		*((_QWORD*)v2 + 10) = 0i64;
	}
	else
	{
		v2 = 0i64;
	}
	v3 = v2 + 4;
	v4 = (void(__fastcall****)(_QWORD))(a1 + 7544);
	v5 = (int*)(a1 + 7576);
	v6 = 4i64;
	do
	{
		v7 = *v4;
		v8 = v5[4];
		v9 = *v5;
		v10 = *(v5 - 12);
		*((_QWORD*)v3 - 1) = *v4;
		*v3 = v9;
		v3[1] = v8;
		*(v3 - 4) = v10;
		if (v7)
			(**v7)(v7);
		++v4;
		++v5;
		v3 += 6;
		--v6;
	} while (v6);
	v11 = *(_DWORD*)(a1 + 10400);
	v12 = a1 + 7672;
	v2[24] = v11;
	v2[25] = *(_DWORD*)(v12 + 2732);
	v2[26] = *(_DWORD*)(v12 + 2736);
	v2[27] = *(_DWORD*)(v12 + 2740);
	v2[28] = *(_DWORD*)(v12 + 2744);
	result = *(unsigned int*)(v12 + 2748);
	v2[29] = result;
	if (!*((_QWORD*)v2 + 15))
	{
		*((_QWORD*)v2 + 15) = v12;
		*((_QWORD*)v2 + 16) = *(_QWORD*)v12;
		*(_QWORD*)v12 = v2;
		result = *((_QWORD*)v2 + 16);
		if (result)
			*(_QWORD*)(result + 120) = v2 + 32;
	}
	return result;
}

