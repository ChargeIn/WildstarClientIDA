#include "../winhttp.h"

//----- (000000014050DA00) ----------------------------------------------------
__int64 __fastcall sub_14050DA00(_QWORD* a1)
{
	int* v2; // rax
	__int64 v3; // r15
	char* v4; // rax
	int* v5; // r12
	int* v6; // r8
	int v7; // edi
	unsigned __int64 v8; // r14
	_DWORD* v9; // rax
	int v10; // ecx
	_DWORD* v11; // r10
	int v12; // ecx
	int v13; // ecx
	int v14; // ecx
	int v15; // ecx
	int* v16; // rax
	__int64 v17; // rbx
	int* v18; // rax
	__int64 v19; // rax
	char* v20; // rax
	int* v21; // rbx
	int* v22; // rax
	_QWORD* v23; // rax
	__int64* v24; // rax
	int v25; // ecx
	double v26; // xmm0_8
	float v27; // xmm6_4
	int* v28; // rax
	int* v29; // rbx
	_QWORD* v30; // rdx
	_QWORD* v31; // rax
	_QWORD* v32; // rbx
	__int64* v33; // rax
	__int64** v34; // rax
	__int64** v35; // rbx
	__int64* v36; // rcx
	int* v37; // r9
	__int64* v38; // rcx
	__int64 v39; // rdx
	int v40; // r8d
	int* v41; // rax
	__int64* v42; // rcx
	unsigned __int16* v43; // rdx
	__int64 v44; // rax
	unsigned __int64* v45; // rdi
	__int64 v46; // rbx
	__int64 v47; // rax
	__int64 v49; // [rsp+20h] [rbp-E0h] BYREF
	int* v50; // [rsp+28h] [rbp-D8h]
	int* v51; // [rsp+30h] [rbp-D0h]
	__int64(__fastcall * *v52)(); // [rsp+40h] [rbp-C0h] BYREF
	char v53[8]; // [rsp+48h] [rbp-B8h] BYREF
	__int64 v54; // [rsp+50h] [rbp-B0h]
	char v55[8]; // [rsp+98h] [rbp-68h] BYREF
	unsigned __int16* v56; // [rsp+A0h] [rbp-60h]
	unsigned __int16* v57; // [rsp+A8h] [rbp-58h]
	__int128 v58; // [rsp+100h] [rbp+0h]
	int* v59; // [rsp+110h] [rbp+10h]
	__int64 v60; // [rsp+120h] [rbp+20h] BYREF
	int* v61; // [rsp+128h] [rbp+28h]
	int* v62; // [rsp+190h] [rbp+90h] BYREF
	__int64 v63; // [rsp+198h] [rbp+98h] BYREF

	sub_1400B6F30((__int64)&v52);
	v52 = off_140B69230;
	v58 = 0i64;
	v59 = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)&v58 = v2;
	*((_QWORD*)&v58 + 1) = v2;
	v59 = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = (__int64)(a1[2] - a1[3]) >> 4;
	v4 = (char*)sub_140056BB0(a1, 1u, 0i64);
	if (v4)
	{
		sub_14018F2D0(&v49, v4);
		v5 = v50;
		v6 = v51;
		v62 = v50;
	}
	else
	{
		v5 = sub_14018B280(2i64, 0);
		v62 = v5;
		sub_1407DB590(v5, dword_1409F12B4, 0i64);
		v6 = v5;
		if (v5)
			*(_WORD*)v5 = 0;
	}
	sub_14001C480((__int64)v53, v5, v6);
	v7 = 2;
	v8 = -1i64;
	if ((unsigned int)v3 >= 2)
	{
		while (1)
		{
			v9 = sub_1400580E0((__int64)a1, v7);
			v10 = -1;
			if (v9 != v11)
				v10 = v9[2];
			v12 = v10 - 2;
			if (!v12)
				break;
			v13 = v12 - 1;
			if (!v13)
			{
				v24 = (__int64*)sub_1400580E0((__int64)a1, v7);
				v25 = *((_DWORD*)v24 + 2);
				if (v25 == 3)
					goto LABEL_33;
				if (v25 == 4 && sub_14005AC80((char*)(*v24 + 32), (unsigned __int64*)&v63))
				{
					LODWORD(v50) = 3;
					v24 = &v49;
					v49 = v63;
				LABEL_33:
					v26 = *(double*)v24;
				}
				else
				{
					v26 = 0.0;
				}
				v27 = v26;
				v28 = sub_14018B280(88i64, 0);
				v29 = v28;
				if (v28)
				{
					sub_1400B6390(v28);
					*(_QWORD*)v29 = off_140B69300;
					v30 = v29;
					*((float*)v29 + 3) = v27;
					v29[2] = (int)v27;
				}
				else
				{
					v30 = 0i64;
				}
			LABEL_64:
				sub_1400B7480((__int64)&v52, v30);
				goto LABEL_65;
			}
			v14 = v13 - 1;
			if (!v14)
			{
				v20 = (char*)sub_140056BB0(a1, v7, 0i64);
				if (v20)
				{
					sub_14018F2D0(&v60, v20);
					v21 = v61;
				}
				else
				{
					v21 = sub_14018B280(2i64, 0);
					sub_1407DB590(v21, dword_1409F12B4, 0i64);
					if (v21)
						*(_WORD*)v21 = 0;
				}
				v22 = sub_14018B280(96i64, 0);
				if (v22)
					v23 = (_QWORD*)sub_1404DDB40((__int64)v22, v21);
				else
					v23 = 0i64;
				sub_1400B7480((__int64)&v52, v23);
				if (v21)
					sub_14018B900((__int64)v21, 0);
				goto LABEL_65;
			}
			v15 = v14 - 1;
			if (!v15)
			{
				v19 = (__int64)sub_14050D3A0(a1, v7);
				goto LABEL_63;
			}
			if (v15 == 2)
				break;
		LABEL_65:
			if (++v7 > (unsigned int)v3)
			{
				v5 = v62;
				goto LABEL_67;
			}
		}
		v16 = (int*)sub_1406622C0((__int64)a1, v7);
		if (v16 && (v17 = sub_1403D90D0(qword_140C65898, *v16)) != 0)
		{
			v18 = sub_14018B280(96i64, 0);
			if (v18)
			{
				v19 = sub_1404DB7E0((__int64)v18, v17);
				goto LABEL_63;
			}
		}
		else
		{
			v31 = (_QWORD*)sub_140512120((__int64)a1, v7);
			v32 = v31;
			if (v31 && *v31)
			{
				v33 = (__int64*)sub_14018B280(88i64, 0);
				if (v33)
				{
					v19 = (__int64)sub_1404DD130(v33, **(_DWORD**)(*v32 + 8i64));
				LABEL_63:
					v30 = (_QWORD*)v19;
					goto LABEL_64;
				}
			}
			else
			{
				v34 = (__int64**)sub_140417660((__int64)a1, v7);
				v35 = v34;
				if (!v34)
					goto LABEL_65;
				v36 = *v34;
				if (!*v34)
					goto LABEL_65;
				if (*v36)
				{
					v37 = sub_14018B280(88i64, 0);
					if (v37)
					{
						v38 = *v35;
						if (*v35)
							v39 = *v38;
						else
							v39 = 0i64;
						v40 = 1;
						if (*(_DWORD*)(v39 + 120))
							v40 = *(_DWORD*)(v39 + 120);
						if (v38 && *((_DWORD*)v38 + 296))
							v19 = sub_1404DC4F0((__int64)v37, v38[1], v40);
						else
							v19 = sub_1404DC4F0((__int64)v37, 0i64, v40);
						goto LABEL_63;
					}
				}
				else
				{
					if (!*((_DWORD*)v36 + 296) || !v36[1])
						goto LABEL_65;
					v41 = sub_14018B280(88i64, 0);
					if (v41)
					{
						v42 = *v35;
						if (*v35 && *((_DWORD*)v42 + 296))
							v19 = sub_1404DC4F0((__int64)v41, v42[1], 1);
						else
							v19 = sub_1404DC4F0((__int64)v41, 0i64, 1);
						goto LABEL_63;
					}
				}
			}
		}
		v19 = 0i64;
		goto LABEL_63;
	}
