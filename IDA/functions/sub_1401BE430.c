#include "../winhttp.h"

//----- (00000001401BE430) ----------------------------------------------------
__int64 __fastcall sub_1401BE430(_QWORD* a1, char* a2, int a3, __int64 a4, int* a5, __int64 a6, __int64 a7)
{
	__int8* v9; // rax
	__int8* v10; // rdi
	unsigned __int64 v11; // rax
	__int64 v12; // r11
	char* v13; // rdx
	unsigned __int64 v14; // rbx
	__int64 v15; // r10
	__int64 v16; // rax
	char v17; // r8
	__int16 v18; // cx
	char v19; // r9
	char v20; // cl
	char v21; // r9
	__int64 v22; // rax
	__int64 result; // rax
	char* v24; // rax
	unsigned __int64 v25; // r8
	char* v26; // rdx
	__int64 v27; // r11
	char v28; // r9
	__int16 v29; // cx
	char v30; // r10
	char v31; // cl
	char v32; // r10
	__int16 v33; // ax
	__int16* v34; // rbx
	unsigned __int64 v35; // rbp
	__int64 v36; // r8
	__int16* v37; // rdx
	unsigned __int16 v38; // cx
	unsigned __int64 v39; // rdi
	_QWORD* v40; // rax
	__int64 v41; // rsi
	__int64 v42; // rax
	char* v43; // r8
	char* v44; // rdx
	char v45; // cl
	char v46; // al
	__int64 v47; // rax
	unsigned __int64 v48; // rdx
	__int64 v49; // rbx
	__int64 v50; // r11
	char v51; // r9
	__int16 v52; // cx
	char v53; // r10
	char v54; // cl
	char v55; // r10
	unsigned __int16* v56; // r9
	_QWORD* v58; // rbp
	unsigned __int64 v59; // rdi
	unsigned __int64 v60; // r8
	__int64 v61; // rsi
	__int64 v62; // rcx
	char* v63; // r8
	__int64 v64; // rbp
	char* v65; // rdx
	char v66; // cl
	char v67; // al
	__int64 v68; // rax
	unsigned __int64 v69; // rdx
	__int64 v70; // rbx
	__int64 v71; // r11
	char v72; // r9
	__int16 v73; // cx
	char v74; // r10
	char v75; // cl
	char v76; // r10
	unsigned __int16* v77; // r9
	unsigned __int64 v79; // rsi
	__int64 v80; // r10
	__int64 v81; // rdi
	__int64 v82; // rbx
	unsigned __int64 v83; // r8
	char* v84; // rdx
	__int64 v85; // r11
	char v86; // cl
	__int16 v87; // ax
	char v88; // r9
	char v89; // r10
	char v90; // r9
	unsigned __int16 v91; // ax
	__int64 v92; // [rsp+28h] [rbp-3D0h]
	__int64 v93; // [rsp+48h] [rbp-3B0h]
	unsigned __int64 v94; // [rsp+48h] [rbp-3B0h]
	unsigned __int16* v98; // [rsp+80h] [rbp-378h]
	__int64 v99; // [rsp+88h] [rbp-370h]
	int v100; // [rsp+90h] [rbp-368h]
	char v102[272]; // [rsp+A0h] [rbp-358h] BYREF
	__int16 v103[264]; // [rsp+1B0h] [rbp-248h] BYREF

	v9 = sub_1407DE0B4((__int64)a2, 0x5Cu);
	v10 = v9;
	if (!v9)
	{
		v24 = (char*)&unk_1409E2A4C;
		if (*a2)
			v24 = a2;
		v25 = -1i64;
		v100 = (int)v24;
		v26 = v24;
		if (!v24)
			return 2147942487i64;
		v27 = 0i64;
		while (1)
		{
			v28 = *v26;
			if (*v26 >= 0)
			{
				++v26;
				v29 = v28;
				--v25;
				goto LABEL_45;
			}
			if (v25 > 1 && (v28 & 0xE0) == 0xC0)
			{
				v30 = v26[1];
				if ((v30 & 0xC0) == 0x80)
				{
					v26 += 2;
					v29 = v30 & 0x3F | ((v28 & 0x1F) << 6);
					v25 -= 2i64;
					goto LABEL_45;
				}
			}
			if (v25 > 2 && (v28 & 0xF0) == 0xE0)
			{
				v31 = v26[1];
				if ((v31 & 0xC0) == 0x80)
				{
					v32 = v26[2];
					if ((v32 & 0xC0) == 0x80)
						break;
				}
			}
			++v26;
			--v25;
		LABEL_49:
			if (!v25)
				goto LABEL_50;
		}
		v26 += 3;
		v29 = v32 & 0x3F | (((unsigned __int16)(v28 << 6) | v31 & 0x3F) << 6);
		v25 -= 3i64;
	LABEL_45:
		if (v27 == 260)
			return 2147942522i64;
		v103[v27++] = v29;
		if (v29)
			goto LABEL_49;
	LABEL_50:
		v33 = v103[0];
		v34 = v103;
		v98 = (unsigned __int16*)v103;
		if (v103[0])
		{
			while (2)
			{
				switch (v33)
				{
				case 26:
				case 33:
				case 42:
				case 63:
				case 91:
				case 93:
					break;
				default:
					v33 = v34[1];
					++v34;
					if (v33)
						continue;
					break;
				}
				break;
			}
			v98 = (unsigned __int16*)v34;
		}
		v35 = 0i64;
		v99 = v34 - v103;
		if (v99)
		{
			v36 = v34 - v103;
			v37 = v103;
			do
			{
				v38 = *v37;
				if ((unsigned __int16)*v37 >= 0x80u)
				{
					if (v38 >= 0x1000u)
					{
						if (v35 >= 0x102)
							return 2147942522i64;
						v102[v35] = (v38 >> 12) | 0xE0;
						v102[v35 + 1] = (v38 >> 6) & 0x3F | 0x80;
						v35 += 3i64;
						v102[v35 - 1] = *(_BYTE*)v37 & 0x3F | 0x80;
					}
					else
					{
						if (v35 >= 0x103)
							return 2147942522i64;
						v102[v35] = (v38 >> 6) | 0xC0;
						v35 += 2i64;
						v102[v35 - 1] = *(_BYTE*)v37 & 0x3F | 0x80;
					}
				}
				else
				{
					if (v35 >= 0x104)
						return 2147942522i64;
					v102[v35++] = v38;
				}
				v94 = v35;
				if (!v38)
					break;
				++v37;
				--v36;
			} while (v36);
			if (v35)
			{
				v39 = sub_1401BF290((__int64)a1, (__int64)v102, v35);
				goto LABEL_70;
			}
		}
		else
		{
			v94 = 0i64;
		}
		v39 = 0i64;
	LABEL_70:
		v40 = a1;
		if (v39 < a1[2])
		{
			v41 = 16 * v39;
			do
			{
				v42 = v40[1];
				v43 = *(char**)(v41 + v42);
				if (v35)
				{
					v44 = *(char**)(v41 + v42);
					do
					{
						v45 = *v44;
						if ((unsigned __int8)(*v44 - 65) <= 0x19u)
							v45 += 32;
						v46 = v44[v102 - v43];
						if ((unsigned __int8)(v46 - 65) <= 0x19u)
							v46 += 32;
						if (v45 != v46)
							goto LABEL_112;
						if (!*v44)
							break;
						++v44;
					} while (v44 - v43 < v35);
				}
				v47 = a6;
				v48 = -1i64;
				v49 = (a7 - a6) >> 1;
				if (!a6 && v49 || !v43)
					return 2147942487i64;
				v50 = 0i64;
				while (1)
				{
					v51 = *v43;
					if (*v43 >= 0)
					{
						++v43;
						v52 = v51;
						--v48;
						goto LABEL_97;
					}
					if (v48 > 1 && (v51 & 0xE0) == 0xC0)
					{
						v53 = v43[1];
						if ((v53 & 0xC0) == 0x80)
						{
							v43 += 2;
							v52 = v53 & 0x3F | ((v51 & 0x1F) << 6);
							v48 -= 2i64;
							goto LABEL_96;
						}
					}
					if (v48 > 2 && (v51 & 0xF0) == 0xE0)
					{
						v54 = v43[1];
						if ((v54 & 0xC0) == 0x80)
						{
							v55 = v43[2];
							if ((v55 & 0xC0) == 0x80)
								break;
						}
					}
					++v43;
					--v48;
				LABEL_103:
					v47 = a6;
					if (!v48)
						goto LABEL_104;
				}
				v43 += 3;
				v52 = v55 & 0x3F | (((unsigned __int16)(v51 << 6) | v54 & 0x3F) << 6);
				v48 -= 3i64;
			LABEL_96:
				v47 = a6;
			LABEL_97:
				if (v49)
				{
					if (v50 == v49)
						return 2147942522i64;
					*(_WORD*)(v47 + 2 * v50) = v52;
				}
				++v50;
				if (v52)
					goto LABEL_103;
			LABEL_104:
				if (a6 + 2 * v99 && (unsigned int)sub_1401D3EC0(v98))
				{
					if (*v56 ? sub_1401D3F90(v98, v56) : *v98 == 0)
						sub_1401D0B80(a4, a5);
				}
				v40 = a1;
				++v39;
				v41 += 16i64;
			} while (v39 < a1[2]);
		}
	LABEL_112:
		if (v35)
		{
			v60 = v35;
			v58 = a1;
			v59 = sub_1401BF400((__int64)a1, (__int64)v102, v60);
		}
		else
		{
			v58 = a1;
			v59 = 0i64;
		}
		if (v59 >= v58[4])
			goto LABEL_160;
		v61 = 56 * v59;
	LABEL_118:
		v62 = v58[3];
		v63 = *(char**)(v61 + v62);
		v64 = v61 + v62;
		if (v94)
		{
			v65 = *(char**)(v61 + v62);
			while (1)
			{
				v66 = *v65;
				if ((unsigned __int8)(*v65 - 65) <= 0x19u)
					v66 += 32;
				v67 = v65[v102 - v63];
				if ((unsigned __int8)(v67 - 65) <= 0x19u)
					v67 += 32;
				if (v66 != v67)
					break;
				if (*v65)
				{
					if (++v65 - v63 < v94)
						continue;
				}
				goto LABEL_127;
			}
			v58 = a1;
		LABEL_160:
			if (!a3)
				return 0i64;
			v79 = 0i64;
			if (!v58[2])
				return 0i64;
			v80 = a6;
			v81 = 0i64;
			v82 = (a7 - a6) >> 1;
		LABEL_163:
			v83 = -1i64;
			v84 = *(char**)(v81 + v58[1]);
			if ((v80 || !v82) && v84)
			{
				v85 = 0i64;
				while (1)
				{
					v86 = *v84;
					if (*v84 < 0)
					{
						if (v83 > 1 && (v86 & 0xE0) == 0xC0 && (v88 = v84[1], (v88 & 0xC0) == 0x80))
						{
							v84 += 2;
							v87 = v88 & 0x3F | ((v86 & 0x1F) << 6);
							v83 -= 2i64;
						}
						else
						{
							if (v83 <= 2 || (v86 & 0xF0) != 0xE0)
								goto LABEL_184;
							v89 = v84[1];
							if ((v89 & 0xC0) != 0x80 || (v90 = v84[2], (v90 & 0xC0) != 0x80))
							{
								v80 = a6;
							LABEL_184:
								++v84;
								--v83;
								goto LABEL_185;
							}
							v91 = v89 & 0x3F;
							v80 = a6;
							v84 += 3;
							v87 = v90 & 0x3F | (((unsigned __int16)(v86 << 6) | v91) << 6);
							v83 -= 3i64;
						}
					}
					else
					{
						++v84;
						v87 = v86;
						--v83;
					}
					if (v82)
					{
						if (v85 == v82)
							return 2147942522i64;
						*(_WORD*)(v80 + 2 * v85) = v87;
					}
					++v85;
					if (!v87)
					{
					LABEL_186:
						v92 = v80 + 2 * v85;
						*(_WORD*)(v92 - 2) = 92;
						result = sub_1401BE430(*(_QWORD*)(v81 + v58[1] + 8), v100, a3, a4, (__int64)a5, v92, a7);
						if ((int)result < 0)
							return result;
						++v79;
						v81 += 16i64;
						if (v79 >= v58[2])
							return 0i64;
						v80 = a6;
						goto LABEL_163;
					}
				LABEL_185:
					if (!v83)
						goto LABEL_186;
				}
			}
			return 2147942487i64;
		}
	LABEL_127:
		v68 = a6;
		v69 = -1i64;
		v70 = (a7 - a6) >> 1;
		if (!a6 && v70 || !v63)
			return 2147942487i64;
		v71 = 0i64;
		while (1)
		{
			v72 = *v63;
			if (*v63 < 0)
			{
				if (v69 > 1 && (v72 & 0xE0) == 0xC0 && (v74 = v63[1], (v74 & 0xC0) == 0x80))
				{
					v63 += 2;
					v73 = v74 & 0x3F | ((v72 & 0x1F) << 6);
					v69 -= 2i64;
				}
				else
				{
					if (v69 <= 2
						|| (v72 & 0xF0) != 0xE0
						|| (v75 = v63[1], (v75 & 0xC0) != 0x80)
						|| (v76 = v63[2], (v76 & 0xC0) != 0x80))
					{
						++v63;
						--v69;
						goto LABEL_149;
					}
					v63 += 3;
					v73 = v76 & 0x3F | (((unsigned __int16)(v72 << 6) | v75 & 0x3F) << 6);
					v69 -= 3i64;
				}
				v68 = a6;
			}
			else
			{
				++v63;
				v73 = v72;
				--v69;
			}
			if (v70)
			{
				if (v71 == v70)
					return 2147942522i64;
				*(_WORD*)(v68 + 2 * v71) = v73;
			}
			++v71;
			if (!v73)
			{
			LABEL_150:
				if (a6 + 2 * v99 && (unsigned int)sub_1401D3EC0(v98))
				{
					if (*v77 ? sub_1401D3F90(v98, v77) : *v98 == 0)
						sub_1401D0AE0(a4, a5, (__int64*)(v64 + 8));
				}
				v58 = a1;
				++v59;
				v61 += 56i64;
				if (v59 >= a1[4])
					goto LABEL_160;
				goto LABEL_118;
			}
		LABEL_149:
			v68 = a6;
			if (!v69)
				goto LABEL_150;
		}
	}
	*v9 = 0;
	v11 = sub_1401BF0F0((__int64)a1, a2);
	*v10 = 92;
	if (v11 >= a1[2])
		return 0i64;
	v12 = 2 * v11;
	v13 = *(char**)(a1[1] + 16 * v11);
	v14 = -1i64;
	v15 = (a7 - a6) >> 1;
	if (!a6 && v15 || !v13)
		return 2147942487i64;
	v16 = 0i64;
	v93 = 0i64;
	while (1)
	{
		v17 = *v13;
		if (*v13 >= 0)
		{
			++v13;
			v18 = v17;
			--v14;
			goto LABEL_19;
		}
		if (v14 > 1 && (v17 & 0xE0) == 0xC0)
		{
			v19 = v13[1];
			if ((v19 & 0xC0) == 0x80)
			{
				v13 += 2;
				v18 = v19 & 0x3F | ((v17 & 0x1F) << 6);
				v14 -= 2i64;
				goto LABEL_18;
			}
		}
		if (v14 > 2 && (v17 & 0xF0) == 0xE0)
		{
			v20 = v13[1];
			if ((v20 & 0xC0) == 0x80)
			{
				v21 = v13[2];
				if ((v21 & 0xC0) == 0x80)
					break;
			}
		}
		v16 = v93;
		++v13;
		--v14;
	LABEL_27:
		if (!v14)
			goto LABEL_23;
	}
	v13 += 3;
	v18 = v21 & 0x3F | (((unsigned __int16)(v17 << 6) | v20 & 0x3F) << 6);
	v14 -= 3i64;
LABEL_18:
	v16 = v93;
LABEL_19:
	if (v15)
	{
		if (v16 == v15)
			return 2147942522i64;
		*(_WORD*)(a6 + 2 * v16) = v18;
	}
	v93 = ++v16;
	if (v18)
		goto LABEL_27;
LABEL_23:
	v22 = a6 + 2 * v16;
	*(_WORD*)(v22 - 2) = 92;
	result = sub_1401BE430(*(_QWORD*)(a1[1] + 8 * v12 + 8), (int)v10 + 1, a3, a4, (__int64)a5, v22, a7);
	if ((int)result >= 0)
		return 0i64;
	return result;
}
// 1401BEAA1: variable 'v56' is possibly undefined
// 1401BECE3: variable 'v77' is possibly undefined
// 1401BE430: using guessed type __int16 var_248[264];

