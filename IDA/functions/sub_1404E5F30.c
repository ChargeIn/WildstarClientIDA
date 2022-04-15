#include "../winhttp.h"

//----- (00000001404E5F30) ----------------------------------------------------
__int64 __fastcall sub_1404E5F30(__int64 a1, __int64 a2)
{
	unsigned __int64 v2; // rsi
	_DWORD* v3; // rax
	unsigned __int64 v4; // r14
	__int64 v5; // r12
	__int64 v6; // r8
	_DWORD* v7; // rcx
	unsigned __int64 v8; // rdx
	int v9; // eax
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // r10
	int v13; // r11d
	_QWORD* v14; // rax
	_DWORD* v15; // rcx
	int v16; // eax
	int* v17; // r15
	__int64 v18; // rdi
	int* v19; // rax
	int* v20; // rbx
	unsigned __int64 v21; // rdi
	__int64 v22; // rdi
	int* v23; // rax
	int* v24; // r13
	int* v25; // rcx
	_QWORD* v26; // rdi
	char* v27; // r15
	__int64 v28; // rcx
	__int64(__fastcall * *v30)(); // [rsp+20h] [rbp-59h] BYREF
	int v31; // [rsp+28h] [rbp-51h]
	__int64 v32; // [rsp+30h] [rbp-49h]
	int v33; // [rsp+38h] [rbp-41h]
	__int64(__fastcall * *v34)(); // [rsp+40h] [rbp-39h] BYREF
	int v35; // [rsp+48h] [rbp-31h]
	__int64 v36; // [rsp+50h] [rbp-29h]
	__int64(__fastcall * **v37)(); // [rsp+58h] [rbp-21h]
	char v38[8]; // [rsp+60h] [rbp-19h] BYREF
	int v39; // [rsp+68h] [rbp-11h]
	__int64 v40; // [rsp+70h] [rbp-9h]
	__int64 v41; // [rsp+78h] [rbp-1h] BYREF
	__int64 v42; // [rsp+80h] [rbp+7h]
	__int64 v43; // [rsp+88h] [rbp+Fh] BYREF
	__int64 v44; // [rsp+90h] [rbp+17h]
	__int64 v45; // [rsp+E0h] [rbp+67h]

	v2 = 0i64;
	v32 = a1;
	v33 = 1;
	v31 = -2;
	v30 = off_140B569F0;
	v3 = *(_DWORD**)(a1 + 24);
	v4 = 0i64;
	v42 = 0i64;
	v5 = 0i64;
	v41 = 0i64;
	if ((unsigned __int64)v3 < *(_QWORD*)(a1 + 16) && v3 != dword_140A12138 && v3[2] == 5)
	{
		sub_1400579E0(a1, a2, -2);
		v6 = v32;
		v7 = dword_140A12138;
		v8 = *(_QWORD*)(v32 + 16);
		if (*(_QWORD*)(v32 + 24) < v8)
			v7 = *(_DWORD**)(v32 + 24);
		*(_QWORD*)v8 = *(_QWORD*)v7;
		*(_DWORD*)(v8 + 8) = v7[2];
		*(_QWORD*)(v6 + 16) += 16i64;
		v9 = sub_1400578C0(v32);
		a1 = v32;
		v31 = v9;
	}
	v36 = a1;
	v35 = -2;
	v37 = &v30;
	v34 = off_140B56A08;
	*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	((void(__fastcall*)(__int64(__fastcall***)(), __int64))v34[2])(&v34, 0xFFFFFFFFi64);
	*(_QWORD*)(v32 + 16) -= 16i64;
	while (((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v37)[1])(v37)
		&& (unsigned int)sub_1400FCBA0((__int64)&v34))
	{
		sub_1400FB8D0((__int64)&v34, (__int64)v38);
		v12 = v40;
		if (v40)
		{
			v13 = v39;
			if (v39 != -2)
			{
				v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v40 + 32) + 160i64), v39);
				v11 = *(_QWORD*)(v12 + 16);
				*(_QWORD*)v11 = *v14;
				*(_DWORD*)(v11 + 8) = *((_DWORD*)v14 + 2);
				*(_QWORD*)(v12 + 16) += 16i64;
				v15 = (_DWORD*)(*(_QWORD*)(v12 + 16) - 16i64);
				v16 = v15 == dword_140A12138 ? -1 : v15[2];
				*(_QWORD*)(v12 + 16) = v15;
				if (v16 == 4)
				{
					v17 = (int*)sub_1400F9F50((__int64)v38, &v43)[1];
					if (v17)
					{
						v18 = 0i64;
						if (*(_WORD*)v17)
						{
							do
								++v18;
							while (*((_WORD*)v17 + v18));
						}
						v19 = sub_14018B280(2 * v18 + 18, 0);
						if (v19)
						{
							*(_QWORD*)v19 = off_140B55060;
							*((_QWORD*)v19 + 1) = v18;
						}
						else
						{
							v19 = 0i64;
						}
						v20 = v19 + 4;
						v21 = 2 * v18;
						sub_1407DB590(v19 + 4, v17, v21);
						*(_WORD*)((char*)v20 + v21) = 0;
					}
					else
					{
						v20 = 0i64;
					}
					v22 = v4 + 1;
					v45 = v4 + 1;
					v23 = sub_14018DB00(v5, v4 + 1, 8i64);
					v24 = v23;
					v25 = &v23[2 * v4];
					if (v25)
					{
						*(_QWORD*)v25 = v20;
						v20 = 0i64;
					}
					if ((int*)v5 != v23)
					{
						if (v4)
						{
							v26 = (_QWORD*)v5;
							v27 = (char*)v23 - v5;
							do
							{
								if ((_QWORD*)((char*)v26 + (_QWORD)v27))
								{
									*(_QWORD*)((char*)v26 + (_QWORD)v27) = *v26;
									*v26 = 0i64;
								}
								if (*v26)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v26 - 16i64) + 8i64))(*v26 - 16i64);
								++v26;
								--v4;
							} while (v4);
							v22 = v45;
						}
						if (v5)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
						v5 = (__int64)v24;
					}
					v4 = v22;
					v42 = v22;
					if (v20)
						(*(void(__fastcall**)(int*))(*((_QWORD*)v20 - 2) + 8i64))(v20 - 4);
					if (v44)
						sub_14018B900(v44, 0);
					v13 = v39;
					v12 = v40;
				}
			}
			sub_1400579E0(v12, v11, v13);
		}
	}
	v41 = v5;
	if (dword_140C67030 == 3 && HIDWORD(qword_140C66780) != 1)
		sub_14003C5A0(&v41);
	v34 = off_140B56A08;
	if (v36)
		sub_1400579E0(v36, v10, v35);
	v30 = off_140B56A08;
	if (v32)
		sub_1400579E0(v32, v10, v31);
	if (v4)
	{
		do
		{
			v28 = *(_QWORD*)(v5 + 8 * v2);
			if (v28)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v28 - 16) + 8i64))(v28 - 16);
			++v2;
		} while (v2 < v4);
	}
	if (v5)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v5 - 16) + 8i64))(v5 - 16);
	return 0i64;
}
// 1404E607D: variable 'v12' is possibly undefined
// 1404E61EA: variable 'v11' is possibly undefined
// 1404E61EA: variable 'v13' is possibly undefined
// 1404E622B: variable 'v10' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C66780: using guessed type __int64 qword_140C66780;
// 140C67030: using guessed type int dword_140C67030;
// 1404E5F30: using guessed type char var_70[8];

