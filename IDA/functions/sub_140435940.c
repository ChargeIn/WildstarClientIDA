#include "../winhttp.h"

//----- (0000000140435940) ----------------------------------------------------
_QWORD* __fastcall sub_140435940(_QWORD* a1, int a2)
{
	int* v4; // rax
	_QWORD* v5; // r15
	__int64* v6; // rax
	int* v7; // rax
	int* v8; // r8
	_DWORD* v9; // rax
	int* v10; // rcx
	int* v11; // rbx
	char* v12; // rax
	int* v13; // rbx
	__int64 v14; // rdx
	int* v15; // rcx
	char* v16; // rax
	char* v17; // rax
	float v18; // xmm6_4
	int* v19; // rax
	char* v20; // r8
	_DWORD* v21; // rax
	int v22; // ecx
	int v23; // ecx
	char* v24; // rax
	int* v25; // rcx
	int v26; // eax
	__int64 v27; // rcx
	int* v28; // rdi
	__int64 v29; // rax
	int* v30; // r14
	unsigned __int64 v31; // r8
	unsigned __int64 v32; // rbx
	unsigned __int64 v33; // rbx
	char* v34; // rdi
	int* v35; // rbx
	__int64 v37; // [rsp+20h] [rbp-39h] BYREF
	char* v38; // [rsp+28h] [rbp-31h]
	char* v39; // [rsp+30h] [rbp-29h]
	int* v40; // [rsp+38h] [rbp-21h]
	char v41[8]; // [rsp+40h] [rbp-19h] BYREF
	int* v42; // [rsp+48h] [rbp-11h]
	int* v43; // [rsp+50h] [rbp-9h]
	int* v44; // [rsp+58h] [rbp-1h]
	__int64 v45; // [rsp+60h] [rbp+7h] BYREF
	int* v46; // [rsp+68h] [rbp+Fh]
	int* v47; // [rsp+70h] [rbp+17h]
	int* v48; // [rsp+78h] [rbp+1Fh]

	v4 = sub_14018B280(88i64, 0);
	if (v4)
		v5 = sub_1400B6390(v4);
	else
		v5 = 0i64;
	*(_DWORD*)(a1[2] + 8i64) = 0;
	a1[2] += 16i64;
	while (1)
	{
		v6 = (__int64*)sub_1400580E0((__int64)a1, a2);
		if (!(unsigned int)sub_14005BA70((__int64)a1, *v6, a1[2] - 16i64))
			break;
		a1[2] += 16i64;
		v42 = 0i64;
		v43 = 0i64;
		v44 = 0i64;
		v7 = sub_14018B280(16i64, 0);
		v8 = v7;
		v42 = v7;
		v43 = v7;
		v44 = v7 + 4;
		if (v7)
		{
			*(_WORD*)v7 = 0;
			v8 = v42;
		}
		v9 = (_DWORD*)(a1[2] - 32i64);
		if (v9 == dword_140A12138 || v9[2] != 4)
		{
			if (v8)
				sub_14018B900((__int64)v8, 0);
		LABEL_55:
			a1[2] -= 16i64;
		}
		else
		{
			sub_14018F2D0(&v45, (char*)(*(_QWORD*)v9 + 32i64));
			v10 = v42;
			v11 = v46;
			v43 = v47;
			v44 = v48;
			v42 = v46;
			if (v10)
			{
				sub_14018B900((__int64)v10, 0);
				v11 = v42;
			}
			if (!(unsigned int)sub_14018E2C0((__int64)v11, L"sex"))
			{
				v12 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
				sub_14018F2D0(&v45, v12);
				v13 = v46;
				if (!(unsigned int)sub_14018E2C0((__int64)v46, L"male"))
				{
					v14 = 0i64;
					goto LABEL_17;
				}
				if (!(unsigned int)sub_14018E2C0((__int64)v13, L"female"))
				{
					v14 = 1i64;
				LABEL_17:
					(*(void(__fastcall**)(_QWORD*, __int64))(*v5 + 120i64))(v5, v14);
				}
				if (!v13)
					goto LABEL_21;
				v15 = v13;
			LABEL_20:
				sub_14018B900((__int64)v15, 0);
				goto LABEL_21;
			}
			if (!(unsigned int)sub_14018E2C0((__int64)v11, L"name"))
			{
				v16 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
				sub_14018F2D0(&v45, v16);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v5 + 88i64))(v5, &v45);
				v15 = v46;
				if (v46)
					goto LABEL_20;
				goto LABEL_21;
			}
			if (!(unsigned int)sub_14018E2C0((__int64)v11, L"key"))
			{
				v17 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
				sub_14018F2D0(&v45, v17);
				(*(void(__fastcall**)(_QWORD*, __int64*))(*v5 + 72i64))(v5, &v45);
				v15 = v46;
				if (v46)
					goto LABEL_20;
				goto LABEL_21;
			}
			if (!(unsigned int)sub_14018E2C0((__int64)v11, L"count"))
			{
				v18 = sub_140056C40(a1, 0xFFFFFFFF);
				(*(void(__fastcall**)(_QWORD*))(*v5 + 112i64))(v5);
				(*(void(__fastcall**)(_QWORD*, _QWORD))(*v5 + 104i64))(v5, (unsigned int)(int)v18);
				goto LABEL_21;
			}
			v38 = 0i64;
			v39 = 0i64;
			v40 = 0i64;
			v19 = sub_14018B280(16i64, 0);
			v20 = (char*)v19;
			v38 = (char*)v19;
			v39 = (char*)v19;
			v40 = v19 + 4;
			if (v19)
			{
				*(_WORD*)v19 = 0;
				v20 = v38;
			}
			v21 = (_DWORD*)(a1[2] - 16i64);
			if (v21 == dword_140A12138)
				v22 = -1;
			else
				v22 = v21[2];
			v23 = v22 - 3;
			if (!v23)
			{
				v26 = sub_1400584E0((__int64)a1, -1);
				v28 = (int*)sub_14034BDD0(v27, v26);
				if (!v28)
				{
					v15 = (int*)v38;
					if (v38)
						goto LABEL_20;
					goto LABEL_21;
				}
				v29 = 0i64;
				if (*(_WORD*)v28)
				{
					do
						++v29;
					while (*((_WORD*)v28 + v29));
				}
				v30 = (int*)((char*)v28 + 2 * v29);
				v31 = (v39 - v38) >> 1;
				v32 = (2 * v29) >> 1;
				if (v32 > v31)
				{
					sub_1407DB590((int*)v38, v28, 2 * v31);
					sub_14001C310(&v37, (int*)((char*)v28 + 2 * ((v39 - v38) >> 1)), v30);
				}
				else
				{
					v33 = 2 * v32;
					sub_1407DB590((int*)v38, v28, v33);
					v34 = v39;
					v35 = (int*)&v38[v33];
					if (v35 != (int*)v39)
					{
						sub_1407DB590(v35, (int*)v39, 2ui64);
						v39 -= 2 * ((v34 - (char*)v35) >> 1);
					}
				}
				goto LABEL_51;
			}
			if (v23 == 1)
			{
				v24 = (char*)sub_140056BB0(a1, 0xFFFFFFFF, 0i64);
				sub_14018F2D0(&v45, v24);
				v25 = (int*)v38;
				v38 = (char*)v46;
				v39 = (char*)v47;
				v40 = v48;
				if (v25)
					sub_14018B900((__int64)v25, 0);
			LABEL_51:
				(*(void(__fastcall**)(_QWORD*, char*, __int64*))(*v5 + 152i64))(v5, v41, &v37);
				v15 = (int*)v38;
				if (v38)
					goto LABEL_20;
				goto LABEL_21;
			}
			if (v20)
			{
				v15 = (int*)v20;
				goto LABEL_20;
			}
		LABEL_21:
			if (!v42)
				goto LABEL_55;
			sub_14018B900((__int64)v42, 0);
			a1[2] -= 16i64;
		}
	}
	a1[2] -= 16i64;
	return v5;
}
// 140435C8E: variable 'v27' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B01BE8: using guessed type wchar_t aCount_1[6];
// 140B01BF8: using guessed type wchar_t aKey_0[4];
// 140B01C00: using guessed type wchar_t aName_13[5];
// 140B01C10: using guessed type wchar_t aFemale_1[7];
// 140B01C20: using guessed type wchar_t aMale_1[5];
// 140B01C30: using guessed type wchar_t aSex_3[4];
// 140435940: using guessed type char var_70[8];

