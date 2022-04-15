//----- (00000001405DD250) ----------------------------------------------------
__int64 __fastcall sub_1405DD250(__int64 a1, __int64 a2)
{
	_QWORD* v4; // rax
	__int64 v5; // r10
	__int64 v6; // rdx
	int v7; // r11d
	_QWORD* v8; // rax
	__int64 v9; // r10
	__int64 v10; // rdx
	int v11; // r11d
	_QWORD* v12; // rax
	__int64 v13; // r10
	__int64 v14; // rdx
	unsigned __int16* v15; // r11
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	BOOL v20; // ebp
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	__int64 v24; // rdi
	unsigned __int64 v25; // rbx
	unsigned __int64* v26; // rdx
	unsigned __int64 v27; // r8
	BOOL* v28; // rcx
	__int64* v29; // rax
	__int64 v30; // rax
	float v31; // xmm7_4
	unsigned __int64 v32; // rdx
	_QWORD* v33; // rax
	__int64 v34; // r10
	__int64 v35; // rdx
	__int64 v36; // rdi
	unsigned __int64* v37; // rdx
	__int64 v38; // rax
	__int64* v39; // rax
	__int64 result; // rax
	__int64 v41; // [rsp+20h] [rbp-58h] BYREF
	__int64 v42; // [rsp+28h] [rbp-50h]
	float v43; // [rsp+80h] [rbp+8h] BYREF

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
	sub_1400F06F0(*(_QWORD*)(a2 + 16), v10, L"strInviteType", v11);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v14 = *(_QWORD*)(v13 + 16);
	*(_QWORD*)v14 = *v12;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(v13 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v14, L"strNote", v15);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v18 = *(_QWORD*)(v17 + 16);
	*(_QWORD*)v18 = *v16;
	*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
	*(_QWORD*)(v17 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a2 + 16), v18, L"strDisplayName", v19);
	*(_QWORD*)(*(_QWORD*)(a2 + 16) + 16i64) -= 16i64;
	v20 = (*(_DWORD*)(a1 + 48) & 1) == 0;
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v23 = *(_QWORD*)(v22 + 16);
	*(_QWORD*)v23 = *v21;
	*(_DWORD*)(v23 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(v22 + 16) += 16i64;
	v24 = *(_QWORD*)(a2 + 16);
	v25 = -1i64;
	v26 = (unsigned __int64*)sub_14018F0E0(&v41, L"bIsNew")[1];
	if (v26)
	{
		v27 = -1i64;
		do
			++v27;
		while (*((_BYTE*)v26 + v27));
		sub_140058710(v24, v26, v27);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v24 + 16) + 8i64) = 0;
		*(_QWORD*)(v24 + 16) += 16i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
	v28 = *(BOOL**)(v24 + 16);
	v28[2] = 1;
	*v28 = v20;
	*(_QWORD*)(v24 + 16) += 16i64;
	v29 = (__int64*)sub_1400580E0(v24, -3);
	sub_14005EA50(v24, v29, (int*)(*(_QWORD*)(v24 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v24 + 16) - 16i64));
	*(_QWORD*)(v24 + 16) -= 32i64;
	v30 = *(_QWORD*)(a2 + 16);
	v31 = 0.0;
	v43 = 0.0;
	*(_QWORD*)(v30 + 16) -= 16i64;
	v32 = *(_QWORD*)(a1 + 40);
	if (v32)
	{
		sub_1401E83A0(&v43, v32);
		v31 = fmaxf(v43, 0.000001);
	}
	v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a2 + 16) + 32i64) + 160i64), *(_DWORD*)(a2 + 8));
	v35 = *(_QWORD*)(v34 + 16);
	*(_QWORD*)v35 = *v33;
	*(_DWORD*)(v35 + 8) = *((_DWORD*)v33 + 2);
	*(_QWORD*)(v34 + 16) += 16i64;
	v36 = *(_QWORD*)(a2 + 16);
	v37 = (unsigned __int64*)sub_14018F0E0(&v41, L"fDaysUntilExpired")[1];
	if (v37)
	{
		do
			++v25;
		while (*((_BYTE*)v37 + v25));
		sub_140058710(v36, v37, v25);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v36 + 16) + 8i64) = 0;
		*(_QWORD*)(v36 + 16) += 16i64;
	}
	if (v42)
		sub_14018B900(v42, 0);
	v38 = *(_QWORD*)(v36 + 16);
	*(_DWORD*)(v38 + 8) = 3;
	*(double*)v38 = v31;
	*(_QWORD*)(v36 + 16) += 16i64;
	v39 = (__int64*)sub_1400580E0(v36, -3);
	sub_14005EA50(v36, v39, (int*)(*(_QWORD*)(v36 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(v36 + 16) - 16i64));
	*(_QWORD*)(v36 + 16) -= 32i64;
	result = *(_QWORD*)(a2 + 16);
	*(_QWORD*)(result + 16) -= 16i64;
	return result;
}
// 1405DD289: variable 'v5' is possibly undefined
// 1405DD2AC: variable 'v7' is possibly undefined
// 1405DD2D5: variable 'v9' is possibly undefined
// 1405DD2F8: variable 'v11' is possibly undefined
// 1405DD321: variable 'v13' is possibly undefined
// 1405DD344: variable 'v15' is possibly undefined
// 1405DD36D: variable 'v17' is possibly undefined
// 1405DD390: variable 'v19' is possibly undefined
// 1405DD3BE: variable 'v22' is possibly undefined
// 1405DD4D5: variable 'v34' is possibly undefined
// 140B22DB0: using guessed type wchar_t aFdaysuntilexpi_0[18];
// 140B22DF8: using guessed type wchar_t aStrdisplayname[15];
// 140B22E18: using guessed type wchar_t aBisnew_2[7];
// 140B22E28: using guessed type wchar_t aStrinvitetype[14];
// 140B22E48: using guessed type wchar_t aStrnote_3[8];
// 140B22E78: using guessed type wchar_t aNid_23[4];

