#include "../winhttp.h"

//----- (0000000140513480) ----------------------------------------------------
__int64 __fastcall sub_140513480(__int64 a1)
{
	__int64 v2; // rbx
	__int64 v3; // rax
	int v4; // ebp
	_QWORD* i; // rbx
	__int64 v6; // rax
	__int64 v7; // r14
	__int64 v8; // rcx
	__int64 v9; // rdi
	__int64 v10; // rax
	int v11; // r15d
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rax
	__int64* v15; // rax
	__int64 v16; // rcx
	__int64 v17; // rdi
	__int64 v18; // rax
	__int64 v19; // rcx
	__int64 v20; // rdi
	__int64 v21; // rax
	float v22; // xmm6_4
	__int64 v23; // rdi
	__int64 v24; // rax
	__int64 v25; // rax
	__int64* v26; // rax
	float v27; // xmm6_4
	__int64 v28; // rdi
	__int64 v29; // rax
	__int64 v30; // rax
	__int64* v31; // rax
	float v32; // xmm6_4
	__int64 v33; // rdi
	__int64 v34; // rax
	__int64 v35; // rax
	__int64* v36; // rax
	__int64 v37; // rdx
	unsigned __int16* v38; // r9
	float v39; // xmm6_4
	__int64 v40; // rdi
	__int64 v41; // rax
	__int64 v42; // rax
	__int64* v43; // rax

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	v4 = 0;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	for (i = *(_QWORD**)qword_140C7D5E8; i != (_QWORD*)qword_140C7D5E8; i = (_QWORD*)*i)
	{
		v6 = *(_QWORD*)(a1 + 16);
		v7 = i[2];
		++v4;
		*(_DWORD*)(v6 + 8) = 3;
		*(double*)v6 = (double)v4;
		v8 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v8 + 120) >= *(_QWORD*)(v8 + 112))
			sub_14005E2C0(a1);
		v9 = *(_QWORD*)(a1 + 16);
		v10 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v9 + 8) = 5;
		*(_QWORD*)v9 = v10;
		*(_QWORD*)(a1 + 16) += 16i64;
		v11 = *(_DWORD*)v7;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v12 = *(_QWORD*)(a1 + 16);
		v13 = sub_140062650(a1, (unsigned __int64*)"eType", 5ui64);
		*(_DWORD*)(v12 + 8) = 4;
		*(_QWORD*)v12 = v13;
		*(_QWORD*)(a1 + 16) += 16i64;
		v14 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v14 + 8) = 3;
		*(double*)v14 = (double)v11;
		*(_QWORD*)(a1 + 16) += 16i64;
		v15 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v15, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		v16 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) -= 32i64;
		if (*(_QWORD*)(v16 + 120) >= *(_QWORD*)(v16 + 112))
			sub_14005E2C0(a1);
		v17 = *(_QWORD*)(a1 + 16);
		v18 = sub_140062650(a1, qword_1409F17A4, 3ui64);
		*(_DWORD*)(v17 + 8) = 4;
		*(_QWORD*)v17 = v18;
		v19 = *(_QWORD*)(a1 + 32);
		*(_QWORD*)(a1 + 16) += 16i64;
		if (*(_QWORD*)(v19 + 120) >= *(_QWORD*)(v19 + 112))
			sub_14005E2C0(a1);
		v20 = *(_QWORD*)(a1 + 16);
		v21 = sub_14005C1B0(a1, 0, 0);
		*(_DWORD*)(v20 + 8) = 5;
		*(_QWORD*)v20 = v21;
		*(_QWORD*)(a1 + 16) += 16i64;
		v22 = *(float*)(v7 + 16);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v23 = *(_QWORD*)(a1 + 16);
		v24 = sub_140062650(a1, qword_1409F180C, 1ui64);
		*(_DWORD*)(v23 + 8) = 4;
		*(_QWORD*)v23 = v24;
		*(_QWORD*)(a1 + 16) += 16i64;
		v25 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v25 + 8) = 3;
		*(double*)v25 = v22;
		*(_QWORD*)(a1 + 16) += 16i64;
		v26 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		v27 = *(float*)(v7 + 20);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v28 = *(_QWORD*)(a1 + 16);
		v29 = sub_140062650(a1, qword_1409F17DC, 1ui64);
		*(_DWORD*)(v28 + 8) = 4;
		*(_QWORD*)v28 = v29;
		*(_QWORD*)(a1 + 16) += 16i64;
		v30 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v30 + 8) = 3;
		*(double*)v30 = v27;
		*(_QWORD*)(a1 + 16) += 16i64;
		v31 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v31, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		v32 = *(float*)(v7 + 24);
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v33 = *(_QWORD*)(a1 + 16);
		v34 = sub_140062650(a1, qword_1409F176C, 1ui64);
		*(_DWORD*)(v33 + 8) = 4;
		*(_QWORD*)v33 = v34;
		*(_QWORD*)(a1 + 16) += 16i64;
		v35 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v35 + 8) = 3;
		*(double*)v35 = v32;
		*(_QWORD*)(a1 + 16) += 16i64;
		v36 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v36, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		v38 = (unsigned __int16*)&unk_1409F175C;
		if (*(_QWORD*)(v7 + 40))
			v38 = *(unsigned __int16**)(v7 + 40);
		sub_1400F0090(a1, v37, (unsigned __int64*)&unk_1409F1794, v38);
		v39 = (float)*(int*)(v7 + 64) * 0.001;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
			sub_14005E2C0(a1);
		v40 = *(_QWORD*)(a1 + 16);
		v41 = sub_140062650(a1, (unsigned __int64*)"fTime", 5ui64);
		*(_DWORD*)(v40 + 8) = 4;
		*(_QWORD*)v40 = v41;
		*(_QWORD*)(a1 + 16) += 16i64;
		v42 = *(_QWORD*)(a1 + 16);
		*(_DWORD*)(v42 + 8) = 3;
		*(double*)v42 = v39;
		*(_QWORD*)(a1 + 16) += 16i64;
		v43 = (__int64*)sub_1400580E0(a1, -3);
		sub_14005EA50(a1, v43, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
		sub_14005EA50(
			a1,
			(__int64*)(*(_QWORD*)(a1 + 16) - 48i64),
			(int*)(*(_QWORD*)(a1 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
		*(_QWORD*)(a1 + 16) -= 32i64;
	}
	return 1i64;
}
// 140513818: variable 'v37' is possibly undefined
// 1409F176C: using guessed type unsigned __int64 qword_1409F176C[5];
// 1409F17A4: using guessed type unsigned __int64 qword_1409F17A4[6];
// 1409F17DC: using guessed type unsigned __int64 qword_1409F17DC[6];
// 1409F180C: using guessed type unsigned __int64 qword_1409F180C[3];
// 140C7D5E8: using guessed type __int64 qword_140C7D5E8;

