//----- (00000001405DB6B0) ----------------------------------------------------
__int64 __fastcall sub_1405DB6B0(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	unsigned __int16* v11; // r11
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	int v15; // r11d
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	int v19; // r11d
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	BOOL v24; // ebp
	_QWORD* v25; // rax
	__int64 v26; // r10
	__int64 v27; // rdx
	__int64 v28; // rdi
	unsigned __int64 v29; // rbx
	unsigned __int64* v30; // rdx
	unsigned __int64 v31; // r8
	BOOL* v32; // rcx
	__int64* v33; // rax
	_QWORD* v34; // rax
	__int64 v35; // r10
	__int64 v36; // rdx
	unsigned __int16* v37; // r11
	__int64 v38; // rax
	float v39; // xmm7_4
	unsigned __int64 v40; // rdx
	_QWORD* v41; // rax
	__int64 v42; // r10
	__int64 v43; // rdx
	__int64 v44; // rdi
	unsigned __int64* v45; // rdx
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 result; // rax
	__int64 v49; // [rsp+20h] [rbp-58h] BYREF
	__int64 v50; // [rsp+28h] [rbp-50h]
	float v51; // [rsp+80h] [rbp+8h] BYREF

	v4 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v6 = *(_QWORD*)(v5 + 16);
	*(_QWORD*)v6 = *v4;
	*(_DWORD*)(v6 + 8) = *((_DWORD*)v4 + 2);
	*(_QWORD*)(v5 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v6, L"nId", v7);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v8 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v10 = *(_QWORD*)(v9 + 16);
	*(_QWORD*)v10 = *v8;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v8 + 2);
	*(_QWORD*)(v9 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v10, L"strCharacterName", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v14, L"nClassId", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v18, L"nPathId", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v22 = *(_QWORD*)(v21 + 16);
	*(_QWORD*)v22 = *v20;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
	*(_QWORD*)(v21 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v22, L"nLevel", v23);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v24 = *(_DWORD*)(a1 + 40) == 0;
	v25 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v27 = *(_QWORD*)(v26 + 16);
	*(_QWORD*)v27 = *v25;
	*(_DWORD*)(v27 + 8) = *((_DWORD*)v25 + 2);
	*(_QWORD*)(v26 + 16) += 16i64;
	v28 = *(_QWORD*)(a2 + 16);
	v29 = -1i64;
	v30 = (unsigned __int64*)sub_14018F0E0(&v49, L"bIsNew")[1];
	if (v30)
	{
		v31 = -1i64;
		do
			++v31;
		while (*((_BYTE*)v30 + v31));
		sub_140058710(v28, v30, v31);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v28 + 16) + 8i64) = 0;
		*(_QWORD*)(v28 + 16) += 16i64;
	}
	if (v50)
		sub_14018B900(v50, 0);
	v32 = *(BOOL**)(v28 + 16);
	v32[2] = 1;
	*v32 = v24;
	*(_QWORD*)(v28 + 16) += 16i64;
	v33 = (__int64*)sub_1400580E0(v28, -3);
	sub_14005EA50(v28, v33, (int*)(*(_QWORD*)(v28 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v28 + 16) - 16i64));
	*(_QWORD*)(v28 + 16) -= 32i64;
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v34 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v36 = *(_QWORD*)(v35 + 16);
	*(_QWORD*)v36 = *v34;
	*(_DWORD*)(v36 + 8) = *((_DWORD*)v34 + 2);
	*(_QWORD*)(v35 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v36, L"strNote", v37);
	v38 = *(_QWORD*)(a2 + 16);
	v39 = 0.0;
	v51 = 0.0;
	*(_QWORD*)(v38 + 16) -= 16i64;
	v40 = *(_QWORD*)(a1 + 8);
	if (v40)
	{
		sub_1401E83A0(&v51, v40);
		v39 = fmaxf(v51, 0.000001);
	}
	v41 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v43 = *(_QWORD*)(v42 + 16);
	*(_QWORD*)v43 = *v41;
	*(_DWORD*)(v43 + 8) = *((_DWORD*)v41 + 2);
	*(_QWORD*)(v42 + 16) += 16i64;
	v44 = *(_QWORD*)(a2 + 16);
	v45 = (unsigned __int64*)sub_14018F0E0(&v49, L"fDaysUntilExpired")[1];
	if (v45)
	{
		do
			++v29;
		while (*((_BYTE*)v45 + v29));
		sub_140058710(v44, v45, v29);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v44 + 16) + 8i64) = 0;
		*(_QWORD*)(v44 + 16) += 16i64;
	}
	if (v50)
		sub_14018B900(v50, 0);
	v46 = *(_QWORD*)(v44 + 16);
	*(_DWORD*)(v46 + 8) = 3;
	*(double*)v46 = v39;
	*(_QWORD*)(v44 + 16) += 16i64;
	v47 = (__int64*)sub_1400580E0(v44, -3);
	sub_14005EA50(v44, v47, (int*)(*(_QWORD*)(v44 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v44 + 16) - 16i64));
	*(_QWORD*)(v44 + 16) -= 32i64;
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1405DB6E9: variable 'v5' is possibly undefined
// 1405DB70C: variable 'v7' is possibly undefined
// 1405DB735: variable 'v9' is possibly undefined
// 1405DB758: variable 'v11' is possibly undefined
// 1405DB781: variable 'v13' is possibly undefined
// 1405DB7A4: variable 'v15' is possibly undefined
// 1405DB7CD: variable 'v17' is possibly undefined
// 1405DB7F0: variable 'v19' is possibly undefined
// 1405DB81A: variable 'v21' is possibly undefined
// 1405DB83D: variable 'v23' is possibly undefined
// 1405DB86C: variable 'v26' is possibly undefined
// 1405DB93D: variable 'v35' is possibly undefined
// 1405DB960: variable 'v37' is possibly undefined
// 1405DB9CF: variable 'v42' is possibly undefined
// 140B22A98: using guessed type wchar_t aFdaysuntilexpi[18];
// 140B22AC8: using guessed type wchar_t aBisnew_1[7];
// 140B22AD8: using guessed type wchar_t aStrnote_2[8];
// 140B22AE8: using guessed type wchar_t aNpathid_1[8];
// 140B22AF8: using guessed type wchar_t aNlevel_7[7];
// 140B22B08: using guessed type wchar_t aStrcharacterna_1[17];
// 140B22B30: using guessed type wchar_t aNclassid_1[9];
// 140B22B58: using guessed type wchar_t aNid_20[4];

