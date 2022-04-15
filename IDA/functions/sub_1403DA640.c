//----- (00000001403DA640) ----------------------------------------------------
void __fastcall sub_1403DA640(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	int v5; // esi
	__int64 v6; // rax
	__int64 v7; // rdi
	int* v8; // rax
	int* v9; // rcx
	int** v10; // rdx
	__int64 v11; // rax
	__int64* v12; // r8
	bool v13; // zf
	__int64 v14; // rcx

	v2 = sub_14018B280(256i64, 0);
	v3 = (__int64)v2;
	if (v2)
	{
		sub_1407E4830(v2, 0i64, 0xD0ui64);
		sub_1407E4830((int*)v3, 0i64, 0x100ui64);
	}
	else
	{
		v3 = 0i64;
	}
	sub_1407E4830((int*)v3, 0i64, 0x100ui64);
	*(_DWORD*)(v3 + 208) = *(_DWORD*)(*(_QWORD*)(a1 + 120) + 8i64);
	v4 = qword_140C63628;
	*(_QWORD*)v3 = 0i64;
	*(_DWORD*)(v3 + 212) = 0;
	*(_QWORD*)(v3 + 152) = L"Art\\FX\\Placeholder\\IM_TS_Loot.m3";
	*(_DWORD*)(v3 + 220) = 14;
	*(_DWORD*)(v3 + 192) = 150;
	*(_DWORD*)(v3 + 84) = sub_1400518A0(v4, 113, 1, 0);
	v5 = *(_DWORD*)(v3 + 208);
	sub_1400035B0();
	if (v5 && (v6 = sub_1403D90D0(qword_140C65898, v5), (v7 = v6) != 0) && !*(_QWORD*)(v6 + 5864))
	{
		v8 = sub_14018B280(64i64, 0);
		v9 = v8;
		if (v8)
		{
			*(_QWORD*)v8 = v3;
			v8[2] = 0;
			v8[3] = 5;
			*((_QWORD*)v8 + 2) = 0i64;
			*((_QWORD*)v8 + 3) = 0i64;
			*((_QWORD*)v8 + 4) = 0i64;
			*((_QWORD*)v8 + 5) = 0i64;
			*((_QWORD*)v8 + 6) = 0i64;
			*((_QWORD*)v8 + 7) = 0i64;
		}
		else
		{
			v9 = 0i64;
		}
		v10 = (int**)(v7 + 1464);
		if (!*((_QWORD*)v9 + 2))
		{
			*((_QWORD*)v9 + 2) = v10;
			*((_QWORD*)v9 + 3) = *v10;
			*v10 = v9;
			v11 = *((_QWORD*)v9 + 3);
			if (v11)
				*(_QWORD*)(v11 + 16) = v9 + 6;
		}
		sub_1400035B0();
	}
	else
	{
		sub_1400035B0();
		v13 = ((dword_140C8AF30 + 1) & 0x3FFFFFFF) == 0;
		v14 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		dword_140C8AF30 = (dword_140C8AF30 + 1) & 0x3FFFFFFF;
		if (v13 || (_DWORD)v14 == 0x3FFFFFFF)
			dword_140C8AF30 = 1;
		sub_140576BF0(v14, v3, v12);
		sub_14018B900(v3, 0);
	}
}
// 1403DA829: variable 'v12' is possibly undefined
// 140AF6AD0: using guessed type wchar_t aArtFxPlacehold[33];
// 140C63628: using guessed type __int64 qword_140C63628;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C8AF30: using guessed type int dword_140C8AF30;

