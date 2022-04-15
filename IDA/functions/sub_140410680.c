#include "../winhttp.h"

//----- (0000000140410680) ----------------------------------------------------
__int64 __fastcall sub_140410680(__int64 a1, _QWORD* a2, unsigned int a3)
{
	unsigned int v6; // ebx
	_DWORD* v7; // rax
	_DWORD* v8; // rax
	__int64 v9; // rdx
	_DWORD* v10; // r10
	_DWORD* v11; // rax
	__int64 v12; // r11
	__int64 v13; // rcx
	__int64 v14; // rdx
	__int64* v15; // rax
	_QWORD* v16; // rax
	_DWORD* v17; // rax
	unsigned int v18; // eax
	__int64* v19; // rax
	__int64 v20; // rax
	__int64* v21; // rax
	__int64 v22; // rax
	void(__fastcall * ***v23)(_QWORD); // rax
	void(__fastcall * **v24)(_QWORD); // rdx
	int* v25; // rax
	int v26; // ecx
	int* v27; // rax
	int* v28; // rax
	int* v29; // rax
	__int64* v30; // rax
	__int64 v31; // rcx
	__int64(__fastcall * *v33)(); // [rsp+20h] [rbp-28h] BYREF
	int v34; // [rsp+28h] [rbp-20h]
	_QWORD* v35; // [rsp+30h] [rbp-18h]
	int v36; // [rsp+38h] [rbp-10h]

	v6 = 0;
	v7 = sub_1400580E0((__int64)a2, a3);
	if (v7 != dword_140A12138 && v7[2] == 5)
	{
		v35 = a2;
		v34 = -2;
		v33 = off_140B569F0;
		v36 = 1;
		v8 = sub_1400580E0((__int64)a2, a3);
		if (v8 != v10 && v8[2] == 5)
		{
			sub_1400579E0((__int64)v35, v9, v34);
			v11 = sub_1400580E0((__int64)v35, a3);
			v13 = *(_QWORD*)(v12 + 16);
			*(_QWORD*)v13 = *(_QWORD*)v11;
			*(_DWORD*)(v13 + 8) = v11[2];
			*(_QWORD*)(v12 + 16) += 16i64;
			v34 = sub_1400578C0((__int64)v35);
		}
		v6 = sub_1404109E0(a1, (__int64)a2, (__int64)&v33);
		v33 = off_140B56A08;
		if (v35)
			sub_1400579E0((__int64)v35, v14, v34);
		return v6;
	}
	v15 = (__int64*)sub_140417660((__int64)a2, a3);
	if (v15 && *v15)
		return (unsigned int)sub_140410300(a1, *v15, 1);
	v16 = (_QWORD*)sub_140417660((__int64)a2, a3);
	if (v16 && (v17 = (_DWORD*)*v16) != 0i64 && v17[302] && v17[285] && v17 != (_DWORD*)-1136i64)
	{
		v18 = sub_1404124E0(a1, v17 + 284, 1);
	}
	else
	{
		v19 = (__int64*)sub_140417660((__int64)a2, a3);
		if (v19 && (v20 = *v19) != 0 && *(_DWORD*)(v20 + 1204) && *(_DWORD*)(v20 + 792) && v20 != -792)
		{
			v18 = sub_1404129B0((_DWORD*)a1, (int*)(v20 + 792), 1);
		}
		else
		{
			v21 = (__int64*)sub_140417660((__int64)a2, a3);
			if (v21 && (v22 = *v21) != 0 && *(_DWORD*)(v22 + 1200) && *(_DWORD*)(v22 + 1048) && v22 != -1048)
			{
				v18 = sub_1404111E0(a1, v22 + 1048, 1);
			}
			else
			{
				v23 = (void(__fastcall****)(_QWORD))sub_140417660((__int64)a2, a3);
				if (!v23)
					goto LABEL_34;
				v24 = *v23;
				if (*v23)
					v24 = (void(__fastcall***)(_QWORD)) * v24;
				if (v24)
				{
					v18 = sub_1404123F0((_QWORD*)a1, v24, 1);
				}
				else
				{
				LABEL_34:
					v25 = sub_140417BF0(a2, a3);
					if (v25)
					{
						v26 = *(_DWORD*)(a1 + 1184);
						if (v26 <= 6)
						{
							if (v25 != *(int**)(a1 + 8) || v26 != 6)
								v6 = 1;
							*(_QWORD*)(a1 + 8) = v25;
							*(_DWORD*)(a1 + 1184) = 6;
						}
						sub_140412AD0(a1);
						goto LABEL_54;
					}
					v27 = sub_140417C90(a2, a3);
					if (v27)
					{
						v18 = sub_140412570(a1, v27, 1, 6);
					}
					else
					{
						v28 = (int*)sub_140417D90((__int64)a2, a3);
						if (v28)
						{
							v18 = sub_140412800(a1, v28, 1, 6);
						}
						else
						{
							v29 = sub_140417D10(a2, a3);
							if (v29)
							{
								v18 = sub_140412690(a1, v29, 1, 6);
							}
							else
							{
								v30 = (__int64*)sub_140417660((__int64)a2, a3);
								if (!v30)
									return v6;
								v31 = *v30;
								if (!*v30 || !*(_DWORD*)(v31 + 1188) || v31 == -744 || !*(_DWORD*)(v31 + 1188))
									return v6;
								v18 = sub_140412900(a1, (_DWORD*)(v31 + 744), 1, 6);
							}
						}
					}
				}
			}
		}
	}
	v6 = v18;
LABEL_54:
	if (v6)
	{
		*(_QWORD*)(a1 + 16) = 0i64;
		*(_DWORD*)(a1 + 24) = 0;
	}
	return v6;
}
// 14041099A: conditional instruction was optimized away because rcx.8!=FFFFFFFFFFFFFD18
// 1404106F3: variable 'v10' is possibly undefined
// 140410705: variable 'v9' is possibly undefined
// 140410719: variable 'v12' is possibly undefined
// 140410771: variable 'v14' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