LABEL_67:
	v43 = v56;
	if (v56 == v57 && qword_140C63648)
	{
		v62 = 0i64;
		(**(void(__fastcall***)(__int64, __int64, __int64(__fastcall***)(), int**, __int64, _DWORD))qword_140C63648)(
			qword_140C63648,
			v54,
			&v52,
			&v62,
			v49,
			(_DWORD)v50);
		if (v62)
		{
			v44 = 0i64;
			if (*(_WORD*)v62)
			{
				do
					++v44;
				while (*((_WORD*)v62 + v44));
			}
			sub_14001C480((__int64)v55, v62, (int*)((char*)v62 + 2 * v44));
			v43 = v56;
		}
		else
		{
			v43 = v56;
			if (v56 == v57)
				goto LABEL_77;
			*v56 = 0;
			v43 = v56;
			v57 = v56;
		}
		if (v62)
		{
			(*(void(__fastcall**)(int*, unsigned __int16*))(*((_QWORD*)v62 - 2) + 8i64))(v62 - 4, v43);
			v43 = v56;
		}
	}
LABEL_77:
	sub_14018F0E0(&v60, v43);
	v45 = (unsigned __int64*)v61;
	if (v61)
	{
		do
			++v8;
		while (*((_BYTE*)v61 + v8));
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v46 = a1[2];
		v47 = sub_140062650((__int64)a1, v45, v8);
		*(_DWORD*)(v46 + 8) = 4;
		*(_QWORD*)v46 = v47;
		a1[2] += 16i64;
		sub_14018B900((__int64)v45, 0);
	}
	else
	{
		*(_DWORD*)(a1[2] + 8i64) = 0;
		a1[2] += 16i64;
	}
	if (v5)
		sub_14018B900((__int64)v5, 0);
	if ((_QWORD)v58)
		sub_14018B900(v58, 0);
	sub_1400B7390(&v52);
	return 1i64;
}
// 14050DB33: variable 'v11' is possibly undefined
// 1409F12B4: using guessed type int dword_1409F12B4[14];
// 140B69230: using guessed type __int64 (__fastcall *off_140B69230[25])();
// 140B69300: using guessed type __int64 (__fastcall *off_140B69300[23])();
// 140C63648: using guessed type __int64 qword_140C63648;
// 140C65898: using guessed type __int64 qword_140C65898;
// 14050DA00: using guessed type char var_138[8];
// 14050DA00: using guessed type char var_E8[8];

