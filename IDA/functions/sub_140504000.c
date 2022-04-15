//----- (0000000140504000) ----------------------------------------------------
void __fastcall sub_140504000(__int64 a1, _QWORD* a2, unsigned __int64 a3)
{
	__int64 v5; // r15
	__int64 v6; // r14
	int* v7; // r12
	__int64 v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rax
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rcx
	__int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	_QWORD* v17; // rsi
	int* v18; // rbx
	__int64 v19; // rax
	__int64 v20; // rdi
	__int64 v21; // rdi
	__int64 v22; // [rsp+20h] [rbp-218h] BYREF
	int* v23; // [rsp+28h] [rbp-210h]
	unsigned __int64 v24[4]; // [rsp+40h] [rbp-1F8h] BYREF
	int v25[100]; // [rsp+60h] [rbp-1D8h] BYREF

	sub_140503CA0(a1, a3, v24);
	v5 = 3i64;
	v6 = a1 + 320;
	do
	{
		if (*(_BYTE*)(v6 - 16) && v24[v5])
		{
			sub_14018EFA0(&v22, (__int64)L" %llu");
			v7 = v23;
			v8 = sub_1401A7880(a2[1], v23);
			if (*(_QWORD*)(v8 + 8) == a2[1])
			{
				v9 = *(_QWORD*)(v8 + 16);
				if (v9)
				{
					v10 = *(_QWORD*)(v9 + 48);
					if (v8 == v10)
						*(_QWORD*)(v9 + 48) = *(_QWORD*)(v10 + 72);
					v11 = *(_QWORD*)(v9 + 56);
					if (v8 == v11)
						*(_QWORD*)(v9 + 56) = *(_QWORD*)(v11 + 64);
					v12 = *(_QWORD*)(v8 + 64);
					if (v12)
						*(_QWORD*)(v12 + 72) = *(_QWORD*)(v8 + 72);
					v13 = *(_QWORD*)(v8 + 72);
					if (v13)
						*(_QWORD*)(v13 + 64) = *(_QWORD*)(v8 + 64);
					*(_QWORD*)(v8 + 16) = 0i64;
				}
				else
				{
					(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v8 + 80) + 32i64))(*(_QWORD*)(v8 + 80));
				}
				v14 = a2[7];
				if (v14)
				{
					*(_QWORD*)(v14 + 72) = v8;
					*(_QWORD*)(v8 + 64) = a2[7];
					a2[7] = v8;
				}
				else
				{
					a2[7] = v8;
					a2[6] = v8;
					*(_QWORD*)(v8 + 64) = 0i64;
				}
				*(_QWORD*)(v8 + 72) = 0i64;
				*(_QWORD*)(v8 + 16) = a2;
			}
			if (*(_QWORD*)v6 != *(_QWORD*)(v6 + 8))
			{
				v15 = a2[1];
				v16 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v15 + 128) + 16i64))(v15 + 128);
				v17 = (_QWORD*)v16;
				if (v16)
				{
					*(_QWORD*)(v16 + 8) = v15;
					*(_QWORD*)(v16 + 16) = 0i64;
					*(_DWORD*)(v16 + 24) = 0;
					*(_QWORD*)(v16 + 32) = 0i64;
					*(_QWORD*)(v16 + 40) = 0i64;
					*(_QWORD*)(v16 + 48) = 0i64;
					*(_QWORD*)(v16 + 56) = 0i64;
					*(_QWORD*)(v16 + 64) = 0i64;
					*(_QWORD*)(v16 + 72) = 0i64;
					*(_QWORD*)(v16 + 80) = 0i64;
					*(_QWORD*)v16 = off_140B5EBA0;
					*(_DWORD*)(v16 + 88) = 0;
					*(_QWORD*)(v16 + 96) = 0i64;
				}
				else
				{
					v17 = 0i64;
				}
				v17[10] = v15 + 128;
				sub_1401A4C50((__int64)(v17 + 3), (int*)L"IMG");
				v18 = *(int**)v6;
				v19 = sub_1401A6C70((__int64)v17, (int*)L"Image");
				sub_1401A4C50(v19 + 32, v18);
				LODWORD(v18) = *(_DWORD*)(a1 + 32);
				v20 = sub_1401A6C70((__int64)v17, (int*)L"Width");
				sub_1401A4C20(v25, 0xC8ui64, (__int64)L"%d", (unsigned int)v18);
				sub_1401A4C50(v20 + 32, v25);
				LODWORD(v18) = *(_DWORD*)(a1 + 36);
				v21 = sub_1401A6C70((__int64)v17, (int*)L"Height");
				sub_1401A4C20(v25, 0xC8ui64, (__int64)L"%d", (unsigned int)v18);
				sub_1401A4C50(v21 + 32, v25);
				sub_1401A5A70(a2, v17);
			}
			if (v7)
				sub_14018B900((__int64)v7, 0);
		}
		v6 -= 88i64;
		--v5;
	} while (v5 >= 0);
}
// 1409E41F4: using guessed type wchar_t aD_19[3];
// 140A31888: using guessed type wchar_t aHeight[7];
// 140A31898: using guessed type wchar_t aWidth[6];
// 140A31AD0: using guessed type wchar_t aImage_0[6];
// 140B0FF20: using guessed type wchar_t aLlu_1[6];
// 140B100A8: using guessed type wchar_t aImg_0[4];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140504000: using guessed type unsigned __int64 var_1F8[4];
// 140504000: using guessed type int var_1D8[100];

