#include "../winhttp.h"

//----- (000000014090D540) ----------------------------------------------------
__int64 __fastcall sub_14090D540(
	unsigned int a1,
	char** a2,
	_WORD** a3,
	int* a4,
	int a5,
	int a6,
	int a7,
	int a8,
	int* a9,
	int* a10,
	int* a11,
	int* a12,
	__int64 a13,
	__int64 a14,
	_QWORD* a15)
{
	char* v15; // rsi
	int v16; // edx
	__int64 v17; // r14
	int v18; // r15d
	int v19; // r13d
	int v20; // r12d
	int v21; // r8d
	__int64 v22; // rax
	bool v23; // zf
	unsigned int v24; // edi
	int v25; // eax
	char* v26; // rbx
	__int64* v27; // rcx
	_WORD* v28; // rbx
	_QWORD* v29; // r8
	char* v30; // rbx
	int v31; // ecx
	unsigned int v32; // edx
	int v33; // eax
	_WORD* v34; // rdi
	char* v35; // rax
	__int64 v36; // rax
	int v37; // ecx
	__int64 v39; // rdx
	int v40; // ecx
	int* v41; // rsi
	char* v42; // rax
	char* v43; // rbx
	bool v44; // cc
	_WORD* v45; // rcx
	char* v46; // rax
	__int64 v47; // rax
	_QWORD* v48; // rax
	__int64 v49; // rdx
	_QWORD* v50; // rcx
	int* v51; // rax
	int v52; // [rsp+60h] [rbp-81h]
	__int64 v53; // [rsp+68h] [rbp-79h] BYREF
	char* v54; // [rsp+70h] [rbp-71h] BYREF
	_WORD* v55; // [rsp+78h] [rbp-69h] BYREF
	int v56; // [rsp+80h] [rbp-61h] BYREF
	unsigned int v57; // [rsp+84h] [rbp-5Dh]
	int v58; // [rsp+88h] [rbp-59h] BYREF
	int v59; // [rsp+8Ch] [rbp-55h]
	int v60; // [rsp+90h] [rbp-51h]
	_WORD* v61; // [rsp+98h] [rbp-49h]
	_WORD* v62; // [rsp+A0h] [rbp-41h]
	__int64* v63; // [rsp+A8h] [rbp-39h]
	__int64 v64; // [rsp+B0h] [rbp-31h] BYREF
	__int16 v65; // [rsp+B8h] [rbp-29h]
	__int16 v66; // [rsp+BAh] [rbp-27h]
	int* v67; // [rsp+C0h] [rbp-21h]
	__int64 v68; // [rsp+C8h] [rbp-19h] BYREF
	char* v69; // [rsp+D0h] [rbp-11h]
	unsigned int v70; // [rsp+130h] [rbp+4Fh] BYREF
	char** v71; // [rsp+138h] [rbp+57h]
	_QWORD* v72; // [rsp+140h] [rbp+5Fh]
	int* v73; // [rsp+148h] [rbp+67h]

	v73 = a4;
	v72 = a3;
	v71 = a2;
	v70 = a1;
	v15 = *a2;
	v16 = a7;
	v17 = a14;
	v55 = *a3;
	v18 = -2;
	v69 = v15;
	v68 = a13;
	v67 = (int*)v15;
	v61 = 0i64;
	v59 = 0;
	v53 = a7 + 4;
	v19 = 0;
	v52 = 0;
	v20 = -2;
	if (*(_WORD*)v15 == 127)
	{
		v21 = *((unsigned __int16*)v15 + 2);
		v22 = *(_QWORD*)(a14 + 64);
		v66 = 0;
		v64 = v22;
		v59 = v21;
		*(_QWORD*)(a14 + 64) = &v64;
		v65 = v21;
	}
	v23 = a15 == 0i64;
	*((_WORD*)v15 + 1) = 0;
	v24 = *(_DWORD*)(v17 + 100);
	v62 = v15 + 2;
	v25 = v24;
	v26 = &v15[2 * v16 + 4];
	v27 = &v53;
	v60 = v24;
	if (v23)
		v27 = 0i64;
	v63 = v27;
	while (1)
	{
		v54 = v26;
		if (a6)
			*(_DWORD*)(v17 + 100) = v25;
		if (a5)
		{
			*(_WORD*)v26 = 118;
			v28 = v26 + 2;
			*v28 = 0;
			v61 = v28;
			v53 += 2i64;
			v54 = (char*)(v28 + 1);
		}
		if (!(unsigned int)sub_140909730(
			(unsigned int)&v70,
			(unsigned int)&v54,
			(unsigned int)&v55,
			(_DWORD)a4,
			(__int64)&v58,
			(__int64)&v56,
			(__int64)&a14,
			(__int64)&a13,
			(__int64)&v68,
			a8,
			v17,
			(__int64)v27))
			goto LABEL_48;
		v29 = a15;
		v30 = v54;
		if (*(_DWORD*)(v17 + 100) > v24)
			v24 = *(_DWORD*)(v17 + 100);
		v57 = v24;
		if (a15)
			goto LABEL_38;
		if (*(_WORD*)v15 != 113)
		{
			v20 = v56;
			v19 = a14;
			v18 = a13;
			v52 = v58;
			goto LABEL_30;
		}
		if (v20 >= 0)
		{
			if (v20 == v56 && v52 == v58)
				goto LABEL_25;
			if (v18 < 0)
			{
				v19 = v52;
				v18 = v20;
			}
			v20 = -1;
		}
		if (v56 >= 0)
		{
			v31 = a13;
			if ((int)a13 < 0)
			{
				LODWORD(a14) = v58;
				v31 = v56;
				LODWORD(a13) = v56;
			}
			goto LABEL_26;
		}
	LABEL_25:
		v31 = a13;
	LABEL_26:
		if (((v18 ^ v31) & 0xFFFFFFFD) != 0 || v19 != (_DWORD)a14)
		{
			v18 = -1;
		}
		else
		{
			v19 = a14;
			v18 |= v31;
		}
	LABEL_30:
		if (a5)
		{
			v32 = (v70 >> 11) & 1;
			*(_WORD*)v54 = 0;
			v33 = sub_14090E350((__int64)v15, v32, 0, v17);
			if (v33 == -3)
			{
				*(_DWORD*)(v17 + 144) = 1;
			}
			else
			{
				if (v33 < 0)
				{
					if (v33 == -2)
					{
						v37 = 36;
					}
					else
					{
						v37 = 25;
						if (v33 == -4)
							v37 = 70;
					}
					*v73 = v37;
				LABEL_48:
					*v72 = v55;
					return 0i64;
				}
				if (v33 > *(_DWORD*)(v17 + 108))
					*(_DWORD*)(v17 + 108) = v33;
				*v61 = v33;
			}
			v29 = a15;
		}
	LABEL_38:
		v34 = v55;
		if (*v55 != 124)
			break;
		if (v29)
		{
			v35 = *v71;
			v53 += 2i64;
			v26 = &v35[2 * a7 + 4];
		}
		else
		{
			v36 = v30 - v15;
			*(_WORD*)v30 = 113;
			v15 = v30;
			*((_WORD*)v30 + 1) = v36 >> 1;
			v69 = v30;
			v26 = v30 + 4;
		}
		LODWORD(a4) = (_DWORD)v73;
		v25 = v60;
		v27 = v63;
		v55 = v34 + 1;
		v24 = v57;
	}
	if (!v29)
	{
		v39 = (v30 - v15) >> 1;
		do
		{
			v40 = *((unsigned __int16*)v15 + 1);
			*((_WORD*)v15 + 1) = v39;
			LOWORD(v39) = v40;
			v15 -= 2 * (unsigned int)v40;
		} while (v40 > 0);
	}
	v41 = v67;
	*(_WORD*)v30 = 114;
	v42 = v30;
	v43 = v30 + 4;
	v44 = v59 <= 0;
	*((_WORD*)v43 - 1) = (v42 - (char*)v41) >> 1;
	if (v44)
	{
		v49 = v53;
	}
	else if (*(_WORD*)(*(_QWORD*)(v17 + 64) + 10i64))
	{
		sub_1407DB590(v41 + 1, v41, (v43 - (char*)v41) & 0xFFFFFFFFFFFFFFFEui64);
		v45 = v62;
		v29 = a15;
		*(_WORD*)v41 = 123;
		v46 = v43 + 4;
		v43 += 8;
		v47 = (v46 - (char*)v41) >> 1;
		*v45 = v47;
		*((_WORD*)v43 - 2) = 114;
		*((_WORD*)v43 - 1) = v47;
		v48 = *(_QWORD**)(v17 + 64);
		v49 = v53 + 4;
		v53 += 4i64;
		*(_QWORD*)(v17 + 64) = *v48;
	}
	else
	{
		v49 = v53;
		*(_QWORD*)(v17 + 64) = **(_QWORD**)(v17 + 64);
	}
	v50 = v72;
	*(_DWORD*)(v17 + 100) = v57;
	*v71 = v43;
	v51 = a9;
	*v50 = v34;
	*v51 = v52;
	*a10 = v20;
	*a11 = v19;
	*a12 = v18;
	if (v29)
	{
		if (2147483627i64 - *v29 < v49)
		{
			*v73 = 20;
			return 0i64;
		}
		*v29 += v49;
	}
	return 1i64;
}
// 140909730: using guessed type __int64 __fastcall sub_140909730(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64, __int64, __int64, __int64, _DWORD, __int64, __int64);

