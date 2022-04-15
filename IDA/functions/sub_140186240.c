//----- (0000000140186240) ----------------------------------------------------
__int64 __fastcall sub_140186240(__int64 a1, __int64 a2)
{
	__int64 v4; // rbx
	__int64 v5; // rax
	__int64 v6; // rdx
	_DWORD* v7; // rcx
	__int64* v8; // rax
	__int64 v9; // rax
	__int64* v10; // rax
	__int64 v11; // rdx
	__int64 v12; // rbx
	__int64 v13; // rax
	_QWORD* v14; // rax
	__int64 v15; // rdx
	unsigned __int16* v16; // r10
	_QWORD* v17; // rax
	__int64 v18; // r11
	__int64 v19; // rdx
	int v20; // r10d
	_QWORD* v21; // rax
	__int64 v22; // rdx
	__int64 v23; // rdx
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx

	if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
		sub_14005E2C0(a2);
	v4 = *(_QWORD*)(a2 + 16);
	v5 = sub_14005C1B0(a2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	*(_QWORD*)(a2 + 16) += 16i64;
	sub_1400F0090(a2, v6, (unsigned __int64*)"strName", *(unsigned __int16**)(a1 + 24));
	LODWORD(v4) = *(_QWORD*)(a1 + 88) != 0i64;
	sub_140058710(a2, (unsigned __int64*)"bAddon", 6ui64);
	v7 = *(_DWORD**)(a2 + 16);
	v7[2] = 1;
	*v7 = v4 != 0;
	*(_QWORD*)(a2 + 16) += 16i64;
	v8 = (__int64*)sub_1400580E0(a2, -3);
	sub_14005EA50(a2, v8, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
	*(_QWORD*)(a2 + 16) -= 32i64;
	LODWORD(v4) = *(_DWORD*)(a1 + 48);
	sub_140058710(a2, (unsigned __int64*)"nVersion", 8ui64);
	v9 = *(_QWORD*)(a2 + 16);
	*(_DWORD*)(v9 + 8) = 3;
	*(double*)v9 = (double)(int)v4;
	*(_QWORD*)(a2 + 16) += 16i64;
	v10 = (__int64*)sub_1400580E0(a2, -3);
	sub_14005EA50(a2, v10, (int*)(*(_QWORD*)(a2 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
	*(_QWORD*)(a2 + 16) -= 32i64;
	sub_1400F0090(a2, v11, (unsigned __int64*)"strLoadError", *(unsigned __int16**)(a1 + 104));
	if (*(_QWORD*)(a1 + 88))
	{
		if (*(_QWORD*)(*(_QWORD*)(a2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a2 + 32) + 112i64))
			sub_14005E2C0(a2);
		v12 = *(_QWORD*)(a2 + 16);
		v13 = sub_14005C1B0(a2, 0, 0);
		*(_DWORD*)(v12 + 8) = 5;
		*(_QWORD*)v12 = v13;
		*(_QWORD*)(a2 + 16) += 16i64;
		LODWORD(v12) = sub_1400578C0(a2);
		v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v12);
		v15 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		*(_QWORD*)(a2 + 16) += 16i64;
		sub_1400F0870(a2, v15, L"strAuthor", v16);
		*(_QWORD*)(a2 + 16) -= 16i64;
		v17 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v12);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		*(_QWORD*)(a2 + 16) += 16i64;
		sub_1400F06F0(a2, v19, L"nAPIVersion", v20);
		*(_QWORD*)(a2 + 16) -= 16i64;
		sub_140058710(a2, (unsigned __int64*)"tAddonInfo", 0xAui64);
		v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a2 + 32) + 160i64), v12);
		v22 = *(_QWORD*)(a2 + 16);
		*(_QWORD*)v22 = *v21;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
		*(_QWORD*)(a2 + 16) += 16i64;
		sub_14005EA50(
			a2,
			(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
			(int*)(*(_QWORD*)(a2 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
		*(_QWORD*)(a2 + 16) -= 32i64;
		sub_1400579E0(a2, v23, v12);
	}
	else
	{
		sub_140058710(a2, (unsigned __int64*)"tPackage", 8ui64);
		if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)(a1 + 56) + 8i64))(a1 + 56))
		{
			v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 72) + 32i64) + 160i64), *(_DWORD*)(a1 + 64));
			v26 = *(_QWORD*)(v25 + 16);
			*(_QWORD*)v26 = *v24;
			*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
			*(_QWORD*)(v25 + 16) += 16i64;
		}
		else
		{
			*(_DWORD*)(*(_QWORD*)(a2 + 16) + 8i64) = 0;
			*(_QWORD*)(a2 + 16) += 16i64;
		}
		sub_14005EA50(
			a2,
			(__int64*)(*(_QWORD*)(a2 + 16) - 48i64),
			(int*)(*(_QWORD*)(a2 + 16) - 32i64),
			(unsigned int*)(*(_QWORD*)(a2 + 16) - 16i64));
		*(_QWORD*)(a2 + 16) -= 32i64;
	}
	return 1i64;
}
// 140186299: variable 'v6' is possibly undefined
// 140186369: variable 'v11' is possibly undefined
// 1401863F8: variable 'v16' is possibly undefined
// 140186430: variable 'v18' is possibly undefined
// 140186442: variable 'v19' is possibly undefined
// 140186442: variable 'v20' is possibly undefined
// 1401864AB: variable 'v23' is possibly undefined
// 1401864ED: variable 'v25' is possibly undefined
// 140A3F4D0: using guessed type wchar_t aStrauthor_1[10];
// 140A3F520: using guessed type wchar_t aNapiversion_1[12];

