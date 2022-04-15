//----- (00000001400DD7F0) ----------------------------------------------------
__int64 __fastcall sub_1400DD7F0(_QWORD* a1)
{
	__int64 result; // rax
	_DWORD* v3; // rbp
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // eax
	int v7; // esi
	int v8; // edi
	int v9; // ebp
	int v10; // r14d
	_QWORD* v11; // rax
	__int64 v12; // rcx
	__int64 v13; // rdx
	_QWORD* v14; // rax
	__int64 v15; // r11
	__int64 v16; // rdx
	_QWORD* v17; // rax
	__int64 v18; // r11
	__int64 v19; // rdx
	_QWORD* v20; // rax
	__int64 v21; // r11
	__int64 v22; // rdx
	_QWORD* v23; // rax
	__int64 v24; // r11
	__int64 v25; // rdx
	_QWORD* v26; // rax
	__int64 v27; // r11
	__int64 v28; // rdx
	_QWORD* v29; // rax
	__int64 v30; // r10
	__int64 v31; // rdx

	result = sub_1400D66A0(a1, 1u);
	v3 = (_DWORD*)result;
	if (result)
	{
		if (*(_QWORD*)(a1[4] + 120i64) >= *(_QWORD*)(a1[4] + 112i64))
			sub_14005E2C0((__int64)a1);
		v4 = a1[2];
		v5 = sub_14005C1B0((__int64)a1, 0, 0);
		*(_DWORD*)(v4 + 8) = 5;
		*(_QWORD*)v4 = v5;
		a1[2] += 16i64;
		v6 = sub_1400578C0((__int64)a1);
		LODWORD(v4) = v3[179];
		v7 = v3[180];
		v8 = v3[181];
		v9 = v3[182];
		v10 = v6;
		v11 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
		v12 = a1[2];
		*(_QWORD*)v12 = *v11;
		*(_DWORD*)(v12 + 8) = *((_DWORD*)v11 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v13, L"nLeft", v4);
		a1[2] -= 16i64;
		v14 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v15 = *v14;
		*(_DWORD*)(v15 + 8) = *((_DWORD*)v14 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v16, L"nTop", v7);
		a1[2] -= 16i64;
		v17 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v18 = *v17;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v17 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v19, L"nRight", v8);
		a1[2] -= 16i64;
		v20 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v21 = *v20;
		*(_DWORD*)(v21 + 8) = *((_DWORD*)v20 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v22, L"nBottom", v9);
		a1[2] -= 16i64;
		v23 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v24 = *v23;
		*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v25, L"nWidth", v8 - v4);
		a1[2] -= 16i64;
		v26 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v27 = *v26;
		*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
		a1[2] += 16i64;
		sub_1400F06F0((__int64)a1, v28, L"nHeight", v9 - v7);
		a1[2] -= 16i64;
		v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v10);
		*(_QWORD*)v30 = *v29;
		*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
		a1[2] += 16i64;
		sub_1400579E0((__int64)a1, v31, v10);
		return 1i64;
	}
	return result;
}
// 1400DD8BA: variable 'v13' is possibly undefined
// 1400DD8EE: variable 'v15' is possibly undefined
// 1400DD8FE: variable 'v16' is possibly undefined
// 1400DD932: variable 'v18' is possibly undefined
// 1400DD942: variable 'v19' is possibly undefined
// 1400DD976: variable 'v21' is possibly undefined
// 1400DD986: variable 'v22' is possibly undefined
// 1400DD9BC: variable 'v24' is possibly undefined
// 1400DD9CC: variable 'v25' is possibly undefined
// 1400DDA02: variable 'v27' is possibly undefined
// 1400DDA12: variable 'v28' is possibly undefined
// 1400DDA39: variable 'v30' is possibly undefined
// 1400DDA4B: variable 'v31' is possibly undefined
// 140A16648: using guessed type wchar_t aNleft[6];
// 140A16658: using guessed type wchar_t aNtop[5];
// 140A16688: using guessed type wchar_t aNright[7];
// 140A16698: using guessed type wchar_t aNbottom[8];
// 140A166A8: using guessed type wchar_t aNwidth[7];
// 140A166B8: using guessed type wchar_t aNheight[8];

