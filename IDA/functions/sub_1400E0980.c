#include "../winhttp.h"

//----- (00000001400E0980) ----------------------------------------------------
void __fastcall sub_1400E0980(__int64 a1, __int64 a2)
{
	_QWORD** v2; // r8
	__int64* v3; // rbp
	_QWORD* v4; // rax
	__int64 v5; // r15
	int* v6; // rax
	int v7; // esi
	__int64* v8; // rbx
	__int64 v9; // r13
	int v10; // edi
	int* v11; // rax
	__int64** v12; // rax
	int v13; // r14d
	__int64* v14; // rcx
	__int64** v15; // rax
	__int64** v16; // rdx
	__int64* v17; // r9
	int v18; // r9d
	__int64 v19; // r8
	__int64* v20; // rdx
	__int64* v21; // rsi
	__int64* v22; // rbx
	__int64 v23; // xmm0_8
	__int64** v24; // rdi
	__int64 v25; // rbp
	__int64 v26; // rcx
	__int64 v27; // rax
	__int64 v28; // r15
	unsigned __int64* v29; // r12
	unsigned __int64 v30; // rbp
	__int64 v31; // r14
	__int64 v32; // rax
	__int64 v33; // rcx
	__int64* v34; // rax
	__int64* v35; // rdx
	__int64* v36; // rdx
	__int64 v37; // r8
	int v38; // r9d
	__int64 v39; // r10
	__int64* v40; // rcx
	__int64 v41; // r8
	__int64 v42; // rax
	char* v43; // rbx
	__int64 v44; // rdi
	__int64* v45; // rdi
	__int64 v46; // rcx
	__int64 v47; // rax
	_QWORD** v48; // rax
	_QWORD* v49; // rbx
	__int64 v50; // rcx
	__int64** v51; // rbx
	__int64 v52; // rcx
	int v53; // [rsp+40h] [rbp-4B8h]
	int v54; // [rsp+44h] [rbp-4B4h]
	int v55; // [rsp+48h] [rbp-4B0h] BYREF
	__int64 v56; // [rsp+50h] [rbp-4A8h]
	__int64* v57; // [rsp+58h] [rbp-4A0h]
	__int128 v58; // [rsp+60h] [rbp-498h] BYREF
	__int64 v59; // [rsp+70h] [rbp-488h]
	__int64* v60; // [rsp+78h] [rbp-480h]
	__int64 v61; // [rsp+80h] [rbp-478h]
	_QWORD v62[6]; // [rsp+88h] [rbp-470h] BYREF
	__int64 v63; // [rsp+B8h] [rbp-440h] BYREF
	char v64; // [rsp+C0h] [rbp-438h] BYREF
	char v65; // [rsp+4B8h] [rbp-40h] BYREF

	v2 = *(_QWORD***)(a1 + 8);
	v3 = (__int64*)a2;
	v60 = (__int64*)a2;
	v4 = *v2;
	v5 = a1;
	v61 = a1;
	if ((_QWORD**)*v4 != v2)
	{
		v6 = sub_14018B280(24i64, 0);
		v7 = 63;
		v8 = &v63;
		*(_QWORD*)v6 = v6;
		*((_QWORD*)v6 + 1) = v6;
		v9 = (__int64)v6;
		v10 = 63;
		do
		{
			v11 = sub_14018B280(24i64, 0);
			--v10;
			v8 += 2;
			*(_QWORD*)v11 = v11;
			*(v8 - 2) = (__int64)v11;
			*((_QWORD*)v11 + 1) = v11;
		} while (v10 >= 0);
		v12 = *(__int64***)(v5 + 8);
		v13 = 0;
		v54 = 0;
		if (*v12 != (__int64*)v12)
		{
			do
			{
				v14 = *v12;
				v15 = *(__int64***)v9;
				v16 = (__int64**)*v14;
				if (*(__int64**)v9 != v14 && v15 != v16)
				{
					*v16[1] = (__int64)v15;
					*(_QWORD*)v14[1] = v16;
					*v15[1] = (__int64)v14;
					v17 = v15[1];
					v15[1] = v16[1];
					v16[1] = (__int64*)v14[1];
					v14[1] = (__int64)v17;
				}
				v18 = 0;
				v19 = 0i64;
				v53 = 0;
				v56 = 0i64;
				v59 = v13;
				if (v13 > 0)
				{
					v20 = &v63;
					v57 = &v63;
					do
					{
						v21 = (__int64*)*v20;
						v22 = *(__int64**)*v20;
						if (v22 == (__int64*)*v20)
							break;
						v23 = *v3;
						v24 = *(__int64***)v9;
						*((_QWORD*)&v58 + 1) = v3[1];
						*(_QWORD*)&v58 = v23;
						v25 = *((_QWORD*)&v58 + 1);
						do
						{
							if (v24 == (__int64**)v9)
							{
								v36 = v57;
								v37 = v56;
								v38 = v53;
								v39 = v59;
								goto LABEL_34;
							}
							v26 = (__int64)v24[2];
							v27 = v22[2];
							v55 = 0;
							if (!sub_1400F2AD0(v25, (__int64)"SortChildren", 0i64, v58, "WW>b", v26, v27, &v55))
							{
								v28 = *(_QWORD*)(v25 + 16);
								v29 = (unsigned __int64*)sub_14018F0E0(v62, L"Error in sort function passed to SortChildren")[1];
								if (v29)
								{
									v30 = -1i64;
									do
										++v30;
									while (*((_BYTE*)v29 + v30));
									if (*(_QWORD*)(*(_QWORD*)(v28 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v28 + 32) + 112i64))
										sub_14005E2C0(v28);
									v31 = *(_QWORD*)(v28 + 16);
									v32 = sub_140062650(v28, v29, v30);
									v25 = *((_QWORD*)&v58 + 1);
									*(_DWORD*)(v31 + 8) = 4;
									*(_QWORD*)v31 = v32;
								}
								else
								{
									*(_DWORD*)(*(_QWORD*)(v28 + 16) + 8i64) = 0;
								}
								v33 = v62[1];
								*(_QWORD*)(v28 + 16) += 16i64;
								if (v33)
									sub_14018B900(v33, 0);
								sub_14005AB30(*(_QWORD*)(v25 + 16));
							}
							if (v55)
							{
								v34 = *v24;
								if (v22 != *v24)
								{
									*(_QWORD*)v34[1] = v22;
									*v24[1] = (__int64)v34;
									*(_QWORD*)v22[1] = v24;
									v35 = (__int64*)v22[1];
									v22[1] = v34[1];
									v34[1] = (__int64)v24[1];
									v24[1] = v35;
								}
								v24 = (__int64**)v34;
							}
							else
							{
								v22 = (__int64*)*v22;
							}
						} while (v22 != v21);
						v36 = v57;
						v37 = v56;
						v38 = v53;
						v39 = v59;
						if (v24 != (__int64**)v9 && v21 != (__int64*)v9)
						{
							**(_QWORD**)(v9 + 8) = v21;
							*v24[1] = v9;
							*(_QWORD*)v21[1] = v24;
							v40 = (__int64*)v21[1];
							v21[1] = *(_QWORD*)(v9 + 8);
							*(_QWORD*)(v9 + 8) = v24[1];
							v24[1] = v40;
						}
					LABEL_34:
						v3 = v60;
						v19 = v37 + 1;
						v18 = v38 + 1;
						*v36 = v9;
						v20 = v36 + 2;
						v9 = (__int64)v21;
						v56 = v19;
						v57 = v20;
						v53 = v18;
					} while (v19 < v39);
					v13 = v54;
					v5 = v61;
				}
				v41 = 2 * v19;
				v42 = v9;
				v9 = *(&v63 + v41);
				*(&v63 + v41) = v42;
				if (v18 == v13)
					v54 = ++v13;
				v12 = *(__int64***)(v5 + 8);
			} while (*v12 != (__int64*)v12);
			v7 = 63;
		}
		if (v13 > 1)
		{
			v43 = &v64;
			v44 = (unsigned int)(v13 - 1);
			do
			{
				v58 = *(_OWORD*)v3;
				sub_1400E1000((__int64)v43, (__int64)(v43 - 16), (__int64*)&v58);
				v43 += 16;
				--v44;
			} while (v44);
		}
		v45 = (__int64*)&v65;
		v46 = 16i64 * (v13 - 1);
		v47 = *(__int64*)((char*)&v63 + v46);
		*(__int64*)((char*)&v63 + v46) = *(_QWORD*)(v5 + 8);
		*(_QWORD*)(v5 + 8) = v47;
		do
		{
			v48 = (_QWORD**)*(v45 - 2);
			v45 -= 2;
			v49 = *v48;
			if (*v48 != v48)
			{
				do
				{
					v50 = (__int64)v49;
					v49 = (_QWORD*)*v49;
					sub_14018B900(v50, 0);
				} while (v49 != (_QWORD*)*v45);
			}
			*(_QWORD*)*v45 = *v45;
			*(_QWORD*)(*v45 + 8) = *v45;
			sub_14018B900(*v45, 0);
			--v7;
		} while (v7 >= 0);
		v51 = *(__int64***)v9;
		while (v51 != (__int64**)v9)
		{
			v52 = (__int64)v51;
			v51 = (__int64**)*v51;
			sub_14018B900(v52, 0);
		}
		*(_QWORD*)v9 = v9;
		*(_QWORD*)(v9 + 8) = v9;
		sub_14018B900(v9, 0);
	}
}
// 140A15340: using guessed type wchar_t aErrorInSortFun[46];

