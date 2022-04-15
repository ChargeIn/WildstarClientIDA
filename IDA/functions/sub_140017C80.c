//----- (0000000140017C80) ----------------------------------------------------
__int64 __fastcall sub_140017C80(__int64 a1)
{
	int* v2; // rbx
	int v3; // edx
	int v4; // edx
	int v5; // edx
	int v6; // r8d
	int v7; // eax
	int v8; // edx
	int v9; // edx
	__int64(__fastcall * *v10)(); // rcx
	int v11; // edx
	HWND v12; // rcx
	int v13; // edx
	int v14; // edx
	int v15; // edx
	bool v16; // r8
	int v17; // edx
	LONG left; // [rsp+20h] [rbp-58h] BYREF
	LONG top; // [rsp+24h] [rbp-54h]
	int v21; // [rsp+28h] [rbp-50h]
	WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF

	v2 = (int*)(*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 16i64))(qword_140C65670);
	switch (*(_DWORD*)(a1 + 72))
	{
	case 2:
		v11 = dword_140C3B190;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
			v11 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B180, v11, 0);
		v12 = *(HWND*)(a1 + 8);
		wndpl.length = 44;
		GetWindowPlacement(v12, &wndpl);
		v13 = dword_140C3B210;
		left = wndpl.rcNormalPosition.left;
		top = wndpl.rcNormalPosition.top;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B210)
			v13 = *(_DWORD*)qword_140C63750;
		sub_14001A8D0((__int64)&off_140C3B200, v13, &left);
		v14 = dword_140C3B290;
		left = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
		top = wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B290)
			v14 = *(_DWORD*)qword_140C63750;
		sub_14001A8D0((__int64)&off_140C3B280, v14, &left);
		v15 = dword_140C3B350;
		if (wndpl.showCmd == 2)
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C3B350)
				v15 = *(_DWORD*)qword_140C63750;
			sub_14001A6C0((__int64)&off_140C3B340, v15, 1);
			v9 = dword_140C3B310;
			v10 = &off_140C3B300;
			v16 = (wndpl.flags & 2) != 0;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B310)
				v9 = *(_DWORD*)qword_140C63750;
			goto LABEL_42;
		}
		if (wndpl.showCmd == 3)
		{
			if (*(_DWORD*)qword_140C63750 < dword_140C3B350)
				v15 = *(_DWORD*)qword_140C63750;
			sub_14001A6C0((__int64)&off_140C3B340, v15, 0);
			v9 = dword_140C3B310;
			v16 = 1;
			v10 = &off_140C3B300;
			if (*(_DWORD*)qword_140C63750 < dword_140C3B310)
				v9 = *(_DWORD*)qword_140C63750;
			goto LABEL_42;
		}
		if (*(_DWORD*)qword_140C63750 < dword_140C3B350)
			v15 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B340, v15, 0);
		v9 = dword_140C3B310;
		v10 = &off_140C3B300;
	LABEL_39:
		if (*(_DWORD*)qword_140C63750 < v9)
			v9 = *(_DWORD*)qword_140C63750;
		v16 = 0;
	LABEL_42:
		sub_14001A6C0((__int64)v10, v9, v16);
		break;
	case 3:
		v8 = dword_140C3B190;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
			v8 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B180, v8, 1);
		v9 = dword_140C3B150;
		v10 = &off_140C3B140;
		goto LABEL_39;
	case 4:
		v3 = dword_140C3B190;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B190)
			v3 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B180, v3, 1);
		v4 = dword_140C3B150;
		if (*(_DWORD*)qword_140C63750 < dword_140C3B150)
			v4 = *(_DWORD*)qword_140C63750;
		sub_14001A6C0((__int64)&off_140C3B140, v4, 1);
		v5 = dword_140C66CD0;
		v6 = *(_DWORD*)qword_140C63750;
		v7 = dword_140C66CD0;
		if (*(_DWORD*)qword_140C63750 < dword_140C66CD0)
			v7 = *(_DWORD*)qword_140C63750;
		if (*(__int64*)((char*)&qword_140C66CC0 + 12 * v7 + 32) != qword_140C77780
			|| *((_DWORD*)&qword_140C66CC0 + 3 * v7 + 10) != dword_140C77788)
		{
			left = *v2;
			if (v6 < dword_140C66CD0)
				v5 = v6;
			top = v2[1];
			v21 = v2[4];
			sub_14001AC30((__int64)&qword_140C66CC0, v5, &left);
		}
		break;
	}
	v17 = dword_140C3B1D0;
	if (*(_DWORD*)qword_140C63750 < dword_140C3B1D0)
		v17 = *(_DWORD*)qword_140C63750;
	sub_14001A6C0((__int64)&off_140C3B1C0, v17, (v2[8] & 4) != 0);
	*(_DWORD*)(a1 + 5804) = 0;
	return 0i64;
}
// 140C3B140: using guessed type __int64 (__fastcall *off_140C3B140)();
// 140C3B150: using guessed type int dword_140C3B150;
// 140C3B180: using guessed type __int64 (__fastcall *off_140C3B180)();
// 140C3B190: using guessed type int dword_140C3B190;
// 140C3B1C0: using guessed type __int64 (__fastcall *off_140C3B1C0)();
// 140C3B1D0: using guessed type int dword_140C3B1D0;
// 140C3B200: using guessed type __int64 (__fastcall *off_140C3B200)();
// 140C3B210: using guessed type int dword_140C3B210;
// 140C3B280: using guessed type __int64 (__fastcall *off_140C3B280)();
// 140C3B290: using guessed type int dword_140C3B290;
// 140C3B300: using guessed type __int64 (__fastcall *off_140C3B300)();
// 140C3B310: using guessed type int dword_140C3B310;
// 140C3B340: using guessed type __int64 (__fastcall *off_140C3B340)();
// 140C3B350: using guessed type int dword_140C3B350;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C66CC0: using guessed type __int64 qword_140C66CC0;
// 140C66CD0: using guessed type int dword_140C66CD0;
// 140C77780: using guessed type __int64 qword_140C77780;
// 140C77788: using guessed type int dword_140C77788;

