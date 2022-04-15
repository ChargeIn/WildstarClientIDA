#include "../winhttp.h"

//----- (000000014051CB20) ----------------------------------------------------
void __fastcall sub_14051CB20(__int64 a1)
{
	__int64 v1; // rdi
	__int64 v3; // rax
	char* v4; // rbp
	__int64 v5; // rbx
	__int64 v6; // rcx
	__int64 v7; // rsi
	__int16* v8; // rax
	_QWORD* v9; // rax
	__int64 v10; // r14
	_DWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rcx
	__int64 v15; // rcx
	int v16; // edi
	_DWORD* v17; // rax
	int v18; // ebx
	int v19; // edx
	__int64 v20; // rcx
	int v21[3]; // [rsp+30h] [rbp-18h] BYREF
	int v22; // [rsp+3Ch] [rbp-Ch]

	v1 = *(_QWORD*)(a1 + 16);
	if (v1)
	{
		if (*(_QWORD*)(v1 + 40))
		{
			v3 = qword_140C65898;
			*(_DWORD*)(v1 + 96) = 0;
			v4 = (char*)sub_1400F52E0(
				*(_QWORD*)(v3 + 29504) + 2688i64,
				(__m128i*)L"UI\\ActionConfirmButton.xml",
				(int*)L"TooltipBase",
				0i64,
				0i64,
				-2);
			(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 8) + 520i64))(*(_QWORD*)(a1 + 8), v4);
			if (v4)
			{
				v5 = sub_1400D3830((__int64)(v4 + 552), L"ActionConfirm_LabelML");
				if (v5)
				{
					v7 = sub_1400D3830((__int64)(v4 + 552), L"Container");
					if (v7)
					{
						v8 = sub_14034BDD0(v6, 626335);
						sub_140514F00(v5, v7, (__int64)v8);
						v9 = sub_1400F52E0(
							*(_QWORD*)(qword_140C65898 + 29504) + 2688i64,
							(__m128i*)L"UI\\ActionConfirmButton.xml",
							(int*)L"ContentLine",
							0i64,
							v7,
							-2);
						v10 = (__int64)v9;
						if (v9)
						{
							v11 = (_DWORD*)sub_1400D3830((__int64)(v9 + 69), L"Label");
							v13 = (__int64)v11;
							if (v11)
							{
								v11[176] &= 0xFFFFFFDB;
								v11[176] |= 0x10u;
								(*(void(__fastcall**)(_DWORD*, _QWORD))(*(_QWORD*)v11 + 80i64))(v11, *(_QWORD*)(v1 + 40));
								sub_14051CA70(v14, v13);
							}
							sub_14051CA70(v12, v10);
							sub_14051CA70(v15, v7);
							v16 = sub_1400CD4C0(v7, 0);
							v17 = sub_1400CB3D0(v7, v21);
							v18 = v17[3] - v17[1];
							sub_1400CB3D0((__int64)v4, v21);
							v19 = v16 + v22 - v18;
							if (v19 < v22)
								v19 = v22;
							v22 = v19;
							sub_1400CC7C0((__int64)v4, v21);
							sub_14051CA70(v20, (__int64)v4);
							sub_1400CB690((__int64)v4);
							sub_1400CB960(v4);
						}
					}
				}
			}
		}
	}
}
// 14051CBF1: variable 'v6' is possibly undefined
// 14051CC82: variable 'v14' is possibly undefined
// 14051CC8A: variable 'v12' is possibly undefined
// 14051CC92: variable 'v15' is possibly undefined
// 14051CCE6: variable 'v20' is possibly undefined
// 140B6B7C0: using guessed type wchar_t aActionconfirmL[22];
// 140B6B7F0: using guessed type wchar_t aContainer[10];
// 140B6B808: using guessed type wchar_t aTooltipbase[12];
// 140B6B820: using guessed type wchar_t aUiActionconfir_4[27];
// 140B6BE20: using guessed type wchar_t aContentline_0[12];
// 140B6BE38: using guessed type wchar_t aLabel_3[6];
// 140C65898: using guessed type __int64 qword_140C65898;
// 14051CB20: using guessed type int var_18[3];

