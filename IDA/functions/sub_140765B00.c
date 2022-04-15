//----- (0000000140765B00) ----------------------------------------------------
__int64 __fastcall sub_140765B00(_QWORD* a1)
{
	__int64 v1; // rdx
	unsigned __int64 v3; // rax
	__int64 v4; // rbx
	__int64 v5; // rax
	int v6; // r14d
	__int64 v7; // rax
	int v8; // ecx
	__int64 v9; // rdx
	int v10; // eax
	unsigned __int64 v11; // rax
	__int64(__fastcall * *v12)(); // rsi
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	const wchar_t* v18; // rdx
	unsigned __int64 v19; // rax
	__int64 v20; // rcx
	unsigned __int64 v21; // rax
	__int64 v22; // rbx
	__int64 v23; // rax
	__int64 v24; // rdx
	unsigned __int64 v25; // rsi
	__int64* v26; // rbx
	unsigned __int64 v27; // rsi
	__int64* v28; // rbx
	_QWORD* v29; // rax
	__int64 v30; // rdx
	__int64(__fastcall * *v32)(); // [rsp+20h] [rbp-40h] BYREF
	unsigned __int64 v33; // [rsp+28h] [rbp-38h]
	_QWORD* v34; // [rsp+30h] [rbp-30h]
	int v35; // [rsp+38h] [rbp-28h]
	__int64(__fastcall * *v36)(); // [rsp+40h] [rbp-20h] BYREF
	int v37; // [rsp+48h] [rbp-18h]
	_QWORD* v38; // [rsp+50h] [rbp-10h]
	int v39; // [rsp+58h] [rbp-8h]

	v1 = a1[4];
	v3 = *(_QWORD*)(v1 + 112);
	v38 = a1;
	v39 = 1;
	v36 = off_140B569F0;
	if (*(_QWORD*)(v1 + 120) >= v3)
		sub_14005E2C0((__int64)a1);
	v4 = a1[2];
	v5 = sub_14005C1B0((__int64)a1, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	a1[2] += 16i64;
	v6 = sub_1400578C0((__int64)a1);
	v37 = v6;
	if ((dword_140DC4D98 & 1) != 0)
	{
		v8 = dword_140DC4D9C;
	}
	else
	{
		dword_140DC4D98 |= 1u;
		v7 = sub_140200220(0x91u);
		if (v7)
		{
			v8 = *(_DWORD*)(v7 + 4);
			dword_140DC4D9C = v8;
		}
		else
		{
			v8 = 50;
			dword_140DC4D9C = 50;
		}
	}
	v9 = *(_QWORD*)(qword_140C65898 + 120);
	if (v9)
		v10 = *(_DWORD*)(v9 + 56);
	else
		v10 = 0;
	v33 = 0i64;
	v32 = 0i64;
	if (v10 == v8)
	{
		sub_140764970(qword_140C665D8 + 48, (__int64*)&v32, 1);
		sub_140764970(qword_140C665D8 + 80, (__int64*)&v32, 1);
		sub_140764970(qword_140C665D8 + 96, (__int64*)&v32, 1);
		v11 = v33;
		if (v33 > 1)
		{
			sub_140766060((__int64*)&v32);
			v11 = v33;
		}
		v12 = v32;
		if (v11)
		{
			v13 = a1[4];
			v32 = off_140B569F0;
			v34 = a1;
			v14 = *(_QWORD*)(v13 + 112);
			v35 = 1;
			if (*(_QWORD*)(v13 + 120) >= v14)
				sub_14005E2C0((__int64)a1);
			v15 = a1[2];
			v16 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v15 + 8) = 5;
			*(_QWORD*)v15 = v16;
			a1[2] += 16i64;
			v17 = sub_1400578C0((__int64)a1);
			LODWORD(v33) = v17;
			sub_140764A20((__int64)&v32, (__int64)v12);
			v18 = L"tQuestInfo";
		LABEL_24:
			sub_1400FB2A0((__int64)&v36, (__int64)v18, v17);
			sub_1400579E0((__int64)a1, v24, v17);
		}
	}
	else
	{
		sub_140764970(qword_140C665D8 + 48, (__int64*)&v32, 1);
		sub_140764970(qword_140C665D8 + 80, (__int64*)&v32, 1);
		sub_140764970(qword_140C665D8 + 96, (__int64*)&v32, 1);
		v19 = v33;
		if (v33 > 1)
		{
			sub_140766060((__int64*)&v32);
			v19 = v33;
		}
		v12 = v32;
		if (v19)
		{
			v20 = a1[4];
			v32 = off_140B569F0;
			v34 = a1;
			v21 = *(_QWORD*)(v20 + 112);
			v35 = 1;
			if (*(_QWORD*)(v20 + 120) >= v21)
				sub_14005E2C0((__int64)a1);
			v22 = a1[2];
			v23 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v22 + 8) = 5;
			*(_QWORD*)v22 = v23;
			a1[2] += 16i64;
			v17 = sub_1400578C0((__int64)a1);
			LODWORD(v33) = v17;
			sub_140764A20((__int64)&v32, (__int64)v12);
			v18 = L"tQuestInfo";
			goto LABEL_24;
		}
	}
	if (v12)
		(*((void(__fastcall**)(__int64(__fastcall**)())) * (v12 - 2) + 1))(v12 - 2);
	v33 = 0i64;
	v32 = 0i64;
	sub_140765410((__int64*)&v32, 1);
	v25 = v33;
	v26 = (__int64*)v32;
	if (v33)
	{
		sub_140766220((__int64)v32, (__int64)&v32[v33]);
		if (v25 > 1)
		{
			sub_1404B3F40((__int64*)&v32, (__int64)sub_140764420);
			v26 = (__int64*)v32;
		}
		if ((unsigned int)sub_14073A540(a1, *v26, 0))
		{
			sub_1400FB540((__int64)&v36);
			a1[2] -= 16i64;
		}
	}
	if (v26)
		(*(void(__fastcall**)(__int64*))(*(v26 - 2) + 8))(v26 - 2);
	v33 = 0i64;
	v32 = 0i64;
	sub_140765410((__int64*)&v32, 0);
	v27 = v33;
	v28 = (__int64*)v32;
	if (v33)
	{
		sub_140766220((__int64)v32, (__int64)&v32[v33]);
		if (v27 > 1)
		{
			sub_1404B3F40((__int64*)&v32, (__int64)sub_140764550);
			v28 = (__int64*)v32;
		}
		if ((unsigned int)sub_14073A540(a1, *v28, 0))
		{
			sub_1400FB540((__int64)&v36);
			a1[2] -= 16i64;
		}
	}
	if (v28)
		(*(void(__fastcall**)(__int64*))(*(v28 - 2) + 8))(v28 - 2);
	v29 = sub_14005C3C0(*(_QWORD*)(a1[4] + 160i64), v6);
	v30 = a1[2];
	*(_QWORD*)v30 = *v29;
	*(_DWORD*)(v30 + 8) = *((_DWORD*)v29 + 2);
	a1[2] += 16i64;
	sub_1400579E0((__int64)a1, v30, v6);
	return 1i64;
}
// 140765D96: variable 'v24' is possibly undefined
// 140B4DD50: using guessed type wchar_t aTquestinfo_0[11];
// 140B4DD68: using guessed type wchar_t aTquestinfo[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C665D8: using guessed type __int64 qword_140C665D8;
// 140DC4D98: using guessed type int dword_140DC4D98;
// 140DC4D9C: using guessed type int dword_140DC4D9C;

