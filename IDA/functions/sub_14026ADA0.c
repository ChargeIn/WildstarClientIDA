#include "../winhttp.h"

//----- (000000014026ADA0) ----------------------------------------------------
__int64 __fastcall sub_14026ADA0(__int64 a1)
{
	__int64 result; // rax
	unsigned __int64 v3; // rbx
	char* v4; // rcx
	unsigned __int64 v5; // rdx
	unsigned __int64 v6; // rdi
	char v7; // r9
	__int16 v8; // r8
	char v9; // r10
	char v10; // r8
	char v11; // r10
	__int64 v12; // rax
	int* v13; // rax
	char* v14; // rdx
	__int64 v15; // r10
	char v16; // r8
	__int16 v17; // cx
	char v18; // r9
	char v19; // cl
	char v20; // r9
	unsigned __int64 v21; // rbx
	char* v22; // rcx
	unsigned __int64 v23; // rdi
	unsigned __int64 v24; // rdx
	char v25; // r9
	__int16 v26; // r8
	char v27; // r10
	char v28; // r8
	char v29; // r10
	__int64 v30; // rax
	int* v31; // rax
	unsigned __int64 v32; // r8
	char* v33; // rcx
	__int64 v34; // r11
	char v35; // r9
	__int16 v36; // dx
	char v37; // r10
	char v38; // dl
	char v39; // r10
	unsigned __int64 v40; // rdx
	char* v41; // rcx
	unsigned __int64 v42; // rdi
	char v43; // r9
	__int16 v44; // r8
	char v45; // r10
	char v46; // r8
	char v47; // r10
	__int64 v48; // rax
	int* v49; // rax
	char* v50; // rdx
	__int64 v51; // r10
	char v52; // r8
	__int16 v53; // cx
	char v54; // r9
	char v55; // cl
	char v56; // r9
	unsigned int v57; // ecx
	int v58; // xmm0_4
	bool v59; // cf
	int v60; // eax
	int v61; // eax
	unsigned int v62; // ecx
	bool v63; // zf
	int v64; // eax
	__int64 v65; // rcx
	unsigned int v66; // edi
	__int64 v67; // rbx
	__int64 v68; // rcx
	unsigned int v69; // eax
	__int64 v70; // rax
	int* v71; // rax
	unsigned __int64 v72; // rcx
	__int64 v73; // rax
	unsigned int v74; // [rsp+40h] [rbp-C0h] BYREF
	int v75[3]; // [rsp+48h] [rbp-B8h] BYREF
	unsigned int v76; // [rsp+54h] [rbp-ACh]
	char v77[88]; // [rsp+70h] [rbp-90h] BYREF
	unsigned int v78; // [rsp+C8h] [rbp-38h]
	unsigned int v79; // [rsp+CCh] [rbp-34h]
	int v80; // [rsp+DCh] [rbp-24h]
	int v81; // [rsp+120h] [rbp+20h]
	int v82; // [rsp+138h] [rbp+38h]
	char v83[512]; // [rsp+1A0h] [rbp+A0h] BYREF
	char v84[512]; // [rsp+3A0h] [rbp+2A0h] BYREF
	char v85[32]; // [rsp+5A0h] [rbp+4A0h] BYREF
	__int64 v86; // [rsp+5C0h] [rbp+4C0h]
	int v87; // [rsp+5C8h] [rbp+4C8h]

	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, _QWORD, char*))(**(_QWORD**)(a1 + 6592) + 40i64))(
		*(_QWORD*)(a1 + 6592),
		*(unsigned int*)(a1 + 6548),
		0i64,
		v83);
	if ((int)result < 0)
		return result;
	(*(void(__fastcall**)(_QWORD, char*))(**(_QWORD**)(a1 + 6608) + 56i64))(*(_QWORD*)(a1 + 6608), v77);
	v3 = 32i64;
	v4 = v85;
	*(_DWORD*)(a1 + 136) = 0;
	v5 = 32i64;
	v6 = 0i64;
	do
	{
		v7 = *v4;
		if (*v4 < 0)
		{
			if (v5 > 1 && (v7 & 0xE0) == 0xC0 && (v9 = v4[1], (v9 & 0xC0) == 0x80))
			{
				v4 += 2;
				v8 = v9 & 0x3F | ((v7 & 0x1F) << 6);
				v5 -= 2i64;
			}
			else
			{
				if (v5 <= 2
					|| (v7 & 0xF0) != 0xE0
					|| (v10 = v4[1], (v10 & 0xC0) != 0x80)
					|| (v11 = v4[2], (v11 & 0xC0) != 0x80))
				{
					++v4;
					--v5;
					continue;
				}
				v4 += 3;
				v8 = v11 & 0x3F | (((unsigned __int16)(v7 << 6) | v10 & 0x3F) << 6);
				v5 -= 3i64;
			}
		}
		else
		{
			++v4;
			v8 = v7;
			--v5;
		}
		++v6;
		if (!v8)
			break;
	} while (v5);
	v12 = 2 * v6;
	if (!is_mul_ok(v6, 2ui64))
		v12 = -1i64;
	v13 = sub_14018B280(v12, 0);
	v14 = v85;
	*(_QWORD*)(a1 + 144) = v13;
	if (v13 || !v6)
	{
		v15 = 0i64;
		do
		{
			v16 = *v14;
			if (*v14 < 0)
			{
				if (v3 > 1 && (v16 & 0xE0) == 0xC0 && (v18 = v14[1], (v18 & 0xC0) == 0x80))
				{
					v14 += 2;
					v17 = v18 & 0x3F | ((v16 & 0x1F) << 6);
					v3 -= 2i64;
				}
				else
				{
					if (v3 <= 2
						|| (v16 & 0xF0) != 0xE0
						|| (v19 = v14[1], (v19 & 0xC0) != 0x80)
						|| (v20 = v14[2], (v20 & 0xC0) != 0x80))
					{
						++v14;
						--v3;
						continue;
					}
					v14 += 3;
					v17 = v20 & 0x3F | (((unsigned __int16)(v16 << 6) | v19 & 0x3F) << 6);
					v3 -= 3i64;
				}
			}
			else
			{
				++v14;
				v17 = v16;
				--v3;
			}
			if (v6)
			{
				if (v15 == v6)
					break;
				*((_WORD*)v13 + v15) = v17;
			}
			++v15;
			if (!v17)
				break;
		} while (v3);
	}
	v21 = 512i64;
	v22 = v84;
	v23 = 0i64;
	v24 = 512i64;
	while (2)
	{
		v25 = *v22;
		if (*v22 < 0)
		{
			if (v24 > 1 && (v25 & 0xE0) == 0xC0)
			{
				v27 = v22[1];
				if ((v27 & 0xC0) == 0x80)
				{
					v22 += 2;
					v26 = v27 & 0x3F | ((v25 & 0x1F) << 6);
					v24 -= 2i64;
					goto LABEL_53;
				}
			}
			if (v24 > 2 && (v25 & 0xF0) == 0xE0)
			{
				v28 = v22[1];
				if ((v28 & 0xC0) == 0x80)
				{
					v29 = v22[2];
					if ((v29 & 0xC0) == 0x80)
					{
						v22 += 3;
						v26 = v29 & 0x3F | (((unsigned __int16)(v25 << 6) | v28 & 0x3F) << 6);
						v24 -= 3i64;
						goto LABEL_53;
					}
				}
			}
			++v22;
			--v24;
		}
		else
		{
			++v22;
			v26 = v25;
			--v24;
		LABEL_53:
			++v23;
			if (!v26)
				break;
		}
		if (v24)
			continue;
		break;
	}
	v30 = 2 * v23;
	if (!is_mul_ok(v23, 2ui64))
		v30 = -1i64;
	v31 = sub_14018B280(v30, 0);
	v32 = 512i64;
	v33 = v84;
	*(_QWORD*)(a1 + 152) = v31;
	if (v31 || !v23)
	{
		v34 = 0i64;
		do
		{
			v35 = *v33;
			if (*v33 < 0)
			{
				if (v32 > 1 && (v35 & 0xE0) == 0xC0 && (v37 = v33[1], (v37 & 0xC0) == 0x80))
				{
					v33 += 2;
					v36 = v37 & 0x3F | ((v35 & 0x1F) << 6);
					v32 -= 2i64;
				}
				else
				{
					if (v32 <= 2
						|| (v35 & 0xF0) != 0xE0
						|| (v38 = v33[1], (v38 & 0xC0) != 0x80)
						|| (v39 = v33[2], (v39 & 0xC0) != 0x80))
					{
						++v33;
						--v32;
						continue;
					}
					v33 += 3;
					v36 = v39 & 0x3F | (((unsigned __int16)(v35 << 6) | v38 & 0x3F) << 6);
					v32 -= 3i64;
				}
			}
			else
			{
				++v33;
				v36 = v35;
				--v32;
			}
			if (v23)
			{
				if (v34 == v23)
					break;
				*((_WORD*)v31 + v34) = v36;
			}
			++v34;
			if (!v36)
				break;
		} while (v32);
	}
	v40 = 512i64;
	v41 = v83;
	v42 = 0i64;
	while (2)
	{
		v43 = *v41;
		if (*v41 < 0)
		{
			if (v40 > 1 && (v43 & 0xE0) == 0xC0)
			{
				v45 = v41[1];
				if ((v45 & 0xC0) == 0x80)
				{
					v41 += 2;
					v44 = v45 & 0x3F | ((v43 & 0x1F) << 6);
					v40 -= 2i64;
					goto LABEL_92;
				}
			}
			if (v40 > 2 && (v43 & 0xF0) == 0xE0)
			{
				v46 = v41[1];
				if ((v46 & 0xC0) == 0x80)
				{
					v47 = v41[2];
					if ((v47 & 0xC0) == 0x80)
					{
						v41 += 3;
						v44 = v47 & 0x3F | (((unsigned __int16)(v43 << 6) | v46 & 0x3F) << 6);
						v40 -= 3i64;
						goto LABEL_92;
					}
				}
			}
			++v41;
			--v40;
		}
		else
		{
			++v41;
			v44 = v43;
			--v40;
		LABEL_92:
			++v42;
			if (!v44)
				break;
		}
		if (v40)
			continue;
		break;
	}
	v48 = 2 * v42;
	if (!is_mul_ok(v42, 2ui64))
		v48 = -1i64;
	v49 = sub_14018B280(v48, 0);
	v50 = v83;
	*(_QWORD*)(a1 + 160) = v49;
	if (v49 || !v42)
	{
		v51 = 0i64;
		do
		{
			v52 = *v50;
			if (*v50 < 0)
			{
				if (v21 > 1 && (v52 & 0xE0) == 0xC0 && (v54 = v50[1], (v54 & 0xC0) == 0x80))
				{
					v50 += 2;
					v53 = v54 & 0x3F | ((v52 & 0x1F) << 6);
					v21 -= 2i64;
				}
				else
				{
					if (v21 <= 2
						|| (v52 & 0xF0) != 0xE0
						|| (v55 = v50[1], (v55 & 0xC0) != 0x80)
						|| (v56 = v50[2], (v56 & 0xC0) != 0x80))
					{
						++v50;
						--v21;
						continue;
					}
					v50 += 3;
					v53 = v56 & 0x3F | (((unsigned __int16)(v52 << 6) | v55 & 0x3F) << 6);
					v21 -= 3i64;
				}
			}
			else
			{
				++v50;
				v53 = v52;
				--v21;
			}
			if (v42)
			{
				if (v51 == v42)
					break;
				*((_WORD*)v49 + v51) = v53;
			}
			++v51;
			if (!v53)
				break;
		} while (v21);
	}
	v57 = v79;
	v58 = v81;
	v59 = v78 < v79;
	*(_QWORD*)(a1 + 168) = v86;
	v60 = v82;
	*(_DWORD*)(a1 + 200) = v58;
	if (v59)
		v57 = v78;
	*(_DWORD*)(a1 + 184) = v60;
	v61 = v80;
	*(_DWORD*)(a1 + 192) = v57;
	*(_DWORD*)(a1 + 176) = 0;
	*(_DWORD*)(a1 + 180) = 1;
	*(_DWORD*)(a1 + 188) = 224;
	*(_DWORD*)(a1 + 196) = v61;
	v74 = 0;
	sub_140268830(v85, (LONG*)&v74);
	v62 = 0x20000000;
	if (v74 > 0x20000000)
		v62 = v74;
	v63 = v87 == 4098;
	*(_QWORD*)(a1 + 208) = v62;
	if (!v63 || (v64 = 0, (*(_BYTE*)(a1 + 6240) & 8) != 0))
		v64 = 1;
	v65 = *(_QWORD*)(a1 + 6608);
	*(_DWORD*)(a1 + 220) = v64;
	(*(void(__fastcall**)(__int64, _QWORD, int*))(*(_QWORD*)v65 + 64i64))(v65, 0i64, v75);
	if ((*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, int))(**(_QWORD**)(a1 + 6592) + 80i64))(
		*(_QWORD*)(a1 + 6592),
		*(unsigned int*)(a1 + 6548),
		*(unsigned int*)(a1 + 6556),
		v76,
		1,
		3,
		1280070990) >= 0)
	{
		*(_DWORD*)(a1 + 216) = 1;
		v66 = 0;
		v67 = 0i64;
		while (!dword_140AE64C0[v67]
			|| (*(int(__fastcall**)(_QWORD, _QWORD, _QWORD, _QWORD, int, int, int))(**(_QWORD**)(a1 + 6592) + 80i64))(
				*(_QWORD*)(a1 + 6592),
				*(unsigned int*)(a1 + 6548),
				*(unsigned int*)(a1 + 6556),
				v76,
				2,
				3,
				dword_140AE7B30[v67]) >= 0)
		{
			++v66;
			++v67;
			if (v66 >= 0x1B)
				goto LABEL_133;
		}
	}
	*(_DWORD*)(a1 + 216) = 0;
