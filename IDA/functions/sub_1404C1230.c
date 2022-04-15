//----- (00000001404C1230) ----------------------------------------------------
__int64 __fastcall sub_1404C1230(__int64 a1, __m128* a2)
{
	int v4; // r9d
	__int64 v5; // rcx
	__int64* v6; // rdx
	__int64* v7; // r8
	__int64 v8; // rax
	__int64 v10; // rdi
	__int64 v11; // rax
	__int64 v12; // rax
	__int64* v13; // rdx
	__int64* v14; // r8
	__int64 v15; // r9
	__int64 v16; // rcx
	__int64 v17; // rax
	__int64 v18; // rax
	__int64 v19; // r8
	__int64 v20; // rax
	__int64 v21; // rax
	_DWORD* v22; // rcx
	__int64 v23; // rax
	unsigned int v24; // ecx
	__int64 v25; // rax
	int v26; // ebx
	__int64 v27; // rcx
	unsigned int v28; // edx
	__int64 v29; // rsi
	__int64 v30; // rax
	bool v31; // zf
	__m128* v32; // rax
	__int64 v33; // rax
	int v34; // ebx
	char TlsValue[24]; // [rsp+20h] [rbp-E0h] BYREF
	__int64 v36; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v37; // [rsp+40h] [rbp-C0h]
	_BYTE v38[64]; // [rsp+50h] [rbp-B0h] BYREF
	__int128 v39[6]; // [rsp+90h] [rbp-70h] BYREF
	__m128* v40[10]; // [rsp+F0h] [rbp-10h] BYREF

	v4 = *(_DWORD*)(*(_QWORD*)(a1 + 296) + 20i64);
	v5 = *(_QWORD*)(qword_140C659F0 + 824);
	v6 = *(__int64**)(v5 + 16);
	v7 = *(__int64**)(v5 + 24);
	if (v6 == v7)
		return 0i64;
	while (1)
	{
		v8 = *v6;
		if (*(_DWORD*)(*v6 + 188) == v4)
			break;
		if (++v6 == v7)
			return 0i64;
	}
	if (!v8)
		return 0i64;
	v10 = *(_QWORD*)(v8 + 280);
	if (!v10)
		return 0i64;
	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 344i64))(v10))
		return 0i64;
	v11 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 344i64))(v10);
	if (!(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v11 + 24i64))(v11))
		return 0i64;
	v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 344i64))(v10);
	if (!*(_DWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v12 + 24i64))(v12) + 208) || !*(_DWORD*)(a1 + 112))
		return 0i64;
	if ((unsigned int)(*(_DWORD*)(a1 + 128) - 1) <= 1)
	{
		v15 = *(unsigned int*)(*(_QWORD*)(a1 + 296) + 20i64);
		v16 = *(_QWORD*)(qword_140C659F0 + 824);
		v13 = *(__int64**)(v16 + 16);
		v14 = *(__int64**)(v16 + 24);
		if (v13 != v14)
		{
			while (1)
			{
				v17 = *v13;
				if (*(_DWORD*)(*v13 + 188) == (_DWORD)v15)
					break;
				if (++v13 == v14)
					goto LABEL_15;
			}
			if (v17)
			{
				v23 = sub_1402074E0(*(_DWORD*)(v17 + 68));
				if (v23)
				{
					v24 = *(_DWORD*)(a1 + 128) == 2 ? *(_DWORD*)(v23 + 8) : *(_DWORD*)(v23 + 4);
					v25 = sub_140203DA0(v24);
					if (!v25 || *(_DWORD*)(a1 + 112) != *(_DWORD*)(v25 + 8))
					{
						*(_QWORD*)&TlsValue[8] = 0i64;
						*(_QWORD*)TlsValue = &off_140B5E648;
						*(_QWORD*)&TlsValue[16] = TlsGetValue(dwTlsIndex);
						TlsSetValue(dwTlsIndex, TlsValue);
						v21 = 0x141E04640i64;
						v22 = &unk_140C8AD48;
						goto LABEL_25;
					}
				}
			}
		}
	}
