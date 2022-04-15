//----- (000000014069D600) ----------------------------------------------------
__int64 __fastcall sub_14069D600(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	int v5; // r11d
	_QWORD* v6; // rax
	__int64 v7; // r10
	__int64 v8; // rdx
	int v9; // r11d
	_QWORD* v10; // rax
	__int64 v11; // r10
	__int64 v12; // rdx
	int v13; // r11d
	_QWORD* v14; // rax
	__int64 v15; // r10
	__int64 v16; // rdx
	int v17; // r11d
	__int64 result; // rax

	v2 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v4, L"idPart", v5);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v6 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v8 = *(_QWORD*)(v7 + 16);
	*(_QWORD*)v8 = *v6;
	*(_DWORD*)(v8 + 8) = *((_DWORD*)v6 + 2);
	*(_QWORD*)(v7 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v8, L"idColor1", v9);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v12 = *(_QWORD*)(v11 + 16);
	*(_QWORD*)v12 = *v10;
	*(_DWORD*)(v12 + 8) = *((_DWORD*)v10 + 2);
	*(_QWORD*)(v11 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v12, L"idColor2", v13);
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	v14 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v16 = *(_QWORD*)(v15 + 16);
	*(_QWORD*)v16 = *v14;
	*(_DWORD*)(v16 + 8) = *((_DWORD*)v14 + 2);
	*(_QWORD*)(v15 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v16, L"idColor3", v17);
	result = *(_QWORD*)(a1 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 14069D62A: variable 'v3' is possibly undefined
// 14069D64D: variable 'v5' is possibly undefined
// 14069D676: variable 'v7' is possibly undefined
// 14069D699: variable 'v9' is possibly undefined
// 14069D6C2: variable 'v11' is possibly undefined
// 14069D6E5: variable 'v13' is possibly undefined
// 14069D70E: variable 'v15' is possibly undefined
// 14069D731: variable 'v17' is possibly undefined
// 140B34BA8: using guessed type wchar_t aIdcolor3[9];
// 140B34BE0: using guessed type wchar_t aIdcolor1[9];
// 140B34BF8: using guessed type wchar_t aIdcolor2[9];
// 140B34C28: using guessed type wchar_t aIdpart[7];

