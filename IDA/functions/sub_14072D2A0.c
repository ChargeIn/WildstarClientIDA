//----- (000000014072D2A0) ----------------------------------------------------
__int64 __fastcall sub_14072D2A0(_QWORD* a1)
{
	__int64 v2; // rdx
	__int64 v3; // rbx
	__int64 v4; // rax
	unsigned int* v5; // r9
	__int64 v6; // rax
	char** v7; // rbx
	char* v8; // rsi
	__int64 v9; // rax
	__int64 v10; // r8
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64* v13; // rax
	unsigned __int64* v14; // r10
	unsigned __int64 v15; // r8
	__int64* v16; // rsi
	__int64 v17; // rax
	unsigned int* v18; // r9
	__int64 v19; // rax
	__int64 v20; // rbx
	__int64 v21; // rax
	unsigned int* v22; // r9
	__int64 v23; // rax
	__int64 v24; // rbx
	__int64 v25; // rax
	unsigned int* v26; // r9
	__int64 v27; // rax
	__int64 v28; // rbx
	__int64 v29; // rax
	unsigned int* v30; // r9
	__int64 v31; // rax
	__int64 v32; // rbx
	__int64 v33; // rax
	unsigned int* v34; // r9
	__int64 v36; // [rsp+20h] [rbp-18h] BYREF
	int v37; // [rsp+28h] [rbp-10h]

	sub_1400569B0((__int64)a1, (unsigned __int64*)"Game.Episode");
	v2 = a1[2];
	*(_QWORD*)v2 = *(_QWORD*)(v2 - 16);
	*(_DWORD*)(v2 + 8) = *(_DWORD*)(v2 - 8);
	a1[2] += 16i64;
	v3 = a1[2];
	v4 = sub_140062650((__int64)a1, (unsigned __int64*)"__index", 7ui64);
	v5 = (unsigned int*)(a1[2] - 16i64);
	v36 = v4;
	v37 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v3 - 32), (int*)&v36, v5);
	a1[2] -= 16i64;
	v6 = a1[2];
	v7 = &off_140C5ECD0;
	if (off_140C5ECD0)
	{
		do
		{
			v8 = v7[1];
			if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
				sub_14005E2C0((__int64)a1);
			v9 = a1[5];
			if (v9 == a1[10])
				v10 = a1[15];
			else
				v10 = *(_QWORD*)(**(_QWORD**)(v9 + 8) + 24i64);
			v11 = sub_140060AB0((__int64)a1, 0, v10);
			v11[4] = v8;
			v12 = a1[2];
			*(_QWORD*)v12 = v11;
			*(_DWORD*)(v12 + 8) = 6;
			a1[2] += 16i64;
			v13 = (__int64*)sub_1400580E0((__int64)a1, -2);
			v15 = -1i64;
			v16 = v13;
			do
				++v15;
			while (*((_BYTE*)v14 + v15));
			v17 = sub_140062650((__int64)a1, v14, v15);
			v18 = (unsigned int*)(a1[2] - 16i64);
			v36 = v17;
			v37 = 4;
			sub_14005EA50((__int64)a1, v16, (int*)&v36, v18);
			a1[2] -= 16i64;
			v6 = a1[2];
			v7 += 2;
		} while (*v7);
	}
	a1[2] = v6;
	sub_140057020(a1, "Episode", &off_140B746D0);
	v19 = a1[2];
	*(_QWORD*)v19 = 0i64;
	*(_DWORD*)(v19 + 8) = 3;
	a1[2] += 16i64;
	v20 = a1[2];
	v21 = sub_140062650((__int64)a1, (unsigned __int64*)"EpisodeState_Unknown", 0x14ui64);
	v22 = (unsigned int*)(a1[2] - 16i64);
	v36 = v21;
	v37 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v20 - 32), (int*)&v36, v22);
	a1[2] -= 16i64;
	v23 = a1[2];
	*(_QWORD*)v23 = 0x3FF0000000000000i64;
	*(_DWORD*)(v23 + 8) = 3;
	a1[2] += 16i64;
	v24 = a1[2];
	v25 = sub_140062650((__int64)a1, (unsigned __int64*)"EpisodeState_Mentioned", 0x16ui64);
	v26 = (unsigned int*)(a1[2] - 16i64);
	v36 = v25;
	v37 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v24 - 32), (int*)&v36, v26);
	a1[2] -= 16i64;
	v27 = a1[2];
	*(_QWORD*)v27 = 0x4000000000000000i64;
	*(_DWORD*)(v27 + 8) = 3;
	a1[2] += 16i64;
	v28 = a1[2];
	v29 = sub_140062650((__int64)a1, (unsigned __int64*)"EpisodeState_Active", 0x13ui64);
	v30 = (unsigned int*)(a1[2] - 16i64);
	v36 = v29;
	v37 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v28 - 32), (int*)&v36, v30);
	a1[2] -= 16i64;
	v31 = a1[2];
	*(_QWORD*)v31 = 0x4008000000000000i64;
	*(_DWORD*)(v31 + 8) = 3;
	a1[2] += 16i64;
	v32 = a1[2];
	v33 = sub_140062650((__int64)a1, (unsigned __int64*)"EpisodeState_Complete", 0x15ui64);
	v34 = (unsigned int*)(a1[2] - 16i64);
	v36 = v33;
	v37 = 4;
	sub_14005EA50((__int64)a1, (__int64*)(v32 - 32), (int*)&v36, v34);
	a1[2] -= 16i64;
	return 1i64;
}
// 14072D3B3: variable 'v14' is possibly undefined
// 140B746D0: using guessed type void *off_140B746D0;
// 140C5ECD0: using guessed type char *off_140C5ECD0;

