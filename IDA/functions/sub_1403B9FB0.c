#include "../winhttp.h"

//----- (00000001403B9FB0) ----------------------------------------------------
__int64 __fastcall sub_1403B9FB0(_QWORD* a1, unsigned int* a2)
{
	__int64 v4; // r11
	unsigned int v5; // r8d
	signed int v6; // r9d
	unsigned int v7; // r10d
	int v8; // edi
	bool v9; // zf
	__int64 v10; // rax
	_DWORD* v11; // rdx
	unsigned int v12; // ecx
	bool v13; // cf
	signed int v14; // ecx
	bool v15; // cl
	unsigned int v16; // eax
	bool v17; // cf
	signed int v18; // eax
	bool v19; // al
	int v20; // eax
	int* v21; // rax
	__int64* v22; // rbx
	__int64 v23; // rcx
	unsigned int v24; // edx
	__int64 v25; // rbx
	unsigned int v26; // r14d
	unsigned int v27; // r15d
	__int64 v28; // rax
	unsigned int v29; // ecx
	bool v30; // cf
	signed int v31; // ecx
	bool v32; // cl
	unsigned int v33; // eax
	bool v34; // cf
	signed int v35; // eax
	bool v36; // al
	__int64 v37; // rbx
	void(__fastcall * **v38)(_QWORD, __int64); // rcx
	unsigned int v39; // edx
	__int64 v40; // rbx
	unsigned int v41; // r14d
	unsigned int v42; // r15d
	__int64 v43; // rax
	unsigned int v44; // eax
	__int64 v45; // rax
	unsigned int* v46; // rcx
	unsigned int v47; // edx
	_QWORD* v48; // rcx
	int v49; // eax
	__int64 v50; // rax
	int v51; // r10d
	unsigned int v52; // edx
	_QWORD* i; // rcx
	int* v54; // rax
	__int64 v55; // rcx
	__int64 v56; // rax
	__int64 v58; // [rsp+20h] [rbp-50h]
	char v59[16]; // [rsp+40h] [rbp-30h] BYREF
	unsigned int v60[3]; // [rsp+50h] [rbp-20h] BYREF
	int v61; // [rsp+5Ch] [rbp-14h]
	__int64* v62; // [rsp+60h] [rbp-10h]
	_DWORD* v63; // [rsp+90h] [rbp+20h] BYREF

	if (!a1[15])
		return 0i64;
	v4 = a1[656];
	v5 = *a2;
	v6 = a2[1];
	v7 = a2[2];
	v8 = 0;
	v9 = a2[3] == 0;
	v61 = a2[3];
	v10 = *(_QWORD*)(v4 + 8);
	v11 = (_DWORD*)v4;
	if (!v9)
	{
		if (v10)
		{
			while (1)
			{
				v12 = *(_DWORD*)(v10 + 32);
				v13 = v12 < v5;
				if (v12 != v5)
					goto LABEL_8;
				v14 = *(_DWORD*)(v10 + 36);
				if (v14 == v6)
					break;
				v15 = v14 < v6;
			LABEL_9:
				if (v15)
				{
					v10 = *(_QWORD*)(v10 + 24);
				}
				else
				{
					v11 = (_DWORD*)v10;
					v10 = *(_QWORD*)(v10 + 16);
				}
				if (!v10)
					goto LABEL_13;
			}
			v13 = *(_DWORD*)(v10 + 40) < v7;
		LABEL_8:
			v15 = v13;
			goto LABEL_9;
		}
	LABEL_13:
		if (v11 == (_DWORD*)v4)
			goto LABEL_20;
		v16 = v11[8];
		v17 = v5 < v16;
		if (v5 == v16)
		{
			v18 = v11[9];
			if (v6 != v18)
			{
				v19 = v6 < v18;
				goto LABEL_19;
			}
			v17 = v7 < v11[10];
		}
		v19 = v17;
	LABEL_19:
		v63 = v11;
		if (!v19)
		{
		LABEL_21:
			if (v63 != (_DWORD*)v4)
				return 0i64;
			v20 = a2[3];
			v60[0] = v5;
			v60[1] = v6;
			v60[2] = v7;
			v61 = v20;
			v21 = sub_14018B280(528i64, 0);
			if (v21)
			{
				v22 = (__int64*)sub_1405C7150((__int64)v21, 9);
				v62 = v22;
			}
			else
			{
				v22 = 0i64;
				v62 = 0i64;
			}
			if ((int)sub_1405C7960(v22, *a2) < 0)
			{
				if (v22)
					(*(void(__fastcall**)(__int64*, __int64)) * v22)(v22, 1i64);
				v62 = 0i64;
			}
			sub_1403D5C90((__int64)(a1 + 655), (__int64)v59, v60);
			v24 = *a2;
			v25 = a1[3688];
			v26 = a2[2];
			v27 = a2[1];
			if (*a2)
			{
				if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v28 = sub_1405A5B90(qword_140C65898, v24)) != 0
					|| (v28 = sub_1407A0FD0(qword_140C65B70, v24)) != 0)
				{
					sub_1400EA3E0(v25, "AddSpellShortcut", byte_1409E9864, v28, v27, v26);
				}
			}
			if (a2[1] - 1 <= 1)
				sub_140437A10((_QWORD*)qword_140C658D8, 0x7Eu, 0, 0i64, 0, 0, 1);
			goto LABEL_64;
		}
	LABEL_20:
		v63 = (_DWORD*)v4;
		goto LABEL_21;
	}
	if (v10)
	{
		while (1)
		{
			v29 = *(_DWORD*)(v10 + 32);
			v30 = v29 < v5;
			if (v29 != v5)
				goto LABEL_42;
			v31 = *(_DWORD*)(v10 + 36);
			if (v31 == v6)
				break;
			v32 = v31 < v6;
		LABEL_43:
			if (v32)
			{
				v10 = *(_QWORD*)(v10 + 24);
			}
			else
			{
				v11 = (_DWORD*)v10;
				v10 = *(_QWORD*)(v10 + 16);
			}
			if (!v10)
				goto LABEL_47;
		}
		v30 = *(_DWORD*)(v10 + 40) < v7;
	LABEL_42:
		v32 = v30;
		goto LABEL_43;
	}
