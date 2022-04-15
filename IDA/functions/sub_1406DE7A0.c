#include "../winhttp.h"

//----- (00000001406DE7A0) ----------------------------------------------------
void __fastcall sub_1406DE7A0(__int64 a1, float a2)
{
	float v2; // xmm1_4
	unsigned __int64 v4; // r8
	__int64 v5; // rcx
	unsigned __int64 v6; // r8
	__int64 v7; // rcx
	__int64 v8; // r12
	__int64 v9; // r13
	__int64 v10; // r14
	__int64 v11; // rax
	wchar_t* v12; // rdi
	_QWORD* v13; // rcx
	unsigned __int64 v14; // rbx
	unsigned __int64 v15; // rax
	__int64 v16; // r14
	__int64 v17; // r15
	unsigned __int64 v18; // rcx
	__int64 v19; // rcx
	void(__fastcall * **v20)(_QWORD); // rdx
	wchar_t* v21; // rbx
	int v22; // r8d
	__int64 v23; // rdx
	int v24; // eax
	_QWORD* v25; // rcx
	unsigned __int64 v26; // rdi
	bool v27; // zf
	int v28; // ecx
	unsigned __int64 v29; // r15
	_DWORD* v30; // rcx
	__int64 v31; // rax
	int v32; // r10d
	int v33; // r8d
	int v34; // r9d
	unsigned __int64 v35; // rax
	unsigned __int64 v36; // r8
	__int64 v37; // rcx
	__int64 v38; // r13
	unsigned int v39; // r14d
	unsigned __int64 v40; // r12
	__int64 v41; // rbx
	__int64 v42; // rdi
	unsigned __int64 v43; // r15
	_QWORD* v44; // rax
	__int64 v45; // rcx
	void(__fastcall * **v46)(_QWORD); // rdx
	_DWORD* v47; // rax
	int v48; // r9d
	int v49; // edx
	int v50; // r8d
	int v51; // ecx
	__int64 v52; // rax
	__int64 v53; // rsi
	__int64* v54; // rbx
	__int64 v55; // rcx
	__int64 v56; // rsi
	__int64 v57; // rdi
	__int64* v58; // rbx
	__int64 v59; // rcx
	int v60; // [rsp+38h] [rbp-D0h]
	unsigned int v61; // [rsp+3Ch] [rbp-CCh]
	__int64 v62; // [rsp+48h] [rbp-C0h] BYREF
	__int64 v63; // [rsp+50h] [rbp-B8h] BYREF
	__int64 v64; // [rsp+58h] [rbp-B0h]
	__int64 v65; // [rsp+60h] [rbp-A8h]
	__int64 v66; // [rsp+68h] [rbp-A0h]
	__int64 v67; // [rsp+70h] [rbp-98h]
	__int64 v68; // [rsp+78h] [rbp-90h] BYREF
	int v69; // [rsp+80h] [rbp-88h]
	int v70; // [rsp+84h] [rbp-84h]
	int v71; // [rsp+88h] [rbp-80h]
	int v72; // [rsp+8Ch] [rbp-7Ch]
	__int64 v73; // [rsp+90h] [rbp-78h] BYREF
	int v74; // [rsp+98h] [rbp-70h]
	int v75; // [rsp+9Ch] [rbp-6Ch]
	int v76; // [rsp+A0h] [rbp-68h]
	int v77; // [rsp+A4h] [rbp-64h]
	wchar_t* v78; // [rsp+A8h] [rbp-60h] BYREF
	char v79[8]; // [rsp+B0h] [rbp-58h] BYREF
	__int64 v80; // [rsp+B8h] [rbp-50h]
	__int64 v81; // [rsp+C0h] [rbp-48h]
	__int64 v82; // [rsp+C8h] [rbp-40h]
	__int64 v83[4]; // [rsp+D0h] [rbp-38h] BYREF

	v2 = a2 + *(float*)(a1 + 1168);
	*(float*)(a1 + 1168) = v2;
	if (v2 > 0.1 && (*(_BYTE*)(a1 + 28) & 1) != 0)
	{
		v4 = *(_QWORD*)(a1 + 1032);
		v5 = *(_QWORD*)(a1 + 1176);
		v60 = 0;
		v80 = 0i64;
		v81 = 0i64;
		v82 = 0i64;
		sub_140505590(v5, (__int64)v79, v4);
		v6 = *(_QWORD*)(a1 + 1024);
		v7 = *(_QWORD*)(a1 + 1176);
		v64 = 0i64;
		v65 = 0i64;
		v66 = 0i64;
		sub_140505590(v7, (__int64)&v63, v6);
		v8 = v64;
		v61 = 0;
		v62 = (v65 - v64) / 88;
		if (v62)
		{
			v9 = 0i64;
			do
			{
				v10 = 32 * (v9 + 33);
				v67 = v10;
				v11 = (*(__int64(__fastcall**)(_QWORD))(**(_QWORD**)(v10 + a1) + 112i64))(*(_QWORD*)(v10 + a1));
				v12 = (wchar_t*)&unk_1409F7D0C;
				if (v11)
					v12 = (wchar_t*)v11;
				if (!*v12)
				{
					v13 = *(_QWORD**)(v10 + a1);
					v12 = L"0";
					v14 = v13[128];
					(*(void(__fastcall**)(_QWORD*, const wchar_t*, _QWORD))(*v13 + 80i64))(v13, L"0", 0i64);
					sub_140111750(*(_QWORD*)(v10 + a1), v14, v14);
				}
				v15 = sub_14018E8F0(v12);
				v16 = v15;
				v17 = 88 * v9;
				v18 = *(_QWORD*)(88 * v9 + v8 + 8);
				if (v18 && v15 > v18)
				{
					v16 = *(_QWORD*)(v17 + v8);
					v19 = *(_QWORD*)(32 * v9 + a1 + 1064);
					v20 = *(void(__fastcall****)(_QWORD))(v19 + 792);
					if (v20)
						v20 = (void(__fastcall***)(_QWORD)) * v20;
					sub_1400D2DF0(v19, v20);
				}
				sub_14018D540(&v78, (__int64)L"%d", v16);
				v21 = v78;
				if (v78 != v12)
				{
					if (v78 && v12 && (v22 = *v78, v23 = 0i64, v22 == *v12))
					{
						while ((_WORD)v22)
						{
							v22 = v78[v23 + 1];
							v24 = v12[++v23];
							if (v22 != v24)
								goto LABEL_20;
						}
					}
					else
					{
					LABEL_20:
						v25 = *(_QWORD**)(v67 + a1);
						v26 = v25[128];
						(*(void(__fastcall**)(_QWORD*, wchar_t*))(*v25 + 80i64))(v25, v78);
						sub_140111750(*(_QWORD*)(v67 + a1), v26, v26);
					}
				}
				v27 = v16 == *(_QWORD*)(v17 + v8);
				v28 = v60;
				v29 = v62;
				if (!v27)
					v28 = 1;
				v60 = v28;
				v83[v62 - v9 - 1] = v16;
				if (v21)
				{
					(*(void(__fastcall**)(wchar_t*))(*((_QWORD*)v21 - 2) + 8i64))(v21 - 8);
					v28 = v60;
				}
				v9 = ++v61;
			} while (v61 < v29);
			if (v28)
			{
				v30 = *(_DWORD**)(a1 + 1176);
				v31 = *(_QWORD*)(a1 + 1024);
				v32 = v30[7];
				v33 = v30[5];
				v34 = v30[6];
				v74 = v30[4];
				v73 = v31;
				v75 = v33;
				v77 = v32;
				v76 = v34;
				v35 = sub_140503E80((__int64)v30, v83);
				v36 = *(_QWORD*)(a1 + 1032);
				*(_QWORD*)(a1 + 1024) = v35;
				if (v36 && v35 > v36)
				{
					v37 = *(_QWORD*)(a1 + 1176);
					*(_QWORD*)(a1 + 1024) = v36;
					sub_140505590(v37, (__int64)&v63, v36);
					v38 = v64;
					v39 = 0;
					v40 = (v65 - v64) / 88;
					if (v40)
					{
						v41 = 0i64;
						do
						{
							v42 = 32 * (v41 + 33);
							v43 = *(_QWORD*)(*(_QWORD*)(v42 + a1) + 1024i64);
							v44 = sub_14018D540(&v62, (__int64)L"%d", *(_QWORD*)(88 * v41 + v38));
							(*(void(__fastcall**)(_QWORD, _QWORD))(**(_QWORD**)(v42 + a1) + 80i64))(*(_QWORD*)(v42 + a1), *v44);
							if (v62)
								(*(void(__fastcall**)(__int64))(*(_QWORD*)(v62 - 16) + 8i64))(v62 - 16);
							sub_140111750(*(_QWORD*)(v42 + a1), v43, v43);
							v45 = *(_QWORD*)(32 * v41 + a1 + 1064);
							v46 = *(void(__fastcall****)(_QWORD))(v45 + 792);
							if (v46)
								v46 = (void(__fastcall***)(_QWORD)) * v46;
							sub_1400D2DF0(v45, v46);
							v41 = ++v39;
						} while (v39 < v40);
					}
					v8 = v64;
				}
				v47 = *(_DWORD**)(a1 + 1176);
				v48 = v47[7];
				v49 = v47[5];
				v50 = v47[6];
				v51 = v47[4];
				v52 = *(_QWORD*)(a1 + 1024);
				v70 = v49;
				v68 = v52;
				v72 = v48;
				v69 = v51;
				v71 = v50;
				sub_1400D4040(a1, "AmountChanged", (char*)a1, "mm", &v68, &v73);
			}
		}
		*(float*)(a1 + 1168) = *(float*)(a1 + 1168) - 0.1;
		v53 = v65;
		if (v8 != v65)
		{
			v54 = (__int64*)(v8 + 24);
			do
			{
				v55 = v54[5];
				if (v55)
					sub_14018B900(v55, 0);
				if (*v54)
					sub_14018B900(*v54, 0);
				v54 += 11;
			} while (v54 - 3 != (__int64*)v53);
		}
		if (v8)
			sub_14018B900(v8, 0);
		v56 = v80;
		v57 = v81;
		if (v80 != v81)
		{
			v58 = (__int64*)(v80 + 24);
			do
			{
				v59 = v58[5];
				if (v59)
					sub_14018B900(v59, 0);
				if (*v58)
					sub_14018B900(*v58, 0);
				v58 += 11;
			} while (v58 - 3 != (__int64*)v57);
		}
		if (v56)
			sub_14018B900(v56, 0);
	}
}
// 1406DE8F3: conditional instruction was optimized away because dx.2==0
// 1409F7CA4: using guessed type wchar_t a0_3[2];
// 140B3DEA4: using guessed type wchar_t aD_74[3];
// 140B3E050: using guessed type wchar_t aD_73[3];
// 1406DE7A0: using guessed type char var_68[8];
// 1406DE7A0: using guessed type __int64 var_48[4];

