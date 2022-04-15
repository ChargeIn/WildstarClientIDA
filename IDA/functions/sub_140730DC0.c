#include "../winhttp.h"

//----- (0000000140730DC0) ----------------------------------------------------
__int64 __fastcall sub_140730DC0(_QWORD* a1)
{
	char* v2; // rax
	int* v3; // rsi
	int* v4; // rbx
	int* v5; // r14
	int* v6; // r13
	int v7; // r15d
	__int64 v8; // rbx
	__int64 v9; // rax
	int* v10; // r15
	__int64 v11; // rax
	__int64 v13; // rsi
	__int64 v14; // rax
	int* v15; // r14
	__int64 v16; // r12
	int* v17; // rax
	__int64 v18; // r14
	unsigned __int64 v19; // r15
	_QWORD* v20; // rbx
	__int64 v21; // rax
	__int64 v22; // rax
	__int64 v23; // rbx
	_QWORD* v24; // rax
	__int64 v25; // rdx
	bool v26; // bl
	char* v27; // rdx
	_DWORD* v28; // rax
	__int64* v29; // rax
	__int64* v30; // rbx
	__int64 v31; // rbx
	unsigned __int16* v32; // rbx
	__int64 v33; // rdx
	char v35[8]; // [rsp+20h] [rbp-49h] BYREF
	int* v36; // [rsp+28h] [rbp-41h]
	__int64 v38; // [rsp+38h] [rbp-31h]
	__int64 v39; // [rsp+40h] [rbp-29h] BYREF
	int* v40; // [rsp+48h] [rbp-21h]
	int* v41; // [rsp+50h] [rbp-19h]
	__int64 v42; // [rsp+58h] [rbp-11h]
	__int64 v43; // [rsp+60h] [rbp-9h] BYREF
	unsigned __int16* v44; // [rsp+68h] [rbp-1h]
	int* v45; // [rsp+70h] [rbp+7h]
	__int64 v46; // [rsp+78h] [rbp+Fh]
	__int64 v47; // [rsp+80h] [rbp+17h] BYREF
	int* v48; // [rsp+88h] [rbp+1Fh]
	int* v49; // [rsp+90h] [rbp+27h]
	__int64 v50; // [rsp+98h] [rbp+2Fh]
	int* v51; // [rsp+D0h] [rbp+67h] BYREF

	v2 = (char*)sub_140056BB0(a1, 1u, 0i64);
	sub_14018F2D0(&v39, v2);
	v3 = sub_14018B280(2i64, 0);
	v48 = v3;
	v50 = (__int64)v3 + 2;
	sub_1407DB590(v3, dword_1409F90DC, 0i64);
	v49 = v3;
	if (v3)
		*(_WORD*)v3 = 0;
	v4 = sub_14018B280(2i64, 0);
	v44 = (unsigned __int16*)v4;
	v46 = (__int64)v4 + 2;
	sub_1407DB590(v4, dword_1409F90BC, 0i64);
	v45 = v4;
	if (v4)
		*(_WORD*)v4 = 0;
	v5 = v41;
	v6 = v40;
	if (!(((char*)v41 - (char*)v40) >> 1) || (v7 = 1, *(_WORD*)v40 != 47))
		v7 = 0;
	if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
		sub_14005E2C0((__int64)a1);
	v8 = a1[2];
	v9 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v8 + 8) = 5;
	*(_QWORD*)v8 = v9;
	a1[2] += 16i64;
	if (v7)
	{
		v10 = 0i64;
		v36 = 0i64;
		v38 = 0i64;
		v11 = 0i64;
		while (asc_140B47148[++v11] != 0)
			;
		v13 = (2 * v11) >> 1;
		if ((unsigned __int64)(v13 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v10 = sub_14018B280(2 * (v13 + 1), 0);
			v36 = v10;
			v38 = (__int64)v10 + 2 * v13 + 2;
		}
		sub_1407DB590(v10, (int*)L" \t\r\n", 2 * v13);
		if ((int*)((char*)v10 + 2 * v13))
			*((_WORD*)v10 + v13) = 0;
		v14 = 0i64;
		v15 = 0i64;
		v40 = 0i64;
		v42 = 0i64;
		if (*((_WORD*)v6 + 1))
		{
			do
				++v14;
			while (*((_WORD*)v6 + v14 + 1));
		}
		v16 = (2 * v14) >> 1;
		if ((unsigned __int64)(v16 + 1) <= 0x7FFFFFFFFFFFFFFEi64)
		{
			v15 = sub_14018B280(2 * (v16 + 1), 0);
			v40 = v15;
			v42 = (__int64)v15 + 2 * v16 + 2;
		}
		sub_1407DB590(v15, (int*)((char*)v6 + 2), 2 * v16);
		v17 = (int*)((char*)v15 + 2 * v16);
		v41 = v17;
		if (v17)
			*(_WORD*)v17 = 0;
		sub_14018FBD0((__int64)&v39, &v47, &v43, (__int64)v35);
		if (v15)
			sub_14018B900((__int64)v15, 0);
		if (v10)
			sub_14018B900((__int64)v10, 0);
		v3 = v48;
		v18 = qword_140C658A0;
		v51 = v48;
		v19 = (*(__int64(__fastcall**)(int**))(qword_140C658A0 + 40))(&v51);
		v20 = *(_QWORD**)(*(_QWORD*)(v18 + 32) + 8 * (v19 % *(_QWORD*)(v18 + 24)));
		if (v20)
		{
			while (v19 != *v20 || !(*(unsigned int(__fastcall**)(int**, _QWORD*))(v18 + 48))(&v51, v20 + 2))
			{
				v20 = (_QWORD*)v20[1];
				if (!v20)
					goto LABEL_31;
			}
			v30 = v20 + 3;
			if (v30)
			{
				v31 = *v30;
				if (v31)
				{
					sub_140058710((__int64)a1, (unsigned __int64*)"channelCommand", 0xEui64);
					sub_140433380(a1, v31);
					sub_14005EA50(
						(__int64)a1,
						(__int64*)(a1[2] - 48i64),
						(int*)(a1[2] - 32i64),
						(unsigned int*)(a1[2] - 16i64));
					a1[2] -= 32i64;
					v27 = "bValidCommand";
					goto LABEL_36;
				}
			}
		}
	LABEL_31:
		sub_140058710((__int64)a1, (unsigned __int64*)"channelCommand", 0xEui64);
		v21 = sub_140401220((__int64*)qword_140C658A0, 1u, 0i64);
		sub_140433380(a1, v21);
		sub_14005EA50((__int64)a1, (__int64*)(a1[2] - 48i64), (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
		v22 = qword_140C65898;
		a1[2] -= 32i64;
		v23 = *(_QWORD*)(v22 + 29504);
		if (sub_1400EC6C0(v23, v3))
			goto LABEL_35;
		v24 = sub_14018F0E0(&v47, (unsigned __int16*)v3);
		v26 = sub_1400EC7D0(v23, (const char*)v24[1]);
		if (v48)
			sub_14018B900((__int64)v48, 0);
		if (v26)
		{
		LABEL_35:
			v27 = "bValidCommand";
		LABEL_36:
			sub_140058710((__int64)a1, (unsigned __int64*)v27, 0xDui64);
			v28 = (_DWORD*)a1[2];
			*v28 = 1;
			v28[2] = 1;
			a1[2] += 16i64;
			v29 = (__int64*)sub_1400580E0((__int64)a1, -3);
			sub_14005EA50((__int64)a1, v29, (int*)(a1[2] - 32i64), (unsigned int*)(a1[2] - 16i64));
			a1[2] -= 32i64;
		}
	}
	else
	{
		sub_14001C480((__int64)&v43, v6, v5);
	}
	sub_1400F0090((__int64)a1, v25, (unsigned __int64*)"strCommand", (unsigned __int16*)v3);
	v32 = v44;
	sub_1400F0090((__int64)a1, v33, (unsigned __int64*)"strMessage", v44);
	if (v32)
		sub_14018B900((__int64)v32, 0);
	if (v3)
		sub_14018B900((__int64)v3, 0);
	if (v6)
		sub_14018B900((__int64)v6, 0);
	return 1i64;
}
// 1407311CA: variable 'v25' is possibly undefined
// 1407311E0: variable 'v33' is possibly undefined
// 1409F90BC: using guessed type int dword_1409F90BC[6];
// 1409F90DC: using guessed type int dword_1409F90DC[6];
// 140B47148: using guessed type wchar_t asc_140B47148[5];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658A0: using guessed type __int64 qword_140C658A0;
// 140730DC0: using guessed type char var_A0[8];

