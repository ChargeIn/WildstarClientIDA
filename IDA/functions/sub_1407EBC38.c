#include "../winhttp.h"

//----- (00000001407EBC38) ----------------------------------------------------
__int64 __fastcall sub_1407EBC38(unsigned __int16** a1, WCHAR* a2, _OWORD* a3, __int64 a4)
{
	int v4; // edi
	WCHAR* v5; // rbx
	unsigned __int16** v6; // rsi
	__int64 result; // rax
	WCHAR v8; // ax
	int v9; // r14d
	unsigned int v10; // r15d
	WCHAR v11; // ax
	WCHAR* v12; // r10
	int v13; // edx
	char v14; // r12
	int v15; // r8d
	char v16; // di
	char v17; // si
	char v18; // r14
	int v19; // r13d
	int v20; // ebx
	int v21; // eax
	WCHAR* v22; // rax
	unsigned __int16 v23; // ax
	WCHAR* v24; // rcx
	WCHAR* v25; // rcx
	unsigned __int16 v26; // ax
	__int64 v27; // rcx
	unsigned __int16 v28; // r15
	char v29; // cl
	unsigned __int64 v30; // r12
	char v31; // bl
	int v32; // esi
	int* v33; // rax
	__int64 v34; // r11
	int v35; // eax
	int v36; // r12d
	__int64 v37; // rbx
	unsigned __int16** v38; // r12
	int v39; // r15d
	int v40; // r14d
	unsigned __int16 v41; // ax
	int v43; // esi
	int v46; // esi
	int v47; // eax
	int v48; // r15d
	const WCHAR* v51; // r15
	int v52; // r12d
	unsigned int v53; // r13d
	unsigned __int64 v54; // rax
	SIZE_T v55; // rbx
	CHAR* v56; // rsi
	int v57; // eax
	void(__fastcall * v58)(_QWORD, int*, CHAR*, __int64*); // rax
	WCHAR* v59; // r10
	_BYTE* v60; // rbx
	unsigned __int16* v61; // r10
	unsigned __int16 v62; // ax
	unsigned __int16 v63; // cx
	unsigned __int16 v64; // r9
	unsigned __int16** v65; // r15
	int v66; // r14d
	int v67; // r14d
	WCHAR v68; // ax
	int v69; // r13d
	int v70; // r15d
	int* v71; // rbx
	char v72; // r15
	int v74; // ecx
	int* v75; // rcx
	unsigned __int16 v76; // ax
	bool v77; // zf
	__int64 v78; // rbx
	__int64 v79; // rbx
	int v80; // eax
	int v81; // ebx
	int v82; // ebx
	int v83; // eax
	WCHAR v84; // ax
	unsigned __int16** v85; // rdx
	_QWORD* v86; // rax
	int v87; // [rsp+30h] [rbp-D0h]
	char v88; // [rsp+34h] [rbp-CCh]
	char v89; // [rsp+35h] [rbp-CBh]
	unsigned int v90; // [rsp+38h] [rbp-C8h]
	char v91; // [rsp+3Ch] [rbp-C4h]
	int v92; // [rsp+40h] [rbp-C0h]
	int v93; // [rsp+44h] [rbp-BCh]
	int v94; // [rsp+44h] [rbp-BCh]
	int v95; // [rsp+48h] [rbp-B8h] BYREF
	char v96; // [rsp+4Ch] [rbp-B4h]
	int v97; // [rsp+50h] [rbp-B0h]
	int v98; // [rsp+54h] [rbp-ACh]
	int v99; // [rsp+58h] [rbp-A8h]
	char v100; // [rsp+5Ch] [rbp-A4h]
	int v101; // [rsp+60h] [rbp-A0h]
	int v102; // [rsp+64h] [rbp-9Ch]
	LPVOID lpMem; // [rsp+68h] [rbp-98h]
	unsigned __int16** v104; // [rsp+70h] [rbp-90h]
	WCHAR* v105; // [rsp+78h] [rbp-88h]
	__int64 v106; // [rsp+80h] [rbp-80h]
	int* v107; // [rsp+88h] [rbp-78h]
	LPVOID v108; // [rsp+90h] [rbp-70h] BYREF
	int v109; // [rsp+98h] [rbp-68h] BYREF
	int v110; // [rsp+9Ch] [rbp-64h] BYREF
	int v111; // [rsp+A0h] [rbp-60h]
	unsigned __int64 v112; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v113; // [rsp+B0h] [rbp-50h]
	int v114; // [rsp+B8h] [rbp-48h]
	__int64 v115; // [rsp+C0h] [rbp-40h]
	__int64 v116[2]; // [rsp+C8h] [rbp-38h] BYREF
	__int64 v117; // [rsp+D8h] [rbp-28h]
	char v118; // [rsp+E0h] [rbp-20h]
	int v119[176]; // [rsp+F0h] [rbp-10h] BYREF

	v115 = a4;
	LOWORD(v4) = 0;
	v5 = a2;
	v105 = a2;
	v6 = a1;
	v104 = a1;
	v114 = 0;
	v92 = 0;
	v108 = v119;
	v112 = 350i64;
	v109 = 0;
	lpMem = 0i64;
	v97 = 0;
	if (!a2 || !a1)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		return 0xFFFFFFFFi64;
	}
	sub_1407DE348((__int64)v116, a3);
	v8 = *v5;
	v91 = 0;
	v9 = 0;
	v87 = 0;
	v95 = 0;
	v10 = 0;
	v90 = 0;
	if (!v8)
		goto LABEL_316;
