//----- (000000014010BA60) ----------------------------------------------------
__int64 __fastcall sub_14010BA60(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v3; // rdi
	__int64* v7; // r9
	__int64 v8; // r8
	int v9; // eax
	__int64 v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rbx
	__int64 v13; // r11
	__int64 v14; // r9
	__int64 v15; // rcx
	__int64 v16; // r8
	__int64 v17; // r10
	__int64 v18; // rax
	__int64 v19; // rax
	int v20; // r10d
	__int64 v21; // rcx
	__int64 v22; // rdx
	int v23; // eax
	__int64 v24; // rax
	const __m128i* v25; // rax
	unsigned __int64 v26; // rbx
	wchar_t* v27; // rdx
	__int64 v28; // rax
	wchar_t* v29; // rax
	__int64 result; // rax
	_WORD* v31; // rax
	bool v32; // [rsp+30h] [rbp-108h] BYREF
	unsigned int v33[3]; // [rsp+34h] [rbp-104h] BYREF
	__int128 v34; // [rsp+40h] [rbp-F8h]
	__int64 v35[3]; // [rsp+50h] [rbp-E8h] BYREF
	_QWORD v36[3]; // [rsp+68h] [rbp-D0h]
	__int64 v37[2]; // [rsp+80h] [rbp-B8h]
	int v38; // [rsp+90h] [rbp-A8h]
	char v39[96]; // [rsp+A0h] [rbp-98h] BYREF

	v3 = 0i64;
	v7 = v35;
	v8 = 0i64;
	do
	{
		v9 = *(_DWORD*)((char*)&unk_140A14E90 + v8);
		*(_DWORD*)((char*)v37 + v8) = 0;
		v8 += 4i64;
		*(_DWORD*)((char*)v36 + v8 + 4) = v9;
		*v7++ = 0i64;
	} while (v8 < 16);
	v10 = sub_1400D45E0((__int64)v39, a2, 0i64, a3, 0i64);
	v11 = *(_QWORD*)(v10 + 40);
	v12 = *(_QWORD*)(v10 + 16);
	v13 = *(_QWORD*)(v10 + 24);
	v34 = *(_OWORD*)v10;
	v14 = *(_QWORD*)(v10 + 32);
	v15 = *(_QWORD*)(v10 + 56);
	v16 = *(_QWORD*)(v10 + 48);
	v17 = v10;
	v18 = *(_QWORD*)(v10 + 64);
	v36[0] = v11;
	v37[0] = v18;
	v19 = *(_QWORD*)(v17 + 72);
	v20 = *(_DWORD*)(v17 + 80);
	*(_OWORD*)(a1 + 32) = v34;
	*(_QWORD*)(a1 + 80) = v16;
	v36[2] = v15;
	*(_QWORD*)(a1 + 72) = v11;
	*(_QWORD*)(a1 + 88) = v15;
	v38 = v20;
	v35[0] = v12;
	v35[1] = v13;
	v35[2] = v14;
	v36[1] = v16;
	v37[1] = v19;
	*(_QWORD*)(a1 + 48) = v12;
	*(_QWORD*)(a1 + 56) = v13;
	*(_QWORD*)(a1 + 64) = v14;
	v21 = 64i64;
	v22 = 4i64;
	do
	{
		v23 = *(_DWORD*)((char*)&v35[-2] + v21);
		v21 += 4i64;
		*(_DWORD*)(a1 + v21 + 28) = v23;
		--v22;
	} while (v22);
	*(_DWORD*)(a1 + 112) = v20;
	v24 = sub_1401A6B80(a3, L"Sprite");
	if (v24)
		v25 = (const __m128i*)sub_1401A4F40(v24 + 32);
	else
		v25 = 0i64;
	v26 = 0i64;
	*(_QWORD*)(a1 + 128) = sub_140108E80(a2 + 240, v25);
	do
	{
		v27 = off_140C3CD20[v26];
		v32 = 0;
		v28 = sub_1401A6B80(a3, v27);
		if (v28)
		{
			v29 = (wchar_t*)sub_1401A4F40(v28 + 32);
			sub_1401A52E0(v29, &v32);
			if (v32)
				v3 |= 1i64 << v26;
		}
		++v26;
	} while (v26 < 0x25);
	*(_QWORD*)(a1 + 8) = v3;
	*(_QWORD*)(a1 + 16) = sub_1400F6670(a3);
	v33[0] = -1;
	result = sub_1401A6B80(a3, L"ResizeHandle");
	if (result)
	{
		v31 = (_WORD*)sub_1401A4F40(result + 32);
		result = sub_1407DF428(v31, (__int64)L"%d", v33);
		if ((_DWORD)result == 1)
		{
			result = v33[0];
			if (v33[0] <= 7)
				*(_DWORD*)(a1 + 136) = v33[0];
		}
	}
	return result;
}
// 1409E4114: using guessed type wchar_t aD_16[3];
// 140A31908: using guessed type wchar_t aSprite[7];
// 140A31FE0: using guessed type wchar_t aResizehandle[13];
// 140C3CD20: using guessed type wchar_t *off_140C3CD20[37];
// 14010BA60: using guessed type char var_98[96];
// 14010BA60: using guessed type unsigned int var_104[3];

