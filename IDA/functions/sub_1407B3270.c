//----- (00000001407B3270) ----------------------------------------------------
__int64 __fastcall sub_1407B3270(__int64 a1, int** a2)
{
	int* v4; // rdi
	__int64 v5; // rax
	bool v6; // zf
	__int64 v7; // r14
	__int64* v8; // rbx
	__int64 v9; // rcx
	int v10; // edi
	__int64 v11; // rax
	int* v12; // rax
	__int64 v13; // rcx
	__int64 v14; // rax
	int* v15; // rbx
	__int64 v17; // [rsp+20h] [rbp-48h] BYREF
	int* v18; // [rsp+28h] [rbp-40h]
	__int64 v19; // [rsp+30h] [rbp-38h]
	__int64 v20; // [rsp+38h] [rbp-30h]
	__int64 v21; // [rsp+70h] [rbp+8h] BYREF

	v4 = 0i64;
	v18 = 0i64;
	v20 = 0i64;
	v5 = 0i64;
	do
		v6 = *((_WORD*)&unk_1409FB29C + ++v5) == 0;
	while (!v6);
	v7 = (2 * v5) >> 1;
	if ((unsigned __int64)(v7 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
	{
		v4 = sub_14018B280(2 * (v7 + 1), 0);
		v18 = v4;
		v20 = (__int64)v4 + 2 * v7 + 2;
	}
	sub_1407DB590(v4, (int*)&unk_1409FB29C, 2 * v7);
	v19 = (__int64)v4 + 2 * v7;
	if (v19)
		*((_WORD*)v4 + v7) = 0;
	v8 = *(__int64**)(a1 + 24);
	if (v8 == *(__int64**)(a1 + 32))
	{
	LABEL_18:
		v14 = 0i64;
		do
			v6 = *((_WORD*)&unk_1409FB304 + ++v14) == 0;
		while (!v6);
		sub_14001C310(&v17, (int*)&unk_1409FB304, (int*)((char*)&unk_1409FB304 + 2 * v14));
		v15 = v18;
		v10 = sub_1401C5740(v18, 2 * ((v19 - (__int64)v18) >> 1) + 2, a2);
		if (v10 >= 0)
			v10 = 0;
	}
	else
	{
		while (1)
		{
			v9 = *v8;
			v21 = 0i64;
			v10 = (*(__int64(__fastcall**)(__int64, __int64*))(*(_QWORD*)v9 + 24i64))(v9, &v21);
			if (v10 < 0)
				break;
			if (v8 != *(__int64**)(a1 + 24))
			{
				v11 = 0i64;
				do
					v6 = *((_WORD*)&unk_1409FB2EC + ++v11) == 0;
				while (!v6);
				sub_14001C310(&v17, (int*)&unk_1409FB2EC, (int*)((char*)&unk_1409FB2EC + 2 * v11));
			}
			v12 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v21 + 32i64))(v21);
			v13 = 0i64;
			if (*(_WORD*)v12)
			{
				do
					++v13;
				while (*((_WORD*)v12 + v13));
			}
			sub_14001C310(&v17, v12, (int*)((char*)v12 + 2 * v13));
			if (v21)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
			if (++v8 == *(__int64**)(a1 + 32))
				goto LABEL_18;
		}
		if (v21)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v21 + 8i64))(v21);
		v15 = v18;
	}
	if (v15)
		sub_14018B900((__int64)v15, 0);
	return (unsigned int)v10;
}

