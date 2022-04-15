//----- (0000000140272A30) ----------------------------------------------------
void __fastcall sub_140272A30(__int64 a1, __int64 a2, int a3)
{
	__int64 v3; // r12
	__int64 v7; // rdi
	__int64 v8; // rcx
	__int64 v9; // rdx
	__int64 v10; // rcx
	_DWORD* v11; // rax
	_DWORD* v12; // r14
	__int64 v13; // rax
	_DWORD* v14; // rcx
	int v15; // ebx
	void(__fastcall * **v16)(_QWORD); // rcx
	__int64 v17; // rcx
	__int64 v18; // rsi
	__int64 v19; // rcx
	__int64(__fastcall * *TlsValue)(); // [rsp+20h] [rbp-40h] BYREF
	__int64 v21; // [rsp+28h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+30h] [rbp-30h]
	__int64 v23[4]; // [rsp+40h] [rbp-20h] BYREF
	__int64 v24; // [rsp+90h] [rbp+30h] BYREF

	v3 = *(_QWORD*)(a1 + 7712);
	if (!*(_DWORD*)a2)
	{
		sub_14026C260(a1);
		v7 = *(_QWORD*)(a2 + 8);
		*(_DWORD*)(a1 + 7684) = 0;
		if (v7)
		{
			*(_QWORD*)(a1 + 7688) = v7;
			(**(void(__fastcall***)(__int64))v7)(v7);
			*(_DWORD*)(a1 + 7704) = *(_DWORD*)(v7 + 36);
			*(_QWORD*)(a1 + 7712) = *(_QWORD*)(v7 + 96);
			v8 = *(_QWORD*)(a1 + 7712);
			*(_DWORD*)(a1 + 7708) = dword_140AE5228[11 * *(int*)(v7 + 36)];
			if (!v8)
				goto LABEL_24;
			goto LABEL_4;
		}
		v8 = *(_QWORD*)(a1 + 7720);
		v9 = *(int*)(a1 + 68);
		*(_DWORD*)(a1 + 7704) = v9;
		*(_QWORD*)(a1 + 7712) = v8;
		*(_DWORD*)(a1 + 7708) = dword_140AE5228[11 * v9];
		if (v8)
			LABEL_4:
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
	LABEL_24:
		if (*(_QWORD*)(a1 + 7712) != v3)
		{
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(a1 + 6608) + 312i64))(*(_QWORD*)(a1 + 6608));
			*(_DWORD*)(a1 + 7744) = 1;
		}
		return;
	}
	v10 = *(_QWORD*)(a2 + 8);
	if (!v10)
	{
		sub_14026C260(a1);
		*(_DWORD*)(a1 + 7708) = 0;
		goto LABEL_24;
	}
	v11 = (_DWORD*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 24i64))(v10);
	v12 = v11;
	if (*(_DWORD*)(a2 + 20) < v11[5])
	{
		if ((*(_BYTE*)(*(_QWORD*)(a1 + 7032) + 4i64 * (int)v11[7]) & 1) != 0)
		{
			if (dword_140AE64C0[v11[6]])
			{
				sub_14026C260(a1);
				*(_DWORD*)(a1 + 7684) = *(_DWORD*)a2;
				v16 = *(void(__fastcall****)(_QWORD))(a2 + 8);
				*(_QWORD*)(a1 + 7688) = v16;
				(**v16)(v16);
				*(_DWORD*)(a1 + 7696) = *(_DWORD*)(a2 + 16);
				*(_DWORD*)(a1 + 7700) = *(_DWORD*)(a2 + 20);
				*(_DWORD*)(a1 + 7704) = v12[6];
				*(_DWORD*)(a1 + 7708) = dword_140AE5228[11 * v12[6]];
				if (*(_DWORD*)a2 == 1)
				{
					v17 = *(unsigned int*)(a2 + 20);
				}
				else
				{
					if (*(_DWORD*)a2 != 2)
						goto LABEL_24;
					v17 = (unsigned int)(*(_DWORD*)(a2 + 16) + 6 * *(_DWORD*)(a2 + 20));
				}
				v18 = *(_QWORD*)(a2 + 8);
				v19 = *(_QWORD*)(*(_QWORD*)(v18 + 128) + 8 * v17);
				*(_QWORD*)(a1 + 7712) = v19;
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v19 + 8i64))(v19);
				if (a3)
					*(_DWORD*)(v18 + 96) = 0;
				else
					*(_DWORD*)(v18 + 96) = *(_DWORD*)(v18 + 96);
				goto LABEL_24;
			}
			TlsValue = &off_140B5E648;
			v21 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v13 = 0x141DE1BE0i64;
			v14 = &unk_140C8A2E4;
		}
		else
		{
			TlsValue = &off_140B5E648;
			v21 = 0i64;
			lpTlsValue = TlsGetValue(dwTlsIndex);
			TlsSetValue(dwTlsIndex, &TlsValue);
			v13 = 0x141DE16F0i64;
			v14 = &unk_140C8A2E0;
		}
	}
	else
	{
		TlsValue = &off_140B5E648;
		v21 = 0i64;
		lpTlsValue = TlsGetValue(dwTlsIndex);
		TlsSetValue(dwTlsIndex, &TlsValue);
		v13 = 0x141DE1790i64;
		v14 = &unk_140C8A2F8;
	}
	v24 = v13;
	v23[0] = (__int64)TlsValue;
	v23[1] = v21;
	v23[2] = (__int64)lpTlsValue;
	v15 = sub_1401971E0(v14, 14, &v24, v23, TlsValue);
	TlsValue = &off_140B5E648;
	TlsSetValue(dwTlsIndex, lpTlsValue);
	if (v15)
		DebugBreak();
}
// 140AE5228: using guessed type _DWORD[288];
// 140AE64C0: using guessed type int dword_140AE64C0[56];
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();

