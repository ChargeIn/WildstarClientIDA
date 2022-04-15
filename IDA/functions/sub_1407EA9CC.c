#include "../winhttp.h"

//----- (00000001407EA9CC) ----------------------------------------------------
__int64 __fastcall sub_1407EA9CC(unsigned __int16** a1, WCHAR* a2, _OWORD* a3, __int64 a4)
{
	int v4; // edi
	WCHAR* v5; // rbx
	unsigned __int16** v6; // rsi
	__int64 result; // rax
	WCHAR v8; // ax
	int v9; // r15d
	unsigned int v10; // r14d
	int v11; // r12d
	WCHAR v12; // ax
	WCHAR* v13; // r10
	int v14; // edx
	char v15; // r13
	int v16; // r8d
	char v17; // di
	char v18; // si
	char v19; // r14
	int v20; // r12d
	int v21; // ebx
	int v22; // eax
	WCHAR* v23; // rax
	unsigned __int16 v24; // ax
	WCHAR* v25; // rcx
	WCHAR* v26; // rcx
	unsigned __int16 v27; // ax
	__int64 v28; // rcx
	unsigned __int16 v29; // r15
	char v30; // cl
	int v31; // r13d
	char v32; // bl
	int v33; // esi
	__int64 v34; // rsi
	unsigned __int16** v35; // r12
	int v36; // r14d
	int v37; // r15d
	unsigned __int16 v38; // ax
	int v40; // ebx
	unsigned int v42; // r12d
	_BYTE* v43; // rbx
	int v45; // ebx
	int v46; // eax
	int v47; // r14d
	const WCHAR* v50; // r14
	unsigned __int64 v51; // rax
	SIZE_T v52; // rbx
	CHAR* v53; // rsi
	int v54; // eax
	void(__fastcall * v55)(_QWORD, int*, CHAR*, __int64*); // rax
	WCHAR* v56; // r10
	unsigned __int16* v57; // r10
	unsigned __int16 v58; // ax
	unsigned __int16 v59; // cx
	unsigned __int16 v60; // r9
	unsigned __int16** v61; // r15
	int v62; // r14d
	int v63; // r14d
	WCHAR v64; // ax
	int v65; // r14d
	int v66; // r12d
	bool v67; // zf
	__int64 v68; // rbx
	__int64 v69; // rbx
	int* v70; // rbx
	unsigned __int16** v71; // r13
	char v72; // r14
	int v74; // ecx
	int* v75; // rcx
	int v76; // eax
	int v77; // edx
	int v78; // eax
	int v79; // r13d
	WCHAR v80; // ax
	int v81; // [rsp+30h] [rbp-D0h]
	char v82; // [rsp+34h] [rbp-CCh]
	char v83; // [rsp+35h] [rbp-CBh]
	char v84; // [rsp+36h] [rbp-CAh]
	unsigned int v85; // [rsp+38h] [rbp-C8h]
	int v86; // [rsp+3Ch] [rbp-C4h]
	int v87; // [rsp+40h] [rbp-C0h]
	int v88; // [rsp+44h] [rbp-BCh] BYREF
	char v89; // [rsp+48h] [rbp-B8h]
	int v90; // [rsp+4Ch] [rbp-B4h]
	int v91; // [rsp+50h] [rbp-B0h]
	char v92; // [rsp+54h] [rbp-ACh]
	int v93; // [rsp+58h] [rbp-A8h]
	LPVOID lpMem; // [rsp+60h] [rbp-A0h]
	WCHAR* v95; // [rsp+68h] [rbp-98h]
	unsigned __int16** v96; // [rsp+70h] [rbp-90h]
	int v97; // [rsp+78h] [rbp-88h] BYREF
	LPVOID v98; // [rsp+80h] [rbp-80h] BYREF
	__int64 v99; // [rsp+88h] [rbp-78h]
	int* v100; // [rsp+90h] [rbp-70h]
	int v101; // [rsp+98h] [rbp-68h] BYREF
	int v102; // [rsp+9Ch] [rbp-64h]
	unsigned __int64 v103; // [rsp+A0h] [rbp-60h] BYREF
	int v104; // [rsp+A8h] [rbp-58h]
	__int64 v105; // [rsp+B0h] [rbp-50h]
	__int64 v106; // [rsp+B8h] [rbp-48h]
	__int64 v107[2]; // [rsp+C0h] [rbp-40h] BYREF
	__int64 v108; // [rsp+D0h] [rbp-30h]
	char v109; // [rsp+D8h] [rbp-28h]
	int v110[176]; // [rsp+E0h] [rbp-20h] BYREF

	v105 = a4;
	LOWORD(v4) = 0;
	v5 = a2;
	v95 = a2;
	v6 = a1;
	v96 = a1;
	v104 = 0;
	v87 = 0;
	v98 = v110;
	v103 = 350i64;
	v97 = 0;
	lpMem = 0i64;
	if (!a2 || !a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	sub_1407DE348((__int64)v107, a3);
	v8 = *v5;
	v84 = 0;
	v9 = 0;
	v81 = 0;
	v88 = 0;
	v10 = 0;
	v85 = 0;
	if (!v8)
	{
	LABEL_296:
		result = v10;
		goto LABEL_297;
	}
	v11 = 37;
LABEL_6:
	if ((unsigned int)sub_1407ED1C8(v8, 8))
	{
		v88 = v9 - 1;
		v12 = sub_1407EA97C(&v88, v6);
		if (v12 != 0xFFFF)
			sub_1407F38F8(v12, (__int64)v6);
		do
			++v5;
		while ((unsigned int)sub_1407ED1C8(*v5, 8));
		v9 = v88;
		v95 = v5;
		v81 = v88;
		goto LABEL_284;
	}
	v13 = v95;
	if (*v95 != 37)
		goto LABEL_280;
	if (v95[1] == 37)
	{
		if (*v95 == 37)
		{
			if (v95[1] == 37)
				v13 = v95 + 1;
			v95 = v13;
		}
	LABEL_280:
		v81 = ++v9;
		v88 = v9;
		v4 = (unsigned __int16)sub_1407F3700(v6);
		v80 = *v95;
		v5 = v95 + 1;
		v87 = v4;
		++v95;
		if (v80 == (_WORD)v4)
			goto LABEL_281;
		if ((_WORD)v4 != 0xFFFF)
			sub_1407F38F8(v4, (__int64)v6);
		goto LABEL_285;
	}
	v102 = 0;
	LOBYTE(v11) = 0;
	v14 = 0;
	LODWORD(v100) = 0;
	v101 = v11;
	v15 = 1;
	v91 = 0;
	v16 = 0;
	v93 = 0;
	v86 = 0;
	v92 = 0;
	v89 = 0;
	v17 = 0;
	v18 = 0;
	v19 = 0;
	v20 = 0;
	do
	{
		v21 = *++v13;
		v95 = v13;
		if ((v21 & 0xFF00) == 0)
		{
			v22 = sub_1407DE874((unsigned __int8)v21);
			v16 = v93;
			v14 = v86;
			v13 = v95;
			if (v22)
			{
				v16 = ++v93;
				v14 = v21 + 2 * (5 * v86 - 24);
				v86 = v14;
				continue;
			}
		}
		switch (v21)
		{
		case '*':
			++v17;
			break;
		case 'F':
			break;
		case 'I':
			v24 = v13[1];
			if (v24 == 54)
			{
				v25 = v13 + 2;
				if (v13[2] == 52)
				{
					v13 += 2;
					v95 = v25;
				LABEL_35:
					++v20;
					v99 = 0i64;
					break;
				}
			}
			if (v24 == 51)
			{
				v26 = v13 + 2;
				if (v13[2] == 50)
				{
					v13 += 2;
					v95 = v26;
					break;
				}
			}
			v27 = v24 - 88;
			if (v27 <= 0x20u)
			{
				v28 = 0x100821001i64;
				if (_bittest64(&v28, v27))
					goto LABEL_35;
			}
			++v20;
			v99 = 0i64;
			break;
		case 'L':
			++v15;
			break;
		case 'N':
			break;
		case 'h':
			--v15;
			--v19;
			break;
		case 'l':
			v23 = v13 + 1;
			if (v13[1] != 108)
			{
				++v15;
			LABEL_29:
				++v19;
				break;
			}
			++v13;
			v95 = v23;
			goto LABEL_35;
		case 'w':
			goto LABEL_29;
		default:
			++v18;
			break;
		}
	} while (!v18);
	v29 = (unsigned __int16)v100;
	v82 = v17;
	v4 = v87;
	v30 = v82;
	v83 = v15;
	v31 = v102;
	v90 = v20;
	LOBYTE(v20) = v101;
	if (v82)
	{
		v100 = 0i64;
	}
	else
	{
		v106 = v105;
		v105 += 8i64;
		v100 = *(int**)(v105 - 8);
	}
	v32 = 0;
	if (!v19)
		v19 = ((*v13 - 67) & 0xFFEF) != 0 ? 1 : -1;
	v33 = *v13 | 0x20;
	v102 = v33;
	if (v33 == 110)
	{
	LABEL_57:
		if (v16 && !v14)
			goto LABEL_286;
		if (v33 <= 111)
		{
			if (v33 == 111)
				goto LABEL_227;
			if (v33 != 99)
			{
				if (v33 == 100)
					goto LABEL_227;
				if (v33 <= 100)
					goto LABEL_137;
				if (v33 <= 103)
				{
					v34 = 0i64;
					if ((_WORD)v4 == 45)
					{
						v34 = 1i64;
						*(_WORD*)v98 = 45;
						goto LABEL_75;
					}
					if ((_WORD)v4 == 43)
					{
					LABEL_75:
						v35 = v96;
						v36 = v86 - 1;
						v37 = v81 + 1;
						v38 = sub_1407F3700(v96);
						v16 = v93;
						LOWORD(v4) = v38;
						v87 = v38;
					}
					else
					{
						v37 = v81;
						v36 = v86;
						v35 = v96;
					}
					if (!v16)
						v36 = -1;
					while ((v4 & 0xFF00) == 0)
					{
						if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
							break;
						if (!v36--)
							break;
						++v91;
						*((_WORD*)v98 + v34++) = (char)v4;
						if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
							goto LABEL_88;
						++v37;
						LOWORD(v4) = sub_1407F3700(v35);
						v87 = (unsigned __int16)v4;
					}
					v40 = **(unsigned __int16**)(*(_QWORD*)(v107[0] + 240) + 88i64);
					if (v40 == (char)v4)
					{
						if (v36--)
						{
							++v37;
							LOWORD(v4) = sub_1407F3700(v35);
							*((_WORD*)v98 + v34++) = v40;
							v87 = (unsigned __int16)v4;
							if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
							{
							LABEL_88:
								v42 = v85;
								goto LABEL_89;
							}
							while ((v4 & 0xFF00) == 0)
							{
								if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
									break;
								if (!v36--)
									break;
								++v91;
								*((_WORD*)v98 + v34++) = v4;
								if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
									goto LABEL_88;
								++v37;
								LOWORD(v4) = sub_1407F3700(v35);
								v87 = (unsigned __int16)v4;
							}
						}
					}
					v45 = v91;
					if (v91)
					{
						if ((((_WORD)v4 - 69) & 0xFFDF) == 0)
						{
							v46 = v36;
							v47 = v36 - 1;
							if (v46)
							{
								*((_WORD*)v98 + v34++) = 101;
								if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
									goto LABEL_88;
								++v37;
								LOWORD(v4) = sub_1407F3700(v35);
								v87 = (unsigned __int16)v4;
								if ((_WORD)v4 == 45)
								{
									*((_WORD*)v98 + v34++) = 45;
									if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
										goto LABEL_88;
								}
								else if ((_WORD)v4 != 43)
								{
									goto LABEL_119;
								}
								if (v47--)
								{
									++v37;
									goto LABEL_118;
								}
								v47 = 0;
							LABEL_119:
								while ((v4 & 0xFF00) == 0)
								{
									if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
										break;
									if (!v47--)
										break;
									++v45;
									*((_WORD*)v98 + v34++) = v4;
									if (!(unsigned int)sub_1407EBB9C(v34, &v103, (int**)&v98, v110, &v97))
										goto LABEL_88;
									++v37;
								LABEL_118:
									LOWORD(v4) = sub_1407F3700(v35);
									v87 = (unsigned __int16)v4;
								}
							}
						}
					}
					v9 = v37 - 1;
					v81 = v9;
					v88 = v9;
					if ((_WORD)v4 != 0xFFFF)
						sub_1407F38F8(v4, (__int64)v35);
					if (v45)
					{
						if (v82)
							goto LABEL_68;
						v50 = (const WCHAR*)v98;
						v42 = v85 + 1;
						v51 = v103;
						*((_WORD*)v98 + v34) = 0;
						v52 = 2 * v51 + 2;
						++v85;
						v53 = (CHAR*)sub_1407E2C30(v52);
						if (v53)
						{
							v54 = sub_1407F3F18(0i64, v53, v52, v50, v52 - 1);
							if (v54 == 22 || v54 == 34)
							{
								sub_1407DC390();
								__debugbreak();
							}
							v55 = (void(__fastcall*)(_QWORD, int*, CHAR*, __int64*))DecodePointer(off_140C0FA58);
							v55((unsigned int)(v83 - 1), v100, v53, v107);
							sub_1407E14C0(v53);
							goto LABEL_68;
						}
						goto LABEL_89;
					}
				LABEL_285:
					v42 = v85;
					goto LABEL_89;
				}
				if (v33 != 105)
				{
					if (v33 == 110)
					{
						v9 = v81;
						v31 = v81;
						if (!v30)
						{
							v66 = v90;
							goto LABEL_271;
						}
						goto LABEL_68;
					}
					goto LABEL_137;
				}
				v33 = 100;
			LABEL_70:
				if ((_WORD)v4 == 45)
				{
					v89 = 1;
				}
				else if ((_WORD)v4 != 43)
				{
					goto LABEL_168;
				}
				v86 = v14 - 1;
				if (v14 != 1 || !v16)
				{
					v61 = v96;
					v62 = v81 + 1;
					v81 = v62;
					v88 = v62;
					v4 = (unsigned __int16)sub_1407F3700(v96);
					v87 = v4;
					goto LABEL_169;
				}
				v32 = 1;
			LABEL_168:
				v61 = v96;
				v62 = v81;
			LABEL_169:
				if ((_WORD)v4 == 48)
				{
					v63 = v62 + 1;
					v81 = v63;
					v88 = v63;
					v64 = sub_1407F3700(v61);
					v4 = v64;
					v87 = v64;
					if (((v64 - 88) & 0xFFDF) == 0)
					{
						v81 = v63 + 1;
						v88 = v63 + 1;
						v4 = (unsigned __int16)sub_1407F3700(v61);
						v87 = v4;
						if (v93)
						{
							v86 -= 2;
							if (v86 < 1)
								++v32;
						}
						v66 = v90;
						v33 = 120;
						goto LABEL_181;
					}
					v91 = 1;
					if (v33 != 120)
					{
						v65 = v86;
						if (v93)
						{
							v65 = v86 - 1;
							if (v86 == 1)
								++v32;
						}
						v66 = v90;
						v33 = 111;
						goto LABEL_182;
					}
					v81 = v63 - 1;
					v88 = v63 - 1;
					if (v64 != 0xFFFF)
						sub_1407F38F8(v64, (__int64)v61);
					v4 = 48;
					v87 = 48;
				}
				v66 = v90;
			LABEL_181:
				v65 = v86;
				goto LABEL_182;
			}
			if (!v16)
			{
				v93 = 1;
				v86 = v14 + 1;
			}
			if (v19 > 0)
				LOBYTE(v20) = 1;
		LABEL_197:
			v70 = v100;
			v71 = v96;
			v9 = v81 - 1;
			v81 = v9;
			v88 = v9;
			if ((_WORD)v4 != 0xFFFF)
				sub_1407F38F8(v4, (__int64)v96);
			v72 = v92;
			while (1)
			{
				if (v93)
				{
					if (!v86--)
						break;
				}
				v81 = ++v9;
				v88 = v9;
				LOWORD(v4) = sub_1407F3700(v71);
				v87 = (unsigned __int16)v4;
				if ((_WORD)v4 == 0xFFFF)
					goto LABEL_218;
				if (v33 != 99)
				{
					if (v33 != 115)
						goto LABEL_304;
					if ((unsigned __int16)(v4 - 9) <= 4u)
						goto LABEL_218;
					if ((_WORD)v4 == 32)
					{
					LABEL_304:
						if (v33 != 123
							|| (v74 = v72 ^ *((char*)lpMem + ((unsigned __int64)(unsigned __int16)v4 >> 3)), !_bittest(&v74, v4 & 7)))
						{
						LABEL_218:
							v81 = --v9;
							v88 = v9;
							if ((_WORD)v4 != 0xFFFF)
								sub_1407F38F8(v4, (__int64)v71);
							break;
						}
					}
				}
				if (v82)
				{
					v70 = (int*)((char*)v70 + 2);
				}
				else if ((_BYTE)v20)
				{
					v75 = v100;
					*(_WORD*)v100 = v4;
					v100 = (int*)((char*)v75 + 2);
				}
				else
				{
					v101 = 0;
					v76 = sub_1407F2338(&v101, v100, 5ui64, v4);
					if (v76)
					{
						if (v76 == 22 || v76 == 34)
						{
							sub_1407DC390();
							__debugbreak();
						}
					}
					else
					{
						v100 = (int*)((char*)v100 + v101);
					}
				}
			}
			if (v70 != v100)
			{
				if (!v82)
				{
					++v85;
					if (v33 != 99)
					{
						if ((_BYTE)v20)
							*(_WORD*)v100 = 0;
						else
							*(_BYTE*)v100 = 0;
					}
				}
				goto LABEL_68;
			}
			goto LABEL_285;
		}
		switch (v33)
		{
		case 'p':
			v99 = 0i64;
			v66 = v90 + 1;
			v83 = 1;
			break;
		case 's':
			if (v19 > 0)
				LOBYTE(v20) = 1;
			goto LABEL_197;
		case 'u':
		LABEL_227:
			v66 = v90;
			break;
		case 'x':
			goto LABEL_70;
		case '{':
			v20 = (unsigned __int8)v20;
			if (v19 > 0)
				v20 = 1;
			v56 = v13 + 1;
			v101 = v20;
			v95 = v56;
			if (*v56 == 94)
			{
				v92 = -1;
				v95 = v56 + 1;
			}
			v43 = lpMem;
			if (!lpMem)
			{
				v43 = sub_1407E2C30(0x2000ui64);
				lpMem = v43;
				if (!v43)
					goto LABEL_292;
				v104 = 1;
			}
			sub_1407E4830((int*)v43, 0i64, 0x2000ui64);
			v57 = v95;
			if (*v95 == 93)
			{
				v29 = 93;
				v57 = v95 + 1;
				v43[11] = 32;
			}
			v58 = *v57;
			if (*v57 != 93)
			{
				do
				{
					++v57;
					if (v58 == 45 && v29 && (v59 = *v57, *v57 != 93))
					{
						++v57;
						if (v29 >= v59)
						{
							v60 = v29;
							v29 = v59;
						}
						else
						{
							v60 = v59;
						}
						while (v29 < (int)v60)
						{
							v43[(unsigned __int64)v29 >> 3] |= 1 << (v29 & 7);
							++v29;
						}
						v29 = 0;
						v43[(unsigned __int64)v60 >> 3] |= 1 << (v60 & 7);
					}
					else
					{
						v29 = v58;
						v43[(unsigned __int64)v58 >> 3] |= 1 << (v58 & 7);
					}
					v58 = *v57;
				} while (*v57 != 93);
				v33 = v102;
				LOBYTE(v20) = v101;
			}
			if (*v57)
			{
				v95 = v57;
				goto LABEL_197;
			}
		LABEL_292:
			v42 = v85;
			goto LABEL_90;
		default:
		LABEL_137:
			if (*v13 == (_WORD)v4)
			{
				--v84;
				v9 = v81;
				if (!v30)
					v105 = v106;
				goto LABEL_68;
			}
		LABEL_286:
			if ((_WORD)v4 != 0xFFFF)
				sub_1407F38F8(v4, (__int64)v96);
			v42 = v85;
			goto LABEL_89;
		}
		if ((_WORD)v4 == 45)
		{
			v89 = 1;
		}
		else if ((_WORD)v4 != 43)
		{
			goto LABEL_181;
		}
		v77 = v14 - 1;
		if (v77 || !v16)
		{
			v9 = v81 + 1;
			v81 = v9;
			v88 = v9;
			v65 = v77;
			v4 = (unsigned __int16)sub_1407F3700(v96);
			v87 = v4;
			goto LABEL_183;
		}
		v32 = 1;
		v65 = 0;
	LABEL_182:
		v9 = v81;
	LABEL_183:
		if (!v66)
		{
			if (!v32)
			{
				while (1)
				{
					if (((v33 - 112) & 0xFFFFFFF7) != 0)
					{
						if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DE874((unsigned __int8)v4))
							goto LABEL_263;
						if (v33 == 111)
						{
							if ((unsigned __int16)v4 >= 0x38u)
								goto LABEL_263;
							v79 = 8 * v31;
						}
						else
						{
							v79 = 10 * v31;
						}
					}
					else
					{
						if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DEAE0((unsigned __int8)v4))
						{
						LABEL_263:
							v81 = --v9;
							v88 = v9;
							if ((_WORD)v4 != 0xFFFF)
								sub_1407F38F8(v4, (__int64)v96);
							break;
						}
						v79 = 16 * v31;
						if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
						{
							LOWORD(v4) = (v4 & 0xFFDF) - 7;
							v87 = v4;
						}
					}
					++v91;
					v31 = (unsigned __int16)v4 + v79 - 48;
					if (v93)
					{
						if (!--v65)
							break;
					}
					v81 = ++v9;
					v88 = v9;
					v4 = (unsigned __int16)sub_1407F3700(v96);
					v87 = v4;
				}
			}
			if (v89)
				v31 = -v31;
			goto LABEL_267;
		}
		v67 = v32 == 0;
		v68 = v99;
		if (!v67)
			goto LABEL_246;
		while (1)
		{
			if (((v33 - 112) & 0xFFFFFFF7) != 0)
			{
				if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DE874((unsigned __int8)v4))
					goto LABEL_243;
				if (v33 == 111)
				{
					if ((unsigned __int16)v4 >= 0x38u)
						goto LABEL_243;
					v69 = 8 * v68;
				}
				else
				{
					v69 = 10 * v68;
				}
			}
			else
			{
				if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DEAE0((unsigned __int8)v4))
				{
				LABEL_243:
					v81 = --v9;
					v88 = v9;
					if ((_WORD)v4 != 0xFFFF)
						sub_1407F38F8(v4, (__int64)v96);
					v68 = v99;
				LABEL_246:
					if (v89)
						v99 = -v68;
				LABEL_267:
					if (!v91)
					{
						v42 = v85;
						goto LABEL_89;
					}
					if (!v82)
					{
						++v85;
					LABEL_271:
						if (v66)
						{
							*(_QWORD*)v100 = v99;
						}
						else if (v83)
						{
							*v100 = v31;
						}
						else
						{
							*(_WORD*)v100 = v31;
						}
					}
				LABEL_68:
					v6 = v96;
					++v84;
					v5 = v95 + 1;
					v11 = 37;
					++v95;
				LABEL_281:
					if ((_WORD)v4 == 0xFFFF && (*v5 != 37 || v5[1] != 110))
						goto LABEL_285;
				LABEL_284:
					v8 = *v5;
					if (!*v5)
						goto LABEL_285;
					goto LABEL_6;
				}
				v99 *= 16i64;
				v78 = sub_1407DE874((unsigned __int8)v4);
				v69 = v99;
				if (!v78)
				{
					LOWORD(v4) = (v4 & 0xFFDF) - 7;
					v87 = v4;
				}
			}
			++v91;
			v68 = (unsigned __int16)v4 - 48 + v69;
			v99 = v68;
			if (v93)
			{
				if (!--v65)
					goto LABEL_246;
			}
			v81 = ++v9;
			v88 = v9;
			v4 = (unsigned __int16)sub_1407F3700(v96);
			v87 = v4;
		}
	}
	if (v33 == 99 || v33 == 123)
	{
		v88 = ++v81;
		v4 = (unsigned __int16)sub_1407F3700(v96);
	}
	else
	{
		v4 = (unsigned __int16)sub_1407EA97C(&v88, v96);
		v81 = v88;
	}
	v87 = v4;
	if ((_WORD)v4 != 0xFFFF)
	{
		v14 = v86;
		v13 = v95;
		v16 = v93;
		v30 = v82;
		goto LABEL_57;
	}
	v42 = v85;
LABEL_89:
	v43 = lpMem;
LABEL_90:
	if (v104 == 1)
		sub_1407E14C0(v43);
	if (v97 == 1)
		sub_1407E14C0(v98);
	if ((_WORD)v4 != 0xFFFF)
	{
		v10 = v85;
		goto LABEL_296;
	}
	if (v42 || v84)
		result = v42;
	else
		result = 0xFFFFFFFFi64;
LABEL_297:
	if (v109)
		*(_DWORD*)(v108 + 200) &= ~2u;
	return result;
}
// 1407EB9FB: conditional instruction was optimized away because esi.4 is in (==64|6F..70|==75|==78)
// 1407EA9CC: using guessed type int var_300[176];

