#include "../winhttp.h"

//----- (000000014039EAF0) ----------------------------------------------------
void __fastcall sub_14039EAF0(__int64 a1, __int64 a2, int a3)
{
	int* v5; // rax
	int v6; // ecx
	int v7; // eax
	__int64 v8; // rsi
	int v9; // edx
	__int64 v10; // rcx
	int v11; // eax
	int v12; // edx
	int v13; // r8d
	unsigned int v14; // edx
	__int64 v15; // rdx
	unsigned int v16; // eax
	int v17; // r9d
	int v18; // r8d
	int v19; // esi
	__int64 v20; // rax
	unsigned __int64 v21; // rdx
	__int64 v22; // rsi
	int v23; // eax
	int v24; // ebx
	__int64 v25; // rax
	__int64 v26; // rax
	__int64 v27; // rsi
	int v28; // eax
	int v29; // ebx
	__int64 v30; // rax
	unsigned __int64 v31; // rdx
	unsigned __int64 v32; // rax
	int v33; // r8d
	_DWORD* v34; // rcx
	int v35; // eax
	unsigned int v36; // edx
	__int64 v37; // [rsp+30h] [rbp-18h] BYREF
	int v38; // [rsp+38h] [rbp-10h]

	if (*(_QWORD*)(a1 + 120))
	{
		switch (*(_DWORD*)a2)
		{
		case 0:
			v5 = (int*)qword_140C63750;
			*(_DWORD*)a2 = 11;
			v6 = *v5;
			v7 = dword_140C45EC0;
			if (v6 < dword_140C45EC0)
				v7 = v6;
			if (!*((_BYTE*)&dword_140C45ED0 + v7))
			{
				v8 = *(_QWORD*)(a1 + 120);
				v9 = *(_DWORD*)(a2 + 4);
				if (*(_DWORD*)(v8 + 264) != v9)
				{
					v10 = *(_QWORD*)(a1 + 120);
					*(_DWORD*)(v8 + 264) = v9;
					*(_DWORD*)(v8 + 268) = sub_14045A950(v10, v9);
				}
			}
			v11 = sub_14039C430(a1, *(_DWORD*)(a2 + 8), a3);
			goto LABEL_13;
		case 1:
			*(_DWORD*)a2 = 11;
			v26 = sub_1403AC780(a1 + 160, (int*)(a2 + 96));
			v27 = v26;
			if (v26)
			{
				if ((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v26 + 48i64))(v26) == *(_QWORD*)(a2 + 104))
				{
					v28 = sub_1403998E0(a1, a2 + 96, 0i64, 0i64);
					v29 = v28;
					if (v28)
					{
						if (v28 != 317 && sub_14056A030(v27))
						{
							v30 = sub_14056A030(v27);
							sub_1403A12A0(a1, v29, v30, 0);
						}
					}
				}
			}
			return;
		case 2:
			v12 = *(_DWORD*)(a2 + 4);
			*(_DWORD*)a2 = 11;
			sub_14039C1E0(a1, v12);
			return;
		case 3:
			v16 = *(_DWORD*)(a2 + 8);
			v17 = *(_DWORD*)(a2 + 88);
			v18 = *(_DWORD*)(a2 + 112);
			*(_DWORD*)a2 = 11;
			v11 = sub_14039AC90(a1, *(_QWORD*)(a1 + 120), v18, v17, v16);
			goto LABEL_13;
		case 4:
			v21 = *(unsigned int*)(a2 + 88);
			*(_DWORD*)a2 = 11;
			if (v21 < *(_QWORD*)(a1 + 2712))
			{
				v22 = *(_QWORD*)(*(_QWORD*)(a1 + 2704) + 8 * v21);
				if (v22)
				{
					v23 = sub_14039A040(a1, v21, 0i64, 0, *(_DWORD*)(a2 + 4), 0i64);
					v24 = v23;
					if (v23)
					{
						if (v23 != 317)
						{
							v25 = sub_1405A4B80(v22, 1);
							sub_1403A12A0(a1, v24, v25, 0);
						}
					}
				}
			}
			return;
		case 5:
			v15 = *(unsigned int*)(a2 + 8);
			*(_DWORD*)a2 = 11;
			v11 = sub_14039B340(a1, v15);
		LABEL_13:
			v19 = v11;
			if (v11)
			{
				if (v11 != 317)
				{
					v20 = sub_1403ACD90(qword_140C65B70, *(_DWORD*)(a2 + 8), *(_QWORD*)(a1 + 120));
					sub_1403A12A0(a1, v19, v20, 0);
				}
			}
			return;
		case 6:
			v13 = *(_DWORD*)(a2 + 92);
			v14 = *(_DWORD*)(a2 + 88);
			*(_DWORD*)a2 = 11;
			sub_14039BF20(a1, v14, v13);
			return;
		case 7:
			*(_DWORD*)a2 = 11;
			sub_140397850(a1, 0, 0i64);
			return;
		case 8:
			*(_DWORD*)a2 = 11;
			sub_140397CE0(a1);
			return;
		case 9:
			v31 = *(_QWORD*)(a1 + 25456);
			v32 = 0i64;
			if (!v31)
				goto LABEL_34;
			v33 = *(_DWORD*)(a1 + 26192);
			v34 = *(_DWORD**)(a1 + 25448);
			break;
		case 0xA:
			v36 = *(_DWORD*)(a2 + 116);
			*(_DWORD*)a2 = 11;
			sub_14053BCC0(a1, v36);
			return;
		default:
			return;
		}
		while (*v34 != v33)
		{
			++v32;
			++v34;
			if (v32 >= v31)
			{
			LABEL_34:
				*(_DWORD*)a2 = 11;
				v37 = 0i64;
				v38 = 0;
				LOWORD(v37) = *(_WORD*)(a1 + 26272);
				v35 = *(_DWORD*)(a1 + 26188);
				v38 = 1;
				HIDWORD(v37) = v35;
				sub_1403F4900(a1, 0x4DBu, (__int64)&v37);
				sub_140003460((__int64*)(a1 + 25448), (int*)(a1 + 26192));
				return;
			}
		}
	}
}
// 14039EB7E: variable 'a3' is possibly undefined
// 1403998E0: using guessed type __int64 __fastcall sub_1403998E0(_QWORD, _QWORD, _QWORD, _QWORD);
// 14039B340: using guessed type __int64 __fastcall sub_14039B340(_QWORD, _QWORD);
// 140C45EC0: using guessed type int dword_140C45EC0;
// 140C45ED0: using guessed type int dword_140C45ED0;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65B70: using guessed type __int64 qword_140C65B70;

