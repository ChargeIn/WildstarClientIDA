//----- (00000001403B9C60) ----------------------------------------------------
__int64 __fastcall sub_1403B9C60(__int64 a1, int* a2)
{
	int v4; // r14d
	unsigned int v5; // edx
	__int64 v6; // rsi
	__int64 v7; // rbp
	__int64 v8; // rdx
	__int64 v9; // rcx
	void(__fastcall * **v10)(_QWORD, __int64); // rcx
	int v11; // r8d
	unsigned int v12; // ecx
	_DWORD* v13; // rax
	int v14; // ebx
	unsigned int v16; // ebp
	__int64 v17; // rsi
	int v18; // edx
	int v19; // r8d
	__int64 v20; // rax
	int v21; // r9d
	__int64 v22; // rcx
	void(__fastcall * **v23)(_QWORD, __int64); // rcx
	int v24; // ecx
	int v25; // eax
	__int64 v26; // rdx
	__int64(__fastcall * *TlsValue)(); // [rsp+30h] [rbp-58h] BYREF
	__int128 v28; // [rsp+38h] [rbp-50h]
	__int64(__fastcall * *v29)(); // [rsp+50h] [rbp-38h] BYREF
	__int128 v30; // [rsp+58h] [rbp-30h]
	__int64 v31; // [rsp+98h] [rbp+10h] BYREF

	v4 = 0;
	if ((unsigned int)(*a2 - 7) <= 1 || !*a2)
		sub_1403BDA00(a1);
	v5 = a2[2];
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
	LABEL_34:
		v24 = 9;
		if (!*a2)
		{
			v25 = 9;
			if (*(_DWORD*)(a1 + 4288))
				v25 = 0;
			*(_DWORD*)(a1 + 5272) = v25;
		}
		v26 = *a2;
		if ((unsigned int)(v26 - 7) <= 1)
		{
			if (*(_DWORD*)(a1 + 4 * v26 + 4288))
				v24 = *a2;
			*(_DWORD*)(a1 + 5276) = v24;
		}
		sub_1400EA3E0(*(_QWORD*)(a1 + 29504), "ShowActionBarShortcut", byte_1409E98AC);
		return 0i64;
	}
	v11 = 1;
	v12 = 0;
	v13 = (_DWORD*)*((_QWORD*)a2 + 2);
	while (*v13)
	{
		++v12;
		++v13;
		if (v12 >= v5)
			goto LABEL_21;
	}
	v11 = 0;
LABEL_21:
	*(_DWORD*)(a1 + 4i64 * *a2 + 4288) = v11;
	if (*(_DWORD*)(a1 + 4i64 * *a2 + 4288))
	{
		v16 = 0;
		v17 = 0i64;
		do
		{
			if (v16 >= a2[2])
			{
				v22 = *(_QWORD*)(a1 + 8 * (v17 + 12i64 * *a2) + 4328);
				if (v22)
				{
					if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v22 + 16i64))(v22))
					{
						v23 = *(void(__fastcall****)(_QWORD, __int64))(a1 + 8 * (v17 + 12i64 * *a2) + 4328);
						if (v23)
							(**v23)(v23, 1i64);
					}
					*(_QWORD*)(a1 + 8 * (v17 + 12i64 * *a2) + 4328) = 0i64;
				}
			}
			else
			{
				v18 = *a2;
				v19 = *(_DWORD*)(*((_QWORD*)a2 + 3) + 4 * v17);
				v20 = *((_QWORD*)a2 + 2);
				LODWORD(v31) = 4;
				v21 = *(_DWORD*)(v20 + 4 * v17);
				LODWORD(v20) = a2[1];
				HIDWORD(v31) = v16;
				++v4;
				*(_QWORD*)(a1 + 8 * (v17 + 12i64 * *a2) + 4328) = sub_1403C1BF0(a1, v18, v19, v21, (__int64)&v31, v20);
			}
			++v16;
			++v17;
		} while (v16 < 0xC);
		goto LABEL_34;
	}
	*(_QWORD*)&v28 = 0i64;
	TlsValue = &off_140B5E648;
	*((_QWORD*)&v28 + 1) = TlsGetValue(dwTlsIndex);
	TlsSetValue(dwTlsIndex, &TlsValue);
	v29 = TlsValue;
	v31 = 0x141DF0370i64;
	v30 = v28;
	v14 = sub_140196F30(&dword_140C8A6C8, 28, &v31, &v29);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, *((LPVOID*)&v28 + 1));
	if (v14)
		DebugBreak();
	return 2147500037i64;
}
// 1403B9D6F: conditional instruction was optimized away because edx.4!=0
// 1403B9CEF: variable 'v8' is possibly undefined
// 1409E98AC: using guessed type _BYTE byte_1409E98AC[72];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140C8A6C8: using guessed type _DWORD dword_140C8A6C8;

