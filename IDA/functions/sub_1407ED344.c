#include "../winhttp.h"

//----- (00000001407ED344) ----------------------------------------------------
__int64 __fastcall sub_1407ED344(__int64 a1, unsigned __int16* a2, _OWORD* a3, __int64 a4)
{
	int* v5; // r12
	int v6; // r14d
	int v7; // edi
	unsigned __int16* v9; // r8
	unsigned __int16 v10; // r15
	int v11; // edx
	int v12; // r13d
	int v13; // r9d
	unsigned __int16* v14; // rbx
	int v15; // ecx
	int v16; // edi
	__int16* v17; // rax
	int v18; // eax
	unsigned __int8* v19; // rsi
	WCHAR v20; // ax
	int v21; // esi
	int v22; // r13d
	int v23; // eax
	unsigned __int16* i; // rax
	int v25; // r9d
	int v26; // edx
	__int16* v27; // rdi
	__int64 v28; // r8
	__int64 v29; // r12
	char v30; // r12
	char* v31; // rbx
	int v32; // ecx
	unsigned __int64 v33; // rdx
	char v34; // al
	int v35; // eax
	int v36; // edi
	void* v37; // rax
	const CHAR* v38; // rax
	PVOID v39; // rax
	void(__fastcall * v40)(unsigned __int16*, __int128*); // rax
	void(__fastcall * v41)(unsigned __int16*, __int128*); // rax
	__int64 v42; // rsi
	int v43; // r15d
	const CHAR* v44; // rdi
	int v45; // esi
	int v46; // eax
	__int64 v47; // r12
	unsigned __int64 v48; // rax
	__int64 v49; // rcx
	int v50; // eax
	int v51; // eax
	int v52; // [rsp+40h] [rbp-C0h] BYREF
	int v53; // [rsp+44h] [rbp-BCh]
	int v54; // [rsp+48h] [rbp-B8h]
	int* v55; // [rsp+50h] [rbp-B0h]
	int v56; // [rsp+58h] [rbp-A8h]
	int v57; // [rsp+5Ch] [rbp-A4h]
	unsigned __int16 v58[2]; // [rsp+60h] [rbp-A0h] BYREF
	WCHAR v59; // [rsp+64h] [rbp-9Ch] BYREF
	CHAR MultiByteStr[4]; // [rsp+68h] [rbp-98h] BYREF
	int v61; // [rsp+6Ch] [rbp-94h]
	int v62; // [rsp+70h] [rbp-90h]
	int v63; // [rsp+74h] [rbp-8Ch]
	__int64 v64; // [rsp+78h] [rbp-88h]
	unsigned __int16* v65; // [rsp+80h] [rbp-80h]
	int v66; // [rsp+88h] [rbp-78h]
	__int128 v67; // [rsp+90h] [rbp-70h] BYREF
	__int64 v68; // [rsp+A0h] [rbp-60h]
	char v69; // [rsp+A8h] [rbp-58h]
	LPVOID lpMem; // [rsp+B0h] [rbp-50h]
	int* v71; // [rsp+B8h] [rbp-48h]
	LPCCH lpMultiByteStr[2]; // [rsp+C0h] [rbp-40h] BYREF
	WCHAR WideCharStr[24]; // [rsp+D0h] [rbp-30h] BYREF
	__int64 v74; // [rsp+100h] [rbp+0h] BYREF
	char v75; // [rsp+2CFh] [rbp+1CFh] BYREF

	v64 = a1;
	v65 = a2;
	v5 = (int*)a4;
	v55 = (int*)a4;
	v63 = 0;
	v6 = 0;
	v57 = 0;
	v7 = 0;
	v53 = 0;
	v54 = 0;
	v62 = 0;
	v56 = 0;
	sub_1407DE348((__int64)&v67, a3);
	v71 = (int*)sub_1407DE1B0();
	if (!a1 || (v9 = v65) == 0i64)
	{
		*(_DWORD*)sub_1407DE1B0() = 22;
		sub_1407DC370();
		if (v69)
			*(_DWORD*)(v68 + 200) &= ~2u;
		return 0xFFFFFFFFi64;
	}
	v10 = *v65;
	v11 = 0;
	v12 = 0;
	v13 = 0;
	lpMem = 0i64;
	v52 = 0;
	if (!v10)
	{
	LABEL_177:
		if (v69)
			*(_DWORD*)(v68 + 200) &= ~2u;
		return (unsigned int)v11;
	}
	v14 = (unsigned __int16*)lpMultiByteStr[0];
	do
	{
		v65 = ++v9;
		if (v11 < 0)
			break;
		if ((unsigned __int16)(v10 - 32) > 0x58u)
			v15 = 0;
		else
			v15 = byte_140963980[v10 - 32] & 0xF;
		v13 = byte_140963980[9 * v15 + v13] >> 4;
		v61 = v13;
		switch (v13)
		{
		case 8:
			goto LABEL_219;
		case 0:
			goto LABEL_197;
		case 1:
			v66 = 0;
			v62 = 0;
			v57 = 0;
			v54 = 0;
			v6 = 0;
			v7 = -1;
			v53 = -1;
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
				v51 = v10 + 10 * v57 - 48;
				goto LABEL_207;
			}
			v50 = *v5;
			v5 += 2;
			v55 = v5;
			v57 = v50;
			if (v50 < 0)
			{
				v6 |= 4u;
				v51 = -v50;
			LABEL_207:
				v57 = v51;
			}
			break;
		case 4:
			v7 = 0;
			v53 = 0;
			break;
		case 5:
			if (v10 == 42)
			{
				v7 = *v5;
				v5 += 2;
				v55 = v5;
				v53 = v7;
				if (v7 < 0)
				{
					v7 = -1;
					v53 = -1;
				}
			}
			else
			{
				v7 = v10 + 2 * (5 * v7 - 24);
				v53 = v7;
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
			v48 = *v9;
			v6 |= 0x8000u;
			if (*(_DWORD*)v9 == 3407926)
			{
				v9 += 2;
				v6 |= 0x8000u;
				break;
			}
			if ((_WORD)v48 == 51 && v9[1] == 50)
			{
				v9 += 2;
				v6 &= ~0x8000u;
				break;
			}
			LOWORD(v48) = v48 - 88;
			if ((unsigned __int16)v48 <= 0x20u)
			{
				v49 = 0x120821001i64;
				if (_bittest64(&v49, v48))
					break;
			}
			v61 = 0;
		LABEL_197:
			v56 = 1;
			sub_1407E9518(v10, v64, &v52);
			v11 = v52;
		LABEL_173:
			v9 = v65;
			v13 = v61;
			break;
		case 7:
			if (v10 > 0x64u)
			{
				if (v10 < 0x65u)
					goto LABEL_31;
				if (v10 <= 0x67u)
					goto LABEL_63;
				switch (v10)
				{
				case 'i':
					goto LABEL_94;
				case 'n':
					v27 = *(__int16**)v5;
					v5 += 2;
					v55 = v5;
					if (!sub_1407F117C())
						goto LABEL_219;
					if ((v6 & 0x20) != 0)
						*v27 = v52;
					else
						*(_DWORD*)v27 = v52;
					v11 = v52;
					v62 = 1;
					goto LABEL_170;
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
					goto LABEL_44;
				}
				if (v10 != 117)
				{
					if (v10 != 120)
						goto LABEL_31;
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
						v66 = 1;
						v10 += 32;
						goto LABEL_63;
					}
					if (v10 != 83)
					{
						if (v10 != 88)
						{
							if (v10 == 90)
							{
								v17 = *(__int16**)v5;
								v5 += 2;
								v55 = v5;
								if (v17 && (v14 = (unsigned __int16*)*((_QWORD*)v17 + 1)) != 0i64)
								{
									if ((v6 & 0x800) != 0)
									{
										v18 = *v17;
										v56 = 1;
										v12 = v18 / 2;
									}
									else
									{
										v12 = *v17;
										v56 = 0;
									}
								}
								else
								{
									v14 = (unsigned __int16*)off_140C10480;
									v12 = sub_1407E1990((__int64)off_140C10480);
								}
								goto LABEL_31;
							}
							if (v10 != 97)
							{
								if (v10 != 99)
									goto LABEL_31;
							LABEL_57:
								v20 = *(_WORD*)v5;
								v5 += 2;
								v56 = 1;
								v55 = v5;
								v59 = v20;
								if ((v6 & 0x20) != 0)
								{
									MultiByteStr[0] = v20;
									MultiByteStr[1] = 0;
									if ((int)sub_1407F1418(WideCharStr, MultiByteStr, *(int*)(v67 + 212), &v67) < 0)
										v62 = 1;
								}
								else
								{
									WideCharStr[0] = v20;
								}
								v14 = WideCharStr;
								v12 = 1;
							LABEL_31:
								if (!v62)
								{
									if ((v6 & 0x40) != 0)
									{
										if ((v6 & 0x100) != 0)
										{
											v58[0] = 45;
											goto LABEL_35;
										}
										if ((v6 & 1) != 0)
										{
											v58[0] = 43;
										LABEL_35:
											v16 = 1;
											v54 = 1;
										LABEL_152:
											v42 = v64;
											v43 = v57 - v12 - v16;
											if ((v6 & 0xC) == 0)
												sub_1407E9550(0x20u, v43, v64, &v52);
											sub_1407E95A4(v58, v16, v42, &v52, v71);
											if ((v6 & 8) != 0 && (v6 & 4) == 0)
												sub_1407E9550(0x30u, v43, v42, &v52);
											if (v56 || v12 <= 0)
											{
												sub_1407E95A4(v14, v12, v42, &v52, v71);
											LABEL_165:
												v11 = v52;
											}
											else
											{
												v44 = (const CHAR*)v14;
												v45 = v12;
												while (1)
												{
													--v45;
													v46 = sub_1407F1418(&v59, v44, *(int*)(v67 + 212), &v67);
													v47 = v46;
													if (v46 <= 0)
														break;
													sub_1407E9518(v59, v64, &v52);
													v44 += v47;
													if (v45 <= 0)
													{
														v5 = v55;
														v42 = v64;
														goto LABEL_165;
													}
												}
												v5 = v55;
												v42 = v64;
												v11 = -1;
												v52 = -1;
											}
											if (v11 >= 0 && (v6 & 4) != 0)
											{
												sub_1407E9550(0x20u, v43, v42, &v52);
												goto LABEL_169;
											}
										LABEL_170:
											if (lpMem)
											{
												sub_1407E14C0(lpMem);
												v11 = v52;
												lpMem = 0i64;
											}
											v7 = v53;
											goto LABEL_173;
										}
										if ((v6 & 2) != 0)
										{
											v58[0] = 32;
											v16 = 1;
											v54 = 1;
											goto LABEL_152;
										}
									}
									v16 = v54;
									goto LABEL_152;
								}
							LABEL_169:
								v11 = v52;
								goto LABEL_170;
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
								v53 = v7;
								if (v7 <= 163)
								{
									v22 = v7;
								}
								else
								{
									v36 = v7 + 349;
									v37 = sub_1407E2C30(v36);
									lpMem = v37;
									if (v37)
									{
										v14 = (unsigned __int16*)v37;
										v21 = v36;
										goto LABEL_136;
									}
								LABEL_65:
									v53 = v22;
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
								v22 = v53;
							}
							v38 = *(const CHAR**)v5;
							v5 += 2;
							v55 = v5;
							lpMultiByteStr[0] = v38;
							v39 = DecodePointer(off_140C0FA50);
							((void(__fastcall*)(LPCCH*, unsigned __int16*, _QWORD, _QWORD, int, int, __int128*))v39)(
								lpMultiByteStr,
								v14,
								v21,
								(unsigned int)(char)v10,
								v22,
								v66,
								&v67);
							if ((v6 & 0x80) != 0 && !v22)
							{
								v40 = (void(__fastcall*)(unsigned __int16*, __int128*))DecodePointer(off_140C0FA68);
								v40(v14, &v67);
							}
							if (v10 == 103 && (v6 & 0x80) == 0)
							{
								v41 = (void(__fastcall*)(unsigned __int16*, __int128*))DecodePointer(off_140C0FA60);
								v41(v14, &v67);
							}
							if (*(_BYTE*)v14 == 45)
							{
								v6 |= 0x100u;
								v14 = (unsigned __int16*)((char*)v14 + 1);
							}
							v12 = sub_1407E1990((__int64)v14);
							goto LABEL_31;
						}
					LABEL_84:
						v23 = 7;
					LABEL_85:
						v25 = 16;
						v63 = v23;
						if ((v6 & 0x80u) != 0)
						{
							v58[0] = 48;
							v26 = 2;
							v58[1] = v23 + 81;
						LABEL_97:
							if ((v6 & 0x8000) != 0 || (v6 & 0x1000) != 0)
							{
								v28 = *(_QWORD*)v5;
								v29 = (__int64)(v5 + 2);
							}
							else
							{
								v29 = (__int64)(v5 + 2);
								if ((v6 & 0x20) != 0)
								{
									v55 = (int*)v29;
									if ((v6 & 0x40) != 0)
										v28 = *(__int16*)(v29 - 8);
									else
										v28 = *(unsigned __int16*)(v29 - 8);
									goto LABEL_108;
								}
								if ((v6 & 0x40) != 0)
									v28 = *(int*)(v29 - 8);
								else
									v28 = *(unsigned int*)(v29 - 8);
							}
							v55 = (int*)v29;
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
							v30 = v63;
							v31 = &v75;
							v54 = v28 != 0 ? v26 : 0;
							while (1)
							{
								v32 = v7--;
								if (v32 <= 0 && !v28)
									break;
								v33 = v28 % (unsigned __int64)v25;
								v28 /= (unsigned __int64)v25;
								v34 = v33 + 48;
								if ((int)v33 + 48 > 57)
									v34 += v30;
								*v31-- = v34;
							}
							v5 = v55;
							v53 = v7;
							v35 = (unsigned int)&v74 + 463 - (_DWORD)v31;
							v14 = (unsigned __int16*)(v31 + 1);
							v12 = v35;
							if ((v6 & 0x200) != 0 && (!v35 || *(_BYTE*)v14 != 48))
							{
								v14 = (unsigned __int16*)((char*)v14 - 1);
								v12 = v35 + 1;
								*(_BYTE*)v14 = 48;
							}
							goto LABEL_31;
						}
					LABEL_96:
						v26 = v54;
						goto LABEL_97;
					}
					if ((v6 & 0x830) == 0)
						v6 |= 0x20u;
				LABEL_44:
					v14 = *(unsigned __int16**)v5;
					if (v53 == -1)
						v7 = 0x7FFFFFFF;
					v5 += 2;
					v55 = v5;
					if ((v6 & 0x20) != 0)
					{
						v12 = 0;
						if (!v14)
							v14 = (unsigned __int16*)off_140C10480;
						v19 = (unsigned __int8*)v14;
						if (v7 > 0)
						{
							do
							{
								if (!*v19)
									break;
								if ((unsigned int)sub_1407DFE88(*v19, &v67))
									++v19;
								++v12;
								++v19;
							} while (v12 < v7);
						}
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
					goto LABEL_31;
				}
			LABEL_94:
				v6 |= 0x40u;
			}
			v25 = 10;
			goto LABEL_96;
		}
		v10 = *v9;
	} while (*v9);
	if (!v13 || v13 == 7)
		goto LABEL_177;
LABEL_219:
	*(_DWORD*)sub_1407DE1B0() = 22;
	sub_1407DC370();
	if (v69)
		*(_DWORD*)(v68 + 200) &= ~2u;
	return 0xFFFFFFFFi64;
}
// 140963980: using guessed type unsigned __int8 byte_140963980[96];
// 140C10480: using guessed type char *off_140C10480;
// 140C10488: using guessed type wchar_t *off_140C10488;
// 1407ED344: using guessed type LPCCH lpMultiByteStr[2];

