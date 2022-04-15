#include "../winhttp.h"

//----- (000000014051F500) ----------------------------------------------------
void __fastcall sub_14051F500(__int64 a1)
{
	char* v2; // r15
	__int64 v3; // rbx
	__int64 v4; // rax
	__int64 v5; // r12
	__int64 v6; // r14
	int* v7; // rax
	int v8; // ecx
	int v9; // ebx
	int v10; // ecx
	int* v11; // rax
	int* v12; // rax
	__int64 v13; // rcx
	_QWORD* v14; // rax
	__int64 v15; // rcx
	__int64 v16; // rdi
	unsigned int* v17; // rsi
	void(__fastcall * **v18)(_QWORD); // rbx
	__int64 v19; // rax
	__int64 v20; // rax
	__int64 v21; // rcx
	__int64 v22; // rax
	int v23; // eax
	__int16* v24; // rax
	int v25; // edi
	_DWORD* v26; // rax
	int v27; // ebx
	int v28; // edx
	__int64 v29; // [rsp+30h] [rbp-D0h] BYREF
	__int64 v30; // [rsp+38h] [rbp-C8h]
	__int64 v31; // [rsp+40h] [rbp-C0h]
	__int64 v32[24]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v33; // [rsp+110h] [rbp+10h]
	int* v34; // [rsp+120h] [rbp+20h]
	__int64 v35; // [rsp+130h] [rbp+30h] BYREF
	__int64 v36; // [rsp+138h] [rbp+38h]
	int v37; // [rsp+150h] [rbp+50h]
	__int64 v38; // [rsp+430h] [rbp+330h]
	int v39; // [rsp+5C8h] [rbp+4C8h]
	int v40; // [rsp+5D0h] [rbp+4D0h]

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
			v5 = v4;
			if (v4)
			{
				sub_140514F00(v3, v4, *(_QWORD*)(a1 + 32));
				v6 = sub_1403AC780(qword_140C65898 + 160, (int*)(a1 + 16));
				if (v6)
				{
					sub_14040FAE0((__int64)&v35);
					v7 = sub_1400B5DF0(qword_140C658F0, **(_DWORD**)(v6 + 64), 0i64);
					sub_140412470((__int64)&v35, (__int64)v7, 0, 6);
					if (v39)
					{
						v8 = 1;
						v9 = 7;
						if (v37 > 1)
							v8 = v37;
						if (v8 < 7)
							v9 = v8;
					}
					else if (v40 && v36)
					{
						v10 = 1;
						v9 = 7;
						if (*(int*)(v36 + 344) > 1)
							v10 = *(_DWORD*)(v36 + 344);
						if (v10 < 7)
							v9 = v10;
					}
					else
					{
						v9 = 8;
					}
					sub_1400B7210((__int64)v32, (int*)L"$1n");
					v32[0] = (__int64)off_140B69230;
					v34 = 0i64;
					v33 = 0i64;
					v11 = sub_14018B280(16i64, 0);
					*(_QWORD*)&v33 = v11;
					*((_QWORD*)&v33 + 1) = v11;
					v34 = v11 + 4;
					if (v11)
						*(_WORD*)v11 = 0;
					v12 = sub_14018B280(96i64, 0);
					if (v12)
					{
						v13 = 0i64;
						if (v40)
							v13 = v36;
						v14 = (_QWORD*)sub_1404DDAF0((__int64)v12, *(_DWORD*)(v13 + 476));
					}
					else
					{
						v14 = 0i64;
					}
					sub_1400B7480((__int64)v32, v14);
					v15 = *(_QWORD*)(a1 + 8);
					v16 = 0i64;
					v17 = (unsigned int*)(v15 + 1872 + 4i64 * v9);
					v18 = *(void(__fastcall****)(_QWORD))(v15 + 16 * (3i64 * v9 + 93));
					if (v40)
						v16 = v36;
					v19 = sub_1400B7660(v32);
					sub_140514C10(v5, *(_QWORD*)(v19 + 8), *(__m128i**)(v16 + 488), v18, v17, 1u);
					if ((dword_140DC32B0 & 1) != 0)
					{
						v21 = (unsigned int)dword_140DC32B4;
					}
					else
					{
						dword_140DC32B0 |= 1u;
						v20 = sub_140200220(0x4B4u);
						if (v20)
						{
							v21 = *(unsigned int*)(v20 + 4);
							dword_140DC32B4 = *(_DWORD*)(v20 + 4);
						}
						else
						{
							v21 = 75i64;
							dword_140DC32B4 = 75;
						}
					}
					v22 = *(_QWORD*)(v6 + 72);
					if (!v22)
						v22 = *(_QWORD*)(v6 + 64) + 8i64;
					v23 = *(_DWORD*)(v22 + 12);
					v30 = 1i64;
					v31 = 0i64;
					v29 = (unsigned int)(v21 * v23);
					v24 = sub_14034BDD0(v21, 679979);
					sub_140514AB0(v5, (__int64)v24, &v29);
					v25 = sub_1400CD4C0(v5, 0);
					v26 = sub_1400CB3D0(v5, &v29);
					v27 = v26[3] - v26[1];
					sub_1400CB3D0((__int64)v2, &v29);
					v28 = v25 + HIDWORD(v30) - v27;
					if (v28 < SHIDWORD(v30))
						v28 = HIDWORD(v30);
					HIDWORD(v30) = v28;
					sub_1400CC7C0((__int64)v2, (int*)&v29);
					sub_1400CB690((__int64)v2);
					sub_1400CB960(v2);
					if ((_QWORD)v33)
						sub_14018B900(v33, 0);
					sub_1400B7390(v32);
					if (v35)
					{
						(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 8i64))(v35);
						v35 = 0i64;
					}
					if (v38)
						sub_14018B900(v38, 0);
				}
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
// 140C658F0: using guessed type __int64 qword_140C658F0;
// 140DC32B0: using guessed type int dword_140DC32B0;
// 140DC32B4: using guessed type int dword_140DC32B4;

