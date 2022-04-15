#include "../winhttp.h"

//----- (00000001404D6290) ----------------------------------------------------
void __fastcall sub_1404D6290(__int64 a1)
{
	__int64* v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // rcx
	_DWORD* v5; // rcx
	int v6; // eax
	__int64 v7; // [rsp+20h] [rbp-28h] BYREF
	int v8; // [rsp+28h] [rbp-20h]
	__int64 v9; // [rsp+2Ch] [rbp-1Ch]
	__int64 v10; // [rsp+34h] [rbp-14h]
	int v11; // [rsp+3Ch] [rbp-Ch]
	char v12; // [rsp+50h] [rbp+8h] BYREF
	char v13; // [rsp+58h] [rbp+10h] BYREF

	v1 = *(__int64**)(a1 + 200);
	sub_140729890((__int64)v1);
	v3 = v1[146];
	v8 = 1065353216;
	*(_DWORD*)(v3 + 72) = 0;
	*(_BYTE*)(v3 + 76) = 0;
	v4 = *(_QWORD*)(v3 + 88);
	v7 = 1118i64;
	v9 = 0i64;
	v10 = 3i64;
	v11 = 0;
	(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v4 + 584i64))(v4, 0i64, &v7);
	sub_140727F60(v1);
	v5 = *(_DWORD**)(a1 + 200);
	v6 = dword_140C636A8;
	*(_DWORD*)(a1 + 84) = 0;
	v5[6] = v6;
	v5[5] = 1;
	v5[4] = 0;
	v5[370] = 0;
	v12 = 0;
	sub_1400161D0(qword_140C635F0, 0x3D3u, (__int64)&v12);
	v13 = 0;
	sub_1403F4900(qword_140C65898, 0x793u, (__int64)&v13);
}
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C636A8: using guessed type int dword_140C636A8;
// 140C65898: using guessed type __int64 qword_140C65898;

