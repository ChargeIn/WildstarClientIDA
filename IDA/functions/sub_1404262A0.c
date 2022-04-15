#include "../winhttp.h"

//----- (00000001404262A0) ----------------------------------------------------
void __fastcall sub_1404262A0(__int64 a1, unsigned int a2, __int64 a3, float* a4)
{
	__int64 v4; // rdi
	int v5; // r13d
	__int64 v10; // rbx
	__int64 v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rbx
	__int64 v14; // rax
	int v15; // eax
	float v16; // xmm6_4
	int v17; // r14d
	_QWORD* v18; // rax
	__int64 v19; // rdx
	unsigned __int64 v20; // rbx
	unsigned __int64* v21; // rdx
	unsigned __int64 v22; // r8
	__int64 v23; // rax
	__int64* v24; // rax
	float v25; // xmm6_4
	_QWORD* v26; // rax
	__int64 v27; // r10
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	__int64 v30; // rax
	__int64* v31; // rax
	float v32; // xmm6_4
	_QWORD* v33; // rax
	__int64 v34; // r10
	unsigned __int64* v35; // rdx
	__int64 v36; // rax
	__int64* v37; // rax
	__int64 v38; // rdx
	__int64 v39; // [rsp+40h] [rbp-58h] BYREF
	__int64 v40; // [rsp+48h] [rbp-50h]

	v4 = *(_QWORD*)(a1 + 400);
	v5 = dword_140DC30A4;
	if (*(_QWORD*)(*(_QWORD*)(v4 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v4 + 32) + 112i64))
		sub_14005E2C0(v4);
	v10 = *(_QWORD*)(v4 + 16);
	v11 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v10 + 8) = 5;
	*(_QWORD*)v10 = v11;
	v12 = *(_QWORD*)(v4 + 32);
	*(_QWORD*)(v4 + 16) += 16i64;
	if (*(_QWORD*)(v12 + 120) >= *(_QWORD*)(v12 + 112))
		sub_14005E2C0(v4);
	v13 = *(_QWORD*)(v4 + 16);
	v14 = sub_14005C1B0(v4, 0, 0);
	*(_DWORD*)(v13 + 8) = 5;
	*(_QWORD*)v13 = v14;
	*(_QWORD*)(v4 + 16) += 16i64;
	v15 = sub_1400578C0(v4);
	v16 = *a4;
	v17 = v15;
	v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v15);
	v19 = *(_QWORD*)(v4 + 16);
	*(_QWORD*)v19 = *v18;
	*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v20 = -1i64;
	v21 = (unsigned __int64*)sub_14018F0E0(&v39, word_1409E984C)[1];
	if (v21)
	{
		v22 = -1i64;
		do
			++v22;
		while (*((_BYTE*)v21 + v22));
		sub_140058710(v4, v21, v22);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
		*(_QWORD*)(v4 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v23 = *(_QWORD*)(v4 + 16);
	*(_DWORD*)(v23 + 8) = 3;
	*(double*)v23 = v16;
	*(_QWORD*)(v4 + 16) += 16i64;
	v24 = (__int64*)sub_1400580E0(v4, -3);
	sub_14005EA50(v4, v24, (int*)(*(_QWORD*)(v4 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v4 + 16) - 16i64));
	*(_QWORD*)(v4 + 16) -= 48i64;
	v25 = a4[1];
	v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v17);
	*(_QWORD*)v27 = *v26;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v28 = (unsigned __int64*)sub_14018F0E0(&v39, word_1409E981C)[1];
	if (v28)
	{
		v29 = -1i64;
		do
			++v29;
		while (*((_BYTE*)v28 + v29));
		sub_140058710(v4, v28, v29);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
		*(_QWORD*)(v4 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v30 = *(_QWORD*)(v4 + 16);
	*(_DWORD*)(v30 + 8) = 3;
	*(double*)v30 = v25;
	*(_QWORD*)(v4 + 16) += 16i64;
	v31 = (__int64*)sub_1400580E0(v4, -3);
	sub_14005EA50(v4, v31, (int*)(*(_QWORD*)(v4 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v4 + 16) - 16i64));
	*(_QWORD*)(v4 + 16) -= 48i64;
	v32 = a4[2];
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v4 + 32) + 160i64), v17);
	*(_QWORD*)v34 = *v33;
	*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(v4 + 16) += 16i64;
	v35 = (unsigned __int64*)sub_14018F0E0(&v39, word_1409E9804)[1];
	if (v35)
	{
		do
			++v20;
		while (*((_BYTE*)v35 + v20));
		sub_140058710(v4, v35, v20);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v4 + 16) + 8i64) = 0;
		*(_QWORD*)(v4 + 16) += 16i64;
	}
	if (v40)
		sub_14018B900(v40, 0);
	v36 = *(_QWORD*)(v4 + 16);
	*(_DWORD*)(v36 + 8) = 3;
	*(double*)v36 = v32;
	*(_QWORD*)(v4 + 16) += 16i64;
	v37 = (__int64*)sub_1400580E0(v4, -3);
	sub_14005EA50(v4, v37, (int*)(*(_QWORD*)(v4 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v4 + 16) - 16i64));
	*(_QWORD*)(v4 + 16) -= 48i64;
	sub_1400EA3E0(a1, "ChallengeFlashStartLocation", "iSfT", a2, a3, (float)((float)v5 * 0.001), v17);
	sub_1400579E0(v4, v38, v17);
}
// 14042643D: variable 'v27' is possibly undefined
// 1404264FD: variable 'v34' is possibly undefined
// 1404265FD: variable 'v38' is possibly undefined
// 1409E9804: using guessed type unsigned __int16 word_1409E9804[12];
// 1409E981C: using guessed type unsigned __int16 word_1409E981C[20];
// 1409E984C: using guessed type unsigned __int16 word_1409E984C[12];
// 140DC30A4: using guessed type int dword_140DC30A4;

