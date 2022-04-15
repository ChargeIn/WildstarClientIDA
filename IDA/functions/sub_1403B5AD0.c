//----- (00000001403B5AD0) ----------------------------------------------------
__int64 __fastcall sub_1403B5AD0(__int64 a1, int* a2)
{
	__int64 v3; // rax
	_DWORD* v4; // rcx
	int v5; // eax
	int v6; // ebx
	__int64 v8; // rax
	int v9; // ebx
	__int64 v10; // rcx
	int v11; // eax
	__int64 v12; // rax
	_DWORD* v13; // rcx
	int v14; // xmm2_4
	int v15; // xmm1_4
	int v16; // xmm0_4
	__int64 v17; // rcx
	void(__fastcall * **v18)(_QWORD); // rcx
	__int64 v19; // rax
	__int64(__fastcall * *v20)(); // rax
	__int64 v21; // rcx
	__int64 v22; // rcx
	__int64 v23; // rcx
	__int64 i; // rbx
	__int64 v25; // rax
	__int64 v26; // rbx
	int v27; // edx
	unsigned int v28; // eax
	__int64 v29; // rax
	__int64 j; // rax
	__int64 k; // rax
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-40h] BYREF
	__int64(__fastcall * v33)(__int64, unsigned int, _DWORD*); // [rsp+38h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-30h]
	__int64(__fastcall * *v35)(); // [rsp+50h] [rbp-20h] BYREF
	__int64(__fastcall * v36)(__int64, unsigned int, _DWORD*); // [rsp+58h] [rbp-18h]
	LPVOID v37; // [rsp+60h] [rbp-10h]
	__int64 v38; // [rsp+80h] [rbp+10h] BYREF

	if (*(_QWORD*)(a1 + 120))
	{
		TlsValue = &off_140B5E648;
		v33 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v3 = 0x141DF0230i64;
		v4 = &unk_140C8A6D4;
	LABEL_3:
		v38 = v3;
		v35 = TlsValue;
		v36 = v33;
		v37 = lpTlsValue;
		v5 = sub_1401971E0(v4, 5, &v38, &v35);
	LABEL_4:
		v6 = v5;
		TlsValue = &off_140B5E648;
		TlsSetValue(dwTlsIndex, lpTlsValue);
		if (v6)
			DebugBreak();
		return 2147500037i64;
	}
	v8 = sub_1403D90D0(a1, *a2);
	v9 = 0;
	v10 = v8;
	*(_QWORD*)(a1 + 120) = v8;
	if (!v8)
	{
		v33 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v3 = 0x141DF0268i64;
		v4 = &unk_140C8A6DC;
		goto LABEL_3;
	}
	v11 = *(_DWORD*)(v8 + 416);
	*(_DWORD*)(a1 + 7040) = 0;
	*(_DWORD*)(a1 + 29952) = v11;
	v12 = v10;
	*(_OWORD*)(a1 + 29280) = *(_OWORD*)(v10 + 4576);
	*(_OWORD*)(a1 + 27920) = *(_OWORD*)(v10 + 3952);
	*(_QWORD*)(a1 + 25744) = v10;
	v13 = *(_DWORD**)(a1 + 29088);
	*(_DWORD*)(a1 + 27936) = 0;
	*(_QWORD*)(a1 + 25736) = 0i64;
	v14 = v13[14];
	v15 = v13[15];
	LODWORD(TlsValue) = v13[13];
	v16 = *(_DWORD*)(v12 + 4800);
	v13[14] = v14;
	v13[13] = v16;
	v13[15] = v15;
	v17 = *(_QWORD*)(a1 + 7152);
	if (v17)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v17 + 8i64))(v17);
		*(_QWORD*)(a1 + 7152) = 0i64;
	}
	v18 = *(void(__fastcall****)(_QWORD))(*(_QWORD*)(a1 + 120) + 272i64);
	*(_QWORD*)(a1 + 7152) = v18;
	if (!v18)
	{
		v33 = 0i64;
		TlsValue = &off_140B5E648;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v35 = TlsValue;
		v38 = 0x141DF01D0i64;
		v19 = *(_QWORD*)(a1 + 120);
		v36 = v33;
		v37 = lpTlsValue;
		v5 = sub_1401971E0(&dword_140C8A6D8, 5, &v38, *(unsigned int*)(v19 + 288), &v35);
		goto LABEL_4;
	}
	(**v18)(v18);
	TlsValue = 0i64;
	v33 = sub_1403CAC00;
	v20 = (__int64(__fastcall**)())sub_14001C280(a1);
	v21 = *(_QWORD*)(a1 + 7152);
	TlsValue = v20;
	(*(void(__fastcall**)(__int64, __int64(__fastcall***)()))(*(_QWORD*)v21 + 16i64))(v21, &TlsValue);
	sub_1403CACD0(a1);
	sub_1403C9F30(a1, *(_DWORD*)(*(_QWORD*)(a1 + 120) + 220i64));
	sub_1405A6580(a1);
	sub_1405F4DF0();
	v22 = *(_QWORD*)(qword_140C65898 + 7152);
	if (v22)
		v9 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v22 + 24i64))(v22);
	sub_1404CEDC0(v22, v9);
	sub_1400EA3E0(*(_QWORD*)(qword_140C65898 + 29504), "PlayerChanged", &unk_1409D11E2);
	for (i = qword_140C65BA8; *(_QWORD*)(i + 88); sub_140141C00(i + 80))
		sub_1405FA070(i, **(unsigned int***)(i + 80));
	v25 = *(_QWORD*)(a1 + 2728);
	v26 = *(_QWORD*)(v25 + 16);
	if (v26 != v25)
	{
		do
		{
			v27 = *(_DWORD*)(v26 + 32);
			if (v27)
			{
				v28 = sub_1407A1440(v23, v27, 1u);
				if (v28)
				{
					if ((unsigned int)sub_1403BAF90(a1, v28))
						sub_1403BADB0(a1, *(_DWORD*)(v26 + 32), 4u);
				}
			}
			v29 = *(_QWORD*)(v26 + 24);
			if (v29)
			{
				v26 = *(_QWORD*)(v26 + 24);
				for (j = *(_QWORD*)(v29 + 16); j; j = *(_QWORD*)(j + 16))
					v26 = j;
			}
			else
			{
				for (k = *(_QWORD*)(v26 + 8); v26 == *(_QWORD*)(k + 24); k = *(_QWORD*)(k + 8))
					v26 = k;
				if (*(_QWORD*)(v26 + 24) != k)
					v26 = k;
			}
		} while (v26 != *(_QWORD*)(a1 + 2728));
	}
	sub_1403B55E0((_QWORD*)a1);
	return 0i64;
}
// 1403B5D92: variable 'v22' is possibly undefined
// 1403B5E0A: variable 'v23' is possibly undefined
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65BA8: using guessed type __int64 qword_140C65BA8;
// 140C8A6D8: using guessed type _DWORD dword_140C8A6D8;

