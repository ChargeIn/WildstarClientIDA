//----- (0000000140523B20) ----------------------------------------------------
void __fastcall sub_140523B20(__int64 a1)
{
	char* v2; // r15
	__int64 v3; // rbx
	__int64 v4; // r14
	int* v5; // rax
	__int64 v6; // rax
	__int64 v7; // rcx
	__int16* v8; // rax
	__int64 v9; // rcx
	int v10; // eax
	int* v11; // rax
	__int64 v12; // rbx
	__int64 v13; // rcx
	int v14; // eax
	int* v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rcx
	int v18; // eax
	int* v19; // rax
	__int64 v20; // rdi
	__int64 v21; // r8
	int v22; // eax
	int* v23; // rax
	__int64 v24; // rbx
	int v25; // edi
	_DWORD* v26; // rax
	int v27; // ebx
	int v28; // edx
	int v29[3]; // [rsp+30h] [rbp-D0h] BYREF
	int v30; // [rsp+3Ch] [rbp-C4h]
	__int64 v31[24]; // [rsp+40h] [rbp-C0h] BYREF
	int* v32; // [rsp+100h] [rbp+0h]
	int* v33; // [rsp+108h] [rbp+8h]
	int* v34; // [rsp+110h] [rbp+10h]
	__int64 v35[24]; // [rsp+120h] [rbp+20h] BYREF
	__int128 v36; // [rsp+1E0h] [rbp+E0h]
	int* v37; // [rsp+1F0h] [rbp+F0h]

	if (*(_QWORD*)(a1 + 32) || *(_QWORD*)(a1 + 48))
	{
		v2 = (char*)sub_1400F52E0(
			*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
			(__m128i*)L"UI\\ActionConfirmButton.xml",
			(int*)L"TooltipBase",
			0i64,
			0i64,
			-2);
		(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v2);
		if (v2)
		{
			v3 = sub_1400D3830((__int64)(v2 + 552), L"ActionConfirm_LabelML");
			if (v3)
			{
				v4 = sub_1400D3830((__int64)(v2 + 552), L"Container");
				if (v4)
				{
					sub_1400B7090((__int64)v35, 768549);
					v37 = 0i64;
					v36 = 0i64;
					v35[0] = (__int64)off_140B69230;
					v5 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v36 = v5;
					*((_QWORD*)&v36 + 1) = v5;
					v37 = v5 + 4;
					if (v5)
						*(_WORD*)v5 = 0;
					v6 = sub_1400B7660(v35);
					sub_140514F00(v3, v4, *(_QWORD*)(v6 + 8));
					v8 = sub_14034BDD0(v7, 719507);
					sub_1405147C0(v4, (__int64)v8);
					v9 = *(_QWORD*)(a1 + 56);
					if (v9)
					{
						v10 = *(_DWORD*)(a1 + 64);
						if ((v10 < 15 || v10 == 15 && (*(_DWORD*)(a1 + 72) || *(_DWORD*)(a1 + 68) == 1 || *(_DWORD*)(a1 + 76)))
							&& v9 > 0)
						{
							sub_1400B7090((__int64)v31, 768226);
							v31[0] = (__int64)off_140B69230;
							v11 = sub_14018B280(16i64, 0);
							v12 = (__int64)v11;
							v32 = v11;
							v33 = v11;
							v34 = v11 + 4;
							if (v11)
								*(_WORD*)v11 = 0;
							sub_140514AB0(v4, (__int64)&word_140B7B704, (__int64*)(a1 + 56));
							if (v12)
								sub_14018B900(v12, 0);
							sub_1400B7390(v31);
						}
					}
					v13 = *(_QWORD*)(a1 + 80);
					if (v13)
					{
						v14 = *(_DWORD*)(a1 + 88);
						if ((v14 < 15 || v14 == 15 && (*(_DWORD*)(a1 + 96) || *(_DWORD*)(a1 + 92) == 1 || *(_DWORD*)(a1 + 100)))
							&& v13 > 0)
						{
							sub_1400B7090((__int64)v31, 768226);
							v31[0] = (__int64)off_140B69230;
							v15 = sub_14018B280(16i64, 0);
							v16 = (__int64)v15;
							v32 = v15;
							v33 = v15;
							v34 = v15 + 4;
							if (v15)
								*(_WORD*)v15 = 0;
							sub_140514AB0(v4, (__int64)&word_140B7B704, (__int64*)(a1 + 80));
							if (v16)
								sub_14018B900(v16, 0);
							sub_1400B7390(v31);
						}
					}
					v17 = *(_QWORD*)(a1 + 104);
					if (v17)
					{
						v18 = *(_DWORD*)(a1 + 112);
						if ((v18 < 15 || v18 == 15
							&& (*(_DWORD*)(a1 + 120) || *(_DWORD*)(a1 + 116) == 1 || *(_DWORD*)(a1 + 124)))
							&& v17 > 0)
						{
							sub_1400B7090((__int64)v31, 768226);
							v31[0] = (__int64)off_140B69230;
							v19 = sub_14018B280(16i64, 0);
							v20 = (__int64)v19;
							v32 = v19;
							v33 = v19;
							v34 = v19 + 4;
							if (v19)
								*(_WORD*)v19 = 0;
							sub_140514AB0(v4, (__int64)&word_140B7B704, (__int64*)(a1 + 104));
							if (v20)
								sub_14018B900(v20, 0);
							sub_1400B7390(v31);
						}
					}
					v21 = *(_QWORD*)(a1 + 128);
					if (v21)
					{
						v22 = *(_DWORD*)(a1 + 136);
						if ((v22 < 15 || v22 == 15
							&& (*(_DWORD*)(a1 + 144) || *(_DWORD*)(a1 + 140) == 1 || *(_DWORD*)(a1 + 148)))
							&& v21 > 0)
						{
							sub_1400B7090((__int64)v31, 768226);
							v31[0] = (__int64)off_140B69230;
							v23 = sub_14018B280(16i64, 0);
							v24 = (__int64)v23;
							v32 = v23;
							v33 = v23;
							v34 = v23 + 4;
							if (v23)
								*(_WORD*)v23 = 0;
							sub_140514AB0(v4, (__int64)&word_140B7B704, (__int64*)(a1 + 128));
							if (v24)
								sub_14018B900(v24, 0);
							sub_1400B7390(v31);
						}
					}
					v25 = sub_1400CD4C0(v4, 0);
					v26 = sub_1400CB3D0(v4, v29);
					v27 = v26[3] - v26[1];
					sub_1400CB3D0((__int64)v2, v29);
					v28 = v25 + v30 - v27;
					if (v28 < v30)
						v28 = v30;
					v30 = v28;
					sub_1400CC7C0((__int64)v2, v29);
					sub_1400CB690((__int64)v2);
					sub_1400CB960(v2);
					if ((_QWORD)v36)
						sub_14018B900(v36, 0);
					sub_1400B7390(v35);
				}
			}
		}
	}
}
// 140523C81: variable 'v7' is possibly undefined
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B7B704: using guessed type __int16 word_140B7B704;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140523B20: using guessed type int var_1F0[3];

