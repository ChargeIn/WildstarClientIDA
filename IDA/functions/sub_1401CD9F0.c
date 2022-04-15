#include "../winhttp.h"

//----- (00000001401CD9F0) ----------------------------------------------------
__int64 __fastcall sub_1401CD9F0(__int64* a1, int a2)
{
	__int64 v2; // r12
	int v3; // r13d
	__int64 v4; // rsi
	__int64 v5; // r8
	int v6; // ecx
	__int64 v7; // r9
	__int64 v8; // rdi
	unsigned int v9; // r14d
	unsigned int v10; // ebx
	unsigned int v11; // r11d
	_BYTE* v12; // r8
	unsigned __int8* v13; // rsi
	unsigned __int8* v14; // r13
	_BYTE* v15; // r15
	int v16; // edx
	int v17; // eax
	unsigned int v18; // r10d
	char v19; // dl
	unsigned int v20; // r10d
	unsigned int v21; // edx
	int v22; // eax
	int v23; // eax
	int v24; // eax
	unsigned int v25; // edi
	char v26; // dl
	unsigned int v27; // edx
	unsigned int v28; // edi
	int v29; // eax
	int v30; // eax
	int v31; // eax
	int v32; // eax
	unsigned int v33; // edi
	int v34; // eax
	unsigned int v35; // ecx
	__int64 v36; // r9
	_BYTE* v37; // r9
	char v38; // al
	__int64 v39; // rax
	unsigned int v40; // ecx
	__int64 v41; // r9
	char v42; // al
	unsigned int v43; // ecx
	char v44; // al
	char v45; // al
	__int64 v46; // rcx
	char v47; // al
	_BYTE* v48; // rcx
	char v49; // al
	bool v50; // zf
	__int64* v51; // rdx
	char* v52; // rax
	__int64 v53; // rax
	unsigned __int8* v54; // rsi
	int v55; // r11d
	__int64 v56; // r15
	__int64 result; // rax
	__int64 v58; // [rsp+0h] [rbp-78h]
	__int64 v59; // [rsp+8h] [rbp-70h]
	int v60; // [rsp+10h] [rbp-68h]
	__int64 v61; // [rsp+18h] [rbp-60h]
	int i; // [rsp+20h] [rbp-58h]
	int v64; // [rsp+88h] [rbp+10h]
	int v65; // [rsp+90h] [rbp+18h]
	unsigned int v66; // [rsp+98h] [rbp+20h]

	v2 = a1[5];
	v3 = *((_DWORD*)a1 + 2);
	v4 = *a1;
	v5 = a1[2];
	v6 = *((_DWORD*)a1 + 6);
	v7 = *(_QWORD*)(v2 + 88);
	v8 = *(_QWORD*)(v2 + 96);
	v9 = *(_DWORD*)(v2 + 52);
	v10 = *(_DWORD*)(v2 + 64);
	v11 = *(_DWORD*)(v2 + 68);
	v12 = (_BYTE*)(v5 - 1);
	v13 = (unsigned __int8*)(v4 - 1);
	v64 = *(_DWORD*)(v2 + 44);
	v60 = (_DWORD)v12 - (a2 - v6);
	v66 = *(_DWORD*)(v2 + 48);
	v61 = *(_QWORD*)(v2 + 56);
	v14 = &v13[v3 - 5];
	v15 = &v12[v6 - 257];
	v59 = v7;
	v58 = v8;
	v65 = (1 << *(_DWORD*)(v2 + 108)) - 1;
	v16 = (1 << *(_DWORD*)(v2 + 104)) - 1;
	for (i = v16; ; v16 = i)
	{
		if (v11 < 0xF)
		{
			v17 = v13[1];
			v13 += 2;
			v10 += (*v13 << (v11 + 8)) + (v17 << v11);
			v11 += 16;
		}
		v18 = *(_DWORD*)(v7 + 4i64 * (v16 & v10));
		v19 = v18;
		v10 >>= SBYTE1(v18);
		v11 -= BYTE1(v18);
		if ((_BYTE)v18)
			break;
	LABEL_8:
		*++v12 = BYTE2(v18);
	LABEL_55:
		if (v13 >= v14 || v12 >= v15)
		{
			v51 = a1;
			goto LABEL_65;
		}
	}
	while (1)
	{
		if ((v19 & 0x10) != 0)
		{
			v20 = HIWORD(v18);
			v21 = v19 & 0xF;
			if (v21)
			{
				if (v11 < v21)
				{
					v22 = *++v13;
					v10 += v22 << v11;
					v11 += 8;
				}
				v23 = v10 & ((1 << v21) - 1);
				v10 >>= v21;
				v20 += v23;
				v11 -= v21;
			}
			if (v11 < 0xF)
			{
				v24 = v13[1];
				v13 += 2;
				v10 += (*v13 << (v11 + 8)) + (v24 << v11);
				v11 += 16;
			}
			v25 = *(_DWORD*)(v8 + 4i64 * (v10 & v65));
			v26 = v25;
			v10 >>= SBYTE1(v25);
			v11 -= BYTE1(v25);
			if ((v25 & 0x10) == 0)
			{
				while ((v26 & 0x40) == 0)
				{
					v25 = *(_DWORD*)(v58 + 4i64 * (HIWORD(v25) + (v10 & ((1 << v26) - 1))));
					v26 = v25;
					v10 >>= SBYTE1(v25);
					v11 -= BYTE1(v25);
					if ((v25 & 0x10) != 0)
						goto LABEL_18;
				}
				v52 = aInvalidDistanc_2;
				goto LABEL_62;
			}
		LABEL_18:
			v27 = v26 & 0xF;
			v28 = HIWORD(v25);
			if (v11 < v27)
			{
				v29 = *++v13;
				v30 = v29 << v11;
				v11 += 8;
				v10 += v30;
				if (v11 < v27)
				{
					v31 = *++v13;
					v10 += v31 << v11;
					v11 += 8;
				}
			}
			v11 -= v27;
			v32 = v10 & ((1 << v27) - 1);
			v10 >>= v27;
			v33 = v32 + v28;
			v34 = (_DWORD)v12 - v60;
			if (v33 <= (int)v12 - v60)
			{
				v48 = &v12[-v33];
				do
				{
					v49 = v48[1];
					v12 += 3;
					v48 += 3;
					*(v12 - 2) = v49;
					v20 -= 3;
					*(v12 - 1) = *(v48 - 1);
					*v12 = *v48;
				} while (v20 > 2);
				if (!v20)
					goto LABEL_54;
				v8 = v58;
				*++v12 = v48[1];
				if (v20 > 1)
					*++v12 = v48[2];
				goto LABEL_55;
			}
			v35 = v33 - v34;
			if (v33 - v34 > v66 && *(_DWORD*)(v2 + 7128))
			{
				v52 = aInvalidDistanc_3;
			LABEL_62:
				v51 = a1;
				a1[4] = (__int64)v52;
				*(_DWORD*)v2 = 29;
				goto LABEL_65;
			}
			v36 = v61 - 1;
			if (v9)
			{
				v39 = v9 - v35;
				if (v9 < v35)
				{
					v40 = v35 - v9;
					v37 = (_BYTE*)((unsigned int)(v64 + v39) + v36);
					if (v40 >= v20)
						goto LABEL_41;
					v20 -= v40;
					v41 = v37 - v12;
					do
					{
						v42 = (v12++)[v41 + 1];
						*v12 = v42;
						--v40;
					} while (v40);
					v37 = (_BYTE*)(v61 - 1);
					if (v9 >= v20)
						goto LABEL_41;
					v43 = v9;
					v20 -= v9;
					do
					{
						v44 = v37[1];
						++v12;
						++v37;
						*v12 = v44;
						--v43;
					} while (v43);
					goto LABEL_40;
				}
				v37 = (_BYTE*)(v39 + v36);
				if (v35 < v20)
				{
					v20 -= v35;
					do
					{
						v45 = v37[1];
						++v12;
						++v37;
						*v12 = v45;
						--v35;
					} while (v35);
					goto LABEL_40;
				}
			}
			else
			{
				v37 = (_BYTE*)(v64 - v35 + v36);
				if (v35 < v20)
				{
					v20 -= v35;
					do
					{
						v38 = v37[1];
						++v12;
						++v37;
						*v12 = v38;
						--v35;
					} while (v35);
				LABEL_40:
					v37 = &v12[-v33];
				}
			}
		LABEL_41:
			if (v20 > 2)
			{
				v46 = (v20 - 3) / 3 + 1;
				do
				{
					v47 = v37[1];
					v37 += 3;
					v12 += 3;
					*(v12 - 2) = v47;
					v20 -= 3;
					*(v12 - 1) = *(v37 - 1);
					*v12 = *v37;
					--v46;
				} while (v46);
			}
			if (!v20)
			{
				v7 = v59;
			LABEL_54:
				v8 = v58;
				goto LABEL_55;
			}
			v8 = v58;
			*++v12 = v37[1];
			if (v20 > 1)
				*++v12 = v37[2];
			v7 = v59;
			goto LABEL_55;
		}
		if ((v19 & 0x40) != 0)
			break;
		v18 = *(_DWORD*)(v7 + 4i64 * (HIWORD(v18) + (v10 & ((1 << v19) - 1))));
		v19 = v18;
		v10 >>= SBYTE1(v18);
		v11 -= BYTE1(v18);
		if (!(_BYTE)v18)
			goto LABEL_8;
	}
	v50 = (v19 & 0x20) == 0;
	v51 = a1;
	if (v50)
	{
		a1[4] = (__int64)aInvalidLiteral_1;
		*(_DWORD*)v2 = 29;
	}
	else
	{
		*(_DWORD*)v2 = 11;
	}
LABEL_65:
	v53 = v11 >> 3;
	v54 = &v13[-v53];
	v55 = v11 - 8 * v53;
	*v51 = (__int64)(v54 + 1);
	v51[2] = (__int64)(v12 + 1);
	*((_DWORD*)v51 + 2) = (_DWORD)v14 - (_DWORD)v54 + 5;
	v56 = v15 - v12;
	result = v56 + 257;
	*((_DWORD*)v51 + 6) = v56 + 257;
	*(_DWORD*)(v2 + 64) = ((1 << v55) - 1) & v10;
	*(_DWORD*)(v2 + 68) = v55;
	return result;
}

