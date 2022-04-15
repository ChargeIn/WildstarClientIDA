#include "../winhttp.h"

//----- (00000001402E42B0) ----------------------------------------------------
__int64 __fastcall sub_1402E42B0(__int64 a1, int** a2)
{
	int* v4; // rax
	int* v5; // rbx
	unsigned __int64 v6; // rcx
	__int64 v7; // rax
	int* v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rbp
	__int64 v12; // rdx
	__int64 v13; // rdi
	int v14; // r15d
	int v15; // r12d
	int v16; // r13d
	int* v17; // rax
	__int64 v18; // rsi
	int* v19; // rdi
	__int64 v20; // rcx
	int v21; // [rsp+20h] [rbp-58h]
	int v22; // [rsp+24h] [rbp-54h]
	__int64 v23; // [rsp+28h] [rbp-50h] BYREF
	__int64 v24; // [rsp+30h] [rbp-48h]
	int v26; // [rsp+90h] [rbp+18h]
	int v27; // [rsp+98h] [rbp+20h]

	if (!a2)
		return 2147942487i64;
	v4 = sub_14018B280(32i64, 1u);
	v5 = v4;
	if (!v4)
		return 2147942414i64;
	*(_QWORD*)v4 = off_140B787C0;
	v4[6] = 1;
	*((_QWORD*)v4 + 1) = 0i64;
	*((_QWORD*)v4 + 2) = 0i64;
	*((_QWORD*)v4 + 1) = 0i64;
	v6 = *(unsigned int*)(*(_QWORD*)(a1 + 24) + 96i64);
	if ((_DWORD)v6)
	{
		v7 = 8 * v6;
		if (!is_mul_ok(v6, 8ui64))
			v7 = -1i64;
		v8 = sub_14018B280(v7, 1u);
	}
	else
	{
		v8 = 0i64;
	}
	*((_QWORD*)v5 + 2) = v8;
	v9 = *(_QWORD*)(a1 + 24);
	if (*(_DWORD*)(v9 + 96))
	{
		if (!v8)
			return 2147942414i64;
	}
	v10 = *(_QWORD*)(a1 + 24);
	v11 = 0i64;
	v12 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 32) + 24i64))(*(_QWORD*)(a1 + 32))
		+ *(unsigned int*)(v9 + 100);
	v24 = v12;
	if (*(_DWORD*)(v10 + 96))
	{
		while (1)
		{
			v13 = v12 + 20 * v11;
			if ((int)sub_1402DC340(*(__int64**)(a1 + 16), *(_DWORD*)v13, &v23) >= 0)
			{
				v14 = *(unsigned __int16*)(v13 + 4);
				v15 = *(unsigned __int16*)(v13 + 6);
				v16 = *(unsigned __int16*)(v13 + 8);
				v26 = *(unsigned __int16*)(v13 + 10);
				v27 = *(unsigned __int16*)(v13 + 12);
				v21 = *(unsigned __int16*)(v13 + 14);
				v22 = *(unsigned __int8*)(v13 + 16);
				v17 = sub_14018B280(56i64, 1u);
				v18 = v23;
				v19 = v17;
				if (v17)
				{
					v17[2] = 1;
					*(_QWORD*)v17 = off_140B62E78;
					v17[3] = v14;
					v17[4] = v15;
					v17[6] = v26;
					v17[5] = v16;
					v17[7] = v27;
					v17[8] = v21;
					*((_QWORD*)v17 + 5) = a1;
					v17[9] = v22;
					*((_QWORD*)v17 + 6) = v18;
					(**(void(__fastcall***)(__int64))a1)(a1);
					(***((void(__fastcall****)(_QWORD))v19 + 6))(*((_QWORD*)v19 + 6));
				}
				else
				{
					v19 = 0i64;
				}
				*(_QWORD*)(*((_QWORD*)v5 + 2) + 8i64 * *((_QWORD*)v5 + 1)) = v19;
				v20 = *((_QWORD*)v5 + 1);
				if (!*(_QWORD*)(*((_QWORD*)v5 + 2) + 8 * v20))
					return 2147942414i64;
				*((_QWORD*)v5 + 1) = v20 + 1;
				if (v18)
				{
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v18 + 8i64))(v18);
					v23 = 0i64;
				}
			}
			v11 = (unsigned int)(v11 + 1);
			if ((unsigned int)v11 >= *(_DWORD*)(*(_QWORD*)(a1 + 24) + 96i64))
				break;
			v12 = v24;
		}
	}
	*a2 = v5;
	return 0i64;
}
// 140B62E78: using guessed type __int64 (__fastcall *off_140B62E78[44])();
// 140B787C0: using guessed type __int64 (__fastcall *off_140B787C0[5])();

