#include "../winhttp.h"

//----- (00000001405153A0) ----------------------------------------------------
__int64 __fastcall sub_1405153A0(__int64 a1)
{
	__int64 result; // rax
	int* v2; // rdx
	unsigned int v4; // ecx
	_QWORD* v5; // rbx
	__int64 v6; // rsi
	__int64 v7; // r15
	char* v8; // r14
	__int64 v9; // rsi
	__int64 v10; // r12
	int* v11; // rax
	int* v12; // rax
	int v13; // eax
	unsigned int v14; // ebp
	__int64 v15; // rcx
	__int64 v16; // rdi
	unsigned int* v17; // rsi
	void(__fastcall * **v18)(_QWORD); // rbx
	__int64 v19; // rax
	_DWORD* v20; // rax
	int v21; // edx
	int v22[3]; // [rsp+30h] [rbp-108h] BYREF
	int v23; // [rsp+3Ch] [rbp-FCh]
	__int64 v24[24]; // [rsp+40h] [rbp-F8h] BYREF
	__int128 v25; // [rsp+100h] [rbp-38h]
	int* v26; // [rsp+110h] [rbp-28h]

	result = *(unsigned int*)(a1 + 16);
	v2 = (int*)(a1 + 16);
	if ((int)result < 300)
	{
		v4 = *(_DWORD*)(a1 + 20);
		if (v4 != -1)
		{
			v5 = 0i64;
			if ((_DWORD)result || (result = v4 < 0x1F) != 0)
			{
				v6 = qword_140C65898;
				result = sub_1403AC780(qword_140C65898 + 160, v2);
				v7 = result;
				if (result)
				{
					v8 = (char*)sub_1400F52E0(
						*(_QWORD*)(v6 + 29504) + 2688i64,
						(__m128i*)L"UI\\ActionConfirmButton.xml",
						(int*)L"TooltipBase",
						0i64,
						0i64,
						-2);
					result = (*(__int64(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v8);
					if (v8)
					{
						result = sub_1400D3830((__int64)(v8 + 552), L"ActionConfirm_LabelML");
						v9 = result;
						if (result)
						{
							result = sub_1400D3830((__int64)(v8 + 552), L"Container");
							v10 = result;
							if (result)
							{
								sub_140514F00(v9, result, *(_QWORD*)(a1 + 32));
								sub_1400B7210((__int64)v24, (int*)L"$1n");
								v24[0] = (__int64)off_140B69230;
								v26 = 0i64;
								v25 = 0i64;
								v11 = sub_14018B280(16i64, 0);
								*(_QWORD*)&v25 = v11;
								*((_QWORD*)&v25 + 1) = v11;
								v26 = v11 + 4;
								if (v11)
									*(_WORD*)v11 = 0;
								v12 = sub_14018B280(96i64, 0);
								if (v12)
									v5 = (_QWORD*)sub_1404DDAF0((__int64)v12, *(_DWORD*)(*(_QWORD*)(v7 + 64) + 476i64));
								sub_1400B7480((__int64)v24, v5);
								v13 = sub_1405150D0(v7);
								v14 = 1;
								if (*(_DWORD*)(v7 + 120))
									v14 = *(_DWORD*)(v7 + 120);
								v15 = *(_QWORD*)(a1 + 8);
								v16 = *(_QWORD*)(v7 + 64);
								v17 = (unsigned int*)(v15 + 1872 + 4i64 * v13);
								v18 = *(void(__fastcall****)(_QWORD))(v15 + 16 * (3i64 * v13 + 93));
								v19 = sub_1400B7660(v24);
								sub_140514C10(v10, *(_QWORD*)(v19 + 8), *(__m128i**)(v16 + 488), v18, v17, v14);
								LODWORD(v16) = sub_1400CD4C0(v10, 0);
								v20 = sub_1400CB3D0(v10, v22);
								LODWORD(v18) = v20[3] - v20[1];
								sub_1400CB3D0((__int64)v8, v22);
								v21 = v16 + v23 - (_DWORD)v18;
								if (v21 < v23)
									v21 = v23;
								v23 = v21;
								sub_1400CC7C0((__int64)v8, v22);
								sub_1400CB690((__int64)v8);
								sub_1400CB960(v8);
								if ((_QWORD)v25)
									sub_14018B900(v25, 0);
								return (__int64)sub_1400B7390(v24);
							}
						}
					}
				}
			}
		}
	}
	return result;
}
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6B900: using guessed type wchar_t a1n_3[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 1405153A0: using guessed type int var_108[3];

