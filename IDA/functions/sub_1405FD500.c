#include "../winhttp.h"

//----- (00000001405FD500) ----------------------------------------------------
int* __fastcall sub_1405FD500(__int64 a1, int* a2)
{
	__int64 v2; // r9
	__int64 v4; // rcx
	__int64 v5; // rax
	int v7; // ecx
	int* v8; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v9; // [rsp+28h] [rbp-D8h] BYREF
	__int128 v10; // [rsp+30h] [rbp-D0h]
	__int128 v11; // [rsp+40h] [rbp-C0h]
	__int128 v12; // [rsp+50h] [rbp-B0h]
	__int128 v13; // [rsp+60h] [rbp-A0h]
	char v14[20]; // [rsp+70h] [rbp-90h]
	__int64 v15; // [rsp+84h] [rbp-7Ch]
	__int64 v16; // [rsp+8Ch] [rbp-74h]
	int v17; // [rsp+94h] [rbp-6Ch]
	__int64 v18; // [rsp+A0h] [rbp-60h] BYREF
	__int128 v19; // [rsp+A8h] [rbp-58h]
	__int128 v20; // [rsp+B8h] [rbp-48h]
	__int128 v21; // [rsp+C8h] [rbp-38h]
	__int128 v22; // [rsp+D8h] [rbp-28h]
	__int128 v23; // [rsp+E8h] [rbp-18h]
	unsigned __int128 v24; // [rsp+F8h] [rbp-8h]
	__int64 v25; // [rsp+108h] [rbp+8h]

	v2 = *(_QWORD*)(a1 + 8);
	v4 = *(_QWORD*)(v2 + 8);
	v5 = v2;
	while (v4)
	{
		if (*(_DWORD*)(v4 + 32) < (unsigned int)*a2)
		{
			v4 = *(_QWORD*)(v4 + 24);
		}
		else
		{
			v5 = v4;
			v4 = *(_QWORD*)(v4 + 16);
		}
	}
	if (v5 != v2 && (unsigned int)*a2 >= *(_DWORD*)(v5 + 32))
		return (int*)(v5 + 40);
	v16 = 0i64;
	v11 = 0ui64;
	v12 = 0ui64;
	v13 = 0ui64;
	v20 = 0ui64;
	v15 = 0i64;
	v17 = 0;
	v7 = *a2;
	*(_OWORD*)&v14[4] = 2ui64;
	v22 = 0ui64;
	LODWORD(v18) = v7;
	*(_QWORD*)&v10 = 0i64;
	*(_DWORD*)v14 = 0;
	v19 = v10;
	v24 = (unsigned __int128)2ui64 >> 96;
	v21 = 0ui64;
	v9 = v5;
	v23 = *(_OWORD*)v14;
	v25 = 0i64;
	sub_1405FD6D0(a1, &v8, &v9, &v18);
	return v8 + 10;
}
// 1405FD500: could not find valid save-restore pair for rsi
// 1405FD500: could not find valid save-restore pair for r14

