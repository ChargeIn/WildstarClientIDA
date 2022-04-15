#include "../winhttp.h"

//----- (0000000140287CF0) ----------------------------------------------------
__int64 __fastcall sub_140287CF0(__int64 a1, _QWORD* a2, _QWORD* a3)
{
	_QWORD* v3; // rbx
	__int64 v6; // r9
	int v8[2]; // [rsp+20h] [rbp-38h] BYREF
	__int64 v9; // [rsp+28h] [rbp-30h]
	void(__fastcall * v10)(unsigned __int64*); // [rsp+30h] [rbp-28h]
	__int64 v11; // [rsp+38h] [rbp-20h]
	int v12; // [rsp+40h] [rbp-18h]

	v3 = (_QWORD*)(a1 + 48);
	*(_QWORD*)a1 = *a2;
	*(_QWORD*)(a1 + 8) = *a3;
	*(_QWORD*)(a1 + 16) = a3[1];
	v6 = a2[2];
	v9 = a1;
	*(_QWORD*)(a1 + 24) = v6;
	*(_QWORD*)(a1 + 32) = *(_QWORD*)(v6 + 8);
	*(_QWORD*)(a1 + 40) = *(_QWORD*)(v6 + 16);
	v8[0] = 4;
	v8[1] = 1;
	v11 = 0i64;
	v10 = sub_140288000;
	v12 = 1;
	sub_14019DCA0((__int64)v8, 1, 0i64, (int**)(a1 + 48));
	(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v3 + 72i64))(*v3, a2[3]);
	(*(void(__fastcall**)(_QWORD, _QWORD))(*(_QWORD*)*v3 + 72i64))(*v3, a3[3]);
	return (*(__int64(__fastcall**)(_QWORD))(*(_QWORD*)*v3 + 88i64))(*v3);
}

