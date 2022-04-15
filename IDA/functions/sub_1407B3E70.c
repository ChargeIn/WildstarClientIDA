//----- (00000001407B3E70) ----------------------------------------------------
__int64 __fastcall sub_1407B3E70(__int64 a1, int** a2)
{
	__int64 v3; // rax
	int* v5; // rdi
	bool v6; // zf
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rcx
	int v11; // edi
	__int64 v12; // rax
	__int64 v13; // rax
	__int64 v14; // rax
	__int64 v15; // rax
	int* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v21; // rax
	int* v22; // rbx
	__int64 v24; // [rsp+20h] [rbp-48h] BYREF
	int* v25; // [rsp+28h] [rbp-40h]
	__int64 v26; // [rsp+30h] [rbp-38h]
	__int64 v27; // [rsp+38h] [rbp-30h]
	__int64 v28; // [rsp+70h] [rbp+8h] BYREF

	v25 = 0i64;
	v27 = 0i64;
	v3 = 0i64;
	v5 = 0i64;
	do
		v6 = *((_WORD*)&unk_1409FB31C + ++v3) == 0;
	while (!v6);
	v7 = (2 * v3) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v5 = sub_14018B280(2 * (v7 + 1), 0);
		v25 = v5;
		v27 = (__int64)v5 + 2 * v7 + 2;
	}
	sub_1407DB590(v5, (int*)&unk_1409FB31C, 2 * v7);
	v26 = (__int64)v5 + 2 * v7;
	if (v26)
		*((_WORD*)v5 + v7) = 0;
	v8 = *(_QWORD*)(a1 + 24);
	v9 = *(_QWORD*)(v8 + 16);
	if (v9 == v8)
	{
	LABEL_32:
		v21 = 0i64;
		do
			v6 = *((_WORD*)&unk_1409FB3FC + ++v21) == 0;
		while (!v6);
		sub_14001C310(&v24, (int*)&unk_1409FB3FC, (int*)((char*)&unk_1409FB3FC + 2 * v21));
		v22 = v25;
		v11 = sub_1401C5740(v25, 2 * ((v26 - (__int64)v25) >> 1) + 2, a2);
		if (v11 >= 0)
			v11 = 0;
	}
	else
	{
		while (1)
		{
			v10 = *(_QWORD*)(v9 + 64);
			v28 = 0i64;
			v11 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v10 + 24i64))(v10, &v28);
			if (v11 < 0)
				break;
			if (v9 != *(_QWORD*)(*(_QWORD*)(a1 + 24) + 16i64))
			{
				v12 = 0i64;
				do
					v6 = *((_WORD*)&unk_1409FB334 + ++v12) == 0;
				while (!v6);
				sub_14001C310(&v24, (int*)&unk_1409FB334, (int*)((char*)&unk_1409FB334 + 2 * v12));
			}
			v13 = 0i64;
			do
				v6 = *((_WORD*)&unk_1409FB34C + ++v13) == 0;
			while (!v6);
			sub_14001C310(&v24, (int*)&unk_1409FB34C, (int*)((char*)&unk_1409FB34C + 2 * v13));
			sub_14001C310(&v24, *(int**)(v9 + 40), *(int**)(v9 + 48));
			v14 = 0i64;
			do
				v6 = *((_WORD*)&unk_1409FB37C + ++v14) == 0;
			while (!v6);
			sub_14001C310(&v24, (int*)&unk_1409FB37C, (int*)((char*)&unk_1409FB37C + 2 * v14));
			v15 = 0i64;
			do
				v6 = *((_WORD*)&unk_1409FB394 + ++v15) == 0;
			while (!v6);
			sub_14001C310(&v24, (int*)&unk_1409FB394, (int*)((char*)&unk_1409FB394 + 2 * v15));
			v16 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v28 + 32i64))(v28);
			v17 = 0i64;
			if (*(_WORD*)v16)
			{
				do
					++v17;
				while (*((_WORD*)v16 + v17));
			}
			sub_14001C310(&v24, v16, (int*)((char*)v16 + 2 * v17));
			if (v28)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
			v18 = *(_QWORD*)(v9 + 24);
			if (v18)
			{
				v9 = *(_QWORD*)(v9 + 24);
				for (i = *(_QWORD*)(v18 + 16); i; i = *(_QWORD*)(i + 16))
					v9 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v9 + 8); v9 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v9 = j;
				if (*(_QWORD*)(v9 + 24) != j)
					v9 = j;
			}
			if (v9 == *(_QWORD*)(a1 + 24))
				goto LABEL_32;
		}
		if (v28)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v28 + 8i64))(v28);
		v22 = v25;
	}
	if (v22)
		sub_14018B900((__int64)v22, 0);
	return (unsigned int)v11;
}

