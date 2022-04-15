#include "../winhttp.h"

//----- (00000001407E8A78) ----------------------------------------------------
__int64 __fastcall sub_1407E8A78(__int64 a1, unsigned __int16* a2, _OWORD* a3, __int64 a4)
{
	int* v5; // r12
	int v6; // r14d
	int v7; // edi
	unsigned __int16* v9; // r8
	unsigned __int16 v10; // r15
	int v11; // esi
	int v12; // r13d
	int v13; // edx
	unsigned __int16* v14; // rbx
	int v15; // ecx
	__int16* v16; // rax
	int v17; // eax
	unsigned __int8* v18; // rsi
	int v19; // edi
	WCHAR v20; // ax
	int v21; // esi
	int v22; // r13d
	int v23; // eax
	unsigned __int16* i; // rax
	int v25; // r9d
	int v26; // edx
	__int16* v27; // rdi
	__int64 v28; // r8
	char v29; // si
	char* v30; // rbx
	int v31; // ecx
	unsigned __int64 v32; // rdx
	char v33; // al
	int v34; // eax
	int v35; // edi
	void* v36; // rax
	__int64 v37; // rax
	PVOID v38; // rax
	void(__fastcall * v39)(unsigned __int16*, __int128*); // rax
	void(__fastcall * v40)(unsigned __int16*, __int128*); // rax
	int v41; // eax
	__int64 v42; // rsi
	int v43; // r15d
	__int64 v44; // rdi
	const CHAR* v45; // rdi
	int v46; // esi
	int v47; // eax
	__int64 v48; // r12
	unsigned __int64 v49; // rax
	__int64 v50; // rcx
	int v51; // eax
	int v52; // eax
	int v53; // [rsp+40h] [rbp-C0h] BYREF
	int v54; // [rsp+44h] [rbp-BCh]
	int v55; // [rsp+48h] [rbp-B8h]
	int v56; // [rsp+4Ch] [rbp-B4h]
	int* v57; // [rsp+50h] [rbp-B0h]
	int v58; // [rsp+58h] [rbp-A8h]
	unsigned __int16 v59[2]; // [rsp+5Ch] [rbp-A4h] BYREF
	WCHAR v60[2]; // [rsp+60h] [rbp-A0h] BYREF
	CHAR MultiByteStr[4]; // [rsp+64h] [rbp-9Ch] BYREF
	int v62; // [rsp+68h] [rbp-98h]
	int v63; // [rsp+6Ch] [rbp-94h]
	__int64 v64; // [rsp+70h] [rbp-90h]
	int v65; // [rsp+78h] [rbp-88h]
	unsigned __int16* v66; // [rsp+80h] [rbp-80h]
	int v67; // [rsp+88h] [rbp-78h]
	__int128 v68; // [rsp+90h] [rbp-70h] BYREF
	__int64 v69; // [rsp+A0h] [rbp-60h]
	char v70; // [rsp+A8h] [rbp-58h]
	LPVOID lpMem; // [rsp+B0h] [rbp-50h]
	int* v72; // [rsp+B8h] [rbp-48h]
	unsigned __int16* v73; // [rsp+C0h] [rbp-40h] BYREF
	WCHAR WideCharStr[24]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v75; // [rsp+100h] [rbp+0h] BYREF
	char v76; // [rsp+2CFh] [rbp+1CFh] BYREF

	v64 = a1;
	v66 = a2;
	v5 = (int*)a4;
	v57 = (int*)a4;
	v65 = 0;
	v6 = 0;
	v58 = 0;
	v7 = 0;
	v54 = 0;
	v55 = 0;
	v63 = 0;
	v56 = 0;
	sub_1407DE348((__int64)&v68, a3);
	v72 = (int*)sub_1407DE1B0();
	if (a1 && (v9 = v66) != 0i64)
	{
		v10 = *v66;
		v11 = 0;
		v53 = 0;
		v12 = 0;
		v13 = 0;
		lpMem = 0i64;
		if (v10)
		{
			v14 = v73;
			do
			{
				v66 = ++v9;
				if (v11 < 0)
					break;
				if ((unsigned __int16)(v10 - 32) > 0x58u)
					v15 = 0;
				else
					v15 = byte_140963420[v10 - 32] & 0xF;
				v13 = byte_140963420[8 * v15 + v13] >> 4;
				v62 = v13;
				switch (v13)
				{
				case 0:
					goto LABEL_194;
				case 1:
					v7 = -1;
					v67 = 0;
					v63 = 0;
					v58 = 0;
					v55 = 0;
					v6 = 0;
					v54 = -1;
					v56 = 0;
					break;
				case 2:
					switch (v10)
					{
					case ' ':
						v6 |= 2u;
						break;
					case '#':
						v6 |= 0x80u;
						break;
					case '+':
						v6 |= 1u;
						break;
					case '-':
						v6 |= 4u;
						break;
					case '0':
						v6 |= 8u;
						break;
					}
					break;
				case 3:
					if (v10 != 42)
					{
						v52 = v10 + 10 * v58 - 48;
						goto LABEL_205;
					}
					v51 = *v5;
					v5 += 2;
					v57 = v5;
					v58 = v51;
					if (v51 < 0)
					{
						v6 |= 4u;
						v52 = -v51;
					LABEL_205:
						v58 = v52;
					}
					break;
				case 4:
					v7 = 0;
					v54 = 0;
					break;
				case 5:
					if (v10 != 42)
					{
						v7 = v10 + 2 * (5 * v7 - 24);
						goto LABEL_199;
					}
					v7 = *v5;
					v5 += 2;
					v57 = v5;
					v54 = v7;
					if (v7 < 0)
					{
						v7 = -1;
					LABEL_199:
						v54 = v7;
					}
					break;
				case 6:
					if (v10 != 73)
					{
						switch (v10)
						{
						case 'h':
							v6 |= 0x20u;
							break;
						case 'l':
							if (*v9 == 108)
							{
								++v9;
								v6 |= 0x1000u;
							}
							else
							{
								v6 |= 0x10u;
							}
							break;
						case 'w':
							v6 |= 0x800u;
							break;
						}
						break;
					}
					v49 = *v9;
					v6 |= 0x8000u;
					if (*(_DWORD*)v9 == 3407926)
					{
						v9 += 2;
						v6 |= 0x8000u;
						break;
					}
					if ((_WORD)v49 == 51 && v9[1] == 50)
					{
						v9 += 2;
						v6 &= ~0x8000u;
						break;
					}
					LOWORD(v49) = v49 - 88;
					if ((unsigned __int16)v49 <= 0x20u)
					{
						v50 = 0x120821001i64;
						if (_bittest64(&v50, v49))
							break;
					}
					v62 = 0;
				LABEL_194:
					v56 = 1;
					sub_1407E9518(v10, v64, &v53);
					v11 = v53;
					goto LABEL_172;
				case 7:
					if (v10 > 0x64u)
					{
						if (v10 < 0x65u)
							goto LABEL_50;
						if (v10 <= 0x67u)
							goto LABEL_63;
						switch (v10)
						{
						case 'i':
							goto LABEL_94;
						case 'n':
							v27 = *(__int16**)v5;
							v5 += 2;
							v57 = v5;
							if (!sub_1407F117C())
								goto LABEL_2;
							if ((v6 & 0x20) != 0)
								*v27 = v11;
							else
								*(_DWORD*)v27 = v11;
							v63 = 1;
							goto LABEL_169;
						case 'o':
							v25 = 8;
							if ((v6 & 0x80u) != 0)
								v6 |= 0x200u;
							goto LABEL_96;
						case 'p':
							v7 = 16;
							v6 |= 0x8000u;
							goto LABEL_84;
						case 's':
							goto LABEL_39;
						}
						if (v10 != 117)
						{
							if (v10 != 120)
								goto LABEL_50;
							v23 = 39;
							goto LABEL_85;
						}
					}
					else
					{
						if (v10 != 100)
						{
							if (v10 == 65)
								goto LABEL_62;
							if (v10 == 67)
							{
								if ((v6 & 0x830) == 0)
									v6 |= 0x20u;
								goto LABEL_57;
							}
							if (((v10 - 69) & 0xFFFFFFFD) == 0)
							{
							LABEL_62:
								v67 = 1;
								v10 += 32;
								goto LABEL_63;
							}
							if (v10 != 83)
							{
								if (v10 != 88)
								{
									if (v10 == 90)
									{
										v16 = *(__int16**)v5;
										v5 += 2;
										v57 = v5;
										if (v16 && (v14 = (unsigned __int16*)*((_QWORD*)v16 + 1)) != 0i64)
										{
											if ((v6 & 0x800) != 0)
											{
												v17 = *v16;
												v56 = 1;
												v12 = v17 / 2;
											}
											else
											{
												v12 = *v16;
												v56 = 0;
											}
										}
										else
										{
											v14 = (unsigned __int16*)off_140C10480;
											v12 = sub_1407E1990((__int64)off_140C10480);
										}
										goto LABEL_50;
									}
									if (v10 != 97)
									{
										if (v10 != 99)
											goto LABEL_50;
									LABEL_57:
										v20 = *(_WORD*)v5;
										v5 += 2;
										v56 = 1;
										v57 = v5;
										v60[0] = v20;
										if ((v6 & 0x20) != 0)
										{
											MultiByteStr[0] = v20;
											MultiByteStr[1] = 0;
											if ((int)sub_1407F1418(WideCharStr, MultiByteStr, *(int*)(v68 + 212), &v68) < 0)
												v63 = 1;
										}
										else
										{
											WideCharStr[0] = v20;
										}
										v14 = WideCharStr;
										v12 = 1;
									LABEL_50:
										if (v63)
											goto LABEL_169;
										if ((v6 & 0x40) != 0)
										{
											if ((v6 & 0x100) != 0)
											{
												v59[0] = 45;
												goto LABEL_54;
											}
											if ((v6 & 1) != 0)
											{
												v59[0] = 43;
											LABEL_54:
												v19 = 1;
												v55 = 1;
											LABEL_152:
												v42 = v64;
												v43 = v58 - v12 - v19;
												if ((v6 & 0xC) == 0)
													sub_1407E9550(0x20u, v43, v64, &v53);
												sub_1407E95A4(v59, v19, v42, &v53, v72);
												v44 = v64;
												if ((v6 & 8) != 0 && (v6 & 4) == 0)
													sub_1407E9550(0x30u, v43, v64, &v53);
												if (v56 || v12 <= 0)
												{
													sub_1407E95A4(v14, v12, v44, &v53, v72);
												LABEL_165:
													v11 = v53;
												}
												else
												{
													v45 = (const CHAR*)v14;
													v46 = v12;
													while (1)
													{
														--v46;
														v47 = sub_1407F1418(v60, v45, *(int*)(v68 + 212), &v68);
														v48 = v47;
														if (v47 <= 0)
															break;
														sub_1407E9518(v60[0], v64, &v53);
														v45 += v48;
														if (v46 <= 0)
														{
															v5 = v57;
															v44 = v64;
															goto LABEL_165;
														}
													}
													v5 = v57;
													v44 = v64;
													v11 = -1;
													v53 = -1;
												}
												if (v11 >= 0 && (v6 & 4) != 0)
												{
													sub_1407E9550(0x20u, v43, v44, &v53);
													v11 = v53;
												}
											LABEL_169:
												if (lpMem)
												{
													sub_1407E14C0(lpMem);
													lpMem = 0i64;
												}
												v7 = v54;
											LABEL_172:
												v9 = v66;
												v13 = v62;
												break;
											}
											if ((v6 & 2) != 0)
											{
												v59[0] = 32;
												v19 = 1;
												v55 = 1;
												goto LABEL_152;
											}
										}
										v19 = v55;
										goto LABEL_152;
									}
								LABEL_63:
									v6 |= 0x40u;
									v14 = WideCharStr;
									v21 = 512;
									if (v7 < 0)
									{
										v22 = 6;
										goto LABEL_65;
									}
									if (v7)
									{
										v22 = 163;
										if (v7 > 512)
											v7 = 512;
										v54 = v7;
										if (v7 <= 163)
										{
											v22 = v7;
										}
										else
										{
											v35 = v7 + 349;
											v36 = sub_1407E2C30(v35);
											lpMem = v36;
											if (v36)
											{
												v14 = (unsigned __int16*)v36;
												v21 = v35;
												goto LABEL_136;
											}
										LABEL_65:
											v54 = v22;
										}
									}
									else
									{
										if (v10 == 103)
										{
											v22 = 1;
											goto LABEL_65;
										}
									LABEL_136:
										v22 = v54;
									}
									v37 = *(_QWORD*)v5;
									v5 += 2;
									v57 = v5;
									v73 = (unsigned __int16*)v37;
									v38 = DecodePointer(off_140C0FA50);
									((void(__fastcall*)(unsigned __int16**, unsigned __int16*, _QWORD, _QWORD, int, int, __int128*))v38)(
										&v73,
										v14,
										v21,
										(unsigned int)(char)v10,
										v22,
										v67,
										&v68);
									if ((v6 & 0x80) != 0 && !v22)
									{
										v39 = (void(__fastcall*)(unsigned __int16*, __int128*))DecodePointer(off_140C0FA68);
										v39(v14, &v68);
									}
									if (v10 == 103 && (v6 & 0x80) == 0)
									{
										v40 = (void(__fastcall*)(unsigned __int16*, __int128*))DecodePointer(off_140C0FA60);
										v40(v14, &v68);
									}
									if (*(_BYTE*)v14 == 45)
									{
										v6 |= 0x100u;
										v14 = (unsigned __int16*)((char*)v14 + 1);
									}
									v41 = sub_1407E1990((__int64)v14);
									v11 = v53;
									v12 = v41;
									goto LABEL_50;
								}
							LABEL_84:
								v23 = 7;
							LABEL_85:
								v65 = v23;
								v25 = 16;
								if ((v6 & 0x80u) != 0)
								{
									v26 = 2;
									v59[0] = 48;
									v59[1] = v23 + 81;
								LABEL_97:
									if ((v6 & 0x8000) != 0 || (v6 & 0x1000) != 0)
									{
										v28 = *(_QWORD*)v5;
										v5 += 2;
									}
									else
									{
										v5 += 2;
										if ((v6 & 0x20) != 0)
										{
											v57 = v5;
											if ((v6 & 0x40) != 0)
												v28 = *((__int16*)v5 - 4);
											else
												v28 = *((unsigned __int16*)v5 - 4);
											goto LABEL_108;
										}
										if ((v6 & 0x40) != 0)
											v28 = *(v5 - 2);
										else
											v28 = (unsigned int)*(v5 - 2);
									}
									v57 = v5;
								LABEL_108:
									if ((v6 & 0x40) != 0 && v28 < 0)
									{
										v28 = -v28;
										v6 |= 0x100u;
									}
									if ((v6 & 0x8000) == 0 && (v6 & 0x1000) == 0)
										v28 = (unsigned int)v28;
									if (v7 >= 0)
									{
										v6 &= ~8u;
										if (v7 > 512)
											v7 = 512;
									}
									else
									{
										v7 = 1;
									}
									v29 = v65;
									v30 = &v76;
									v55 = v28 != 0 ? v26 : 0;
									while (1)
									{
										v31 = v7--;
										if (v31 <= 0 && !v28)
											break;
										v32 = v28 % (unsigned __int64)v25;
										v28 /= (unsigned __int64)v25;
										v33 = v32 + 48;
										if ((int)v32 + 48 > 57)
											v33 += v29;
										*v30-- = v33;
									}
									v11 = v53;
									v54 = v7;
									v34 = (unsigned int)&v75 + 463 - (_DWORD)v30;
									v14 = (unsigned __int16*)(v30 + 1);
									v12 = v34;
									if ((v6 & 0x200) != 0 && (!v34 || *(_BYTE*)v14 != 48))
									{
										v14 = (unsigned __int16*)((char*)v14 - 1);
										v12 = v34 + 1;
										*(_BYTE*)v14 = 48;
									}
									goto LABEL_50;
								}
							LABEL_96:
								v26 = v55;
								goto LABEL_97;
							}
							if ((v6 & 0x830) == 0)
								v6 |= 0x20u;
						LABEL_39:
							v14 = *(unsigned __int16**)v5;
							if (v54 == -1)
								v7 = 0x7FFFFFFF;
							v5 += 2;
							v57 = v5;
							if ((v6 & 0x20) != 0)
							{
								v12 = 0;
								if (!v14)
									v14 = (unsigned __int16*)off_140C10480;
								v18 = (unsigned __int8*)v14;
								if (v7 > 0)
								{
									do
									{
										if (!*v18)
											break;
										if ((unsigned int)sub_1407DFE88(*v18, &v68))
											++v18;
										++v12;
										++v18;
									} while (v12 < v7);
								}
								v11 = v53;
							}
							else
							{
								v56 = 1;
								if (!v14)
									v14 = off_140C10488;
								for (i = v14; v7; ++i)
								{
									--v7;
									if (!*i)
										break;
								}
								v12 = i - v14;
							}
							goto LABEL_50;
						}
					LABEL_94:
						v6 |= 0x40u;
					}
					v25 = 10;
					goto LABEL_96;
				}
				v10 = *v9;
			} while (*v9);
		}
		if (v70)
			*(_DWORD*)(v69 + 200) &= ~2u;
		return (unsigned int)v11;
	}
	else
	{
	LABEL_2:
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		if (v70)
			*(_DWORD*)(v69 + 200) &= ~2u;
		return 0xFFFFFFFFi64;
	}
}
// 140C10480: using guessed type char *off_140C10480;
// 140C10488: using guessed type wchar_t *off_140C10488;
// 1407E8A78: using guessed type WCHAR var_4B0[2];

