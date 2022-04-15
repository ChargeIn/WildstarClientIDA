#include "../winhttp.h"

//----- (00000001405FF6A0) ----------------------------------------------------
int* __fastcall sub_1405FF6A0(__int64 a1, _DWORD* a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	__int64 v6; // rbx
	__int64 v8[11]; // [rsp+20h] [rbp-79h] BYREF
	_QWORD v9[15]; // [rsp+78h] [rbp-21h] BYREF
	__int64 v10; // [rsp+100h] [rbp+67h] BYREF
	int* v11; // [rsp+110h] [rbp+77h] BYREF

	v2 = *(_QWORD*)(a1 + 8);
	v5 = *(_QWORD*)(v2 + 8);
	v6 = v2;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < *a2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v6 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v6 != v2 && *a2 >= *(_DWORD*)(v6 + 32))
		return (int*)(v6 + 40);
	sub_1407E4830((int*)v8, 0i64, 0x58ui64);
	LODWORD(v9[0]) = *a2;
	v9[1] = v8[0];
	v9[2] = v8[1];
	v9[3] = v8[2];
	v10 = v6;
	v9[4] = v8[3];
	v9[5] = v8[4];
	v9[6] = v8[5];
	v9[7] = v8[6];
	v9[8] = v8[7];
	v9[9] = v8[8];
	v9[10] = v8[9];
	v9[11] = v8[10];
	sub_1405FF7A0(a1, &v11, &v10, v9);
	return v11 + 10;
}

