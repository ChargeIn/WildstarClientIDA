#include "../winhttp.h"

//----- (0000000140517EB0) ----------------------------------------------------
__int64 __fastcall sub_140517EB0(__int64 a1, _QWORD* a2)
{
	char* v4; // rax
	__int64 v5; // rcx
	char* v6; // rax
	__int64 v7; // rcx
	char* v8; // rax
	__int64 v9; // rcx
	char* v10; // rax
	__int64 v11; // rcx
	_DWORD* v12; // r14
	unsigned __int64 v13; // rcx
	_DWORD* v14; // rax
	unsigned __int64 v15; // r8
	__int64* v16; // rdx
	__int64 v17; // rax
	int v18; // ecx
	__int64* v19; // rax
	double v20; // xmm0_8
	__int64 v21; // rcx
	int v22; // esi
	__int64* v23; // rcx
	int v24; // eax
	int v25; // eax
	_DWORD* v26; // rax
	int v27; // ecx
	_QWORD* v28; // rax
	int v29; // eax
	_QWORD* v30; // rax
	__int64 v32; // [rsp+20h] [rbp-40h] BYREF
	__int64 v33; // [rsp+28h] [rbp-38h]
	__int64 v34; // [rsp+30h] [rbp-30h]
	__int64 v35; // [rsp+38h] [rbp-28h]
	__int64 v36; // [rsp+80h] [rbp+20h] BYREF
	__int64 v37; // [rsp+90h] [rbp+30h] BYREF
	unsigned __int64 v38; // [rsp+98h] [rbp+38h] BYREF

	v4 = (char*)sub_140056BB0(a2, 3u, 0i64);
	sub_14018F2D0(&v32, v4);
	v5 = *(_QWORD*)(a1 + 24);
	*(_QWORD*)(a1 + 24) = v33;
	*(_QWORD*)(a1 + 32) = v34;
	*(_QWORD*)(a1 + 40) = v35;
	if (v5)
		sub_14018B900(v5, 0);
	v6 = (char*)sub_140056BB0(a2, 4u, 0i64);
	sub_14018F2D0(&v32, v6);
	v7 = *(_QWORD*)(a1 + 56);
	*(_QWORD*)(a1 + 56) = v33;
	*(_QWORD*)(a1 + 64) = v34;
	*(_QWORD*)(a1 + 72) = v35;
	if (v7)
		sub_14018B900(v7, 0);
	v8 = (char*)sub_140056BB0(a2, 5u, 0i64);
	sub_14018F2D0(&v32, v8);
	v9 = *(_QWORD*)(a1 + 88);
	*(_QWORD*)(a1 + 88) = v33;
	*(_QWORD*)(a1 + 96) = v34;
	*(_QWORD*)(a1 + 104) = v35;
	if (v9)
		sub_14018B900(v9, 0);
	v10 = (char*)sub_140056BB0(a2, 6u, 0i64);
	sub_14018F2D0(&v32, v10);
	v11 = *(_QWORD*)(a1 + 120);
	*(_QWORD*)(a1 + 120) = v33;
	*(_QWORD*)(a1 + 128) = v34;
	*(_QWORD*)(a1 + 136) = v35;
	if (v11)
		sub_14018B900(v11, 0);
	v12 = dword_140A12138;
	*(_QWORD*)(a1 + 152) = 0i64;
	v13 = a2[2];
	v14 = (_DWORD*)(a2[3] + 96i64);
	if ((unsigned __int64)v14 < v13 && v14 != dword_140A12138 && *(_DWORD*)(a2[3] + 104i64) == 5)
	{
		*(_DWORD*)(v13 + 8) = 0;
		for (a2[2] += 16i64; ; a2[2] -= 16i64)
		{
			v15 = a2[2];
			v16 = (__int64*)dword_140A12138;
			if (a2[3] + 96i64 < v15)
				v16 = (__int64*)(a2[3] + 96i64);
			if (!(unsigned int)sub_14005BA70((__int64)a2, *v16, v15 - 16))
			{
				a2[2] -= 16i64;
				goto LABEL_32;
			}
			a2[2] += 16i64;
			v17 = a2[2];
			v18 = *(_DWORD*)(v17 - 8);
			v19 = (__int64*)(v17 - 16);
			if (v18 == 3)
				goto LABEL_20;
			if (v18 == 4 && sub_14005AC80((char*)(*v19 + 32), (unsigned __int64*)&v37))
				break;
			v20 = 0.0;
		LABEL_21:
			v21 = a2[2];
			v22 = (int)v20;
			if (*(_DWORD*)(v21 - 24) == 4)
				sub_14005AC80((char*)(*(_QWORD*)(v21 - 32) + 32i64), &v38);
			HIDWORD(v36) = (unsigned __int8)v22;
			LODWORD(v36) = BYTE1(v22);
			if (BYTE1(v22) || (unsigned __int8)v22 < 0x1Fu)
			{
				if (sub_1403AC780(qword_140C65898 + 160, (int*)&v36))
				{
					if (*(_QWORD*)(a1 + 152) < 0xAui64)
						sub_140527690((__int64*)(a1 + 144), (int*)&v36);
				}
			}
		}
		LODWORD(v33) = 3;
		v19 = &v32;
		v32 = v37;
	LABEL_20:
		v20 = *(double*)v19;
		goto LABEL_21;
	}
LABEL_32:
	v23 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a2[3] + 112i64) < a2[2])
		v23 = (__int64*)(a2[3] + 112i64);
	v24 = *((_DWORD*)v23 + 2);
	if (v24 == 3)
		goto LABEL_38;
	if (v24 == 4 && sub_14005AC80((char*)(*v23 + 32), (unsigned __int64*)&v36))
	{
		LODWORD(v33) = 3;
		v23 = &v32;
		v32 = v36;
	LABEL_38:
		v25 = (int)*(double*)v23;
		goto LABEL_39;
	}
	v25 = 0;
LABEL_39:
	*(_DWORD*)(a1 + 160) = v25;
	*(_QWORD*)(a1 + 176) = 0i64;
	v26 = dword_140A12138;
	if ((unsigned __int64)(a2[3] + 128i64) < a2[2])
		v26 = (_DWORD*)(a2[3] + 128i64);
	v27 = v26[2];
	if (v27 == 7 || v27 == 2)
	{
		v28 = (_QWORD*)sub_140056AB0(a2, 9u);
		if (v28)
			*(_QWORD*)(a1 + 176) = *v28;
	}
	*(_QWORD*)(a1 + 168) = 0i64;
	if ((unsigned __int64)(a2[3] + 144i64) < a2[2])
		v12 = (_DWORD*)(a2[3] + 144i64);
	v29 = v12[2];
	if (v29 == 7 || v29 == 2)
	{
		v30 = (_QWORD*)sub_140056AB0(a2, 0xAu);
		if (v30)
			*(_QWORD*)(a1 + 168) = *v30;
	}
	return 0i64;
}
// 1405180EF: conditional instruction was optimized away because edx.4<100u
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140C65898: using guessed type __int64 qword_140C65898;

