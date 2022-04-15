#include "../winhttp.h"

//----- (00000001403B3320) ----------------------------------------------------
__int64 __fastcall sub_1403B3320(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rsi
	int v4; // edx
	int v5; // ebx
	__int64 result; // rax
	__int64 v7; // rax
	__int64 v8; // rdi
	float v9; // xmm0_4
	__int64 v10; // rax
	__int64 v11; // rdi
	float v12; // xmm0_4
	__int64 v13; // rax
	__int64 v14; // rdi
	float v15; // xmm0_4
	bool v16; // cc
	__int64 v17; // rcx
	float v18; // xmm6_4
	__int64 v19; // rax
	__int64 v20; // rdi
	float v21; // xmm0_4
	__int64 v22; // rax
	__int64 v23; // rdi
	float v24; // xmm0_4
	__int64 v25; // rax
	__int64 v26; // rdi

	v3 = *(_QWORD*)(a2 + 112);
	v4 = *(_DWORD*)(v3 + 4 * a1 + 168);
	if (!v4 || v4 >= 31)
		return 0i64;
	v5 = *(_DWORD*)(v3 + 4 * a1 + 176);
	if (!v5)
		return 0i64;
	if (v5 >= 0)
	{
		switch (v4)
		{
		case 1:
		LABEL_61:
			if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 64i64))(a3) >= *(_DWORD*)(v3 + 4 * a1 + 176))
				goto LABEL_109;
			result = 44i64;
			break;
		case 3:
			if ((*(int(__fastcall**)(__int64))(*(_QWORD*)a3 + 112i64))(a3) >= v5)
				goto LABEL_109;
			result = 176i64;
			break;
		case 5:
			if ((int)*(float*)(a3 + 540) >= v5)
				goto LABEL_109;
			result = 50i64;
			break;
		case 6:
			if ((int)*(float*)(a3 + 544) >= v5)
				goto LABEL_109;
			result = 51i64;
			break;
		case 7:
			if ((int)*(float*)(a3 + 548) >= v5)
				goto LABEL_109;
			result = 52i64;
			break;
		case 8:
			if ((int)*(float*)(a3 + 552) >= v5)
				goto LABEL_109;
			result = 53i64;
			break;
		case 9:
			if ((int)*(float*)(a3 + 556) >= v5)
				goto LABEL_109;
			result = 54i64;
			break;
		case 10:
			if ((int)*(float*)(a3 + 560) >= v5)
				goto LABEL_109;
			result = 55i64;
			break;
		case 11:
			if ((int)*(float*)(a3 + 564) >= v5)
				goto LABEL_109;
			result = 56i64;
			break;
		case 15:
			v18 = *(float*)(a3 + 536);
			if ((int)v18 >= (int)(float)((float)(sub_140462A90(a3) * (float)*(int*)(v3 + 4 * a1 + 176)) + 0.5))
				goto LABEL_109;
			result = 167i64;
			break;
		case 16:
			if ((int)*(float*)(a3 + 568) >= v5)
				goto LABEL_109;
			result = 177i64;
			break;
		case 20:
			if (*(_DWORD*)(a3 + 1200) >= v5)
				goto LABEL_109;
			result = 250i64;
			break;
		case 21:
			if ((*(int(__fastcall**)(__int64))(*(_QWORD*)a3 + 136i64))(a3) >= v5)
				goto LABEL_109;
			result = 254i64;
			break;
		case 22:
			v19 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 56),
				0i64);
			v20 = v19;
			if (!v19 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v19 + 64i64))(v19))
				v21 = 0.0;
			else
				v21 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v20 + 152i64))(v20);
			if ((int)v21 >= v5)
				goto LABEL_109;
			result = 275i64;
			break;
		case 23:
			v22 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 60),
				0i64);
			v23 = v22;
			if (v22 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v22 + 64i64))(v22) == 1)
				v24 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v23 + 152i64))(v23);
			else
				v24 = 0.0;
			if ((int)v24 >= v5)
				goto LABEL_109;
			result = 276i64;
			break;
		case 24:
			v25 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 64),
				0i64);
			v26 = v25;
			if (v25 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v25 + 64i64))(v25) == 2)
				v16 = (int)(float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v26 + 152i64))(v26) < v5;
			else
				v16 = (int)0.0 < v5;
		LABEL_54:
			if (!v16)
				goto LABEL_109;
			result = 277i64;
			break;
		case 27:
			if ((int)*(float*)(a3 + 572) >= v5)
				goto LABEL_109;
			result = 327i64;
			break;
		case 28:
			if ((int)*(float*)(a3 + 576) >= v5)
				goto LABEL_109;
			result = 328i64;
			break;
		case 29:
			if ((int)*(float*)(a3 + 580) >= v5)
				LABEL_109 :
				result = 0i64;
			else
				result = 329i64;
			break;
		default:
		LABEL_57:
			if (*(_QWORD*)(qword_140C65898 + 120) == a3 && (v17 = *(_QWORD*)(qword_140C65898 + 28048)) != 0)
				result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v17 + 120i64))(v17);
			else
				result = 175i64;
			break;
		}
	}
	else
	{
		switch (v4)
		{
		case 1:
			goto LABEL_61;
		case 3:
			if ((int)abs32((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 112i64))(a3)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 176i64;
			break;
		case 5:
			if ((int)abs32((int)*(float*)(a3 + 540)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 50i64;
			break;
		case 6:
			if ((int)abs32((int)*(float*)(a3 + 544)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 51i64;
			break;
		case 7:
			if ((int)abs32((int)*(float*)(a3 + 548)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 52i64;
			break;
		case 8:
			if ((int)abs32((int)*(float*)(a3 + 552)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 53i64;
			break;
		case 9:
			if ((int)abs32((int)*(float*)(a3 + 556)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 54i64;
			break;
		case 10:
			if ((int)abs32((int)*(float*)(a3 + 560)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 55i64;
			break;
		case 11:
			if ((int)abs32((int)*(float*)(a3 + 564)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 56i64;
			break;
		case 15:
			if ((int)abs32((int)*(float*)(a3 + 536)) >= (int)abs32((int)(float)((float)(sub_140462A90(a3)
				* (float)*(int*)(v3 + 4 * a1 + 176))
				+ 0.5)))
				goto LABEL_109;
			result = 167i64;
			break;
		case 16:
			if ((int)abs32((int)*(float*)(a3 + 568)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 177i64;
			break;
		case 20:
			if ((int)abs32(*(_DWORD*)(a3 + 1200)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 250i64;
			break;
		case 21:
			if ((int)abs32((*(__int64(__fastcall**)(__int64))(*(_QWORD*)a3 + 136i64))(a3)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 254i64;
			break;
		case 22:
			v7 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 56),
				0i64);
			v8 = v7;
			if (!v7 || (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v7 + 64i64))(v7))
				v9 = 0.0;
			else
				v9 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v8 + 152i64))(v8);
			if ((int)abs32((int)v9) >= (int)abs32(v5))
				goto LABEL_109;
			result = 275i64;
			break;
		case 23:
			v10 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 60),
				0i64);
			v11 = v10;
			if (v10 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v10 + 64i64))(v10) == 1)
				v12 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v11 + 152i64))(v11);
			else
				v12 = 0.0;
			if ((int)abs32((int)v12) >= (int)abs32(v5))
				goto LABEL_109;
			result = 276i64;
			break;
		case 24:
			v13 = (*(__int64(__fastcall**)(__int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65980 + 40i64))(
				qword_140C65980,
				*(unsigned int*)(qword_140C65980 + 64),
				0i64);
			v14 = v13;
			if (v13 && (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v13 + 64i64))(v13) == 2)
				v15 = (float)(*(int(__fastcall**)(__int64))(*(_QWORD*)v14 + 152i64))(v14);
			else
				v15 = 0.0;
			v16 = (int)abs32((int)v15) < (int)abs32(v5);
			goto LABEL_54;
		case 27:
			if ((int)abs32((int)*(float*)(a3 + 572)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 327i64;
			break;
		case 28:
			if ((int)abs32((int)*(float*)(a3 + 576)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 328i64;
			break;
		case 29:
			if ((int)abs32((int)*(float*)(a3 + 580)) >= (int)abs32(v5))
				goto LABEL_109;
			result = 329i64;
			break;
		default:
			goto LABEL_57;
		}
	}
	return result;
}
// 140B7B530: using guessed type __int128 xmmword_140B7B530;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65980: using guessed type __int64 qword_140C65980;

