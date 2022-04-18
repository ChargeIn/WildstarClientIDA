#include "../winhttp.h"

//----- (00000001403B74E0) ----------------------------------------------------
__int64 __fastcall sub_1403B74E0(__int64 a1, __int64* a2)
{
	int v5; // r12d
	unsigned int v6; // eax
	__int64 v7; // rcx
	__int64 v8; // rdx
	int v9; // r13d
	_DWORD* v10; // rsi
	_DWORD* v11; // rdi
	__int64 v12; // r14
	__int64 v13; // rax
	__int64 v14; // r15
	int* v15; // rax
	int* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rcx
	__int64 v19; // rcx
	int v20; // [rsp+70h] [rbp+8h] BYREF
	unsigned int v21; // [rsp+74h] [rbp+Ch]
	int v22; // [rsp+80h] [rbp+18h] BYREF
	unsigned int v23; // [rsp+84h] [rbp+1Ch]
	char v24; // [rsp+88h] [rbp+20h] BYREF

	if (!*(_QWORD*)(a1 + 120))
		return 0i64;
	v5 = (unsigned __int8)BYTE1(a2[1]);
	v6 = (unsigned __int8)a2[1];
	v7 = a2[3];
	v8 = *a2;
	v21 = v6;
	v20 = v5;
	v9 = BYTE1(v7);
	v23 = (unsigned __int8)v7;
	v22 = BYTE1(v7);
	v10 = (_DWORD*)sub_1403ACBB0(a1 + 160, v8);
	v11 = (_DWORD*)sub_1403ACBB0(a1 + 160, a2[2]);
	v12 = sub_1403AC780(a1 + 160, &v20);
	v13 = sub_1403AC780(a1 + 160, &v22);
	v14 = v13;
	if (!v10 || !v11 || v10 != (_DWORD*)v13 && v11 != (_DWORD*)v12)
		return 1i64;
	(**(void(__fastcall***)(_DWORD*))v10)(v10);
	(**(void(__fastcall***)(_DWORD*))v11)(v11);
	v15 = (int*)(*(__int64(__fastcall**)(_DWORD*, char*))(*(_QWORD*)v10 + 32i64))(v10, &v24);
	sub_1403D2E10(a1 + 160, v15, 0i64);
	v16 = (int*)(*(__int64(__fastcall**)(_DWORD*, char*))(*(_QWORD*)v11 + 32i64))(v11, &v24);
	sub_1403D2E10(a1 + 160, v16, 0i64);
	sub_1403D2E10(a1 + 160, &v20, (__int64)v10);
	sub_1403D2E10(a1 + 160, &v22, (__int64)v11);
	(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v10 + 8i64))(v10);
	(*(void(__fastcall**)(_DWORD*))(*(_QWORD*)v11 + 8i64))(v11);
	v17 = *(_QWORD*)(a1 + 120);
	*(_DWORD*)(a1 + 28568) = 1;
	v18 = *(_QWORD*)(v17 + 5640);
	if (v18)
	{
		while (*(_DWORD*)(v18 + 4) != 3 || *(_DWORD*)(v18 + 12) != 777)
		{
			v18 = *(_QWORD*)(v18 + 136);
			if (!v18)
				goto LABEL_13;
		}
		sub_1407A0390(v18);
	}
LABEL_13:
	sub_1400A8020(*(_QWORD*)(a1 + 29504) + 4672i64);
	sub_1400A8020(*(_QWORD*)(a1 + 29504) + 3720i64);
	v19 = *(_QWORD*)(a1 + 32736);
	if (v19)
		sub_1400A8020(v19 + 376);
	if (!v5)
		Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PlayerEquippedItemChanged", byte_1409E9FEC, v21, v10, v12);
	if (!v9)
		Apollo_LUAEvent(*(_QWORD*)(a1 + 29504), "PlayerEquippedItemChanged", byte_1409E9FEC, v23, v11, v14);
	if (!v10[8] || !v11[8])
		*(_DWORD*)(a1 + 1368) = 1;
	return 0i64;
}
// 1409E9FEC: using guessed type _BYTE byte_1409E9FEC[16];

