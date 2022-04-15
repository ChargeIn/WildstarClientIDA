//----- (00000001403B9920) ----------------------------------------------------
__int64 __fastcall sub_1403B9920(__int64 a1, int* a2)
{
	int v4; // r15d
	unsigned int v5; // ecx
	__int64 v6; // rsi
	__int64 v7; // rbp
	__int64 v8; // rdx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	__int64 v11; // rax
	__int64 v12; // r9
	int v13; // ebx
	unsigned int v15; // ebp
	__int64 v16; // rsi
	int* v17; // r14
	int v18; // r8d
	int v19; // r9d
	int v20; // edx
	__int64 v21; // rcx
	void(__fastcall * **v22)(_QWORD, __int64); // rcx
	int v23; // ecx
	int v24; // eax
	__int64 v25; // rdx
	int v26; // [rsp+28h] [rbp-70h]
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-68h] BYREF
	__int64 v28; // [rsp+38h] [rbp-60h]
	LPVOID lpTlsValue; // [rsp+40h] [rbp-58h]
	__int64 v30[4]; // [rsp+50h] [rbp-48h] BYREF
	__int64 v31; // [rsp+A8h] [rbp+10h] BYREF

	v4 = 0;
	if ((unsigned int)(*a2 - 7) <= 1 || !*a2)
		sub_1403BDA00(a1);
	v5 = a2[1];
	if (!v5)
	{
		v6 = 0i64;
		v7 = 12i64;
		*(_DWORD*)(a1 + 4i64 * *a2 + 4288) = 0;
		do
		{
			if (*(_QWORD*)(a1 + 8 * (v6 + 12i64 * *a2) + 4328))
			{
				if (sub_1403A1600(a1) && **(_DWORD**)(*(_QWORD*)(a1 + 27880) + 112i64) == *(_DWORD*)(v8 + 276))
					sub_1403A1510(a1);
				v9 = *(_QWORD*)(a1 + 8 * (v6 + 12i64 * *a2) + 4328);
				if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v9 + 16i64))(v9))
				{
					v10 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 8 * (v6 + 12i64 * *a2) + 4328);
					if (v10)
						(**v10)(v10, 1i64);
				}
				*(_QWORD*)(a1 + 8 * (v6 + 12i64 * *a2) + 4328) = 0i64;
			}
			++v6;
			--v7;
		} while (v7);
	LABEL_29:
		v23 = 9;
		if (!*a2)
		{
			v24 = 9;
			if (*(_DWORD*)(a1 + 4288))
				v24 = 0;
			*(_DWORD*)(a1 + 5272) = v24;
		}
		v25 = *a2;
		if ((unsigned int)(v25 - 7) <= 1)
		{
			if (*(_DWORD*)(a1 + 4 * v25 + 4288))
				v23 = *a2;
			*(_DWORD*)(a1 + 5276) = v23;
		}
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ShowActionBarShortcut", byte_1409E98AC);
		return 0i64;
	}
	v11 = sub_1401EAE20(v5);
	*(_DWORD*)(a1 + 4i64 * *a2 + 4288) = v11 != 0;
	if (v11)
	{
		v15 = 0;
		v16 = 0i64;
		v17 = (int*)(v11 + 52);
		do
		{
			v18 = *(v17 - 12);
			if (v18)
			{
				v19 = *v17;
				v20 = *a2;
				v26 = a2[2];
				LODWORD(v31) = 4;
				HIDWORD(v31) = v15;
				++v4;
				*(_QWORD*)(a1 + 8 * (v16 + 12i64 * *a2) + 4328) = sub_1403C1BF0(a1, v20, v18, v19, (__int64)&v31, v26);
			}
			else
			{
				v21 = *(_QWORD*)(a1 + 8 * (v16 + 12i64 * *a2) + 4328);
				if (v21)
				{
					if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v21 + 16i64))(v21))
					{
						v22 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 8 * (v16 + 12i64 * *a2) + 4328);
						if (v22)
							(**v22)(v22, 1i64);
					}
				}
				*(_QWORD*)(a1 + 8 * (v16 + 12i64 * *a2) + 4328) = 0i64;
			}
			++v15;
			++v16;
			++v17;
		} while (v15 < 0xC);
		goto LABEL_29;
	}
	v28 = 0i64;
	TlsValue = &off_140B5E648;
	lpTlsValue = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v12 = (unsigned int)a2[1];
	v30[0] = (__int64)TlsValue;
	v30[1] = v28;
	v31 = 0x141DF03E0i64;
	v30[2] = (__int64)lpTlsValue;
	v13 = sub_140196F30(&dword_140C8A6CC, 28, &v31, v12, v30);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v13)
		DebugBreak();
	return 2147500037i64;
}
// 1403B99AF: variable 'v8' is possibly undefined
// 1409E98AC: using guessed type _BYTE byte_1409E98AC[72];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A6CC: using guessed type _DWORD dword_140C8A6CC;

