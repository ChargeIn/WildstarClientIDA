#include "../winhttp.h"

//----- (00000001403BB480) ----------------------------------------------------
void __fastcall sub_1403BB480(__int64 a1, __int64 a2)
{
	__int64 v2; // r12
	__int64 v4; // rax
	int* v5; // rax
	__int64 v6; // r8
	unsigned int v7; // edx
	__int64 v8; // rcx
	__int64 v9; // r9
	__int64 v10; // rcx
	__int64 v11; // rbx
	__int64 v12; // r14
	int* v13; // r13
	int* v14; // rax
	int* v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	unsigned int v18; // edi
	unsigned __int8 v19; // si
	__int64 v20; // rdx
	__int64 v21; // rcx
	__int64 v22; // rax
	__int64* v23; // rax
	__int64 v24; // rax
	_QWORD* v25; // rax
	unsigned __int64 v26; // rdx
	__int64 v27; // rdx
	unsigned int v28; // edx
	__int64 v29; // rcx
	BOOL v30; // r8d
	__int64 v31; // r9
	__int64 v32; // r8
	__int64 v33; // rcx
	__int64 v34; // rax
	__int64* v35; // rax
	__int64 v36; // rax
	__int64 v37; // rax
	int* v38; // rax
	int* v39; // rdi
	__int64 v40; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64 v43; // rdi
	__int64 v44; // rdi
	unsigned __int64 v45; // rsi
	int* v46; // rax
	__int64 v47; // rbx
	unsigned __int64 v48; // r14
	__int64 v49; // r15
	int* v50; // r12
	int* v51; // rdi
	__int64 v52; // rcx
	__int64 v53; // [rsp+20h] [rbp-48h] BYREF
	__int64 v54; // [rsp+28h] [rbp-40h]
	__int64 v55; // [rsp+30h] [rbp-38h] BYREF
	int* v56; // [rsp+38h] [rbp-30h]
	__int64 v57; // [rsp+40h] [rbp-28h]
	int* v58; // [rsp+48h] [rbp-20h]
	__int64 v59; // [rsp+50h] [rbp-18h]
	__int64 v60; // [rsp+58h] [rbp-10h]
	__int64 v61; // [rsp+B0h] [rbp+48h]
	__int64 v62; // [rsp+B8h] [rbp+50h] BYREF
	__int64 v63; // [rsp+C0h] [rbp+58h] BYREF
	__int64 v64; // [rsp+C8h] [rbp+60h] BYREF

	HIDWORD(v61) = HIDWORD(a1);
	v2 = qword_140C65898;
	v55 = 12i64;
	v56 = 0i64;
	v57 = 0i64;
	v58 = 0i64;
	v59 = 0i64;
	v60 = 0i64;
	v54 = qword_140C65898;
	v4 = 48i64;
	if (!is_mul_ok(0xCui64, 4ui64))
		v4 = -1i64;
	v5 = sub_14018B280(v4, 0);
	v6 = *(_QWORD*)(a2 + 8);
	LOBYTE(v57) = *(_BYTE*)(v2 + 28140);
	v7 = 0;
	v8 = *(_QWORD*)(a2 + 16) - v6;
	v9 = (__int64)v5;
	v56 = v5;
	if (v8 >> 2)
	{
		v10 = 0i64;
		while (1)
		{
			++v7;
			*(_DWORD*)(v9 + 4 * v10) = *(_DWORD*)(v6 + 4 * v10);
			v6 = *(_QWORD*)(a2 + 8);
			v10 = v7;
			if (v7 >= (unsigned __int64)((*(_QWORD*)(a2 + 16) - v6) >> 2))
				break;
			v9 = (__int64)v56;
		}
	}
	v11 = *(_QWORD*)(v2 + 5224);
	v12 = 0i64;
	v13 = 0i64;
	if (v11)
	{
		v14 = sub_14018B280(8 * v11 + 16, 0);
		if (v14)
		{
			*(_QWORD*)v14 = off_140B55060;
			*((_QWORD*)v14 + 1) = v11;
		}
		v15 = v14 + 4;
		if (v15)
			v13 = v15;
	}
	v16 = *(_QWORD*)(v2 + 5216);
	v17 = *(_QWORD*)(v16 + 16);
	if (v17 != v16)
	{
		do
		{
			v18 = *(_DWORD*)(v17 + 32);
			v19 = *(_BYTE*)(v17 + 36);
			if (v18)
			{
				v20 = *(_QWORD*)(v2 + 2728);
				v21 = v20;
				v22 = *(_QWORD*)(v20 + 8);
				while (v22)
				{
					if (*(_DWORD*)(v22 + 32) < v18)
					{
						v22 = *(_QWORD*)(v22 + 24);
					}
					else
					{
						v21 = v22;
						v22 = *(_QWORD*)(v22 + 16);
					}
				}
				if (v21 == v20 || v18 < *(_DWORD*)(v21 + 32))
				{
					v63 = *(_QWORD*)(v2 + 2728);
					v23 = &v63;
				}
				else
				{
					v62 = v21;
					v23 = &v62;
				}
				v24 = *v23;
				if (v24 != v20)
				{
					v25 = *(_QWORD**)(v24 + 40);
					v26 = *(unsigned __int8*)(v2 + 28140);
					if (v26 < v25[1])
					{
						v27 = *(_QWORD*)(*v25 + 8 * v26);
						if (v27)
						{
							if (*(_BYTE*)(v27 + 8))
							{
								if (v19 < 0xAu)
								{
									v28 = *(_DWORD*)(v27 + 4);
									v29 = *(_QWORD*)(v2 + 120);
									if (v28)
									{
										if (v29)
										{
											v30 = *(_QWORD*)(qword_140C65898 + 120) == v29 || *(_QWORD*)(qword_140C65898 + 25744) == v29;
											v31 = 0i64;
											if (v30)
												v31 = qword_140C65898;
											if (v31)
											{
												v32 = *(_QWORD*)(v31 + 32024);
												v33 = v32;
												v34 = *(_QWORD*)(v32 + 8);
												while (v34)
												{
													if (*(_DWORD*)(v34 + 32) < v28)
													{
														v34 = *(_QWORD*)(v34 + 24);
													}
													else
													{
														v33 = v34;
														v34 = *(_QWORD*)(v34 + 16);
													}
												}
												if (v33 == v32 || v28 < *(_DWORD*)(v33 + 32))
												{
													v53 = *(_QWORD*)(v31 + 32024);
													v35 = &v53;
												}
												else
												{
													v64 = v33;
													v35 = &v64;
												}
												v36 = *v35;
												if (v36 != v32)
												{
													v37 = *(_QWORD*)(v36 + 40);
													if (v37)
														goto LABEL_79;
												}
											}
										}
										v37 = sub_1407A0FD0(qword_140C65B70, v28);
										if (v37)
										{
										LABEL_79:
											if (!(unsigned int)sub_1403D8C10(v37))
											{
												BYTE4(v61) = v19;
												LODWORD(v61) = v18;
												v38 = sub_14018DB00((__int64)v13, v12 + 1, 8i64);
												v39 = v38;
												*(_QWORD*)&v38[2 * v12] = v61;
												if (v13 != v38)
												{
													sub_1407DB590(v38, v13, 8 * v12);
													if (v13)
														(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
													v13 = v39;
												}
												++v12;
											}
										}
									}
								}
							}
						}
					}
				}
			}
			v40 = *(_QWORD*)(v17 + 24);
			if (v40)
			{
				v17 = *(_QWORD*)(v17 + 24);
				for (i = *(_QWORD*)(v40 + 16); i; i = *(_QWORD*)(i + 16))
					v17 = i;
			}
			else
			{
				for (j = *(_QWORD*)(v17 + 8); v17 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
					v17 = j;
				if (*(_QWORD*)(v17 + 24) != j)
					v17 = j;
			}
		} while (v17 != *(_QWORD*)(v2 + 5216));
	}
	v43 = *(unsigned int*)(v2 + 28140);
	BYTE1(v57) = v12;
	v58 = v13;
	v44 = 2 * (v43 + 1767);
	v45 = *(_QWORD*)(v2 + 8 * v44 + 8);
	if (v45)
	{
		v46 = sub_14018B280(2 * v45 + 16, 0);
		if (v46)
		{
			*(_QWORD*)v46 = off_140B55060;
			*((_QWORD*)v46 + 1) = v45;
			v47 = (__int64)(v46 + 4);
		}
		else
		{
			v47 = 16i64;
		}
	}
	else
	{
		v47 = 0i64;
	}
	v48 = 2 * v45;
	sub_1407DB590((int*)v47, *(int**)(v2 + 8 * v44), 2 * v45);
	v49 = *(_QWORD*)(v2 + 28344);
	v50 = *(int**)(v2 + 28336);
	if (v49)
	{
		v45 += v49;
		v51 = sub_14018DB00(v47, v45, 2i64);
		sub_1407DB590((int*)((char*)v51 + v48), v50, 2 * v49);
		if ((int*)v47 != v51)
		{
			sub_1407DB590(v51, (int*)v47, v48);
			if (v47)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47 - 16) + 8i64))(v47 - 16);
			v47 = (__int64)v51;
		}
	}
	LOBYTE(v59) = v45;
	v60 = v47;
	sub_1403F4900(qword_140C65898, 0xB1u, (__int64)&v55);
	v52 = (__int64)v56;
	*(_QWORD*)(v54 + 28344) = 0i64;
	sub_14018B900(v52, 0);
	if (v47)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v47 - 16) + 8i64))(v47 - 16);
	if (v13)
		(*(void(__fastcall**)(int*))(*((_QWORD*)v13 - 2) + 8i64))(v13 - 4);
}
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

