#include "../winhttp.h"

//----- (0000000140787BD0) ----------------------------------------------------
__int64 __fastcall sub_140787BD0(__int64 a1, _DWORD* a2, __int64 a3)
{
	__int64 result; // rax
	int v7; // edx
	_QWORD* v8; // rcx
	_QWORD* i; // rbx
	__int64 v10; // rax
	int v11; // eax
	int* v12; // rdx
	unsigned int v13; // edx
	__int64 v14; // rax
	int v15; // ecx
	__int64 v16; // [rsp+30h] [rbp-18h]

	if (!a3)
		return 2147500037i64;
	v7 = 1;
	if (a2)
	{
		if (a2[2] != **(_DWORD**)(a3 + 8) || a2[1] != **(_DWORD**)(a1 + 8))
			return 2147500037i64;
		v7 = a2[3];
	}
	v8 = *(_QWORD**)(a1 + 40);
	for (i = (_QWORD*)*v8; i != v8; i = (_QWORD*)*i)
	{
		v10 = i[2];
		if (v10)
			v11 = *(_DWORD*)(v10 + 12);
		else
			v11 = 1;
		if (v7 <= v11)
			break;
	}
	LODWORD(v16) = 2139095039;
	v12 = sub_14018B280(40i64, 0);
	if (v12 != (int*)-16i64)
	{
		*((_QWORD*)v12 + 2) = a2;
		*((_QWORD*)v12 + 3) = a3;
		*((_QWORD*)v12 + 4) = v16;
	}
	*(_QWORD*)v12 = i;
	*((_QWORD*)v12 + 1) = i[1];
	*(_QWORD*)i[1] = v12;
	i[1] = v12;
	v13 = *(_DWORD*)(a1 + 20);
	v14 = *(_QWORD*)(a3 + 8);
	if (v13)
	{
		if (*(_DWORD*)(v14 + 16) < v13)
			v13 = *(_DWORD*)(v14 + 16);
		result = 0i64;
		*(_DWORD*)(a1 + 20) = v13;
	}
	else
	{
		v15 = *(_DWORD*)(v14 + 16);
		result = 0i64;
		*(_DWORD*)(a1 + 20) = v15;
	}
	return result;
}
// 140787C82: variable 'v16' is possibly undefined

