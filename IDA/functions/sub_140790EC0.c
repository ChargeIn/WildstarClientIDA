#include "../winhttp.h"

//----- (0000000140790EC0) ----------------------------------------------------
__int64 __fastcall sub_140790EC0(_QWORD* a1)
{
	_DWORD* v2; // r14
	__int64 v3; // rdx
	_DWORD* v4; // rax
	int v5; // edi
	__int64 v6; // rbx
	__int64 v7; // r12
	__int64 v8; // rcx
	__int64 v9; // rax
	__int64 v10; // rcx
	_DWORD* v11; // rax
	char* v12; // r15
	__int64 v13; // rcx
	__int64 v14; // rax
	unsigned __int64 v15; // rbp
	__int64 v16; // rcx
	unsigned __int64* v17; // rax
	int v18; // ecx
	int v19; // eax
	unsigned __int8* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rbp
	int v24; // ecx
	__int64 v25; // rax
	__int64 v26; // rdx
	__int64 v27; // rcx
	__int64 v28; // rdx
	__int64 v29; // rdx
	__int64 v30; // rcx
	__int64 v31; // rax
	int v32; // esi
	_QWORD* v33; // r14
	unsigned __int64 v34; // [rsp+20h] [rbp-268h] BYREF
	int v35; // [rsp+28h] [rbp-260h]
	__int64 v36; // [rsp+30h] [rbp-258h] BYREF
	unsigned __int64 v37; // [rsp+38h] [rbp-250h]
	_QWORD* v38; // [rsp+40h] [rbp-248h]
	int v39; // [rsp+48h] [rbp-240h]

	v2 = dword_140A12138;
	v3 = *(_QWORD*)(a1[5] + 8i64);
	if (*(_BYTE*)(*(_QWORD*)v3 + 11i64))
		v4 = (_DWORD*)(*(_QWORD*)v3 + 40i64);
	else
		v4 = dword_140A12138;
	v5 = 0;
	if (v4[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v4))
		{
			v6 = 0i64;
			v7 = 0i64;
			goto LABEL_13;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v8 = *(_QWORD*)(a1[5] + 8i64);
		if (*(_BYTE*)(*(_QWORD*)v8 + 11i64))
			v4 = (_DWORD*)(*(_QWORD*)v8 + 40i64);
		else
			v4 = dword_140A12138;
	}
	v9 = *(_QWORD*)v4;
	v6 = *(_QWORD*)(v9 + 16);
	v7 = v9 + 32;
LABEL_13:
	v10 = *(_QWORD*)(a1[5] + 8i64);
	if (*(_BYTE*)(*(_QWORD*)v10 + 11i64) < 2u)
		v11 = dword_140A12138;
	else
		v11 = (_DWORD*)(*(_QWORD*)v10 + 56i64);
	if (v11[2] != 4)
	{
		if (!(unsigned int)sub_14005E620((__int64)a1, (__int64)v11))
		{
			v12 = 0i64;
			goto LABEL_25;
		}
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v13 = *(_QWORD*)(a1[5] + 8i64);
		if (*(_BYTE*)(*(_QWORD*)v13 + 11i64) < 2u)
			v11 = dword_140A12138;
		else
			v11 = (_DWORD*)(*(_QWORD*)v13 + 56i64);
	}
	v12 = (char*)(*(_QWORD*)v11 + 32i64);
LABEL_25:
	v14 = a1[5];
	v15 = v6 + v7;
	v38 = a1;
	v16 = *(_QWORD*)(v14 + 8);
	v36 = v7;
	v37 = v6 + v7;
	if (*(_BYTE*)(*(_QWORD*)v16 + 11i64) < 3u)
		v17 = (unsigned __int64*)dword_140A12138;
	else
		v17 = (unsigned __int64*)(*(_QWORD*)v16 + 72i64);
	v18 = *((_DWORD*)v17 + 2);
	if (v18 == 3)
		goto LABEL_32;
	if (v18 == 4 && sub_14005AC80((char*)(*v17 + 32), &v34))
	{
		v35 = 3;
		v17 = &v34;
	LABEL_32:
		v19 = (int)*(double*)v17;
		goto LABEL_33;
	}
	v19 = 0;
LABEL_33:
	v20 = (unsigned __int8*)(v7 + v19);
	if ((unsigned __int64)v20 > v15)
		return 0i64;
	while (1)
	{
		v39 = 0;
		v21 = sub_1407905D0((__int64)&v36, v20, v12);
		v22 = v21;
		if (v21)
			break;
		if ((unsigned __int64)++v20 > v37)
			return 0i64;
	}
	v24 = v21 - v7;
	if ((unsigned __int8*)v21 == v20)
		++v24;
	v25 = a1[2];
	*(_DWORD*)(v25 + 8) = 3;
	*(double*)v25 = (double)v24;
	a1[2] += 16i64;
	v26 = a1[2];
	v27 = *(_QWORD*)(a1[5] + 8i64);
	if (*(_BYTE*)(*(_QWORD*)v27 + 11i64) >= 3u)
		v2 = (_DWORD*)(*(_QWORD*)v27 + 72i64);
	*(_QWORD*)v2 = *(_QWORD*)(v26 - 16);
	v2[2] = *(_DWORD*)(v26 - 8);
	v28 = a1[2];
	if (*(int*)(v28 - 8) >= 4)
	{
		v29 = *(_QWORD*)(v28 - 16);
		if ((*(_BYTE*)(v29 + 9) & 3) != 0)
		{
			v30 = *(_QWORD*)(a1[5] + 8i64);
			if ((*(_BYTE*)(*(_QWORD*)v30 + 9i64) & 4) != 0)
			{
				v31 = a1[4];
				if (*(_BYTE*)(v31 + 33) == 1)
					sub_14005C960(a1[4], v29);
				else
					*(_BYTE*)(*(_QWORD*)v30 + 9i64) = *(_BYTE*)(*(_QWORD*)v30 + 9i64) & 0xF8 | *(_BYTE*)(v31 + 32) & 3;
			}
		}
	}
	a1[2] -= 16i64;
	v32 = v39;
	if (!v39 && v20)
		v32 = 1;
	v33 = v38;
	if (!(unsigned int)sub_140058190((__int64)v38, v32))
		sub_140056830(v33, (unsigned __int64*)"stack overflow (%s)", aTooManyCapture_0);
	if (v32 > 0)
	{
		do
			sub_140790910((__int64)&v36, v5++, (unsigned __int64*)v20, v22);
		while (v5 < v32);
	}
	return (unsigned int)v32;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];

