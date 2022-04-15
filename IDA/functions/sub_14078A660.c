//----- (000000014078A660) ----------------------------------------------------
__int64 __fastcall sub_14078A660(_QWORD* a1, __int64 a2, __int64 a3)
{
	_QWORD* v4; // rdx
	bool v5; // zf
	_QWORD* v7; // rcx
	_DWORD* v8; // rsi
	unsigned int v9; // ebx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v13; // [rsp+20h] [rbp-38h] BYREF
	int v14; // [rsp+28h] [rbp-30h]
	__int64 v15; // [rsp+2Ch] [rbp-2Ch]
	__int64 v16; // [rsp+34h] [rbp-24h]
	int v17; // [rsp+3Ch] [rbp-1Ch]
	__int64 v18; // [rsp+60h] [rbp+8h] BYREF

	a1[3] = a2;
	v4 = (_QWORD*)(a2 + 1208);
	v5 = a1[1] == 0i64;
	a1[4] = a3;
	if (v5)
	{
		a1[1] = v4;
		v7 = a1 + 2;
		*v7 = *v4;
		*v4 = a1;
		if (*v7)
			*(_QWORD*)(*v7 + 8i64) = v7;
	}
	v8 = dword_140C39740;
	v9 = 0;
	do
	{
		++v9;
		LODWORD(v18) = *v8;
		HIDWORD(v18) = v9;
		sub_1403D6C10((__int64)(a1 + 6), (__int64)&v13, &v18);
		++v8;
	} while (v9 < 0xF);
	v18 = 165i64;
	sub_1403D6C10((__int64)(a1 + 6), (__int64)&v13, &v18);
	if ((*(int(__fastcall**)(_QWORD, const wchar_t*, _QWORD*, _QWORD))(*(_QWORD*)a1[4] + 40i64))(
		a1[4],
		L"Art\\Prop\\MFFortunes\\PRP_MFFortunes_RuneProgression_000.m3",
		a1 + 10,
		0i64) >= 0)
	{
		v10 = a1[10];
		v13 = 150i64;
		v15 = 0i64;
		v16 = 2i64;
		v17 = 0;
		v14 = 1065353216;
		(*(void(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v10 + 584i64))(v10, 0i64, &v13);
		if (a2)
		{
			v11 = *(_QWORD*)(a2 + 1160);
			if (v11)
				(*(void(__fastcall**)(__int64, __int64, _QWORD))(*(_QWORD*)v11 + 896i64))(v11, 70i64, a1[10]);
		}
	}
	else
	{
		a1[5] = 1i64;
	}
	return 0i64;
}
// 140B503D0: using guessed type wchar_t aArtPropMffortu_5[58];
// 140C39740: using guessed type _DWORD dword_140C39740[16];

