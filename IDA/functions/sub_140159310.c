//----- (0000000140159310) ----------------------------------------------------
_OWORD* __fastcall sub_140159310(__int64 a1)
{
	__int64 v2; // rcx
	int* v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	int* v6; // rdx
	__int64 v7; // rax
	int* v8; // rdx
	__int64 v9; // rax
	__int64 v10; // rax
	int* v11; // rdx
	_OWORD* result; // rax
	__int64 v13; // rdi
	__int64 v14; // rax
	bool v15; // zf
	int* v16; // rcx
	int* v17; // r14
	unsigned __int64 v18; // r8
	unsigned __int64 v19; // rbx
	unsigned __int64 v20; // rbx
	__int64 v21; // rax
	int* v22; // rcx
	int* v23; // r14
	unsigned __int64 v24; // r8
	unsigned __int64 v25; // rbx
	unsigned __int64 v26; // rbx
	__int64 v27; // rax
	int* v28; // rcx
	int* v29; // r14
	unsigned __int64 v30; // r8
	unsigned __int64 v31; // rbx
	unsigned __int64 v32; // rbx
	int* v33; // rcx
	int* v34; // rdi
	unsigned __int64 v35; // r8
	unsigned __int64 v36; // rbx
	unsigned __int64 v37; // rbx

	v2 = *(_QWORD*)(a1 + 24);
	if (v2)
	{
		v3 = (int*)&unk_1409DBD34;
		*(_QWORD*)(a1 + 16) = *(_QWORD*)(v2 + 16);
		if (*(_QWORD*)(v2 + 72))
			v3 = *(int**)(v2 + 72);
		v4 = 0i64;
		v5 = 0i64;
		if (*(_WORD*)v3)
		{
			do
				++v5;
			while (*((_WORD*)v3 + v5));
		}
		sub_14001C480(a1 + 64, v3, (int*)((char*)v3 + 2 * v5));
		v6 = (int*)&unk_1409DBD7C;
		v7 = 0i64;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 168i64))
			v6 = *(int**)(*(_QWORD*)(a1 + 24) + 168i64);
		if (*(_WORD*)v6)
		{
			do
				++v7;
			while (*((_WORD*)v6 + v7));
		}
		sub_14001C480(a1 + 160, v6, (int*)((char*)v6 + 2 * v7));
		v8 = (int*)&unk_1409DBD4C;
		v9 = 0i64;
		if (*(_QWORD*)(*(_QWORD*)(a1 + 24) + 136i64))
			v8 = *(int**)(*(_QWORD*)(a1 + 24) + 136i64);
		if (*(_WORD*)v8)
		{
			do
				++v9;
			while (*((_WORD*)v8 + v9));
		}
		sub_14001C480(a1 + 128, v8, (int*)((char*)v8 + 2 * v9));
		v10 = *(_QWORD*)(a1 + 24);
		v11 = (int*)&unk_1409DBD9C;
		if (*(_QWORD*)(v10 + 104))
			v11 = *(int**)(v10 + 104);
		if (*(_WORD*)v11)
		{
			do
				++v4;
			while (*((_WORD*)v11 + v4));
		}
		sub_14001C480(a1 + 96, v11, (int*)((char*)v11 + 2 * v4));
		*(_OWORD*)(a1 + 192) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 192i64);
		*(_OWORD*)(a1 + 208) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 208i64);
		*(_OWORD*)(a1 + 224) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 224i64);
		*(_OWORD*)(a1 + 240) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 240i64);
		*(_OWORD*)(a1 + 256) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 256i64);
		*(_OWORD*)(a1 + 272) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 272i64);
		*(_OWORD*)(a1 + 288) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 288i64);
		*(_OWORD*)(a1 + 304) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 304i64);
		*(_OWORD*)(a1 + 320) = *(_OWORD*)(*(_QWORD*)(a1 + 24) + 320i64);
		result = *(_OWORD**)(a1 + 24);
		*(_OWORD*)(a1 + 336) = result[21];
	}
	else
	{
		v13 = 0i64;
		v14 = 0i64;
		do
			v15 = aDefault_10[++v14] == 0;
		while (!v15);
		v16 = *(int**)(a1 + 72);
		v17 = (int*)&aDefault_10[v14];
		v18 = (__int64)(*(_QWORD*)(a1 + 80) - (_QWORD)v16) >> 1;
		v19 = (2 * v14) >> 1;
		if (v19 > v18)
		{
			sub_1407DB590(v16, (int*)L"Default", 2 * v18);
			sub_14001C310(
				(_QWORD*)(a1 + 64),
				(int*)&aDefault_10[(__int64)(*(_QWORD*)(a1 + 80) - *(_QWORD*)(a1 + 72)) >> 1],
				v17);
		}
		else
		{
			v20 = 2 * v19;
			sub_1407DB590(v16, (int*)L"Default", v20);
			sub_14001C2B0(a1 + 64, (int*)(v20 + *(_QWORD*)(a1 + 72)), *(int**)(a1 + 80));
		}
		v21 = 0i64;
		do
			v15 = aDefault_11[++v21] == 0;
		while (!v15);
		v22 = *(int**)(a1 + 168);
		v23 = (int*)&aDefault_11[v21];
		v24 = (__int64)(*(_QWORD*)(a1 + 176) - (_QWORD)v22) >> 1;
		v25 = (2 * v21) >> 1;
		if (v25 > v24)
		{
			sub_1407DB590(v22, (int*)L"Default", 2 * v24);
			sub_14001C310(
				(_QWORD*)(a1 + 160),
				(int*)&aDefault_11[(__int64)(*(_QWORD*)(a1 + 176) - *(_QWORD*)(a1 + 168)) >> 1],
				v23);
		}
		else
		{
			v26 = 2 * v25;
			sub_1407DB590(v22, (int*)L"Default", v26);
			sub_14001C2B0(a1 + 160, (int*)(v26 + *(_QWORD*)(a1 + 168)), *(int**)(a1 + 176));
		}
		v27 = 0i64;
		do
			v15 = aTargetoffscree[++v27] == 0;
		while (!v15);
		v28 = *(int**)(a1 + 136);
		v29 = (int*)&aTargetoffscree[v27];
		v30 = (__int64)(*(_QWORD*)(a1 + 144) - (_QWORD)v28) >> 1;
		v31 = (2 * v27) >> 1;
		if (v31 > v30)
		{
			sub_1407DB590(v28, (int*)L"TargetOffscreenRight", 2 * v30);
			sub_14001C310(
				(_QWORD*)(a1 + 128),
				(int*)&aTargetoffscree[(__int64)(*(_QWORD*)(a1 + 144) - *(_QWORD*)(a1 + 136)) >> 1],
				v29);
		}
		else
		{
			v32 = 2 * v31;
			sub_1407DB590(v28, (int*)L"TargetOffscreenRight", v32);
			sub_14001C2B0(a1 + 128, (int*)(v32 + *(_QWORD*)(a1 + 136)), *(int**)(a1 + 144));
		}
		do
			v15 = aWhitefill_13[++v13] == 0;
		while (!v15);
		v33 = *(int**)(a1 + 104);
		v34 = (int*)&aWhitefill_13[v13];
		v35 = (__int64)(*(_QWORD*)(a1 + 112) - (_QWORD)v33) >> 1;
		v36 = ((char*)v34 - (char*)L"WhiteFill") >> 1;
		if (v36 > v35)
		{
			sub_1407DB590(v33, (int*)L"WhiteFill", 2 * v35);
			result = sub_14001C310(
				(_QWORD*)(a1 + 96),
				(int*)&aWhitefill_13[(__int64)(*(_QWORD*)(a1 + 112) - *(_QWORD*)(a1 + 104)) >> 1],
				v34);
		}
		else
		{
			v37 = 2 * v36;
			sub_1407DB590(v33, (int*)L"WhiteFill", v37);
			result = sub_14001C2B0(a1 + 96, (int*)(v37 + *(_QWORD*)(a1 + 104)), *(int**)(a1 + 112));
		}
		*(_OWORD*)(a1 + 192) = xmmword_140B7AD00;
		*(_OWORD*)(a1 + 208) = xmmword_140B7B1C0;
		*(_OWORD*)(a1 + 224) = xmmword_140B7AD00;
		*(_OWORD*)(a1 + 240) = xmmword_140B7B1C0;
		*(_OWORD*)(a1 + 256) = xmmword_140B7AD00;
		*(_OWORD*)(a1 + 272) = xmmword_140B7B240;
		*(_OWORD*)(a1 + 288) = xmmword_140B7B240;
		*(_OWORD*)(a1 + 304) = xmmword_140B7AF00;
		*(_OWORD*)(a1 + 320) = xmmword_140B7AF00;
		*(_OWORD*)(a1 + 336) = xmmword_140B7B0C0;
	}
	return result;
}
// 140A353D8: using guessed type wchar_t aWhitefill_13[10];
// 140A35420: using guessed type wchar_t aDefault_10[8];
// 140A35430: using guessed type wchar_t aTargetoffscree[21];
// 140A35460: using guessed type wchar_t aDefault_11[8];
// 140B7AD00: using guessed type __int128 xmmword_140B7AD00;
// 140B7AF00: using guessed type __int128 xmmword_140B7AF00;
// 140B7B0C0: using guessed type __int128 xmmword_140B7B0C0;
// 140B7B1C0: using guessed type __int128 xmmword_140B7B1C0;
// 140B7B240: using guessed type __int128 xmmword_140B7B240;

