//----- (0000000140516650) ----------------------------------------------------
void __fastcall sub_140516650(__int64 a1)
{
	unsigned int v2; // edx
	__int64 v3; // r8
	__int64 v4; // rcx
	__int64 v5; // rax
	__int64 v6; // r15
	int v7; // ebx
	char* v8; // r14
	__int64 v9; // rdi
	__int64 v10; // rax
	__int64 v11; // r12
	int v12; // edi
	int* v13; // rax
	int* v14; // rax
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // rcx
	__int64 v18; // rax
	__int64 v19; // rdi
	unsigned int* v20; // rsi
	void(__fastcall * **v21)(_QWORD); // rbx
	__int64 v22; // rax
	int v23; // edi
	_DWORD* v24; // rax
	int v25; // ebx
	int v26; // edx
	__int64 v27; // [rsp+38h] [rbp-D0h] BYREF
	__int64 v28; // [rsp+40h] [rbp-C8h]
	_QWORD v29[24]; // [rsp+48h] [rbp-C0h] BYREF
	__int128 v30; // [rsp+108h] [rbp+0h]
	int* v31; // [rsp+118h] [rbp+10h]
	__int64 v32; // [rsp+128h] [rbp+20h] BYREF
	__int64 v33; // [rsp+130h] [rbp+28h]
	int v34; // [rsp+148h] [rbp+40h]
	__int64 v35; // [rsp+428h] [rbp+320h]
	int v36; // [rsp+5C0h] [rbp+4B8h]
	int v37; // [rsp+5C8h] [rbp+4C0h]

	sub_14040FAE0((__int64)&v32);
	v2 = *(_DWORD*)(a1 + 16);
	v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 32144) + 40i64);
	v4 = v3;
	v5 = *(_QWORD*)(v3 + 8);
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < v2)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v4 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v4 == v3 || (v27 = v4, v2 < *(_DWORD*)(v4 + 32)))
		v27 = v3;
	v6 = 0i64;
	if (v27 != v3)
		v6 = v27 + 40;
	v7 = 1;
	if ((unsigned int)sub_1404111E0((__int64)&v32, v6, 1))
	{
		v8 = (char*)sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"TooltipBase",
			0i64,
			0i64,
			-2);
		(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v8);
		if (v8)
		{
			v9 = sub_1400D3830((__int64)(v8 + 552), L"ActionConfirm_LabelML");
			if (v9)
			{
				v10 = sub_1400D3830((__int64)(v8 + 552), L"Container");
				v11 = v10;
				if (v10)
				{
					sub_140514F00(v9, v10, *(_QWORD*)(a1 + 32));
					if (v36)
					{
						v12 = 7;
						if (v34 > 1)
							v7 = v34;
						if (v7 < 7)
							v12 = v7;
					}
					else if (v37 && v33)
					{
						v12 = 7;
						if (*(int*)(v33 + 344) > 1)
							v7 = *(_DWORD*)(v33 + 344);
						if (v7 < 7)
							v12 = v7;
					}
					else
					{
						v12 = 8;
					}
					sub_1400B7210((__int64)v29, (int*)L"$1n");
					v29[0] = off_140B69230;
					v31 = 0i64;
					v30 = 0i64;
					v13 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v30 = v13;
					*((_QWORD*)&v30 + 1) = v13;
					v31 = v13 + 4;
					if (v13)
						*(_WORD*)v13 = 0;
					v14 = sub_14018B280(96i64, 0);
					if (v14)
					{
						v15 = 0i64;
						if (v37)
							v15 = v33;
						v16 = (_QWORD*)sub_1404DDAF0((__int64)v14, *(_DWORD*)(v15 + 476));
					}
					else
					{
						v16 = 0i64;
					}
					sub_1400B7480((__int64)v29, v16);
					v17 = *(_QWORD*)(a1 + 8);
					v18 = v12;
					v19 = 0i64;
					v20 = (unsigned int*)(v17 + 1872 + 4 * v18);
					v21 = *(void(__fastcall****)(_QWORD))(v17 + 16 * (3 * v18 + 93));
					if (v37)
						v19 = v33;
					v22 = sub_1400B7660(v29);
					sub_140514C10(v11, *(_QWORD*)(v22 + 8), *(__m128i**)(v19 + 488), v21, v20, *(_DWORD*)(v6 + 68));
					v23 = sub_1400CD4C0(v11, 0);
					v24 = sub_1400CB3D0(v11, &v27);
					v25 = v24[3] - v24[1];
					sub_1400CB3D0((__int64)v8, &v27);
					v26 = v23 + HIDWORD(v28) - v25;
					if (v26 < SHIDWORD(v28))
						v26 = HIDWORD(v28);
					HIDWORD(v28) = v26;
					sub_1400CC7C0((__int64)v8, (int*)&v27);
					sub_1400CB690((__int64)v8);
					sub_1400CB960(v8);
					if ((_QWORD)v30)
						sub_14018B900(v30, 0);
					sub_1400B7390(v29);
				}
			}
		}
	}
	if (v32)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 8i64))(v32);
		v32 = 0i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;

