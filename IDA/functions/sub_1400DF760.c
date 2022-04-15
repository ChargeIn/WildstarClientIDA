#include "../winhttp.h"

//----- (00000001400DF760) ----------------------------------------------------
__int64 __fastcall sub_1400DF760(_QWORD* a1)
{
	__int64 result; // rax
	_QWORD* v3; // rdi
	int v4; // esi
	int* v5; // rax
	__int64 v6; // rdx
	_DWORD* v7; // rcx
	_DWORD* v8; // rax
	__int64 v9; // r11
	__int64 v10; // r8
	_DWORD* v11; // rcx
	unsigned __int64 v12; // rdx
	int v13; // eax
	_QWORD* v14; // rax
	__int64 v15; // r11
	__int64 v16; // rcx
	_DWORD* v17; // rcx
	int v18; // eax
	__int64* v19; // rcx
	char* v20; // rax
	__int64 v21; // rsi
	_DWORD* v22; // rax
	__int64(__fastcall * *v23)(); // [rsp+20h] [rbp-48h] BYREF
	__int64 v24; // [rsp+28h] [rbp-40h]
	_QWORD* v25; // [rsp+30h] [rbp-38h]
	int v26; // [rsp+38h] [rbp-30h]
	__int64 v27; // [rsp+40h] [rbp-28h] BYREF
	__int64 v28; // [rsp+48h] [rbp-20h]

	result = sub_1400D66A0(a1, 1u);
	v3 = (_QWORD*)result;
	if (result)
	{
		v4 = -2;
		if (!*(_QWORD*)(result + 288))
		{
			v5 = sub_14018B280(32i64, 0);
			if (v5)
			{
				*(_QWORD*)v5 = off_140B569F0;
				*((_QWORD*)v5 + 2) = 0i64;
				v5[6] = 1;
				v5[2] = -2;
			}
			v3[36] = v5;
		}
		if ((*(unsigned int(__fastcall**)(_QWORD))(*(_QWORD*)v3[36] + 8i64))(v3[36]))
		{
			return 0i64;
		}
		else
		{
			v7 = (_DWORD*)a1[2];
			v8 = (_DWORD*)(a1[3] + 16i64);
			if (v8 >= v7 || v8 == dword_140A12138 || *(_DWORD*)(a1[3] + 24i64) != 5)
			{
				*v7 = 0;
				v7[2] = 1;
				a1[2] += 16i64;
			}
			else
			{
				v23 = off_140B569F0;
				v9 = (__int64)a1;
				v25 = a1;
				v26 = 1;
				LODWORD(v24) = -2;
				if (v8 < v7 && v8 != dword_140A12138 && v8[2] == 5)
				{
					sub_1400579E0((__int64)a1, v6, -2);
					v10 = (__int64)v25;
					v11 = dword_140A12138;
					v12 = v25[2];
					if (v25[3] + 16i64 < v12)
						v11 = (_DWORD*)(v25[3] + 16i64);
					*(_QWORD*)v12 = *(_QWORD*)v11;
					*(_DWORD*)(v12 + 8) = v11[2];
					*(_QWORD*)(v10 + 16) += 16i64;
					v13 = sub_1400578C0((__int64)v25);
					v9 = (__int64)v25;
					v4 = v13;
					LODWORD(v24) = v13;
				}
				if (!v9 || v4 == -2)
					goto LABEL_28;
				v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v9 + 32) + 160i64), v4);
				v16 = *(_QWORD*)(v15 + 16);
				*(_QWORD*)v16 = *v14;
				*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
				*(_QWORD*)(v15 + 16) += 16i64;
				v6 = (__int64)v25;
				v17 = (_DWORD*)(v25[2] - 16i64);
				v18 = v17 == dword_140A12138 ? -1 : v17[2];
				v25[2] = v17;
				if (v18 == 5)
				{
					v19 = (__int64*)v3[36];
					if (v19 != (__int64*)&v23)
						sub_1400FA810((__int64)v19, (__int64)&v23);
					v20 = (char*)sub_140056BB0(a1, 3u, 0i64);
					sub_14018F2D0(&v27, v20);
					v21 = v28;
					sub_1400C85F0(v3, (__int64)&off_140A149A0, v3, v28, v23, v24);
					if (v21)
						sub_14018B900(v21, 0);
					v22 = (_DWORD*)a1[2];
					*v22 = 1;
				}
				else
				{
				LABEL_28:
					v22 = (_DWORD*)a1[2];
					*v22 = 0;
				}
				v22[2] = 1;
				a1[2] += 16i64;
				v23 = off_140B56A08;
				if (v25)
					sub_1400579E0((__int64)v25, v6, v24);
			}
			return 1i64;
		}
	}
	return result;
}
// 1400DF856: variable 'v6' is possibly undefined
// 1400DF8C0: variable 'v15' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A149A0: using guessed type char *off_140A149A0;
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();

