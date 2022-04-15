//----- (0000000140106AB0) ----------------------------------------------------
char __fastcall sub_140106AB0(__int64 a1, _QWORD* a2)
{
	int* v2; // rbx
	__int64 v5; // rax
	BOOL v6; // edi
	__int64 v7; // rbx
	unsigned int v8; // r15d
	__int64 v9; // r14
	__int64 v10; // rbp
	__int64 v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rdi
	__int64 v14; // rax
	int* v15; // rax
	__int64 v16; // rax
	int* v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rax
	__int64 v21; // rax
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 v24; // rax
	int v26[100]; // [rsp+20h] [rbp-1D8h] BYREF

	v2 = *(int**)(a1 + 72);
	v5 = sub_1401A6C70((__int64)a2, (int*)L"Name");
	sub_1401A4C50(v5 + 32, v2);
	v6 = *(_BYTE*)(a1 + 56) != 0;
	v7 = sub_1401A6C70((__int64)a2, (int*)L"Cycle");
	sub_1401A4C20(v26, 0xC8ui64, (__int64)L"%d", v6);
	sub_1401A4C50(v7 + 32, v26);
	v8 = 0;
	if ((__int64)(*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)) >> 5)
	{
		v9 = 0i64;
		do
		{
			v10 = a2[1];
			v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v10 + 128) + 16i64))(v10 + 128);
			v12 = v11;
			if (v11)
			{
				*(_QWORD*)(v11 + 8) = v10;
				*(_QWORD*)(v11 + 16) = 0i64;
				*(_DWORD*)(v11 + 24) = 0;
				*(_QWORD*)(v11 + 32) = 0i64;
				*(_QWORD*)(v11 + 40) = 0i64;
				*(_QWORD*)(v11 + 48) = 0i64;
				*(_QWORD*)(v11 + 56) = 0i64;
				*(_QWORD*)(v11 + 64) = 0i64;
				*(_QWORD*)(v11 + 72) = 0i64;
				*(_QWORD*)(v11 + 80) = 0i64;
				*(_DWORD*)(v11 + 88) = 0;
				*(_QWORD*)v11 = off_140B5EBA0;
				*(_QWORD*)(v11 + 96) = 0i64;
			}
			else
			{
				v12 = 0i64;
			}
			*(_QWORD*)(v12 + 80) = v10 + 128;
			if ((*(_DWORD*)(v12 + 24) & 0x200) != 0)
				sub_14018B900(*(_QWORD*)(v12 + 32), 0);
			v13 = 0i64;
			*(_DWORD*)(v12 + 24) = 0;
			*(_QWORD*)(v12 + 32) = 0i64;
			for (*(_QWORD*)(v12 + 40) = 0i64; aLayer[v13]; ++v13)
				;
			v14 = 2 * (v13 + 1);
			if (!is_mul_ok(v13 + 1, 2ui64))
				v14 = -1i64;
			v15 = sub_14018B280(v14, 0);
			*(_QWORD*)(v12 + 32) = v15;
			sub_1407DB590(v15, (int*)L"Layer", 2 * v13 + 2);
			v16 = *(_QWORD*)(v12 + 32);
			*(_DWORD*)(v12 + 24) = 512;
			*(_QWORD*)(v12 + 40) = v16 + 2 * v13;
			v17 = *(int**)(32 * v9 + *(_QWORD*)(a1 + 104) + 8);
			v18 = sub_1401A6C70(v12, (int*)L"Name");
			sub_1401A4C50(v18 + 32, v17);
			if (*(_QWORD*)(v12 + 8) == a2[1])
			{
				v19 = *(_QWORD*)(v12 + 16);
				if (v19)
				{
					v20 = *(_QWORD*)(v19 + 48);
					if (v12 == v20)
						*(_QWORD*)(v19 + 48) = *(_QWORD*)(v20 + 72);
					v21 = *(_QWORD*)(v19 + 56);
					if (v12 == v21)
						*(_QWORD*)(v19 + 56) = *(_QWORD*)(v21 + 64);
					v22 = *(_QWORD*)(v12 + 64);
					if (v22)
						*(_QWORD*)(v22 + 72) = *(_QWORD*)(v12 + 72);
					v23 = *(_QWORD*)(v12 + 72);
					if (v23)
						*(_QWORD*)(v23 + 64) = *(_QWORD*)(v12 + 64);
					*(_QWORD*)(v12 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v12 + 80) + 32i64))(*(_QWORD*)(v12 + 80));
				}
				v24 = a2[7];
				if (v24)
				{
					*(_QWORD*)(v24 + 72) = v12;
					*(_QWORD*)(v12 + 64) = a2[7];
					a2[7] = v12;
				}
				else
				{
					a2[7] = v12;
					a2[6] = v12;
					*(_QWORD*)(v12 + 64) = 0i64;
				}
				*(_QWORD*)(v12 + 72) = 0i64;
				*(_QWORD*)(v12 + 16) = a2;
			}
			v9 = ++v8;
		} while (v8 < (unsigned __int64)((__int64)(*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)) >> 5));
	}
	return 1;
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A1A7A0: using guessed type wchar_t aLayer[6];
// 140A1A9B8: using guessed type wchar_t aCycle[6];
// 140A31790: using guessed type wchar_t aName_6[5];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140106AB0: using guessed type int var_1D8[100];

