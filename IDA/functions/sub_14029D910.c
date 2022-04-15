//----- (000000014029D910) ----------------------------------------------------
__int64 __fastcall sub_14029D910(__int64 a1, int a2)
{
	int v2; // ebx
	__int64 v4; // r9
	bool v5; // zf
	int v6; // ebx
	int v7; // r14d
	int v8; // r15d
	unsigned int v9; // r12d
	unsigned int v10; // r13d
	__int64 result; // rax
	int v12; // ecx
	int v13; // eax
	__int64 v14; // rax
	__int64 v15; // r8
	__int64* v16; // rbx
	__int64 v17; // rax
	__int64 v18; // r8
	int v19; // eax
	__int64 v20; // rdx
	__int64 v21; // rdx
	int v22; // eax
	unsigned int v23; // eax
	int v24; // ecx
	__int64 v25; // rax
	int v26; // eax
	HWND v27; // rcx
	LONG_PTR WindowLongPtrW; // rax
	HWND v29; // rcx
	_DWORD* v30; // rbx
	__int64 v31; // rcx
	__int64 v32; // rcx
	__int64 v33; // rcx
	__int64 v34; // rcx
	__int64 v35; // rcx
	__int64 v36; // rcx
	DWORD dwProcessId[3]; // [rsp+44h] [rbp-75h] BYREF
	__int128 v39; // [rsp+50h] [rbp-69h] BYREF
	__int64 v40; // [rsp+60h] [rbp-59h]
	__int128 v41; // [rsp+68h] [rbp-51h]
	__int64 v42; // [rsp+78h] [rbp-41h]
	__int64 v43; // [rsp+80h] [rbp-39h]
	__int64 v44; // [rsp+88h] [rbp-31h]
	__int64 v45; // [rsp+90h] [rbp-29h]
	__int128 v46; // [rsp+A0h] [rbp-19h] BYREF
	__int64 v47; // [rsp+B0h] [rbp-9h]
	unsigned int v48; // [rsp+B8h] [rbp-1h]
	int v49; // [rsp+C0h] [rbp+7h] BYREF
	int v50; // [rsp+C4h] [rbp+Bh]
	__int64 v51; // [rsp+C8h] [rbp+Fh]
	int v52; // [rsp+D0h] [rbp+17h]
	__int64 v53; // [rsp+D4h] [rbp+1Bh]
	unsigned int v54; // [rsp+DCh] [rbp+23h]

	v2 = a2;
	if (*(int*)(a1 + 64) >= 1)
	{
		if (a2 < 1)
		{
			if (*(_QWORD*)(a1 + 88) && (*(_BYTE*)(a1 + 56) & 2) != 0)
			{
				if (*(_DWORD*)(a1 + 72))
				{
					v30 = (_DWORD*)qword_140C636A0;
					++* (_DWORD*)qword_140C636A0;
					*(_DWORD*)(a1 + 72) = 0;
					ShowWindow(*(HWND*)(a1 + 48), 7);
					(*(void(__fastcall**)(_QWORD, _QWORD, _QWORD))(**(_QWORD**)(a1 + 88) + 80i64))(
						*(_QWORD*)(a1 + 88),
						0i64,
						0i64);
					sub_14029D680((_QWORD*)a1);
					--* v30;
					v2 = a2;
				}
				SetWindowLongPtrW(*(HWND*)(a1 + 48), -4, *(_QWORD*)(a1 + 80));
				qword_140C657C8 = 0i64;
			}
			v31 = *(_QWORD*)(a1 + 88);
			if (v31)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v31 + 16i64))(v31);
				*(_QWORD*)(a1 + 88) = 0i64;
			}
			v32 = *(_QWORD*)(a1 + 96);
			if (v32)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v32 + 16i64))(v32);
				*(_QWORD*)(a1 + 96) = 0i64;
			}
			v33 = *(_QWORD*)(a1 + 104);
			if (v33)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v33 + 16i64))(v33);
				*(_QWORD*)(a1 + 104) = 0i64;
			}
			v34 = *(_QWORD*)(a1 + 112);
			if (v34)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v34 + 16i64))(v34);
				*(_QWORD*)(a1 + 112) = 0i64;
			}
			v35 = *(_QWORD*)(a1 + 128);
			if (v35)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v35 + 16i64))(v35);
				*(_QWORD*)(a1 + 128) = 0i64;
			}
			v36 = *(_QWORD*)(a1 + 136);
			if (v36)
			{
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v36 + 16i64))(v36);
				*(_QWORD*)(a1 + 136) = 0i64;
			}
			*(_DWORD*)(a1 + 68) = 0;
		}
		goto LABEL_59;
	}
	if (a2 < 1)
	{
	LABEL_59:
		*(_DWORD*)(a1 + 64) = v2;
		return 0i64;
	}
	GetWindowThreadProcessId(*(HWND*)(a1 + 48), dwProcessId);
	if (dwProcessId[0] != GetCurrentProcessId())
	{
	LABEL_37:
		result = sub_14029DEC0(a1);
		if ((int)result < 0)
			return result;
		*(_DWORD*)(a1 + 68) = 1;
		goto LABEL_59;
	}
	v4 = *(_QWORD*)(a1 + 16);
	if (*(_QWORD*)(v4 + 6280))
	{
		v5 = (*(_BYTE*)(a1 + 56) & 2) == 0;
		v6 = *(_DWORD*)(a1 + 24);
		v7 = *(_DWORD*)(a1 + 28);
		LODWORD(v51) = *(_DWORD*)(a1 + 40);
		v8 = dword_140AE7F90[*(int*)(a1 + 32)];
		v49 = v6;
		v50 = v7;
		HIDWORD(v51) = 1;
		v9 = 0;
		v53 = 0i64;
		v52 = v8;
		v10 = 0;
		v54 = 0;
		if (!v5)
		{
			result = (*(__int64(__fastcall**)(_QWORD, int*, int*, _QWORD))(**(_QWORD**)(v4 + 6328) + 160i64))(
				*(_QWORD*)(v4 + 6328),
				&v49,
				&v49,
				*(_QWORD*)(v4 + 6336));
			if ((int)result < 0)
				return result;
			v8 = v52;
			v6 = v49;
			v7 = v50;
			v12 = v52;
			*(_DWORD*)(a1 + 24) = v49;
			*(_DWORD*)(a1 + 28) = v7;
			v13 = sub_14027A000(v12);
			v10 = HIDWORD(v53);
			v9 = v53;
			*(_DWORD*)(a1 + 32) = v13;
		}
		sub_1407E4830((int*)&v39, 0i64, 0x30ui64);
		*(_QWORD*)&v39 = __PAIR64__(v7, v6);
		v5 = (*(_BYTE*)(a1 + 56) & 2) == 0;
		*((_QWORD*)&v39 + 1) = __PAIR64__(v54, v8);
		v40 = 1i64;
		LODWORD(v41) = 32;
		DWORD2(v41) = 0;
		*(_QWORD*)&v46 = v51;
		v42 = 0x200000000i64;
		*((_QWORD*)&v46 + 1) = __PAIR64__(v10, v9);
		LODWORD(v47) = 1;
		if (v5 && !*(_DWORD*)(*(_QWORD*)(a1 + 16) + 228i64))
		{
			if (sub_140193C40())
			{
				v14 = *(_QWORD*)(a1 + 16);
				v15 = *(_QWORD*)(a1 + 48);
				DWORD1(v41) = 3;
				HIDWORD(v41) = 3;
				if ((*(int(__fastcall**)(_QWORD, _QWORD, __int64, __int128*, __int128*, _QWORD, __int64))(**(_QWORD**)(v14 + 6280) + 120i64))(
					*(_QWORD*)(v14 + 6280),
					*(_QWORD*)(v14 + 6336),
					v15,
					&v39,
					&v46,
					0i64,
					a1 + 96) >= 0)
					*(_QWORD*)(a1 + 148) = (*(_BYTE*)(a1 + 56) & 4) != 0;
			}
		}
		v16 = (__int64*)(a1 + 96);
		if (!*(_QWORD*)(a1 + 96))
		{
			v17 = *(_QWORD*)(a1 + 16);
			v18 = *(_QWORD*)(a1 + 48);
			DWORD1(v41) = 2;
			HIDWORD(v41) = 0;
			result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64, __int128*, __int128*, _QWORD, __int64))(**(_QWORD**)(v17 + 6280) + 120i64))(
				*(_QWORD*)(v17 + 6280),
				*(_QWORD*)(v17 + 6336),
				v18,
				&v39,
				&v46,
				0i64,
				a1 + 96);
			if ((int)result < 0)
				return result;
			v19 = *(_DWORD*)(a1 + 56);
			if ((v19 & 4) != 0)
			{
				if ((v19 & 2) != 0 || !(unsigned int)sub_1402649D0(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 6240i64)))
				{
					v21 = *v16;
					*(_QWORD*)(a1 + 148) = 1i64;
					sub_140282570((_QWORD*)(a1 + 88), v21);
					v2 = a2;
				}
				else
				{
					v20 = *v16;
					*(_DWORD*)(a1 + 148) = 0;
					*(_DWORD*)(a1 + 152) = 1;
					sub_140282570((_QWORD*)(a1 + 88), v20);
					v2 = a2;
				}
				goto LABEL_34;
			}
			*(_QWORD*)(a1 + 148) = 0i64;
		}
		sub_140282570((_QWORD*)(a1 + 88), *v16);
		v2 = a2;
	LABEL_34:
		result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int64))(**(_QWORD**)(*(_QWORD*)(a1 + 16) + 6264i64) + 64i64))(
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 6264i64),
			*(_QWORD*)(a1 + 48),
			7i64);
		if ((int)result < 0)
			return result;
		if ((*(_BYTE*)(a1 + 56) & 2) != 0)
		{
			v27 = *(HWND*)(a1 + 48);
			qword_140C657C8 = a1;
			WindowLongPtrW = GetWindowLongPtrW(v27, -4);
			v29 = *(HWND*)(a1 + 48);
			*(_QWORD*)(a1 + 80) = WindowLongPtrW;
			SetWindowLongPtrW(v29, -4, (LONG_PTR)sub_14029E2E0);
			*(_DWORD*)(a1 + 72) = 0;
			sub_14029E170(a1, 1);
		}
		goto LABEL_37;
	}
	v5 = (*(_BYTE*)(a1 + 56) & 2) == 0;
	v22 = *(_DWORD*)(a1 + 24);
	HIDWORD(v46) = 1;
	LODWORD(v46) = v22;
	DWORD1(v46) = *(_DWORD*)(a1 + 28);
	DWORD2(v46) = *(_DWORD*)(a1 + 40);
	v47 = (unsigned int)dword_140AE7F90[*(int*)(a1 + 32)];
	v23 = 0;
	v48 = 0;
	if (!v5)
	{
		result = (*(__int64(__fastcall**)(_QWORD, __int128*, __int128*, _QWORD))(**(_QWORD**)(v4 + 6320) + 72i64))(
			*(_QWORD*)(v4 + 6320),
			&v46,
			&v46,
			*(_QWORD*)(v4 + 6336));
		if ((int)result < 0)
			return result;
		v24 = v47;
		*(_QWORD*)(a1 + 24) = v46;
		*(_DWORD*)(a1 + 32) = sub_14027A000(v24);
		v23 = v48;
	}
	v41 = v23;
	v43 = *(_QWORD*)(a1 + 48);
	v25 = *(_QWORD*)(a1 + 16);
	v39 = v46;
	v40 = v47;
	*(_QWORD*)((char*)&v41 + 4) = 1i64;
	HIDWORD(v41) = 32;
	v42 = 2i64;
	v44 = 1i64;
	v45 = 2i64;
	result = (*(__int64(__fastcall**)(_QWORD, _QWORD, __int128*, __int64))(**(_QWORD**)(v25 + 6264) + 80i64))(
		*(_QWORD*)(v25 + 6264),
		*(_QWORD*)(v25 + 6336),
		&v39,
		a1 + 88);
	if ((int)result >= 0)
	{
		v26 = *(_DWORD*)(a1 + 56);
		if ((v26 & 4) != 0)
		{
			if ((v26 & 2) != 0 || !(unsigned int)sub_1402649D0(*(_DWORD*)(*(_QWORD*)(a1 + 16) + 6240i64)))
			{
				*(_QWORD*)(a1 + 148) = 1i64;
			}
			else
			{
				*(_DWORD*)(a1 + 148) = 0;
				*(_DWORD*)(a1 + 152) = 1;
			}
		}
		else
		{
			*(_QWORD*)(a1 + 148) = 0i64;
		}
		goto LABEL_34;
	}
	return result;
}
// 14029DD96: conditional instruction was optimized away because eax.4<1
// 140AE7F90: using guessed type _DWORD dword_140AE7F90[28];
// 140C636A0: using guessed type __int64 qword_140C636A0;
// 140C657C8: using guessed type __int64 qword_140C657C8;
// 14029D910: using guessed type DWORD dwProcessId[3];

