#include "../winhttp.h"

//----- (0000000140253740) ----------------------------------------------------
__int64 __fastcall sub_140253740(_QWORD* a1)
{
	__int64 result; // rax
	__int64 v3; // rcx
	__int64 v4; // rcx
	__int64 v5; // rcx
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	_QWORD* v9; // rdi
	int i; // esi
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rcx
	__int64 v15; // rcx
	__int64 v16; // rcx
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	__int64 v20; // rcx
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rcx
	__int64 v25; // rcx
	__int64 v26; // rcx
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 v39; // rcx
	__int64 v40; // rcx
	__int64 v41; // rcx
	__int64 v42; // rcx
	__int64 v43; // rcx

	*a1 = off_140B60750;
	result = sub_140255750((__int64)a1);
	v3 = a1[222];
	if (v3)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		a1[222] = 0i64;
	}
	v4 = a1[223];
	if (v4)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		a1[223] = 0i64;
	}
	v5 = a1[224];
	if (v5)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 8i64))(v5);
		a1[224] = 0i64;
	}
	v6 = a1[225];
	if (v6)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v6 + 8i64))(v6);
		a1[225] = 0i64;
	}
	v7 = a1[226];
	if (v7)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 8i64))(v7);
		a1[226] = 0i64;
	}
	v8 = a1[227];
	if (v8)
	{
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
		a1[227] = 0i64;
	}
	v9 = a1 + 309;
	for (i = 1; i >= 0; --i)
	{
		v11 = *(v9 - 2);
		v9 -= 2;
		if (v11)
			result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	}
	v12 = a1[287];
	if (v12)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	v13 = a1[286];
	if (v13)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 8i64))(v13);
	v14 = a1[285];
	if (v14)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v14 + 8i64))(v14);
	v15 = a1[284];
	if (v15)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v15 + 8i64))(v15);
	v16 = a1[283];
	if (v16)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	v17 = a1[282];
	if (v17)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
	v18 = a1[281];
	if (v18)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
	v19 = a1[280];
	if (v19)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
	v20 = a1[279];
	if (v20)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v20 + 8i64))(v20);
	v21 = a1[278];
	if (v21)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
	v22 = a1[277];
	if (v22)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 8i64))(v22);
	v23 = a1[276];
	if (v23)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v23 + 8i64))(v23);
	v24 = a1[275];
	if (v24)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v24 + 8i64))(v24);
	v25 = a1[274];
	if (v25)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v25 + 8i64))(v25);
	v26 = a1[273];
	if (v26)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 8i64))(v26);
	v27 = a1[272];
	if (v27)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v27 + 8i64))(v27);
	v28 = a1[271];
	if (v28)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
	v29 = a1[270];
	if (v29)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v29 + 8i64))(v29);
	v30 = a1[269];
	if (v30)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v30 + 8i64))(v30);
	v31 = a1[268];
	if (v31)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v31 + 8i64))(v31);
	v32 = a1[267];
	if (v32)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
	v33 = a1[266];
	if (v33)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v33 + 8i64))(v33);
	v34 = a1[265];
	if (v34)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 8i64))(v34);
	v35 = a1[264];
	if (v35)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
	v36 = a1[263];
	if (v36)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v36 + 8i64))(v36);
	v37 = a1[262];
	if (v37)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v37 + 8i64))(v37);
	v38 = a1[261];
	if (v38)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v38 + 8i64))(v38);
	v39 = a1[260];
	if (v39)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v39 + 8i64))(v39);
	v40 = a1[259];
	if (v40)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v40 + 8i64))(v40);
	v41 = a1[258];
	if (v41)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v41 + 8i64))(v41);
	v42 = a1[257];
	if (v42)
		result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42);
	v43 = a1[138];
	if (v43)
		return (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v43 - 16) + 8i64))(v43 - 16);
	return result;
}
// 140B60750: using guessed type __int64 (__fastcall *off_140B60750[5])();

