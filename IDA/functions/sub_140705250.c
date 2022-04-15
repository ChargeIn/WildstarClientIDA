//----- (0000000140705250) ----------------------------------------------------
void __fastcall sub_140705250(__int64 a1)
{
	_QWORD* v2; // rax
	__int64 v3; // r10
	__int64 v4; // rdx
	int v5; // r11d
	__int64 v6; // rcx
	unsigned __int16* v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rbx
	__int64 v10; // rax
	_QWORD* v11; // rax
	__int64 v12; // r10
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rcx
	char v16[8]; // [rsp+20h] [rbp-28h] BYREF
	int v17; // [rsp+28h] [rbp-20h]
	__int64 v18; // [rsp+30h] [rbp-18h]

	sub_1400FA3C0((__int64)v16, *(_QWORD*)(a1 + 16), (float*)(qword_140C65898 + 32480));
	sub_1400FB2A0(a1, (__int64)L"tPosition", v17);
	v2 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v4 = *(_QWORD*)(v3 + 16);
	*(_QWORD*)v4 = *v2;
	*(_DWORD*)(v4 + 8) = *((_DWORD*)v2 + 2);
	*(_QWORD*)(v3 + 16) += 16i64;
	sub_1400F06F0(*(_QWORD*)(a1 + 16), v4, L"nMapZoneId", v5);
	v7 = 0i64;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (qword_140C658F8)
	{
		v8 = sub_140448420(v6, *(_DWORD*)(qword_140C65898 + 32496));
		v9 = v8;
		if (v8)
		{
			v10 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v8 + 24i64))(v8);
			if (((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v10 + 48i64))(v10) & 1) == 0)
				v7 = (unsigned __int16*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)v9 + 8i64))(v9);
		}
	}
	v11 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(*(_QWORD*)(a1 + 16) + 32i64) + 160i64), *(_DWORD*)(a1 + 8));
	v13 = *(_QWORD*)(v12 + 16);
	*(_QWORD*)v13 = *v11;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v11 + 2);
	*(_QWORD*)(v12 + 16) += 16i64;
	sub_1400F0870(*(_QWORD*)(a1 + 16), v13, L"strZoneName", v7);
	v15 = v18;
	*(_QWORD*)(*(_QWORD*)(a1 + 16) + 16i64) -= 16i64;
	if (v15)
		sub_1400579E0(v15, v14, v17);
}
// 1407052B6: variable 'v3' is possibly undefined
// 1407052D9: variable 'v5' is possibly undefined
// 140705304: variable 'v6' is possibly undefined
// 14070534F: variable 'v12' is possibly undefined
// 14070539D: variable 'v14' is possibly undefined
// 140B41DD0: using guessed type wchar_t aStrzonename_3[12];
// 140B41DE8: using guessed type wchar_t aNmapzoneid_3[11];
// 140B41E00: using guessed type wchar_t aTposition_2[10];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F8: using guessed type __int64 qword_140C658F8;
// 140705250: using guessed type char var_28[8];