LABEL_133:
	v63 = dword_140C65694 == 0;
	*(_QWORD*)(a1 + 224) = 0i64;
	*(_DWORD*)(a1 + 10428) = 0;
	*(_DWORD*)(a1 + 232) = 3;
	if (!v63 && v87 == 4318)
	{
		v68 = *(_QWORD*)(a1 + 6608);
		v75[0] = 65564;
		if (!(unsigned int)sub_140818B00(v68, (__int64)v75))
		{
			v69 = v75[2];
			*(_DWORD*)(a1 + 10428) = 1;
			if (v69 > 1)
			{
				*(_DWORD*)(a1 + 228) = 1;
				*(_DWORD*)(a1 + 232) = v69 + 1;
			}
		}
	}
	v70 = 16i64 * *(unsigned int*)(a1 + 184);
	if (!is_mul_ok(*(unsigned int*)(a1 + 184), 0x10ui64))
		v70 = -1i64;
	v71 = sub_14018B280(v70, 0);
	v72 = *(unsigned int*)(a1 + 188);
	*(_QWORD*)(a1 + 7144) = v71;
	v73 = 16 * v72;
	if (!is_mul_ok(v72, 0x10ui64))
		v73 = -1i64;
	*(_QWORD*)(a1 + 7160) = sub_14018B280(v73, 0);
	return 0i64;
}
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140AE7B30: using guessed type int dword_140AE7B30[28];
// 140C65694: using guessed type int dword_140C65694;
// 14026ADA0: using guessed type char var_5B0[88];

