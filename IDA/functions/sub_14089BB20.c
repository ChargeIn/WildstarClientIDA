#include "../winhttp.h"

//----- (000000014089BB20) ----------------------------------------------------
int* __fastcall sub_14089BB20(_DWORD* a1, __int64 a2)
{
	int v4; // eax
	int v5; // r8d
	int* v6; // rcx
	int v8; // [rsp+30h] [rbp+8h] BYREF

	v8 = *(unsigned __int16*)(a2 + 16);
	v4 = (*(__int64(__fastcall**)(_DWORD*, int*))(*(_QWORD*)a1 + 88i64))(a1, &v8);
	v5 = v8;
	v6 = *(int**)a2;
	*(_WORD*)(a2 + 18) = v8;
	*(_DWORD*)(a2 + 12) = v4;
	return sub_1407E4830(v6, 0i64, (unsigned int)(a1[3] * v5));
}

