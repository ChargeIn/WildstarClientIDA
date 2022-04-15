#include "../winhttp.h"

//----- (00000001402D1520) ----------------------------------------------------
void __fastcall sub_1402D1520(__int64* a1, unsigned __int64 a2)
{
	int v2; // edi
	int v3; // esi
	char* v4; // rbx
	__int64 v5; // rcx
	char* v6; // rbx
	__int64 v7; // rcx
	__int64 v8[6]; // [rsp+20h] [rbp-D8h] BYREF
	__int128 v9; // [rsp+50h] [rbp-A8h]
	__int128 v10[2]; // [rsp+60h] [rbp-98h] BYREF
	__int64 v11; // [rsp+80h] [rbp-78h]
	char v12; // [rsp+88h] [rbp-70h] BYREF

	v8[0] = 0i64;
	v8[5] = 0i64;
	v9 = 0i64;
	memset(v10, 0, sizeof(v10));
	v11 = 0i64;
	sub_1402D15F0(a1, a2, (__int64)v8);
	v2 = 3;
	v3 = 3;
	v4 = &v12;
	do
	{
		v5 = *((_QWORD*)v4 - 1);
		v4 -= 8;
		if (v5)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		--v3;
	} while (v3 >= 0);
	v6 = (char*)v10 + 8;
	do
	{
		v7 = *((_QWORD*)v6 - 1);
		v6 -= 8;
		if (v7)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		--v2;
	} while (v2 >= 0);
}

