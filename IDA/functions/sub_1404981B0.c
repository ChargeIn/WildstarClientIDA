#include "../winhttp.h"

//----- (00000001404981B0) ----------------------------------------------------
__int64 __fastcall sub_1404981B0(__int64 a1, __int64 a2, unsigned int a3)
{
	__int64 v3; // r10
	unsigned int v4; // r14d
	__int64 v5; // rax
	_QWORD* v7; // rsi
	__int64 v8; // r9
	int* v10; // rax
	_QWORD* v11; // r13
	__int64 v12; // rdx
	int* v13; // rax
	__int64 v14; // rcx
	_QWORD* v15; // rax
	_QWORD* v16; // rdi
	__int64 v17; // r12
	__int64 v18; // r15
	unsigned int v19; // eax
	__int64 v20; // r8
	__int64 v21; // rdx
	int* v22; // rcx
	__int64 v23; // rax
	__int64 v24; // rdx
	unsigned int v25; // ecx
	__int64 v26; // rax
	__int64 v27; // rbx
	int* v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rax
	_QWORD* v31; // rbx
	unsigned int v32; // edi
	__int64 v33; // rax
	__int64 v34; // r14
	signed int v35; // eax
	int v36; // ecx
	unsigned int v37; // eax
	__int64 v38; // r8
	__int64 v39; // rdx
	int* v40; // rcx
	__int64 v41; // rax
	_QWORD* i; // rax
	__int64 j; // rax
	__int64 v44; // rax
	__int64 k; // rax
	__int64 m; // rax
	char* v47; // [rsp+28h] [rbp-D8h]
	_QWORD* v48; // [rsp+40h] [rbp-C0h] BYREF
	unsigned int v49; // [rsp+48h] [rbp-B8h]
	int* v50; // [rsp+50h] [rbp-B0h] BYREF
	int* v51[2]; // [rsp+58h] [rbp-A8h] BYREF
	int* v52; // [rsp+68h] [rbp-98h] BYREF
	_QWORD* v53; // [rsp+70h] [rbp-90h]
	__int64 v54; // [rsp+78h] [rbp-88h]
	_QWORD v55[2]; // [rsp+80h] [rbp-80h] BYREF
	_QWORD v56[2]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v57; // [rsp+A0h] [rbp-60h]
	WCHAR Buffer[128]; // [rsp+B0h] [rbp-50h] BYREF

	v3 = *(_QWORD*)(a1 + 16);
	v4 = a3;
	v49 = a3;
	v5 = *(_QWORD*)(v3 + 8);
	v54 = a2;
	v7 = (_QWORD*)a1;
	v53 = (_QWORD*)a1;
	v8 = v3;
	while (v5)
	{
		if (*(_DWORD*)(v5 + 32) < a3)
		{
			v5 = *(_QWORD*)(v5 + 24);
		}
		else
		{
			v8 = v5;
			v5 = *(_QWORD*)(v5 + 16);
		}
	}
	if (v8 == v3 || (v48 = (_QWORD*)v8, a3 < *(_DWORD*)(v8 + 32)))
		v48 = (_QWORD*)v3;
	if (v48 != (_QWORD*)v3 && v48[5])
		return 2147500037i64;
	v10 = sub_14018B280(136i64, 0);
	if (v10)
		v11 = sub_140498F10(v10);
	else
		v11 = 0i64;
	v12 = v7[2];
	v13 = (int*)v12;
	v14 = *(_QWORD*)(v12 + 8);
	while (v14)
	{
		if (*(_DWORD*)(v14 + 32) < v4)
		{
			v14 = *(_QWORD*)(v14 + 24);
		}
		else
		{
			v13 = (int*)v14;
			v14 = *(_QWORD*)(v14 + 16);
		}
	}
	if (v13 == (int*)v12 || v4 < v13[8])
	{
		LODWORD(v51[0]) = v4;
		v51[1] = 0i64;
		v48 = v13;
		sub_140055C60((__int64)(v7 + 1), &v50, (__int64*)&v48, v51);
		v13 = v50;
	}
	*((_QWORD*)v13 + 5) = v11;
	v15 = *(_QWORD**)(a2 + 8);
	v16 = (_QWORD*)v15[2];
	v48 = v16;
	if (v16 != v15)
	{
		do
		{
			v17 = v16[5];
			v18 = (*(__int64(__fastcall**)(_QWORD*, __int64))(*v7 + 176i64))(v7, v17);
			(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v18 + 8i64))(v18, v17, v4);
			v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 16i64))(v18);
			v20 = v11[1];
			v21 = *(_QWORD*)(v20 + 8);
			v22 = (int*)v20;
			while (v21)
			{
				if (*(_DWORD*)(v21 + 32) < v19)
				{
					v21 = *(_QWORD*)(v21 + 24);
				}
				else
				{
					v22 = (int*)v21;
					v21 = *(_QWORD*)(v21 + 16);
				}
			}
			if (v22 == (int*)v20 || v19 < v22[8])
			{
				v50 = v22;
				LODWORD(v55[0]) = v19;
				v55[1] = 0i64;
				sub_140055C60((__int64)v11, &v52, (__int64*)&v50, v55);
				v22 = v52;
			}
			*((_QWORD*)v22 + 5) = v18;
			if (*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17) + 8))
			{
				v23 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 24i64))(v17);
				v24 = v11[6];
				v25 = *(_DWORD*)(v23 + 8);
				v26 = *(_QWORD*)(v24 + 8);
				v27 = v24;
				LODWORD(v57) = v25;
				while (v26)
				{
					v27 = v26;
					if (v25 >= *(_DWORD*)(v26 + 32))
						v26 = *(_QWORD*)(v26 + 24);
					else
						v26 = *(_QWORD*)(v26 + 16);
				}
				if (v27 == v24 || v25 < *(_DWORD*)(v27 + 32))
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v57;
						*((_QWORD*)v28 + 5) = v18;
					}
					*(_QWORD*)(v27 + 16) = v28;
					v30 = v11[6];
					if (v27 == v30)
					{
						*(_QWORD*)(v30 + 8) = v28;
						*(_QWORD*)(v11[6] + 24i64) = v28;
					}
					else if (v27 == *(_QWORD*)(v30 + 16))
					{
						*(_QWORD*)(v30 + 16) = v28;
					}
				}
				else
				{
					v28 = sub_14018B280(48i64, 0);
					if (v28 != (int*)-32i64)
					{
						*((_QWORD*)v28 + 4) = v57;
						*((_QWORD*)v28 + 5) = v18;
					}
					*(_QWORD*)(v27 + 24) = v28;
					v29 = v11[6];
					if (v27 == *(_QWORD*)(v29 + 24))
						*(_QWORD*)(v29 + 24) = v28;
				}
				*((_QWORD*)v28 + 1) = v27;
				*((_QWORD*)v28 + 2) = 0i64;
				*((_QWORD*)v28 + 3) = 0i64;
				sub_1400081C0((__int64)v28, (_QWORD*)(v11[6] + 8i64));
				++v11[7];
			}
			v31 = *(_QWORD**)(*(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17) + 8) + 16i64);
			if (v31 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17) + 8))
			{
				v32 = v49;
				do
				{
					v33 = (*(__int64(__fastcall**)(_QWORD*, _QWORD, __int64))(*v7 + 184i64))(v7, v31[5], v18);
					v34 = v33;
					if (v33)
					{
						LODWORD(v47) = 0;
						v35 = (*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD, _DWORD, char*, _DWORD))(*(_QWORD*)v33 + 8i64))(
							v33,
							v18,
							v31[5],
							v32,
							0,
							v47,
							0);
						if (v35 >= 0)
						{
							(*(void(__fastcall**)(__int64, __int64))(*(_QWORD*)v18 + 200i64))(v18, v34);
							v37 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v34 + 344i64))(v34);
							v38 = v11[14];
							v39 = *(_QWORD*)(v38 + 8);
							v40 = (int*)v38;
							while (v39)
							{
								if (*(_DWORD*)(v39 + 32) < v37)
								{
									v39 = *(_QWORD*)(v39 + 24);
								}
								else
								{
									v40 = (int*)v39;
									v39 = *(_QWORD*)(v39 + 16);
								}
							}
							if (v40 == (int*)v38 || v37 < v40[8])
							{
								v50 = v40;
								LODWORD(v56[0]) = v37;
								v56[1] = 0i64;
								sub_140055C60((__int64)(v11 + 13), v51, (__int64*)&v50, v56);
								v40 = v51[0];
							}
							*((_QWORD*)v40 + 5) = v34;
						}
						else
						{
							v47 = sub_1401B3450((char*)Buffer, 128i64, v35);
							sub_1400035B0();
							(**(void(__fastcall***)(__int64, _QWORD))v34)(v34, (unsigned int)(v36 - 63));
							v7 = v53;
						}
					}
					v41 = v31[3];
					if (v41)
					{
						v31 = (_QWORD*)v31[3];
						for (i = *(_QWORD**)(v41 + 16); i; i = (_QWORD*)i[2])
							v31 = i;
					}
					else
					{
						for (j = v31[1]; v31 == *(_QWORD**)(j + 24); j = *(_QWORD*)(j + 8))
							v31 = (_QWORD*)j;
						if (v31[3] != j)
							v31 = (_QWORD*)j;
					}
				} while (v31 != *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 16i64))(v17) + 8));
				v16 = v48;
				v4 = v49;
			}
			(*(void(__fastcall**)(_QWORD*, __int64))(*v7 + 192i64))(v7, v18);
			v44 = v16[3];
			if (v44)
			{
				v16 = (_QWORD*)v16[3];
				v48 = (_QWORD*)v44;
				for (k = *(_QWORD*)(v44 + 16); k; k = *(_QWORD*)(k + 16))
				{
					v16 = (_QWORD*)k;
					v48 = (_QWORD*)k;
				}
			}
			else
			{
				for (m = v16[1]; v16 == *(_QWORD**)(m + 24); m = *(_QWORD*)(m + 8))
					v16 = (_QWORD*)m;
				if (v16[3] != m)
					v16 = (_QWORD*)m;
				v48 = v16;
			}
		} while (v16 != *(_QWORD**)(v54 + 8));
	}
	return 0i64;
}
// 1404983F3: conditional instruction was optimized away because rax.8==0
// 1404984FF: variable 'v47' is possibly undefined
// 14049853E: variable 'v36' is possibly undefined
// 1404981B0: using guessed type WCHAR Buffer[128];

