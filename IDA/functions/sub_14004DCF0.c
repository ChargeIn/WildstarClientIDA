//----- (000000014004DCF0) ----------------------------------------------------
__int64 __fastcall sub_14004DCF0(__int64 a1)
{
	int* v2; // rbx
	_QWORD* v3; // rdi
	__int64 v4; // rcx
	__int64 v5; // rbx
	__int64 v6; // rax
	unsigned int* v7; // r9
	__int64 v8; // rax
	char** v9; // rbx
	char* v10; // rsi
	__int64 v11; // rax
	__int64 v12; // r8
	_QWORD* v13; // rax
	__int64 v14; // rcx
	__int64* v15; // rax
	unsigned __int64* v16; // r10
	unsigned __int64 v17; // r8
	__int64* v18; // rsi
	__int64 v19; // rax
	unsigned int* v20; // r9
	__int64 v22; // [rsp+20h] [rbp-18h] BYREF
	int v23; // [rsp+28h] [rbp-10h]

	v2 = sub_14018B280(8i64, 0);
	if (v2)
		*(_QWORD*)v2 = off_140B55A58;
	else
		v2 = 0i64;
	if ((int)sub_1400F1B30(a1 + 384, (char(__fastcall***)(_QWORD))v2) < 0)
		sub_14018B900((__int64)v2, 0);
	v3 = *(_QWORD**)(a1 + 400);
	sub_1400569B0((__int64)v3, (unsigned __int64*)"Client.ScreenModelManager");
	v4 = v3[2];
	*(_QWORD*)v4 = *(_QWORD*)(v4 - 16);
	*(_DWORD*)(v4 + 8) = *(_DWORD*)(v4 - 8);
	v3[2] += 16i64;
	v5 = v3[2];
	v6 = sub_140062650((__int64)v3, (unsigned __int64*)"__index", 7ui64);
	v7 = (unsigned int*)(v3[2] - 16i64);
	v22 = v6;
	v23 = 4;
	sub_14005EA50((__int64)v3, (__int64*)(v5 - 32), (int*)&v22, v7);
	v3[2] -= 16i64;
	v8 = v3[2];
	v9 = &off_140B55A70;
	if ("__gc")
	{
		do
		{
			v10 = v9[1];
			if (*(_QWORD*)(v3[4] + 120i64) >= *(_QWORD*)(v3[4] + 112i64))
				sub_14005E2C0((__int64)v3);
			v11 = v3[5];
			if (v11 == v3[10])
				v12 = v3[15];
			else
				v12 = *(_QWORD*)(**(_QWORD**)(v11 + 8) + 24i64);
			v13 = sub_140060AB0((__int64)v3, 0, v12);
			v13[4] = v10;
			v14 = v3[2];
			*(_QWORD*)v14 = v13;
			*(_DWORD*)(v14 + 8) = 6;
			v3[2] += 16i64;
			v15 = (__int64*)sub_1400580E0((__int64)v3, -2);
			v17 = -1i64;
			v18 = v15;
			do
				++v17;
			while (*((_BYTE*)v16 + v17));
			v19 = sub_140062650((__int64)v3, v16, v17);
			v20 = (unsigned int*)(v3[2] - 16i64);
			v22 = v19;
			v23 = 4;
			sub_14005EA50((__int64)v3, v18, (int*)&v22, v20);
			v3[2] -= 16i64;
			v8 = v3[2];
			v9 += 2;
		} while (*v9);
	}
	v3[2] = v8;
	return sub_140049D20(a1);
}
// 14004DE43: variable 'v16' is possibly undefined
// 140B55A58: using guessed type __int64 (__fastcall *off_140B55A58[3])();
// 140B55A70: using guessed type char *off_140B55A70;

