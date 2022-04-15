#include "../winhttp.h"

//----- (000000014076BD30) ----------------------------------------------------
__int64 __fastcall sub_14076BD30(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned int v2; // eax
	__int64 v3; // r14
	__int64 v4; // rsi
	__int64 v5; // rcx
	unsigned __int64 v6; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	__int64 v12; // r13
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // r12d
	int v16; // eax
	unsigned __int64 v17; // r14
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int64* v20; // rdx
	unsigned __int64 v21; // r8
	_DWORD* v22; // rax
	__int64* v23; // rax
	unsigned __int64 v24; // rbx
	unsigned int v25; // r14d
	__int64 v26; // rdi
	unsigned __int64 v27; // r12
	__int64 v28; // r8
	unsigned int v29; // eax
	__int64 v30; // rcx
	int v31; // esi
	_QWORD* v32; // rax
	__int64 v33; // rdx
	unsigned __int64* v34; // rdx
	__int64 v35; // rcx
	__int64* v36; // rax
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // r10
	int v41; // [rsp+40h] [rbp-C0h]
	__int64(__fastcall * *v42)(); // [rsp+48h] [rbp-B8h] BYREF
	int v43; // [rsp+50h] [rbp-B0h]
	__int64 v44; // [rsp+58h] [rbp-A8h]
	int v45; // [rsp+60h] [rbp-A0h]
	__int64 v46[2]; // [rsp+68h] [rbp-98h] BYREF
	_QWORD* v47; // [rsp+78h] [rbp-88h]
	__int64(__fastcall * *v48)(); // [rsp+88h] [rbp-78h] BYREF
	int v49; // [rsp+90h] [rbp-70h]
	__int64 v50; // [rsp+98h] [rbp-68h]
	int v51; // [rsp+A0h] [rbp-60h]
	__int64 v52; // [rsp+A8h] [rbp-58h] BYREF
	__int64 v53; // [rsp+B0h] [rbp-50h]
	__int16 v54[40]; // [rsp+D0h] [rbp-30h] BYREF

	v1 = (__int64)a1;
	v47 = a1;
	v2 = sub_140056D60(a1, 1u);
	v3 = (int)v2;
	if (v2 < 0x10)
	{
		v4 = *(_QWORD*)(qword_140C65898 + 27728);
		if (!v4 || (*(_BYTE*)(v4 + 8) & 1) == 0)
			v4 = *(_QWORD*)(qword_140C65898 + 27736);
		if (v4 && (*(_BYTE*)(v4 + 8) & 1) == 0)
			v4 = 0i64;
		v5 = *(_QWORD*)(v1 + 32);
		v50 = v1;
		v6 = *(_QWORD*)(v5 + 112);
		v48 = off_140B569F0;
		v51 = 1;
		if (*(_QWORD*)(v5 + 120) >= v6)
			sub_14005E2C0(v1);
		v7 = *(_QWORD*)(v1 + 16);
		v8 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(v1 + 16) += 16i64;
		v9 = sub_1400578C0(v1);
		v10 = *(_QWORD*)(v1 + 32);
		v49 = v9;
		v42 = off_140B569F0;
		v11 = *(_QWORD*)(v10 + 112);
		v12 = v1;
		v44 = v1;
		v45 = 1;
		if (*(_QWORD*)(v10 + 120) >= v11)
			sub_14005E2C0(v1);
		v13 = *(_QWORD*)(v1 + 16);
		v14 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v13 + 8) = 5;
		*(_QWORD*)v13 = v14;
		*(_QWORD*)(v1 + 16) += 16i64;
		v15 = sub_1400578C0(v1);
		v43 = v15;
		v16 = *(_DWORD*)(qword_140C65B98 + 4 * v3 + 96);
		v46[0] = v3;
		v17 = -1i64;
		v41 = v16;
		if (v16)
		{
			v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v49);
			v19 = *(_QWORD*)(v1 + 16);
			*(_QWORD*)v19 = *v18;
			*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
			*(_QWORD*)(v1 + 16) += 16i64;
			v20 = (unsigned __int64*)sub_14018F0E0(&v52, L"bSelfPenalized")[1];
			if (v20)
			{
				v21 = -1i64;
				do
					++v21;
				while (*((_BYTE*)v20 + v21));
				sub_140058710(v1, v20, v21);
			}
			else
			{
				*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
				*(_QWORD*)(v1 + 16) += 16i64;
			}
			if (v53)
				sub_14018B900(v53, 0);
			v22 = *(_DWORD**)(v1 + 16);
			*v22 = 1;
			v22[2] = 1;
			*(_QWORD*)(v1 + 16) += 16i64;
			v23 = (__int64*)sub_1400580E0(v1, -3);
			sub_14005EA50(v1, v23, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
			*(_QWORD*)(v1 + 16) -= 48i64;
			sub_1400FAD30((__int64)&v42);
			v12 = v44;
			v15 = v43;
		}
		if (v4)
		{
			v24 = 0i64;
			if (*(_QWORD*)(v4 + 96))
			{
				v25 = v41;
				v26 = v46[0];
				v27 = *(_QWORD*)(v4 + 96);
				do
				{
					if (v24 < *(_QWORD*)(v4 + 96))
					{
						v28 = *(_QWORD*)(*(_QWORD*)(v4 + 88) + 8 * v24);
						if (v28)
						{
							v29 = *(_DWORD*)(v28 + 4 * v26 + 308);
							if (v29)
							{
								if (v25 < v29)
									v25 = *(_DWORD*)(v28 + 4 * v26 + 308);
								v46[1] = 0i64;
								v46[0] = 0i64;
								if (!(unsigned int)sub_1403F82F0(qword_140C65898, 10, (__int64*)(v28 + 16), v54, 0x21u, v46, 0i64))
									sub_14034BDD0(v30, 108);
								sub_1400FAD30((__int64)&v42);
							}
						}
					}
					++v24;
				} while (v24 < v27);
				v12 = v44;
				v15 = v43;
				v1 = (__int64)v47;
				v41 = v25;
				v17 = -1i64;
			}
		}
		if (v41)
			sub_1400FB2A0((__int64)&v48, (__int64)L"arPenalized", v15);
		v31 = v49;
		v32 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v49);
		v33 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v33 = *v32;
		*(_DWORD*)(v33 + 8) = *((_DWORD*)v32 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		v34 = (unsigned __int64*)sub_14018F0E0(&v52, L"fPenaltyDuration")[1];
		if (v34)
		{
			do
				++v17;
			while (*((_BYTE*)v34 + v17));
			sub_140058710(v1, v34, v17);
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
			*(_QWORD*)(v1 + 16) += 16i64;
		}
		if (v53)
			sub_14018B900(v53, 0);
		v35 = *(_QWORD*)(v1 + 16);
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = (float)((float)v41 * 0.001);
		*(_QWORD*)(v1 + 16) += 16i64;
		v36 = (__int64*)sub_1400580E0(v1, -3);
		sub_14005EA50(v1, v36, (int*)(*(_QWORD*)(v1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v1 + 16) - 16i64));
		*(_QWORD*)(v1 + 16) -= 48i64;
		v37 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v31);
		v38 = *v37;
		*(_QWORD*)v39 = *v37;
		*(_DWORD*)(v39 + 8) = *((_DWORD*)v37 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		if (v12)
			sub_1400579E0(v12, v38, v15);
		sub_1400579E0(v1, v38, v31);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	return 1i64;
}
// 14076C00F: variable 'v30' is possibly undefined
// 14076C147: variable 'v39' is possibly undefined
// 14076C16C: variable 'v38' is possibly undefined
// 140B4EA38: using guessed type wchar_t aFpenaltydurati[17];
// 140B4EA60: using guessed type wchar_t aArpenalized[12];
// 140B4EA78: using guessed type wchar_t aBselfpenalized[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B98: using guessed type __int64 qword_140C65B98;
// 14076BD30: using guessed type __int16 var_80[40];

