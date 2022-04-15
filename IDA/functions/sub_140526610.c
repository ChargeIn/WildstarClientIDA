#include "../winhttp.h"

//----- (0000000140526610) ----------------------------------------------------
__int64 __fastcall sub_140526610(_QWORD* a1)
{
	__int64 v2; // rdi
	__int64* v3; // rax
	__int64 v4; // rbx
	int v5; // edx
	int v6; // esi
	void(__fastcall * **v7)(_QWORD, __int64); // rcx
	int* v8; // rax
	int* v9; // rax
	int* v10; // rax
	int* v11; // rsi
	__int64 v12; // rcx
	__int64(__fastcall * *v13)(); // rax
	wchar_t* v14; // r9
	WCHAR* v15; // r8
	__int64 v16; // rcx
	int* v17; // rax
	int* v18; // rax
	int* v19; // rax
	int* v20; // rax
	int* v21; // rax
	int* v22; // rax
	int* v23; // rax
	int* v24; // rax
	int* v25; // rsi
	__int64 v26; // rcx
	int* v27; // rax
	__int64 v28; // rcx
	unsigned int v30; // ebx
	__int64 v31; // [rsp+20h] [rbp-28h] BYREF
	__int64 v32; // [rsp+28h] [rbp-20h]
	__int64 v33; // [rsp+30h] [rbp-18h]
	__int64 v34; // [rsp+38h] [rbp-10h]
	__int64 v35; // [rsp+58h] [rbp+10h] BYREF

	v2 = sub_140527110(a1);
	v3 = (__int64*)dword_140A12138;
	if ((unsigned __int64)(a1[3] + 16i64) < a1[2])
		v3 = (__int64*)(a1[3] + 16i64);
	v4 = 0i64;
	v5 = *((_DWORD*)v3 + 2);
	if (v5 == 3)
		goto LABEL_7;
	if (v5 == 4 && sub_14005AC80((char*)(*v3 + 32), (unsigned __int64*)&v35))
	{
		LODWORD(v32) = 3;
		v3 = &v31;
		v31 = v35;
	LABEL_7:
		v6 = (int)*(double*)v3;
		goto LABEL_8;
	}
	v6 = 0;
LABEL_8:
	v7 = *(void(__fastcall****)(_QWORD, __int64))(v2 + 1472);
	if (v7)
		(**v7)(v7, 1i64);
	*(_DWORD*)(v2 + 1464) = v6;
	*(_QWORD*)(v2 + 1472) = 0i64;
	switch (v6)
	{
	case 1:
		v8 = sub_14018B280(184i64, 0);
		if (v8)
			v4 = sub_1405176F0((__int64)v8, v2);
		goto LABEL_14;
	case 2:
		v9 = sub_14018B280(16i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6B540;
		goto LABEL_106;
	case 3:
		v10 = sub_14018B280(56i64, 0);
		v11 = v10;
		if (!v10)
			goto LABEL_22;
		sub_140515120((__int64)v10, v2);
		v13 = off_140B6B680;
		v14 = L"Delete:";
		v15 = L"CRB_Delete";
		goto LABEL_19;
	case 4:
		v17 = sub_14018B280(56i64, 0);
		v11 = v17;
		if (!v17)
			goto LABEL_22;
		sub_140515120((__int64)v17, v2);
		v13 = off_140B6B5E0;
		v14 = L"Salvage:";
		v15 = L"CRB_Salvage";
	LABEL_19:
		*(_QWORD*)v11 = v13;
		goto LABEL_20;
	case 5:
		v19 = sub_14018B280(64i64, 0);
		v11 = v19;
		if (!v19)
			goto LABEL_22;
		sub_140515120((__int64)v19, v2);
		v14 = L"Equip:";
		*(_QWORD*)v11 = off_140B6B6D0;
		v15 = L"CRB_Equip";
		v11[14] = 300;
		v11[15] = -1;
	LABEL_20:
		sub_1400E2630(v12, &v31, v15, (int*)v14);
		v16 = *((_QWORD*)v11 + 4);
		*((_QWORD*)v11 + 4) = v32;
		*((_QWORD*)v11 + 5) = v33;
		*((_QWORD*)v11 + 6) = v34;
		if (!v16)
			goto LABEL_23;
		sub_14018B900(v16, 0);
		*(_QWORD*)(v2 + 1472) = v11;
		break;
	case 6:
		v20 = sub_14018B280(56i64, 0);
		if (!v20)
			goto LABEL_14;
		*(_QWORD*)(v2 + 1472) = sub_1405163C0((__int64)v20, v2);
		break;
	case 7:
		v18 = sub_14018B280(80i64, 0);
		if (!v18)
			goto LABEL_14;
		*(_QWORD*)(v2 + 1472) = sub_140515880((__int64)v18, v2);
		break;
	case 10:
		v9 = sub_14018B280(16i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6B140;
		goto LABEL_106;
	case 11:
		v9 = sub_14018B280(72i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6B280;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 1i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 6) = 1i64;
		*((_QWORD*)v9 + 7) = 0i64;
		*((_QWORD*)v9 + 8) = 0i64;
		goto LABEL_106;
	case 12:
		v9 = sub_14018B280(56i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6B230;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 1i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		v9[12] = 0;
		goto LABEL_106;
	case 13:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6B190;
		goto LABEL_106;
	case 14:
		v9 = sub_14018B280(48i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = -1i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*(_QWORD*)v9 = off_140B6B3E0;
		goto LABEL_106;
	case 15:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = -1i64;
		*(_QWORD*)v9 = off_140B6B4A0;
		goto LABEL_106;
	case 16:
		v9 = sub_14018B280(80i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = -1i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		v9[12] = 0;
		*((_QWORD*)v9 + 7) = 0i64;
		*(_QWORD*)v9 = off_140B6B2D0;
		v9[16] = 0;
		*((_QWORD*)v9 + 9) = 0i64;
		goto LABEL_106;
	case 17:
		v9 = sub_14018B280(48i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = -1i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*(_QWORD*)v9 = off_140B6B330;
		goto LABEL_106;
	case 18:
		if (*(_DWORD*)(qword_140C635F0 + 5896))
			break;
		v9 = sub_14018B280(48i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6B390;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 4) = 1i64;
		*((_QWORD*)v9 + 5) = 0i64;
		goto LABEL_106;
	case 19:
		if (*(_DWORD*)(qword_140C635F0 + 5896))
			break;
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6B0F0;
		goto LABEL_106;
	case 20:
		v21 = sub_14018B280(48i64, 0);
		v11 = v21;
		if (!v21)
			goto LABEL_22;
		*((_QWORD*)v21 + 1) = v2;
		*(_QWORD*)v21 = off_140B6B1E0;
		*((_QWORD*)v21 + 3) = 0i64;
		*((_QWORD*)v21 + 4) = 0i64;
		*((_QWORD*)v21 + 5) = 0i64;
		v22 = sub_14018B280(16i64, 0);
		*((_QWORD*)v11 + 3) = v22;
		*((_QWORD*)v11 + 4) = v22;
		*((_QWORD*)v11 + 5) = v22 + 4;
		if (!v22)
			goto LABEL_23;
		*(_WORD*)v22 = 0;
		*(_QWORD*)(v2 + 1472) = v11;
		break;
	case 21:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6B000;
		goto LABEL_106;
	case 22:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6B0A0;
		goto LABEL_106;
	case 23:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6B050;
		*((_QWORD*)v9 + 2) = 0i64;
		goto LABEL_106;
	case 24:
		v23 = sub_14018B280(88i64, 0);
		if (v23)
			*(_QWORD*)(v2 + 1472) = sub_14051D250(v23, v2);
		else
			LABEL_14:
		*(_QWORD*)(v2 + 1472) = v4;
		break;
	case 25:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AFB0;
		*((_QWORD*)v9 + 3) = 0i64;
		goto LABEL_106;
	case 26:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AF10;
		v9[6] = 0;
		goto LABEL_106;
	case 27:
		v9 = sub_14018B280(40i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		v9[8] = 0;
		*(_QWORD*)v9 = off_140B6AEC0;
		goto LABEL_106;
	case 28:
		v24 = sub_14018B280(56i64, 0);
		v25 = v24;
		if (v24)
		{
			sub_140515120((__int64)v24, v2);
			*(_QWORD*)v25 = off_140B6ADD0;
			v27 = (int*)sub_14034BDD0(v26, 679978);
			if (*(_WORD*)v27)
			{
				do
					++v4;
				while (*((_WORD*)v27 + v4));
			}
			sub_14001C480((__int64)(v25 + 6), v27, (int*)((char*)v27 + 2 * v4));
			*(_QWORD*)(v2 + 1472) = v25;
		}
		else
		{
		LABEL_22:
			v11 = 0i64;
		LABEL_23:
			*(_QWORD*)(v2 + 1472) = v11;
		}
		break;
	case 29:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6AE20;
		goto LABEL_106;
	case 30:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AE70;
		v9[6] = 0;
		goto LABEL_106;
	case 31:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AD30;
		v9[6] = 0;
		goto LABEL_106;
	case 32:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6AD80;
		goto LABEL_106;
	case 33:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AC90;
		goto LABEL_106;
	case 34:
		v9 = sub_14018B280(16i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6ACE0;
		goto LABEL_106;
	case 35:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6AC40;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 2) = 0i64;
		goto LABEL_106;
	case 36:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 4;
		*(_QWORD*)v9 = off_140B6ABA0;
		goto LABEL_106;
	case 37:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 4i64;
		*(_QWORD*)v9 = off_140B6ABF0;
		goto LABEL_106;
	case 38:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*((_QWORD*)v9 + 2) = 0i64;
		*(_QWORD*)v9 = off_140B6AAB0;
		*((_QWORD*)v9 + 3) = 0i64;
		goto LABEL_106;
	case 39:
		v9 = sub_14018B280(48i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*((_QWORD*)v9 + 3) = 0i64;
		*(_QWORD*)(v9 + 9) = 0i64;
		v9[11] = 0;
		*(_QWORD*)v9 = off_140B6AB00;
		goto LABEL_106;
	case 40:
		v9 = sub_14018B280(24i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		v9[4] = 0;
		*(_QWORD*)v9 = off_140B6AB50;
		goto LABEL_106;
	case 41:
		v9 = sub_14018B280(152i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6A9C0;
		*((_QWORD*)v9 + 2) = 0i64;
		*((_QWORD*)v9 + 4) = 0i64;
		*((_QWORD*)v9 + 3) = 0i64;
		*((_QWORD*)v9 + 6) = 0i64;
		*((_QWORD*)v9 + 5) = 0i64;
		*((_QWORD*)v9 + 7) = 0i64;
		*((_QWORD*)v9 + 8) = 1i64;
		*((_QWORD*)v9 + 9) = 0i64;
		*((_QWORD*)v9 + 10) = 0i64;
		*((_QWORD*)v9 + 11) = 1i64;
		*((_QWORD*)v9 + 12) = 0i64;
		*((_QWORD*)v9 + 13) = 0i64;
		*((_QWORD*)v9 + 14) = 1i64;
		*((_QWORD*)v9 + 15) = 0i64;
		*((_QWORD*)v9 + 16) = 0i64;
		*((_QWORD*)v9 + 17) = 1i64;
		*((_QWORD*)v9 + 18) = 0i64;
		goto LABEL_106;
	case 42:
		v9 = sub_14018B280(32i64, 0);
		if (!v9)
			goto LABEL_105;
		*((_QWORD*)v9 + 1) = v2;
		*(_QWORD*)v9 = off_140B6AA60;
		*((_QWORD*)v9 + 2) = 0i64;
		v9[6] = 0;
		goto LABEL_106;
	case 43:
		v9 = sub_14018B280(32i64, 0);
		if (v9)
		{
			*((_QWORD*)v9 + 1) = v2;
			*(_QWORD*)v9 = off_140B6AA10;
			*((_QWORD*)v9 + 2) = 0i64;
			v9[6] = 0;
		}
		else
		{
		LABEL_105:
			v9 = 0i64;
		}
	LABEL_106:
		*(_QWORD*)(v2 + 1472) = v9;
		break;
	default:
		break;
	}
	v28 = *(_QWORD*)(v2 + 1472);
	*(_QWORD*)(v2 + 1480) = -1i64;
	if (!v28)
		return 0i64;
	v30 = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)v28 + 24i64))(v28, a1);
	(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v2 + 1472) + 72i64))(*(_QWORD*)(v2 + 1472));
	return v30;
}
// 14052675A: variable 'v12' is possibly undefined
// 140526C87: variable 'v26' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B6A9C0: using guessed type __int64 (__fastcall *off_140B6A9C0[301])();
// 140B6AA10: using guessed type __int64 (__fastcall *off_140B6AA10[291])();
// 140B6AA60: using guessed type __int64 (__fastcall *off_140B6AA60[281])();
// 140B6AAB0: using guessed type __int64 (__fastcall *off_140B6AAB0[271])();
// 140B6AB00: using guessed type __int64 (__fastcall *off_140B6AB00[261])();
// 140B6AB50: using guessed type __int64 (__fastcall *off_140B6AB50[251])();
// 140B6ABA0: using guessed type __int64 (__fastcall *off_140B6ABA0[241])();
// 140B6ABF0: using guessed type __int64 (__fastcall *off_140B6ABF0[231])();
// 140B6AC40: using guessed type __int64 (__fastcall *off_140B6AC40[221])();
// 140B6AC90: using guessed type __int64 (__fastcall *off_140B6AC90[211])();
// 140B6ACE0: using guessed type __int64 (__fastcall *off_140B6ACE0[201])();
// 140B6AD30: using guessed type __int64 (__fastcall *off_140B6AD30[191])();
// 140B6AD80: using guessed type __int64 (__fastcall *off_140B6AD80[181])();
// 140B6ADD0: using guessed type __int64 (__fastcall *off_140B6ADD0[171])();
// 140B6AE20: using guessed type __int64 (__fastcall *off_140B6AE20[161])();
// 140B6AE70: using guessed type __int64 (__fastcall *off_140B6AE70[151])();
// 140B6AEC0: using guessed type __int64 (__fastcall *off_140B6AEC0[141])();
// 140B6AF10: using guessed type __int64 (__fastcall *off_140B6AF10[131])();
// 140B6AFB0: using guessed type __int64 (__fastcall *off_140B6AFB0[111])();
// 140B6B000: using guessed type __int64 (__fastcall *off_140B6B000[101])();
// 140B6B050: using guessed type __int64 (__fastcall *off_140B6B050[91])();
// 140B6B0A0: using guessed type __int64 (__fastcall *off_140B6B0A0[81])();
// 140B6B0F0: using guessed type __int64 (__fastcall *off_140B6B0F0[71])();
// 140B6B140: using guessed type __int64 (__fastcall *off_140B6B140[61])();
// 140B6B190: using guessed type __int64 (__fastcall *off_140B6B190[51])();
// 140B6B1E0: using guessed type __int64 (__fastcall *off_140B6B1E0[41])();
// 140B6B230: using guessed type __int64 (__fastcall *off_140B6B230[31])();
// 140B6B280: using guessed type __int64 (__fastcall *off_140B6B280[21])();
// 140B6B2D0: using guessed type __int64 (__fastcall *off_140B6B2D0[11])();
// 140B6B330: using guessed type __int64 (__fastcall *off_140B6B330[11])();
// 140B6B390: using guessed type __int64 (__fastcall *off_140B6B390[21])();
// 140B6B3E0: using guessed type __int64 (__fastcall *off_140B6B3E0[11])();
// 140B6B4A0: using guessed type __int64 (__fastcall *off_140B6B4A0[81])();
// 140B6B540: using guessed type __int64 (__fastcall *off_140B6B540[61])();
// 140B6B5E0: using guessed type __int64 (__fastcall *off_140B6B5E0[41])();
// 140B6B680: using guessed type __int64 (__fastcall *off_140B6B680[21])();
// 140B6B6D0: using guessed type __int64 (__fastcall *off_140B6B6D0[11])();
// 140B6B8E0: using guessed type wchar_t aCrbSalvage[12];
// 140B6B908: using guessed type wchar_t aSalvage_0[9];
// 140B6B938: using guessed type wchar_t aCrbEquip[10];
// 140B6B960: using guessed type wchar_t aCrbDelete[11];
// 140B6B978: using guessed type wchar_t aEquip[7];
// 140B6B990: using guessed type wchar_t aDelete[8];
// 140C635F0: using guessed type __int64 qword_140C635F0;

