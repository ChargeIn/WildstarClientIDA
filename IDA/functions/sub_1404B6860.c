//----- (00000001404B6860) ----------------------------------------------------
__int64 __fastcall sub_1404B6860(struct tagPOINT a1)
{
	__int64 v1; // rbx
	__int64 v3; // rcx
	__int64 v4; // r9
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 v7; // rcx
	__int64 v8; // rax
	__int64 v9; // rdi
	__int64 v10; // rcx
	__int64 v11; // rax
	unsigned int v12; // eax
	int v13; // ecx
	__int64 v14; // rax
	__int64 v15; // rdx
	struct tagPOINT Point; // [rsp+30h] [rbp+8h] BYREF

	Point = a1;
	v1 = qword_140C659F0;
	if (!(unsigned int)((__int64)(*(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 824) + 24i64)
		- *(_QWORD*)(*(_QWORD*)(qword_140C659F0 + 824) + 16i64)) >> 3))
		return 0i64;
	GetCursorPos(&Point);
	ScreenToClient(*(HWND*)(qword_140C635F0 + 8), &Point);
	v4 = 0i64;
	if (*(_DWORD*)(v1 + 4))
	{
		v3 = *(_QWORD*)(qword_140C659F8 + 200);
		if (v3)
			v4 = *(_QWORD*)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 152i64))(v3) + 288);
	}
	sub_1404CA7C0(v3, (int*)&Point, v1 + 80, v4);
	if (!*(_QWORD*)(v1 + 144) || !*(_DWORD*)(v1 + 160) || !*(_DWORD*)v1)
		return 0i64;
	if (!(unsigned int)sub_1404B6AE0())
	{
		if (sub_1404B6A30((_DWORD*)v1))
		{
			if (*(_DWORD*)v1)
			{
				v5 = *(_QWORD*)(qword_140C659F8 + 200);
				if (v5)
				{
					v6 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v5 + 112i64))(v5);
					(*(void(__fastcall**)(__int64))(*(_QWORD*)v6 + 40i64))(v6);
				}
			}
			return 1i64;
		}
		if (*(_DWORD*)v1)
		{
			v7 = *(_QWORD*)(qword_140C659F8 + 200);
			if (v7)
			{
				v8 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v7 + 112i64))(v7);
				(*(void(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v8 + 48i64))(v8, 0i64);
			}
		}
	}
	if (*(_DWORD*)(v1 + 4))
		return 1i64;
	v9 = sub_1404CB280(qword_140C659F8, *(_QWORD*)(v1 + 144));
	v11 = sub_1405B2F10(v10, *(_QWORD*)(v1 + 144));
	if (!v9)
		return 0i64;
	if (v9 == v11)
		return 0i64;
	v12 = *(_DWORD*)(v9 + 128);
	if (v12 > 0xA)
		return 0i64;
	v13 = 1696;
	if (!_bittest(&v13, v12))
		return 0i64;
	v14 = sub_1401545C0(*(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 360i64), (int*)L"DragDropValid");
	if (v14)
	{
		v15 = *(_QWORD*)(v14 + 88);
		if (v15)
			(*(void(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)qword_140C65670 + 472i64))(
				qword_140C65670,
				v15,
				*(unsigned int*)(v14 + 96),
				*(unsigned int*)(v14 + 100));
	}
	return 1i64;
}
// 1404B68E6: variable 'v3' is possibly undefined
// 1404B699C: variable 'v10' is possibly undefined
// 140B09768: using guessed type wchar_t aDragdropvalid_1[14];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C659F0: using guessed type __int64 qword_140C659F0;
// 140C659F8: using guessed type __int64 qword_140C659F8;

