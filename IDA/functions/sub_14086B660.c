#include "../winhttp.h"

//----- (000000014086B660) ----------------------------------------------------
__int64 __fastcall sub_14086B660(_BYTE* a1, __int64 a2, int a3)
{
	__int64 v3; // rsi
	__int64 result; // rax
	unsigned int* v5; // rax
	int v6; // r8d
	int v7; // edx
	unsigned int v8; // ebx
	char v9; // di
	unsigned int v10; // edi
	unsigned int v11; // ebx
	__int64 v12; // r14
	unsigned int* v13; // r10
	int v14; // r13d
	unsigned int v15; // esi
	__int64* v16; // rbx
	unsigned int* v17; // r10
	_DWORD* v18; // rbx
	__int64 v19; // rax
	_QWORD* v20; // rcx
	__int64 v21; // rax
	_QWORD* v22; // rcx
	__int64 v23; // rax
	unsigned int* v24; // rax
	unsigned int v25; // r12d
	__int64 v26; // rax
	unsigned int v27; // esi
	unsigned int v28; // r14d
	_DWORD* v29; // rcx
	_DWORD* i; // rax
	_DWORD* v31; // rdx
	unsigned __int64 v32; // rax
	unsigned __int64 v33; // r12
	int v34; // r15d
	__int64 v35; // rdi
	__int64 v36; // rcx
	__int64 v37; // rsi
	unsigned __int64 j; // rdx
	__int64 v39; // rax
	unsigned int* v40; // rcx
	__int64 v41; // rbx
	__int64 v42; // rax
	_QWORD* v43; // rcx
	unsigned int v44; // edx
	unsigned int* v45; // r10
	char v46; // di
	int v47; // r9d
	char v48; // cl
	char v49; // al
	int v50; // r8d
	unsigned int* v51; // r10
	int v52; // eax
	unsigned int v53; // [rsp+20h] [rbp-19h]
	int v54; // [rsp+24h] [rbp-15h]
	unsigned int v55; // [rsp+28h] [rbp-11h]
	__int64 v56; // [rsp+30h] [rbp-9h]
	__int64 v57; // [rsp+30h] [rbp-9h]
	int v58; // [rsp+38h] [rbp-1h]
	__int64 v59; // [rsp+40h] [rbp+7h] BYREF
	int v60; // [rsp+48h] [rbp+Fh]
	unsigned int* v62; // [rsp+A8h] [rbp+6Fh] BYREF
	int v63; // [rsp+B0h] [rbp+77h] BYREF
	unsigned int v64; // [rsp+B8h] [rbp+7Fh]

	v63 = a3;
	v62 = (unsigned int*)(a2 + 4);
	v3 = (__int64)a1;
	result = sub_1408546E0(a1, &v62, &v63, 0);
	if ((_DWORD)result == 1)
	{
		v5 = v62;
		v6 = *v62++;
		v7 = v5[1];
		v62 = v5 + 2;
		v8 = v5[2];
		v62 = v5 + 3;
		v9 = *((_BYTE*)v5 + 12);
		v62 = (unsigned int*)((char*)v5 + 13);
		result = 1i64;
		if (v7 != *(_DWORD*)(v3 + 252) || v6 != *(_DWORD*)(v3 + 248))
		{
			*(_DWORD*)(v3 + 252) = v7;
			*(_DWORD*)(v3 + 248) = v6;
			result = sub_14087BA30(v3 + 216, v7, v6);
		}
		if ((_DWORD)result == 1)
		{
			*(_BYTE*)(v3 + 91) &= ~0x80u;
			*(_DWORD*)(v3 + 256) = v8;
			*(_BYTE*)(v3 + 91) |= (v9 != 0) << 7;
			result = sub_140869CC0(v3, &v62);
			v10 = result;
			if ((_DWORD)result == 1)
			{
				v11 = *v62;
				v12 = v3 + 264;
				++v62;
				v55 = v11;
				v56 = v3 + 264;
				sub_14086B4D0(v3 + 264, v11);
				v13 = v62;
				v14 = 0;
				v54 = 0;
				if (v11)
				{
					while (1)
					{
						v15 = *v13;
						v16 = *(__int64**)v12;
						v17 = v13 + 1;
						v62 = v17;
						if (v16)
						{
							while (*((_DWORD*)v16 + 2) != v15)
							{
								v16 = (__int64*)*v16;
								if (!v16)
									goto LABEL_11;
							}
							v18 = v16 + 2;
							if (v18)
								goto LABEL_27;
						}
						else
						{
						LABEL_11:
							v18 = 0i64;
						}
						if (*(_QWORD*)(v12 + 16))
							goto LABEL_18;
						if (*(_DWORD*)(v12 + 32) >= *(_DWORD*)(v12 + 28))
							goto LABEL_26;
						v19 = sub_1408819F0(dword_140C10F20, 40i64);
						if (v19)
							break;
					LABEL_25:
						v17 = v62;
					LABEL_26:
						if (!v18)
							return 2i64;
					LABEL_27:
						v25 = *v17;
						v13 = v17 + 1;
						v64 = v25;
						v62 = v13;
						if (v25)
						{
							v26 = sub_1408819F0(dword_140C10F20, 4i64 * v25);
							*(_QWORD*)v18 = v26;
							*((_QWORD*)v18 + 1) = v26;
							if (v26)
								v18[4] = v25;
							v13 = v62;
						}
						v27 = 0;
						v53 = 0;
						if (v25)
						{
							while (1)
							{
								v28 = *v13++;
								v10 = 57;
								v62 = v13;
								v29 = (_DWORD*)*((_QWORD*)v18 + 1);
								for (i = *(_DWORD**)v18; i != v29; ++i)
								{
									if (*i == v28)
										break;
								}
								v31 = 0i64;
								if (i != v29)
									v31 = i;
								if (v31)
									goto LABEL_51;
								v32 = (unsigned int)v18[4];
								v33 = (unsigned int)(((__int64)v29 - *(_QWORD*)v18) >> 2);
								if (v33 >= v32)
								{
									v34 = v32 + 1;
									v35 = sub_1408819F0(dword_140C10F20, 4i64 * (unsigned int)(v32 + 1));
									if (!v35)
										break;
									v36 = (__int64)(*((_QWORD*)v18 + 1) - *(_QWORD*)v18) >> 2;
									v37 = (unsigned int)v36;
									if (*(_QWORD*)v18)
									{
										for (j = 0i64;
											j < (unsigned int)v36;
											*(_DWORD*)(v35 + 4 * j - 4) = *(_DWORD*)(*(_QWORD*)v18 + 4 * j - 4))
										{
											++j;
										}
										sub_140881720(dword_140C10F20, *(_QWORD*)v18);
									}
									v39 = v35 + 4 * v37;
									v27 = v53;
									*(_QWORD*)v18 = v35;
									*((_QWORD*)v18 + 1) = v39;
									v18[4] = v34;
									v13 = v62;
								}
								if (v33 >= (unsigned int)v18[4])
									goto LABEL_49;
								v40 = (unsigned int*)*((_QWORD*)v18 + 1);
								*((_QWORD*)v18 + 1) = v40 + 1;
								if (!v40)
									break;
								*v40 = v28;
								v13 = v62;
								v10 = 1;
							LABEL_50:
								v25 = v64;
							LABEL_51:
								if (v10 != 1)
									return v10;
								v53 = ++v27;
								if (v27 >= v25)
								{
									v12 = v56;
									goto LABEL_54;
								}
							}
							v13 = v62;
						LABEL_49:
							v10 = 2;
							goto LABEL_50;
						}
					LABEL_54:
						if (++v54 >= v55)
						{
							v3 = (__int64)a1;
							goto LABEL_56;
						}
					}
					if (v19 != -8)
					{
						*(_QWORD*)(v19 + 16) = 0i64;
						*(_QWORD*)(v19 + 24) = 0i64;
						*(_DWORD*)(v19 + 32) = 0;
					}
					*(_QWORD*)v19 = *(_QWORD*)(v12 + 16);
					*(_QWORD*)(v12 + 16) = v19;
				LABEL_18:
					v20 = *(_QWORD**)(v12 + 8);
					v21 = *(_QWORD*)(v12 + 16);
					if (v20)
						*v20 = v21;
					else
						*(_QWORD*)v12 = v21;
					v22 = *(_QWORD**)(v12 + 16);
					*(_QWORD*)(v12 + 8) = v22;
					*(_QWORD*)(v12 + 16) = *v22;
					*v22 = 0i64;
					v23 = *(_QWORD*)(v12 + 8);
					++* (_DWORD*)(v12 + 32);
					v24 = (unsigned int*)(v23 + 8);
					if (v24)
					{
						*v24 = v15;
						v18 = v24 + 2;
					}
					goto LABEL_25;
				}
			LABEL_56:
				v41 = *v13;
				v62 = v13 + 1;
				if ((_DWORD)v41)
				{
					v42 = sub_1408819F0(dword_140C10F20, 24 * v41);
					v43 = (_QWORD*)v42;
					*(_QWORD*)(v3 + 352) = v42;
					if (v42)
					{
						*(_DWORD*)(v3 + 336) = v41;
						*(_QWORD*)(v3 + 328) = v42;
						v44 = 0;
						do
						{
							++v44;
							*v43 = v43 + 3;
							v43 += 3;
						} while (v44 < *(_DWORD*)(v3 + 336));
						*(v43 - 3) = 0i64;
					}
					v45 = v62;
					v46 = v58;
					while (1)
					{
						v47 = *v45;
						v62 = v45 + 1;
						v48 = *((_BYTE*)v45 + 4);
						v62 = (unsigned int*)((char*)v45 + 5);
						v49 = *((_BYTE*)v45 + 5);
						v62 = (unsigned int*)((char*)v45 + 6);
						v50 = *(unsigned int*)((char*)v45 + 6);
						v62 = (unsigned int*)((char*)v45 + 10);
						v51 = (unsigned int*)((char*)v45 + 14);
						v46 = v46 & 0xE0 | v50 & 7 | (8 * ((v48 != 0) | (2 * (v49 != 0))));
						v52 = *(v51 - 1);
						v62 = v51;
						LODWORD(v57) = v52;
						HIDWORD(v57) = *v51;
						LOBYTE(v58) = v46;
						v59 = v57;
						v62 = v51 + 1;
						v60 = v58;
						result = 2 - (unsigned int)(sub_14086B570((__int64**)(v3 + 312), v47, &v59) != 0i64);
						if ((_DWORD)result != 1)
							break;
						if (++v14 >= (unsigned int)v41)
							break;
						v45 = v62;
					}
				}
				else
				{
					return v10;
				}
			}
		}
	}
	return result;
}
// 14086BA12: conditional instruction was optimized away because ebx.4!=0
// 14086BA32: conditional instruction was optimized away because ebx.4!=0
// 14086BA38: variable 'v58' is possibly undefined
// 140C10F20: using guessed type int dword_140C10F20;