LABEL_47:
	if (v11 == (_DWORD*)v4)
		goto LABEL_54;
	v33 = v11[8];
	v34 = v5 < v33;
	if (v5 == v33)
	{
		v35 = v11[9];
		if (v6 != v35)
		{
			v36 = v6 < v35;
			goto LABEL_53;
		}
		v34 = v7 < v11[10];
	}
	v36 = v34;
LABEL_53:
	v63 = v11;
	if (v36)
		LABEL_54:
	v63 = (_DWORD*)v4;
	v37 = (__int64)v63;
	if (v63 == (_DWORD*)v4)
		return 0i64;
	v38 = (void(__fastcall***)(_QWORD, __int64)) * ((_QWORD*)v63 + 6);
	if (v38)
		(**v38)(v38, 1i64);
	v63 = (_DWORD*)v37;
	sub_1403D5DD0((__int64)(a1 + 655), (__int64*)&v63);
	v39 = *a2;
	v40 = a1[3688];
	v41 = a2[2];
	v42 = a2[1];
	if (*a2)
	{
		if (*(_QWORD*)(qword_140C65898 + 120) && qword_140C65898 && (v43 = sub_1405A5B90(qword_140C65898, v39)) != 0
			|| (v43 = sub_1407A0FD0(qword_140C65B70, v39)) != 0)
		{
			sub_1400EA3E0(v40, "RemoveSpellShortcut", byte_1409E994C, v43, v42, v41);
		}
	}
LABEL_64:
	v44 = a2[1];
	switch (v44)
	{
	case 1u:
		v45 = sub_1405A8A40(v23, a2[2]);
		if (v45)
		{
			v46 = *(unsigned int**)(v45 + 8);
			v47 = *v46;
			v9 = (v46[3] & 0x80000) == 0;
			v48 = *(_QWORD**)qword_140C65B80;
			if (v9)
			{
				v49 = sub_1405FBC40(v48, v47);
				sub_1404261E0(*(_QWORD*)(qword_140C65898 + 29504), a2[2], v49);
			}
			else
			{
				LODWORD(v58) = sub_1405FBC40(v48, v47);
				sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "ContractStateChanged", byte_1409E91D4, a2[2], v58);
			}
		}
		break;
	case 2u:
		v50 = sub_1405A8AD0(v23, a2[2]);
		if (v50)
		{
			v52 = *(_DWORD*)(v50 + 16);
			if (v52)
			{
				for (i = (_QWORD*)(v50 + 24); !*i || *(_DWORD*)*i != v51; ++i)
				{
					if (++v8 >= v52)
						return 0i64;
				}
				v54 = *(int**)(v50 + 8);
				v55 = *(_QWORD*)(qword_140C65898 + 29504);
				if ((v54[3] & 0x80000) != 0)
				{
					LODWORD(v58) = v8;
					sub_1400EA3E0(v55, "ContractObjectiveUpdated", byte_1409E91BC, (unsigned int)*v54, v58);
				}
				else
				{
					sub_140426240(v55, *v54, v8);
				}
			}
		}
		break;
	case 0u:
		v56 = sub_140491C60(qword_140C65968, a2[2]);
		sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerPathMissionUpdate", L"p", v56);
		break;
	}
	return 0i64;
}
// 1403BA12F: variable 'v24' is possibly undefined
// 1403BA271: variable 'v39' is possibly undefined
// 1403BA2AD: variable 'v23' is possibly undefined
// 1403BA2FD: variable 'v58' is possibly undefined
// 1403BA369: variable 'v51' is possibly undefined
// 1409E91BC: using guessed type _BYTE byte_1409E91BC[24];
// 1409E91D4: using guessed type _BYTE byte_1409E91D4[24];
// 1409E9864: using guessed type _BYTE byte_1409E9864[72];
// 1409E994C: using guessed type _BYTE byte_1409E994C[24];
// 1409ED594: using guessed type wchar_t aP[2];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658D8: using guessed type __int64 qword_140C658D8;
// 140C65968: using guessed type __int64 qword_140C65968;
// 140C65B70: using guessed type __int64 qword_140C65B70;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 1403B9FB0: using guessed type char var_30[16];

