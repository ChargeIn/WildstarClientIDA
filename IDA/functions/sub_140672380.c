#include "../winhttp.h"

//----- (0000000140672380) ----------------------------------------------------
void __fastcall sub_140672380(__int64* a1, __int64 a2)
{
	__int64* v4; // rsi
	unsigned int v5; // edx
	int* v6; // rax
	__int64 v7; // rcx
	int* v8; // rax
	__int64 v9; // rcx
	unsigned int v10; // edx
	int* v11; // rax
	__int64 v12; // rcx
	int* v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdi
	__int64 v16; // r14
	__int64* v17; // rsi
	unsigned int v18; // edx
	int* v19; // rax
	__int64 v20; // rcx
	__int64* v21; // rbx
	__int64 v22; // rcx
	int* v23; // rax
	__int64 v24; // rdi
	__int64 v25; // rcx
	unsigned __int64 v26; // rax
	__int64 v27; // rbx
	__int64 v28; // rax
	int v29; // eax
	__int64 v30; // rdx
	int v31; // ebx
	int* v32; // [rsp+28h] [rbp-49h] BYREF
	int* v33; // [rsp+30h] [rbp-41h] BYREF
	char v34[8]; // [rsp+38h] [rbp-39h] BYREF
	int* v35; // [rsp+40h] [rbp-31h]
	__int64 v36; // [rsp+48h] [rbp-29h]
	char v37[8]; // [rsp+58h] [rbp-19h] BYREF
	int* v38; // [rsp+60h] [rbp-11h]
	__int64 v39; // [rsp+68h] [rbp-9h]
	__int64(__fastcall * *v40)(); // [rsp+78h] [rbp+7h] BYREF
	int v41; // [rsp+80h] [rbp+Fh]
	__int64 v42; // [rsp+88h] [rbp+17h]
	__int64 v43; // [rsp+90h] [rbp+1Fh]
	__int64 v44; // [rsp+D8h] [rbp+67h] BYREF
	int* v45; // [rsp+E8h] [rbp+77h] BYREF
	int* v46; // [rsp+F0h] [rbp+7Fh] BYREF

	v4 = 0i64;
	v38 = sub_14018B280(40i64, 0);
	v39 = 0i64;
	*(_BYTE*)v38 = 0;
	*((_QWORD*)v38 + 1) = 0i64;
	*((_QWORD*)v38 + 2) = v38;
	*((_QWORD*)v38 + 3) = v38;
	v36 = 0i64;
	v35 = sub_14018B280(40i64, 0);
	*(_BYTE*)v35 = 0;
	*((_QWORD*)v35 + 1) = 0i64;
	*((_QWORD*)v35 + 2) = v35;
	*((_QWORD*)v35 + 3) = v35;
	if (*((_DWORD*)a1 + 335) && a1 != (__int64*)-504i64)
	{
		v5 = *((_DWORD*)a1 + 158);
		if (v5)
		{
			v6 = v38;
			v7 = *((_QWORD*)v38 + 1);
			while (v7)
			{
				if (*(_DWORD*)(v7 + 32) < v5)
				{
					v7 = *(_QWORD*)(v7 + 24);
				}
				else
				{
					v6 = (int*)v7;
					v7 = *(_QWORD*)(v7 + 16);
				}
			}
			if (v6 == v38 || v5 < v6[8])
			{
				v44 = *((unsigned int*)a1 + 158);
				v45 = v6;
				sub_140032B30((__int64)v37, &v46, (__int64*)&v45, &v44);
				v6 = v46;
			}
			v6[9] = 2;
			if (*((_DWORD*)a1 + 334) && a1 != (__int64*)-192i64)
			{
				v8 = v35;
				v9 = *((_QWORD*)v35 + 1);
				while (v9)
				{
					if (*(_DWORD*)(v9 + 32) < *((_DWORD*)a1 + 158))
					{
						v9 = *(_QWORD*)(v9 + 24);
					}
					else
					{
						v8 = (int*)v9;
						v9 = *(_QWORD*)(v9 + 16);
					}
				}
				if (v8 == v35 || *((_DWORD*)a1 + 158) < (unsigned int)v8[8])
				{
					v44 = *((unsigned int*)a1 + 158);
					v45 = v8;
					sub_140032B30((__int64)v34, &v46, (__int64*)&v45, &v44);
					v8 = v46;
				}
				v8[9] = *((_DWORD*)a1 + 51);
			}
		}
		v10 = *((_DWORD*)a1 + 159);
		if (v10)
		{
			v11 = v38;
			v12 = *((_QWORD*)v38 + 1);
			while (v12)
			{
				if (*(_DWORD*)(v12 + 32) < v10)
				{
					v12 = *(_QWORD*)(v12 + 24);
				}
				else
				{
					v11 = (int*)v12;
					v12 = *(_QWORD*)(v12 + 16);
				}
			}
			if (v11 == v38 || v10 < v11[8])
			{
				v44 = *((unsigned int*)a1 + 159);
				v45 = v11;
				sub_140032B30((__int64)v37, &v46, (__int64*)&v45, &v44);
				v11 = v46;
			}
			v11[9] = 1;
			if (*((_DWORD*)a1 + 334) && a1 != (__int64*)-192i64)
			{
				v13 = v35;
				v14 = *((_QWORD*)v35 + 1);
				while (v14)
				{
					if (*(_DWORD*)(v14 + 32) < *((_DWORD*)a1 + 159))
					{
						v14 = *(_QWORD*)(v14 + 24);
					}
					else
					{
						v13 = (int*)v14;
						v14 = *(_QWORD*)(v14 + 16);
					}
				}
				if (v13 == v35 || *((_DWORD*)a1 + 159) < (unsigned int)v13[8])
				{
					v44 = *((unsigned int*)a1 + 159);
					v45 = v13;
					sub_140032B30((__int64)v34, &v46, (__int64*)&v45, &v44);
					v13 = v46;
				}
				v13[9] = *((_DWORD*)a1 + 51);
			}
		}
		v15 = 0i64;
		v16 = 8i64;
		do
		{
			if (*((_DWORD*)a1 + 335))
				v4 = a1 + 63;
			v17 = &v4[v15];
			v18 = *((_DWORD*)v17 + 69);
			if (v18)
			{
				v19 = v38;
				v20 = *((_QWORD*)v38 + 1);
				while (v20)
				{
					if (*(_DWORD*)(v20 + 32) < v18)
					{
						v20 = *(_QWORD*)(v20 + 24);
					}
					else
					{
						v19 = (int*)v20;
						v20 = *(_QWORD*)(v20 + 16);
					}
				}
				if (v19 == v38 || v18 < v19[8])
				{
					v44 = *((unsigned int*)v17 + 69);
					v46 = v19;
					sub_140032B30((__int64)v37, &v32, (__int64*)&v46, &v44);
					v19 = v32;
				}
				v19[9] = 1;
				v21 = 0i64;
				v22 = *((_QWORD*)v35 + 1);
				v23 = v35;
				if (*((_DWORD*)a1 + 335))
					v21 = a1 + 63;
				while (v22)
				{
					if (*(_DWORD*)(v22 + 32) < *((_DWORD*)v17 + 69))
					{
						v22 = *(_QWORD*)(v22 + 24);
					}
					else
					{
						v23 = (int*)v22;
						v22 = *(_QWORD*)(v22 + 16);
					}
				}
				if (v23 == v35 || *((_DWORD*)v17 + 69) < (unsigned int)v23[8])
				{
					v45 = (int*)*((unsigned int*)v17 + 69);
					v46 = v23;
					sub_140032B30((__int64)v34, &v33, (__int64*)&v46, &v45);
					v23 = v33;
				}
				v23[9] = HIDWORD(v21[v15 + 42]);
			}
			++v15;
			v4 = 0i64;
			--v16;
		} while (v16);
	}
	v24 = *a1;
	v25 = *(_QWORD*)(*a1 + 32);
	v40 = off_140B569F0;
	v42 = v24;
	v26 = *(_QWORD*)(v25 + 112);
	LODWORD(v43) = 1;
	if (*(_QWORD*)(v25 + 120) >= v26)
		sub_14005E2C0(v24);
	v27 = *(_QWORD*)(v24 + 16);
	v28 = sub_14005C1B0(v24, 0, 0);
	*(_DWORD*)(v27 + 8) = 5;
	*(_QWORD*)v27 = v28;
	*(_QWORD*)(v24 + 16) += 16i64;
	v41 = sub_1400578C0(v24);
	v29 = sub_140675BB0(a1, (__int64)&v40, (__int64)v37, (__int64)v34);
	v31 = v41;
	if (v29)
		sub_1400FB2A0(a2, (__int64)L"arSpells", v41);
	if (v42)
		sub_1400579E0(v42, v30, v31);
	sub_140008410((__int64)v34);
	sub_14018B900((__int64)v35, 0);
	sub_140008410((__int64)v37);
	sub_14018B900((__int64)v38, 0);
}
// 140672807: variable 'v30' is possibly undefined
// 140B2FBB8: using guessed type wchar_t aArspells[9];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140672380: using guessed type char var_70[8];
// 140672380: using guessed type char var_90[8];