LABEL_15:
	v18 = (*(__int64(__fastcall**)(__int64, __int64*, __int64*, __int64))(*(_QWORD*)v10 + 344i64))(
		v10,
		v13,
		v14,
		v15);
	v19 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v18 + 24i64))(v18);
	v20 = *(unsigned int*)(a1 + 112);
	if ((unsigned int)v20 >= *(_DWORD*)(v19 + 208))
	{
		*(_QWORD*)&TlsValue[8] = 0i64;
		*(_QWORD*)TlsValue = &off_140B5E648;
		*(_QWORD*)&TlsValue[16] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v21 = 0x141E04338i64;
		v22 = &unk_140C8AD4C;
		goto LABEL_25;
	}
	v27 = *(_QWORD*)(v19 + 216);
	v28 = *(_DWORD*)(a1 + 116);
	if (v28 >= *(_DWORD*)(v27 + 8 * v20 + 4))
	{
		*(_QWORD*)&TlsValue[8] = 0i64;
		*(_QWORD*)TlsValue = &off_140B5E648;
		*(_QWORD*)&TlsValue[16] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		v21 = 0x141E04298i64;
		v22 = &unk_140C8AD44;
	LABEL_25:
		v36 = v21;
		*(_OWORD*)v38 = *(_OWORD*)TlsValue;
		*(_QWORD*)&v38[16] = *(_QWORD*)&TlsValue[16];
		v26 = sub_140196F30(v22, 46, &v36, v38, *(_QWORD*)TlsValue);
		*(_QWORD*)TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[16]);
		if (v26)
			DebugBreak();
		return 0i64;
	}
	v29 = *(_QWORD*)(v19 + 200)
		+ 56i64 * *(unsigned __int16*)(*(_QWORD*)(v19 + 232) + 2i64 * (v28 + *(_DWORD*)(v27 + 8 * v20)));
	if (sub_140203520(*(_DWORD*)(a1 + 108))
		&& (v30 = *(unsigned int*)(a1 + 120), (unsigned int)v30 < *(_DWORD*)(v29 + 24)))
	{
		*(_QWORD*)&v38[8] = 0i64;
		*(_DWORD*)v38 = 1065353216;
		*(_QWORD*)&v38[24] = *(_QWORD*)(v29 + 32) + 48 * v30;
		v39[0] = *(unsigned __int64*)v38;
		*(_QWORD*)&v38[16] = *(_QWORD*)&v38[24] + 32i64;
		v39[1] = *(_OWORD*)&v38[16];
		sub_1401B0590((int*)v39, (__int64)v38);
		v31 = *(_DWORD*)(a1 + 120) == 0;
		v36 = (__int64)v38;
		if (v31)
		{
			v33 = sub_1404C27A0(a1, (__int64)v40);
			*(_QWORD*)&v39[0] = v36;
			v37 = v33;
			*((_QWORD*)&v39[0] + 1) = v33;
			sub_1401AFB10((__m128**)v39, a2);
		}
		else
		{
			v32 = (__m128*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 56i64))(v10);
			v40[0] = (__m128*)v36;
			v37 = (__int64)v32;
			v40[1] = v32;
			sub_1401AFB10(v40, a2);
		}
		return 1i64;
	}
	else
	{
		*(_QWORD*)&TlsValue[8] = 0i64;
		*(_QWORD*)TlsValue = &off_140B5E648;
		*(_QWORD*)&TlsValue[16] = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, TlsValue);
		*(_QWORD*)v38 = *(_QWORD*)TlsValue;
		v36 = 0x141E04358i64;
		*(_OWORD*)&v38[8] = *(_OWORD*)&TlsValue[8];
		v34 = sub_140196F30(&dword_140C8AD40, 46, &v36, v38);
		*(_QWORD*)TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, *(LPVOID*)&TlsValue[16]);
		if (v34)
			DebugBreak();
		return 0i64;
	}
}
// 1404C136B: variable 'v13' is possibly undefined
// 1404C136B: variable 'v14' is possibly undefined
// 1404C136B: variable 'v15' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C8AD40: using guessed type _DWORD dword_140C8AD40;

