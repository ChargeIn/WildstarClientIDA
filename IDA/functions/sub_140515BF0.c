//----- (0000000140515BF0) ----------------------------------------------------
void __fastcall sub_140515BF0(__int64 a1)
{
	_QWORD* v2; // r14
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // r13
	unsigned int v6; // r12d
	int* v7; // r15
	unsigned int v8; // ecx
	__int64 v9; // rax
	__int64 v10; // rdi
	__int64 v11; // rbx
	int* v12; // rax
	int* v13; // rax
	_QWORD* v14; // rax
	unsigned int v15; // eax
	__int64 v16; // rcx
	__int64 v17; // rdi
	unsigned int* v18; // rsi
	unsigned int v19; // ebp
	void(__fastcall * **v20)(_QWORD); // rbx
	__int64 v21; // rax
	int v22; // edi
	_DWORD* v23; // rax
	__int64 v24; // rax
	int v25; // ebx
	_DWORD* v26; // rax
	_QWORD* v27; // rax
	int v28; // ecx
	int v29[4]; // [rsp+30h] [rbp-128h] BYREF
	__int64 v30[24]; // [rsp+40h] [rbp-118h] BYREF
	__int128 v31; // [rsp+100h] [rbp-58h]
	int* v32; // [rsp+110h] [rbp-48h]

	v2 = sub_1400F52E0(
		*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
		(__m128i*)L"UI\\ActionConfirmButton.xml",
		(int*)L"TooltipBase",
		0i64,
		0i64,
		-2);
	(*(void(__fastcall**)(_QWORD, _QWORD*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v2);
	if (v2)
	{
		v3 = sub_1400D3830((__int64)(v2 + 69), L"ActionConfirm_LabelML");
		if (v3)
		{
			v4 = sub_1400D3830((__int64)(v2 + 69), L"Container");
			v5 = v4;
			if (v4)
			{
				sub_140514F00(v3, v4, *(_QWORD*)(a1 + 56));
				v6 = 0;
				v7 = (int*)(a1 + 16);
				do
				{
					if (*v7 < 300)
					{
						v8 = v7[1];
						if (v8 != -1 && (*v7 || v8 < 0x1F))
						{
							v9 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 8 * (v6 + 2i64)));
							v10 = v9;
							if (v9)
							{
								v11 = (int)sub_1405150D0(v9);
								sub_1400B7210((__int64)v30, (int*)L"$1n");
								v30[0] = (__int64)off_140B69230;
								v31 = 0i64;
								v32 = 0i64;
								v12 = sub_14018B280(16i64, 0);
								*(_QWORD*)&v31 = v12;
								*((_QWORD*)&v31 + 1) = v12;
								v32 = v12 + 4;
								if (v12)
									*(_WORD*)v12 = 0;
								v13 = sub_14018B280(96i64, 0);
								if (v13)
									v14 = (_QWORD*)sub_1404DDAF0((__int64)v13, *(_DWORD*)(*(_QWORD*)(v10 + 64) + 476i64));
								else
									v14 = 0i64;
								sub_1400B7480((__int64)v30, v14);
								v15 = *(_DWORD*)(v10 + 120);
								v16 = *(_QWORD*)(a1 + 8);
								v17 = *(_QWORD*)(v10 + 64);
								v18 = (unsigned int*)(v16 + 1872 + 4 * v11);
								v19 = 1;
								if (v15)
									v19 = v15;
								v20 = *(void(__fastcall****)(_QWORD))(v16 + 48 * (v11 + 31));
								v21 = sub_1400B7660(v30);
								sub_140514C10(v5, *(_QWORD*)(v21 + 8), *(__m128i**)(v17 + 488), v20, v18, v19);
								if ((_QWORD)v31)
									sub_14018B900(v31, 0);
								sub_1400B7390(v30);
							}
						}
					}
					++v6;
					v7 += 2;
				} while (v6 < 4);
				v22 = sub_1400CD4C0(v5, 0);
				if (*(char*)(v5 + 29) >= 0)
				{
					v23 = sub_1400CB0E0(v5, v29, v5 + 64);
					*(_DWORD*)(v5 + 396) = *v23;
					*(_DWORD*)(v5 + 400) = v23[1];
					*(_DWORD*)(v5 + 404) = v23[2];
					*(_DWORD*)(v5 + 408) = v23[3];
					*(_BYTE*)(v5 + 29) |= 0x80u;
					v24 = v5;
					do
					{
						if (!*(_DWORD*)(v24 + 392))
							break;
						*(_DWORD*)(v24 + 392) = 0;
						v24 = *(_QWORD*)(v24 + 16);
					} while (v24);
				}
				v25 = *(_DWORD*)(v5 + 408) - *(_DWORD*)(v5 + 400);
				if (*((char*)v2 + 29) >= 0)
				{
					v26 = sub_1400CB0E0((__int64)v2, v29, (__int64)(v2 + 8));
					*((_DWORD*)v2 + 99) = *v26;
					*((_DWORD*)v2 + 100) = v26[1];
					*((_DWORD*)v2 + 101) = v26[2];
					*((_DWORD*)v2 + 102) = v26[3];
					*((_BYTE*)v2 + 29) |= 0x80u;
					v27 = v2;
					do
					{
						if (!*((_DWORD*)v27 + 98))
							break;
						*((_DWORD*)v27 + 98) = 0;
						v27 = (_QWORD*)v27[2];
					} while (v27);
				}
				v29[0] = *((_DWORD*)v2 + 99);
				v29[1] = *((_DWORD*)v2 + 100);
				v29[2] = *((_DWORD*)v2 + 101);
				v28 = v22 + *((_DWORD*)v2 + 102) - v25;
				if (v28 < *((_DWORD*)v2 + 102))
					v28 = *((_DWORD*)v2 + 102);
				v29[3] = v28;
				sub_1400CC7C0((__int64)v2, v29);
				sub_1400CB690((__int64)v2);
				sub_1400CB960((char*)v2);
			}
		}
	}
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;