LABEL_5:
	if ((unsigned int)sub_1407ED1C8(v8, 8))
	{
		v95 = v9 - 1;
		v11 = sub_1407EA97C(&v95, v6);
		if (v11 != 0xFFFF)
			sub_1407F38F8(v11, (__int64)v6);
		do
			++v5;
		while ((unsigned int)sub_1407ED1C8(*v5, 8));
		v9 = v95;
		v105 = v5;
		v87 = v95;
		goto LABEL_284;
	}
	v12 = v105;
	if (*v105 != 37)
		goto LABEL_280;
	if (v105[1] == 37)
	{
		if (*v105 == 37)
		{
			if (v105[1] == 37)
				v12 = v105 + 1;
			v105 = v12;
		}
	LABEL_280:
		v87 = ++v9;
		v95 = v9;
		v4 = (unsigned __int16)sub_1407F3700(v6);
		v84 = *v105;
		v5 = v105 + 1;
		v92 = v4;
		++v105;
		if (v84 == (_WORD)v4)
			goto LABEL_281;
		if ((_WORD)v4 == 0xFFFF)
			goto LABEL_289;
		v85 = v6;
		goto LABEL_288;
	}
	v13 = 0;
	v14 = 1;
	v101 = 0;
	v111 = 0;
	v102 = 0;
	v15 = 0;
	v99 = 0;
	v107 = 0i64;
	v100 = 0;
	v96 = 0;
	v16 = 0;
	v17 = 0;
	v110 = 0;
	v93 = 0;
	v18 = 0;
	v19 = 0;
	do
	{
		v20 = *++v12;
		v105 = v12;
		if ((v20 & 0xFF00) == 0)
		{
			v21 = sub_1407DE874((unsigned __int8)v20);
			v15 = v99;
			v13 = v93;
			v12 = v105;
			if (v21)
			{
				v15 = ++v99;
				v13 = v20 + 2 * (5 * v93 - 24);
				v93 = v13;
				continue;
			}
		}
		switch (v20)
		{
		case '*':
			++v16;
			break;
		case 'F':
			break;
		case 'I':
			v23 = v12[1];
			if (v23 == 54)
			{
				v24 = v12 + 2;
				if (v12[2] == 52)
				{
					v12 += 2;
					v105 = v24;
				LABEL_34:
					++v19;
					v106 = 0i64;
					break;
				}
			}
			if (v23 == 51)
			{
				v25 = v12 + 2;
				if (v12[2] == 50)
				{
					v12 += 2;
					v105 = v25;
					break;
				}
			}
			v26 = v23 - 88;
			if (v26 <= 0x20u)
			{
				v27 = 0x100821001i64;
				if (_bittest64(&v27, v26))
					goto LABEL_34;
			}
			++v19;
			v106 = 0i64;
			break;
		case 'L':
			++v14;
			break;
		case 'N':
			break;
		case 'h':
			--v14;
			--v18;
			break;
		case 'l':
			v22 = v12 + 1;
			if (v12[1] != 108)
			{
				++v14;
			LABEL_28:
				++v18;
				break;
			}
			++v12;
			v105 = v22;
			goto LABEL_34;
		case 'w':
			goto LABEL_28;
		default:
			++v17;
			break;
		}
	} while (!v17);
	v28 = v111;
	v88 = v16;
	v4 = v92;
	v29 = v88;
	v89 = v14;
	v30 = (unsigned __int64)v107;
	v98 = v19;
	LOBYTE(v19) = v110;
	if (v88)
	{
		v107 = 0i64;
	}
	else
	{
		v113 = v115;
		v115 += 8i64;
		v107 = *(int**)(v115 - 8);
	}
	v31 = 0;
	if (!v18)
		v18 = ((*v12 - 67) & 0xFFEF) != 0 ? 1 : -1;
	v32 = *v12 | 0x20;
	v111 = v32;
	if (v32 == 110)
	{
	LABEL_56:
		if (!v15 || v13)
		{
			if (v29 || ((v32 - 99) & 0xFFFFFFE7) != 0 || v32 == 107)
			{
				v34 = v113;
			}
			else
			{
				v33 = *(int**)v113;
				v30 = *(unsigned int*)(v113 + 8);
				v34 = v113 + 8;
				v113 = v34;
				v107 = v33;
				v115 = v34 + 8;
				if (!v30)
				{
					if (v18 <= 0)
						*(_BYTE*)v33 = 0;
					else
						*(_WORD*)v33 = 0;
					*(_DWORD*)sub_1407DE1B0() = 12;
					goto LABEL_292;
				}
			}
			if (v32 <= 111)
			{
				if (v32 != 111)
				{
					if (v32 != 99)
					{
						if (v32 != 100)
						{
							if (v32 > 100)
							{
								if (v32 > 103)
								{
									if (v32 != 105)
									{
										if (v32 == 110)
										{
											v9 = v87;
											v35 = v87;
											if (!v29)
											{
												v36 = v98;
											LABEL_75:
												if (v36)
												{
													*(_QWORD*)v107 = v106;
												}
												else if (v89)
												{
													*v107 = v35;
												}
												else
												{
													*(_WORD*)v107 = v35;
												}
											}
											goto LABEL_126;
										}
										goto LABEL_136;
									}
									v32 = 100;
								LABEL_78:
									if ((_WORD)v4 == 45)
									{
										v96 = 1;
									}
									else if ((_WORD)v4 != 43)
									{
										goto LABEL_167;
									}
									v93 = v13 - 1;
									if (v13 != 1 || !v15)
									{
										v65 = v104;
										v66 = v87 + 1;
										v87 = v66;
										v95 = v66;
										v4 = (unsigned __int16)sub_1407F3700(v104);
										v92 = v4;
										goto LABEL_168;
									}
									v31 = 1;
								LABEL_167:
									v65 = v104;
									v66 = v87;
								LABEL_168:
									if ((_WORD)v4 == 48)
									{
										v67 = v66 + 1;
										v87 = v67;
										v95 = v67;
										v68 = sub_1407F3700(v65);
										v4 = v68;
										v92 = v68;
										if (((v68 - 88) & 0xFFDF) != 0)
										{
											v69 = 1;
											if (v32 != 120)
											{
												v70 = v93;
												if (v99)
												{
													v70 = v93 - 1;
													if (v93 == 1)
														++v31;
												}
												v36 = v98;
												v32 = 111;
												goto LABEL_227;
											}
											v87 = v67 - 1;
											v95 = v67 - 1;
											if (v68 != 0xFFFF)
												sub_1407F38F8(v68, (__int64)v65);
											v36 = v98;
											v4 = 48;
											v92 = 48;
										}
										else
										{
											v87 = v67 + 1;
											v95 = v67 + 1;
											v4 = (unsigned __int16)sub_1407F3700(v65);
											v92 = v4;
											if (v99)
											{
												v93 -= 2;
												if (v93 < 1)
													++v31;
											}
											v36 = v98;
											v69 = v102;
											v32 = 120;
										}
										goto LABEL_226;
									}
									v36 = v98;
								LABEL_225:
									v69 = v102;
								LABEL_226:
									v70 = v93;
									goto LABEL_227;
								}
								v37 = 0i64;
								if ((_WORD)v4 == 45)
								{
									v37 = 1i64;
									*(_WORD*)v108 = 45;
								}
								else if ((_WORD)v4 != 43)
								{
									v40 = v87;
									v39 = v93;
									v38 = v104;
								LABEL_85:
									if (!v15)
										v39 = -1;
									for (; (v4 & 0xFF00) == 0; v92 = (unsigned __int16)v4)
									{
										if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
											break;
										if (!v39--)
											break;
										++v102;
										*((_WORD*)v108 + v37++) = (char)v4;
										if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
											goto LABEL_292;
										++v40;
										LOWORD(v4) = sub_1407F3700(v38);
									}
									v43 = **(unsigned __int16**)(*(_QWORD*)(v116[0] + 240) + 88i64);
									if (v43 == (char)v4)
									{
										if (v39--)
										{
											++v40;
											LOWORD(v4) = sub_1407F3700(v38);
											*((_WORD*)v108 + v37++) = v43;
											v92 = (unsigned __int16)v4;
											if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
												goto LABEL_292;
											while ((v4 & 0xFF00) == 0)
											{
												if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
													break;
												if (!v39--)
													break;
												++v102;
												*((_WORD*)v108 + v37++) = v4;
												if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
													goto LABEL_292;
												++v40;
												LOWORD(v4) = sub_1407F3700(v38);
												v92 = (unsigned __int16)v4;
											}
										}
									}
									v46 = v102;
									if (v102)
									{
										if ((((_WORD)v4 - 69) & 0xFFDF) == 0)
										{
											v47 = v39;
											v48 = v39 - 1;
											if (v47)
											{
												*((_WORD*)v108 + v37++) = 101;
												if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
													goto LABEL_292;
												++v40;
												LOWORD(v4) = sub_1407F3700(v38);
												v92 = (unsigned __int16)v4;
												if ((_WORD)v4 == 45)
												{
													*((_WORD*)v108 + v37++) = 45;
													if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
														goto LABEL_292;
												}
												else if ((_WORD)v4 != 43)
												{
													goto LABEL_117;
												}
												if (v48--)
												{
													++v40;
													goto LABEL_116;
												}
												v48 = 0;
											LABEL_117:
												while ((v4 & 0xFF00) == 0)
												{
													if (!(unsigned int)sub_1407DE874((unsigned __int8)v4))
														break;
													if (!v48--)
														break;
													++v46;
													*((_WORD*)v108 + v37++) = v4;
													if (!(unsigned int)sub_1407EBB9C(v37, &v112, (int**)&v108, v119, &v109))
														goto LABEL_292;
													++v40;
												LABEL_116:
													LOWORD(v4) = sub_1407F3700(v38);
													v92 = (unsigned __int16)v4;
												}
											}
										}
									}
									v9 = v40 - 1;
									v87 = v9;
									v95 = v9;
									if ((_WORD)v4 != 0xFFFF)
										sub_1407F38F8(v4, (__int64)v38);
									if (v46)
									{
										if (v88)
											goto LABEL_126;
										v51 = (const WCHAR*)v108;
										v52 = 0;
										v53 = v90 + 1;
										v54 = v112;
										*((_WORD*)v108 + v37) = 0;
										v55 = 2 * v54 + 2;
										++v90;
										v56 = (CHAR*)sub_1407E2C30(v55);
										if (v56)
										{
											v57 = sub_1407F3F18(0i64, v56, v55, v51, v55 - 1);
											if (v57 == 22 || v57 == 34)
											{
												sub_1407DC390();
												__debugbreak();
											}
											v58 = (void(__fastcall*)(_QWORD, int*, CHAR*, __int64*))DecodePointer(off_140C0FA58);
											v58((unsigned int)(v89 - 1), v107, v56, v116);
											sub_1407E14C0(v56);
											goto LABEL_126;
										}
										goto LABEL_303;
									}
									goto LABEL_289;
								}
								v38 = v104;
								v39 = v93 - 1;
								v40 = v87 + 1;
								v41 = sub_1407F3700(v104);
								v15 = v99;
								LOWORD(v4) = v41;
								v92 = v41;
								goto LABEL_85;
							}
						LABEL_136:
							if (*v12 == (_WORD)v4)
							{
								--v91;
								v9 = v87;
								if (!v29)
									v115 = v34;
								goto LABEL_126;
							}
							if ((_WORD)v4 != 0xFFFF)
								sub_1407F38F8(v4, (__int64)v104);
							v53 = v90;
							v52 = 1;
							goto LABEL_303;
						}
						goto LABEL_216;
					}
					if (!v15)
					{
						v99 = 1;
						v93 = v13 + 1;
					}
					if (v18 > 0)
						LOBYTE(v19) = 1;
				LABEL_185:
					v71 = v107;
					v9 = v87 - 1;
					v87 = v9;
					v95 = v9;
					if ((_WORD)v4 != 0xFFFF)
						sub_1407F38F8(v4, (__int64)v104);
					if (v32 != 99)
						--v30;
					v72 = v100;
					while (1)
					{
						if (v99)
						{
							if (!v93--)
								break;
						}
						v87 = ++v9;
						v95 = v9;
						LOWORD(v4) = sub_1407F3700(v104);
						v92 = (unsigned __int16)v4;
						if ((_WORD)v4 == 0xFFFF)
							goto LABEL_207;
						if (v32 != 99)
						{
							if (v32 != 115)
								goto LABEL_323;
							if ((unsigned __int16)(v4 - 9) <= 4u)
								goto LABEL_207;
							if ((_WORD)v4 == 32)
							{
							LABEL_323:
								if (v32 != 123
									|| (v74 = v72 ^ *((char*)lpMem + ((unsigned __int64)(unsigned __int16)v4 >> 3)),
										!_bittest(&v74, v4 & 7)))
								{
								LABEL_207:
									v87 = --v9;
									v95 = v9;
									if ((_WORD)v4 != 0xFFFF)
										sub_1407F38F8(v4, (__int64)v104);
									break;
								}
							}
						}
						if (v88)
						{
							v71 = (int*)((char*)v71 + 2);
						}
						else
						{
							if (!v30)
								goto LABEL_296;
							if ((_BYTE)v19)
							{
								v75 = v107;
								*(_WORD*)v107 = v4;
								--v30;
								v107 = (int*)((char*)v75 + 2);
							}
							else
							{
								v110 = 0;
								if ((unsigned int)sub_1407F2338(&v110, v107, v30, v4) == 34)
								{
								LABEL_296:
									v86 = sub_1407DE1B0();
									v77 = (_BYTE)v19 == 0;
									v53 = v90;
									*(_DWORD*)v86 = 12;
									v52 = 0;
									if (v77)
										*(_BYTE*)v71 = 0;
									else
										*(_WORD*)v71 = 0;
									goto LABEL_303;
								}
								if (v110 > 0)
								{
									v107 = (int*)((char*)v107 + v110);
									v30 -= v110;
								}
							}
						}
					}
					if (v71 != v107)
					{
						if (!v88)
						{
							++v90;
							if (v32 != 99)
							{
								if ((_BYTE)v19)
									*(_WORD*)v107 = 0;
								else
									*(_BYTE*)v107 = 0;
							}
						}
						goto LABEL_126;
					}
					goto LABEL_289;
				}
				goto LABEL_216;
			}
			switch (v32)
			{
			case 'p':
				v89 = 1;
				v36 = v98 + 1;
				v106 = 0i64;
				goto LABEL_217;
			case 's':
				if (v18 > 0)
					LOBYTE(v19) = 1;
				goto LABEL_185;
			case 'u':
			LABEL_216:
				v36 = v98;
			LABEL_217:
				if ((_WORD)v4 == 45)
				{
					v96 = 1;
				}
				else if ((_WORD)v4 != 43)
				{
					goto LABEL_225;
				}
				v94 = v13 - 1;
				if (v13 != 1 || !v15)
				{
					v9 = v87 + 1;
					v87 = v9;
					v95 = v9;
					v76 = sub_1407F3700(v104);
					v70 = v94;
					v69 = v102;
					v4 = v76;
					v92 = v76;
				LABEL_228:
					if (!v36)
					{
						v77 = v31 == 0;
						v81 = v101;
						if (v77)
						{
							while (1)
							{
								if (((v32 - 112) & 0xFFFFFFF7) != 0)
								{
									if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DE874((unsigned __int8)v4))
										goto LABEL_264;
									if (v32 == 111)
									{
										if ((unsigned __int16)v4 >= 0x38u)
											goto LABEL_264;
										v82 = 8 * v81;
									}
									else
									{
										v82 = 10 * v81;
									}
								}
								else
								{
									if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DEAE0((unsigned __int8)v4))
									{
									LABEL_264:
										v87 = --v9;
										v95 = v9;
										if ((_WORD)v4 != 0xFFFF)
											sub_1407F38F8(v4, (__int64)v104);
										v81 = v101;
										break;
									}
									v101 *= 16;
									v83 = sub_1407DE874((unsigned __int8)v4);
									v82 = v101;
									if (!v83)
									{
										LOWORD(v4) = (v4 & 0xFFDF) - 7;
										v92 = v4;
									}
								}
								v81 = (unsigned __int16)v4 + v82 - 48;
								++v69;
								v101 = v81;
								if (v99)
								{
									if (!--v70)
										break;
								}
								v87 = ++v9;
								v95 = v9;
								v4 = (unsigned __int16)sub_1407F3700(v104);
								v92 = v4;
							}
						}
						if (v96)
							v101 = -v81;
						goto LABEL_269;
					}
					v77 = v31 == 0;
					v78 = v106;
					if (!v77)
						goto LABEL_247;
					while (1)
					{
						if (((v32 - 112) & 0xFFFFFFF7) != 0)
						{
							if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DE874((unsigned __int8)v4))
								goto LABEL_244;
							if (v32 == 111)
							{
								if ((unsigned __int16)v4 >= 0x38u)
									goto LABEL_244;
								v79 = 8 * v78;
							}
							else
							{
								v79 = 10 * v78;
							}
						}
						else
						{
							if ((v4 & 0xFF00) != 0 || !(unsigned int)sub_1407DEAE0((unsigned __int8)v4))
							{
							LABEL_244:
								v87 = --v9;
								v95 = v9;
								if ((_WORD)v4 != 0xFFFF)
									sub_1407F38F8(v4, (__int64)v104);
								v78 = v106;
							LABEL_247:
								if (v96)
									v106 = -v78;
							LABEL_269:
								if (v69)
								{
									if (!v88)
									{
										++v90;
										v35 = v101;
										goto LABEL_75;
									}
								LABEL_126:
									v6 = v104;
									++v91;
									v5 = ++v105;
								LABEL_281:
									if ((_WORD)v4 != 0xFFFF || *v5 == 37 && v5[1] == 110)
									{
									LABEL_284:
										v8 = *v5;
										if (*v5)
											goto LABEL_5;
									}
								LABEL_289:
									v53 = v90;
									v52 = v97;
									goto LABEL_303;
								}
							LABEL_292:
								v53 = v90;
								v52 = v97;
								goto LABEL_303;
							}
							v106 *= 16i64;
							v80 = sub_1407DE874((unsigned __int8)v4);
							v79 = v106;
							if (!v80)
							{
								LOWORD(v4) = (v4 & 0xFFDF) - 7;
								v92 = v4;
							}
						}
						++v69;
						v78 = (unsigned __int16)v4 - 48 + v79;
						v106 = v78;
						if (v99)
						{
							if (!--v70)
								goto LABEL_247;
						}
						v87 = ++v9;
						v95 = v9;
						v4 = (unsigned __int16)sub_1407F3700(v104);
						v92 = v4;
					}
				}
				v69 = v102;
				v31 = 1;
				v70 = 0;
			LABEL_227:
				v9 = v87;
				goto LABEL_228;
			case 'x':
				goto LABEL_78;
			}
			if (v32 != 123)
				goto LABEL_136;
			v19 = (unsigned __int8)v19;
			if (v18 > 0)
				v19 = 1;
			v59 = v12 + 1;
			v110 = v19;
			v105 = v59;
			if (*v59 == 94)
			{
				v100 = -1;
				v105 = v59 + 1;
			}
			v60 = lpMem;
			if (!lpMem)
			{
				v60 = sub_1407E2C30(0x2000ui64);
				lpMem = v60;
				if (!v60)
					goto LABEL_301;
				v114 = 1;
			}
			sub_1407E4830((int*)v60, 0i64, 0x2000ui64);
			v61 = v105;
			if (*v105 == 93)
			{
				v28 = 93;
				v61 = v105 + 1;
				v60[11] = 32;
			}
			v62 = *v61;
			if (*v61 != 93)
			{
				do
				{
					++v61;
					if (v62 == 45 && v28 && (v63 = *v61, *v61 != 93))
					{
						++v61;
						if (v28 >= v63)
						{
							v64 = v28;
							v28 = v63;
						}
						else
						{
							v64 = v63;
						}
						while (v28 < (int)v64)
						{
							v60[(unsigned __int64)v28 >> 3] |= 1 << (v28 & 7);
							++v28;
						}
						v28 = 0;
						v60[(unsigned __int64)v64 >> 3] |= 1 << (v64 & 7);
					}
					else
					{
						v28 = v62;
						v60[(unsigned __int64)v62 >> 3] |= 1 << (v62 & 7);
					}
					v62 = *v61;
				} while (*v61 != 93);
				v32 = v111;
				LOBYTE(v19) = v110;
			}
			if (*v61)
			{
				v105 = v61;
				goto LABEL_185;
			}
		LABEL_301:
			v53 = v90;
			v52 = 0;
			goto LABEL_304;
		}
		if ((_WORD)v4 == 0xFFFF)
			goto LABEL_289;
		v85 = v104;
	LABEL_288:
		sub_1407F38F8(v4, (__int64)v85);
		goto LABEL_289;
	}
	if (v32 == 99 || v32 == 123)
	{
		v95 = ++v87;
		v4 = (unsigned __int16)sub_1407F3700(v104);
	}
	else
	{
		v4 = (unsigned __int16)sub_1407EA97C(&v95, v104);
		v87 = v95;
	}
	v92 = v4;
	if ((_WORD)v4 != 0xFFFF)
	{
		v13 = v93;
		v12 = v105;
		v15 = v99;
		v29 = v88;
		goto LABEL_56;
	}
	v53 = v90;
	v52 = v97;
LABEL_303:
	v60 = lpMem;
LABEL_304:
	if (v114 == 1)
		sub_1407E14C0(v60);
	if (v109 == 1)
		sub_1407E14C0(v108);
	if ((_WORD)v4 != 0xFFFF)
	{
		if (v52 == 1)
		{
			*(_DWORD*)sub_1407DE1B0() = 22;
			sub_1407DC370();
		LABEL_314:
			result = v53;
			goto LABEL_317;
		}
		v10 = v90;
	LABEL_316:
		result = v10;
		goto LABEL_317;
	}
	if (v53 || v91)
		goto LABEL_314;
	result = 0xFFFFFFFFi64;
LABEL_317:
	if (v118)
		*(_DWORD*)(v117 + 200) &= ~2u;
	return result;
}
// 1407ECCDB: conditional instruction was optimized away because esi.4 is in (==64|6F..70|==75|==78)
// 1407EBC38: using guessed type int var_300[176];

