//----- (00000001405F0F90) ----------------------------------------------------
__int64 __fastcall sub_1405F0F90(__int64 a1, __int64 a2, __int64 a3, int a4)
{
	char v5; // si
	__int64 result; // rax
	__int64 v10; // rbp
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	unsigned __int16* v14; // r11
	__int64 v15; // rcx
	_QWORD* v16; // rax
	__int64 v17; // r10
	__int64 v18; // rdx
	unsigned __int16* v19; // r11
	_QWORD* v20; // rax
	__int64 v21; // r10
	__int64 v22; // rdx
	int v23; // r11d
	_QWORD* v24; // rax
	__int64 v25; // r10
	__int64 v26; // rdx
	int v27; // r11d
	int* v28; // rbp
	_QWORD* v29; // rax
	void(__fastcall * **v30)(_QWORD); // rbx
	__int64 v31; // [rsp+40h] [rbp-48h] BYREF
	__int64 v32; // [rsp+48h] [rbp-40h]

	v5 = 0;
	result = sub_140229540(*(_DWORD*)a2);
	v10 = result;
	if (result)
	{
		sub_1405F1540(&v31, (__int64*)(a2 + 8));
		v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v13 = *(_QWORD*)(v12 + 16);
		*(_QWORD*)v13 = *v11;
		*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
		*(_QWORD*)(v12 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v13, L"strName", v14);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v15 = v32;
		if (v32)
			sub_14018B900(v32, 0);
		sub_14034BDD0(v15, *(_DWORD*)(v10 + 4));
		v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v18 = *(_QWORD*)(v17 + 16);
		*(_QWORD*)v18 = *v16;
		*(_DWORD*)(v18 + 8) = *((_DWORD*)v16 + 2);
		*(_QWORD*)(v17 + 16) += 16i64;
		sub_1400F0870(*(_QWORD*)(a1 + 16), v18, L"strTeamName", v19);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v20 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v22 = *(_QWORD*)(v21 + 16);
		*(_QWORD*)v22 = *v20;
		*(_DWORD*)(v22 + 8) = *((_DWORD*)v20 + 2);
		*(_QWORD*)(v21 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v22, L"eClass", v23);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		v24 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
		v26 = *(_QWORD*)(v25 + 16);
		*(_QWORD*)v26 = *v24;
		*(_DWORD*)(v26 + 8) = *((_DWORD*)v24 + 2);
		*(_QWORD*)(v25 + 16) += 16i64;
		sub_1400F06F0(*(_QWORD*)(a1 + 16), v26, L"ePlayerPath", v27);
		*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		if ((unsigned int)sub_140649870(*(_QWORD**)(a1 + 16), *(_DWORD*)(a2 + 4)))
		{
			sub_1400FB540(a1);
			*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
		}
		sub_1405F05B0(a1, a2 + 32, a3);
		if (a4)
		{
			v28 = sub_14018B280(104i64, 0);
			if (v28)
			{
				v5 = 1;
				v29 = sub_1405F1540(&v31, (__int64*)(a2 + 8));
				v30 = (void(__fastcall***)(_QWORD))sub_14073E140(
					(__int64)v28,
					(int*)v29[1],
					0i64,
					3,
					7,
					*(unsigned int*)(a2 + 4),
					(_QWORD*)(a2 + 8));
			}
			else
			{
				v30 = 0i64;
			}
			if ((v5 & 1) != 0 && v32)
				sub_14018B900(v32, 0);
			if (v30)
				(**v30)(v30);
			if ((unsigned int)sub_14073EB30(*(_QWORD**)(a1 + 16), v30))
			{
				sub_1400FB540(a1);
				*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
			}
			if (v30)
			{
				(*v30)[1](v30);
				(*v30)[1](v30);
			}
		}
		return 1i64;
	}
	return result;
}
// 1405F0FFC: variable 'v12' is possibly undefined
// 1405F101F: variable 'v14' is possibly undefined
// 1405F1041: variable 'v15' is possibly undefined
// 1405F1060: variable 'v17' is possibly undefined
// 1405F1083: variable 'v19' is possibly undefined
// 1405F10AC: variable 'v21' is possibly undefined
// 1405F10CF: variable 'v23' is possibly undefined
// 1405F10F8: variable 'v25' is possibly undefined
// 1405F111B: variable 'v27' is possibly undefined
// 140B24030: using guessed type wchar_t aEclass_0[7];
// 140B24040: using guessed type wchar_t aEplayerpath[12];
// 140B24058: using guessed type wchar_t aStrname_42[8];
// 140B24068: using guessed type wchar_t aStrteamname_0[12];

