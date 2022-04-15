//----- (0000000140152BF0) ----------------------------------------------------
__int64 __fastcall sub_140152BF0(__int64 a1, __int64 a2, __int64 a3, const __m128i* a4, const __m128i* a5)
{
	__int64 v5; // rdi
	int* v10; // rax
	int* v11; // rax
	int v12; // ecx
	__int64 v13; // r12
	_QWORD* v14; // rbx
	__int64 v15; // rcx
	int* v16; // rax
	int* v17; // r15
	_DWORD* v18; // r14
	const wchar_t* v19; // rax
	int* v20; // rdx
	__int64 v21; // rax
	int v22; // edx
	_QWORD* v23; // rbx
	__int64 v24; // rcx
	int* v25; // rax
	int* v26; // r14
	_DWORD* v27; // r12
	const wchar_t* v28; // rax
	int* v29; // rdx
	int v30; // ecx
	__int64 v32; // [rsp+90h] [rbp-21h] BYREF
	int* v33; // [rsp+98h] [rbp-19h]
	int* v34; // [rsp+A0h] [rbp-11h]
	int* v35; // [rsp+A8h] [rbp-9h]
	__int64 v36; // [rsp+B0h] [rbp-1h] BYREF
	int* v37; // [rsp+B8h] [rbp+7h]
	int* v38; // [rsp+C0h] [rbp+Fh]
	int* v39; // [rsp+C8h] [rbp+17h]
	__int64 v40; // [rsp+110h] [rbp+5Fh] BYREF
	__int64 v41; // [rsp+118h] [rbp+67h] BYREF

	v5 = 0i64;
	*(_QWORD*)a1 = off_140B55048;
	*(_DWORD*)(a1 + 8) = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)a1 = &off_140B5C740;
	*(_QWORD*)(a1 + 32) = 0i64;
	*(_QWORD*)(a1 + 40) = 0i64;
	*(_QWORD*)(a1 + 48) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 32) = v10;
	*(_QWORD*)(a1 + 40) = v10;
	*(_QWORD*)(a1 + 48) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	*(_QWORD*)(a1 + 64) = 0i64;
	*(_QWORD*)(a1 + 72) = 0i64;
	*(_QWORD*)(a1 + 80) = 0i64;
	v11 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 64) = v11;
	*(_QWORD*)(a1 + 72) = v11;
	*(_QWORD*)(a1 + 80) = v11 + 4;
	if (v11)
		*(_WORD*)v11 = 0;
	*(_QWORD*)(a1 + 88) = 0i64;
	*(_QWORD*)(a1 + 96) = 0i64;
	*(_QWORD*)(a1 + 104) = 0i64;
	*(_QWORD*)(a1 + 112) = 0i64;
	*(_QWORD*)(a1 + 128) = 0i64;
	if (a3)
	{
		v12 = *(_DWORD*)(a3 + 100);
		*(_DWORD*)(a1 + 96) = *(_DWORD*)(a3 + 96);
		*(_DWORD*)(a1 + 100) = v12;
	}
	v13 = a2 + 240;
	v14 = (_QWORD*)sub_140108E80(a2 + 240, a4);
	while (v14)
	{
		v15 = (__int64)(v14[12] - v14[11]) >> 3;
		if (!v15 || (int)v15 <= 1)
			break;
		if ((int)v15 > 0)
			v14 = *(_QWORD**)v14[11];
	}
	v16 = sub_14018B280(16i64, 0);
	v17 = v16;
	v33 = v16;
	v34 = v16;
	v35 = v16 + 4;
	if (v16)
		*(_WORD*)v16 = 0;
	v41 = 0i64;
	if (v14)
	{
		v18 = (_DWORD*)v14[7];
		if (!*(_QWORD*)v18 || (v19 = *(const wchar_t**)(*(_QWORD*)v18 + 40i64)) == 0i64)
			v19 = L"< No Texture Selected >";
		v20 = (int*)&unk_1409DB6FC;
		if (v19)
			v20 = (int*)v19;
		v21 = 0i64;
		if (*(_WORD*)v20)
		{
			do
				++v21;
			while (*((_WORD*)v20 + v21));
		}
		if ((2 * v21) >> 1)
		{
			sub_14001C310(&v32, v20, (int*)((char*)v20 + 2 * v21));
			v17 = v33;
		}
		else
		{
			sub_1407DB590(v17, v20, 0i64);
		}
		v22 = v18[8];
		LODWORD(v41) = v18[2];
		HIDWORD(v41) = v22;
	}
	v23 = (_QWORD*)sub_140108E80(v13, a5);
	while (v23)
	{
		v24 = (__int64)(v23[12] - v23[11]) >> 3;
		if (!v24 || (int)v24 <= 1)
			break;
		if ((int)v24 > 0)
			v23 = *(_QWORD**)v23[11];
	}
	v25 = sub_14018B280(16i64, 0);
	v26 = v25;
	v37 = v25;
	v38 = v25;
	v39 = v25 + 4;
	if (v25)
		*(_WORD*)v25 = 0;
	v40 = 0i64;
	if (v23)
	{
		v27 = (_DWORD*)v23[7];
		if (!*(_QWORD*)v27 || (v28 = *(const wchar_t**)(*(_QWORD*)v27 + 40i64)) == 0i64)
			v28 = L"< No Texture Selected >";
		v29 = (int*)&unk_1409DB6DC;
		if (v28)
			v29 = (int*)v28;
		if (*(_WORD*)v29)
		{
			do
				++v5;
			while (*((_WORD*)v29 + v5));
		}
		if ((2 * v5) >> 1)
		{
			sub_14001C310(&v36, v29, (int*)((char*)v29 + 2 * v5));
			v26 = v37;
		}
		else
		{
			sub_1407DB590(v26, v29, 0i64);
		}
		v30 = v27[8];
		LODWORD(v40) = v27[2];
		HIDWORD(v40) = v30;
	}
	sub_140153650(a1, *(_QWORD*)(a3 + 64), (__int64)v17, &v41, v26, &v40);
	if (v26)
		sub_14018B900((__int64)v26, 0);
	if (v17)
		sub_14018B900((__int64)v17, 0);
	return a1;
}
// 140B55048: using guessed type __int64 (__fastcall *off_140B55048[5])();
// 140B56A88: using guessed type wchar_t aNoTextureSelec[24];
// 140B5C740: using guessed type __int64 (__fastcall *off_140B5C740)();

