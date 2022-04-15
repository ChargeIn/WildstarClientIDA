#include "../winhttp.h"

//----- (0000000140123890) ----------------------------------------------------
__int64 __fastcall sub_140123890(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
	__int64 v8; // rax
	__int64 v9; // rcx
	int v10; // ebp
	__int64 v11; // rcx
	int v12; // esi
	__int64 v13; // rcx
	int v14; // edi
	__int64 v15; // rcx
	int v16; // eax
	int v17; // ecx
	int v18; // edi
	int v19; // edx
	int* v20; // rax
	__int64 v21; // rbx
	__int64 v22; // rcx
	__int16* v23; // rax
	__int64 v24; // rcx
	__int16* v25; // rax
	__int64 v26; // rax
	__int64 v27; // rcx
	int v29; // [rsp+60h] [rbp+8h] BYREF
	int v30; // [rsp+64h] [rbp+Ch]
	__int64 v31; // [rsp+68h] [rbp+10h] BYREF

	v31 = a2;
	v8 = sub_1400E58C0(a1, (int*)L"Chat");
	sub_140122A00((int*)&v31, *(_QWORD*)(v8 + 96), a3);
	v9 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v9 + 992))
		v10 = *(_DWORD*)(v9 + 996);
	else
		v10 = sub_14010D1C0(v9);
	v11 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v11 + 992))
		v12 = *(_DWORD*)(v11 + 1008);
	else
		v12 = sub_14010D2F0(v11);
	v13 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v13 + 992))
		v14 = *(_DWORD*)(v13 + 1000);
	else
		v14 = sub_14010CF80(v13);
	v15 = *(_QWORD*)(a1 + 2928);
	if (*(_BYTE*)(v15 + 992))
		v16 = *(_DWORD*)(v15 + 1004);
	else
		v16 = sub_14010D0A0(v15);
	v17 = v16 + v14;
	v18 = HIDWORD(v31);
	v19 = v17 + v31 + 8;
	if (v19 < 200)
		v19 = 200;
	v29 = v19;
	v30 = v12 + v10 + HIDWORD(v31) + 32;
	v20 = sub_14018B280(1152i64, 0);
	if (v20)
		v21 = sub_1401224C0((__int64)v20, a1, &v29, a4, a5);
	else
		v21 = 0i64;
	*(_QWORD*)(v21 + 1096) = sub_140123230(v21, a3, v18);
	v23 = sub_14034BDD0(v22, 3);
	*(_QWORD*)(v21 + 1024) = sub_140123490(v21, 2, (__int64)v23);
	v25 = sub_14034BDD0(v24, 1);
	v26 = sub_140123490(v21, 1, (__int64)v25);
	v27 = *(_QWORD*)(v21 + 32);
	*(_QWORD*)(v21 + 1032) = v26;
	*(_QWORD*)(v21 + 1120) = 0i64;
	sub_1400E7280(v27, (void(__fastcall***)(_QWORD))v21, L"DefaultStratum");
	sub_1400E8B00(*(_QWORD*)(v21 + 32), v21);
	return v21;
}
// 1401239C1: variable 'v22' is possibly undefined
// 1401239E2: variable 'v24' is possibly undefined
// 140A1EDC8: using guessed type wchar_t aDefaultstratum_4[15];
// 140A1EFF0: using guessed type wchar_t aChat_1[5];

