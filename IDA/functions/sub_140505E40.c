#include "../winhttp.h"

//----- (0000000140505E40) ----------------------------------------------------
__int64 __fastcall sub_140505E40(__int64 a1)
{
	__int64 v1; // rdx
	int v2; // eax
	__int64 v3; // rdx
	int v4; // eax
	__int64 result; // rax
	__int64 v6; // [rsp+38h] [rbp-48h]
	__int64 v7; // [rsp+38h] [rbp-48h]
	__int64 v8; // [rsp+40h] [rbp-40h]
	__int64 v9; // [rsp+40h] [rbp-40h]
	__int64 v10; // [rsp+48h] [rbp-38h] BYREF
	__int64 v11; // [rsp+50h] [rbp-30h]
	__int64 v12; // [rsp+58h] [rbp-28h]
	__int64 v13; // [rsp+60h] [rbp-20h] BYREF
	__int64 v14; // [rsp+68h] [rbp-18h]
	__int64 v15; // [rsp+70h] [rbp-10h]

	if (!*(_BYTE*)(a1 + 1076))
	{
		*(_BYTE*)(a1 + 1076) = 1;
		v1 = *(_QWORD*)(a1 + 1112);
		v10 = 0i64;
		v11 = 1i64;
		v12 = 0i64;
		v13 = 0i64;
		v14 = 1i64;
		v15 = 0i64;
		if (v1)
		{
			v6 = *(_QWORD*)(v1 + 16);
			LODWORD(v8) = *(_DWORD*)(v1 + 24);
			v2 = *(_DWORD*)(v1 + 28);
			v10 = *(_QWORD*)(a1 + 1080);
			HIDWORD(v8) = v2;
			v11 = v6;
			v12 = v8;
		}
		v3 = *(_QWORD*)(a1 + 1344);
		if (v3)
		{
			v7 = *(_QWORD*)(v3 + 16);
			LODWORD(v9) = *(_DWORD*)(v3 + 24);
			v4 = *(_DWORD*)(v3 + 28);
			v13 = *(_QWORD*)(a1 + 1312);
			HIDWORD(v9) = v4;
			v14 = v7;
			v15 = v9;
		}
		return (*(__int64(__fastcall**)(__int64, void*, __int64, __int64*, __int64*))(*(_QWORD*)a1 + 120i64))(
			a1,
			&unk_1409F1114,
			10i64,
			&v10,
			&v13);
	}
	return result;
}

