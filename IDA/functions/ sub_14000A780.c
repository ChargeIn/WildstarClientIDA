//----- (000000014000A780) ----------------------------------------------------
int __fastcall sub_14000A780(__int64 a1)
{
	__int64 v2; // rcx
	__int64 v3; // rcx
	__int64 v4; // rcx
	unsigned __int64 i; // rdi
	__int64 v6; // rcx
	__int64 v7; // rcx
	__int64 v8; // rcx
	__int64 v9; // rcx
	__int64 v10; // rcx
	__int64 v11; // rcx
	__int64 v12; // rcx
	__int64 v13; // rdi
	__int64 v14; // rcx
	__int64 v15; // rbp
	__int64 v16; // rcx
	__int64 v17; // rcx
	HWND v18; // rcx
	__int64 v19; // rax

	*(_QWORD*)a1 = off_140B55120;
	*(_QWORD*)(a1 + 256) = off_140B55100;
	*(_QWORD*)(a1 + 264) = off_140B550F8;
	sub_14018B900(*(_QWORD*)(a1 + 5744), 0);
	sub_14018B900(*(_QWORD*)(a1 + 5752), 0);
	sub_14018B900(*(_QWORD*)(a1 + 5776), 0);
	v2 = *(_QWORD*)(a1 + 5936);
	if (v2)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v2 + 8i64))(v2);
		*(_QWORD*)(a1 + 5936) = 0i64;
	}
	v3 = *(_QWORD*)(a1 + 272);
	if (v3)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v3 + 8i64))(v3);
		*(_QWORD*)(a1 + 272) = 0i64;
	}
	v4 = *(_QWORD*)(a1 + 280);
	if (v4)
	{
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v4 + 8i64))(v4);
		*(_QWORD*)(a1 + 280) = 0i64;
	}
	sub_140019510(a1 + 5816);
	sub_140019490((_QWORD*)(a1 + 5816));
	for (i = 0i64; i < *(_QWORD*)(a1 + 5968); ++i)
	{
		v6 = *(_QWORD*)(*(_QWORD*)(a1 + 5960) + 8 * i);
		if (v6)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v6 - 16) + 8i64))(v6 - 16);
	}
	v7 = *(_QWORD*)(a1 + 5960);
	if (v7)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v7 - 16) + 8i64))(v7 - 16);
	sub_140019FB0((_QWORD*)(a1 + 5944));
	v8 = *(_QWORD*)(a1 + 5912);
	if (v8)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v8 - 16) + 8i64))(v8 - 16);
	v9 = *(_QWORD*)(a1 + 5888);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	v10 = *(_QWORD*)(a1 + 5880);
	if (v10)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v10 - 16) + 8i64))(v10 - 16);
	v11 = *(_QWORD*)(a1 + 5872);
	if (v11)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v11 - 16) + 8i64))(v11 - 16);
	v12 = *(_QWORD*)(a1 + 5856);
	if (v12)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
	sub_140019490((_QWORD*)(a1 + 5816));
	sub_14018B900(*(_QWORD*)(a1 + 5832), 0);
	*(_QWORD*)(a1 + 5832) = 0i64;
	if (*(_QWORD*)(a1 + 5608))
	{
		v13 = *(_QWORD*)(*(_QWORD*)(a1 + 5600) + 8i64);
		if (v13)
		{
			do
			{
				sub_14001A270(a1 + 5592, *(_QWORD**)(v13 + 24));
				v14 = *(_QWORD*)(v13 + 40);
				v15 = *(_QWORD*)(v13 + 16);
				if (v14)
					(*(void(__fastcall**)(__int64))(*(_QWORD*)(v14 - 16) + 8i64))(v14 - 16);
				sub_14018B900(v13, 0);
				v13 = v15;
			} while (v15);
		}
		*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 16i64) = *(_QWORD*)(a1 + 5600);
		*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 8i64) = 0i64;
		*(_QWORD*)(*(_QWORD*)(a1 + 5600) + 24i64) = *(_QWORD*)(a1 + 5600);
		*(_QWORD*)(a1 + 5608) = 0i64;
	}
	sub_14018B900(*(_QWORD*)(a1 + 5600), 0);
	if (*(_QWORD*)(a1 + 5552))
		sub_1401A4A00((const void***)(a1 + 5552));
	v16 = *(_QWORD*)(a1 + 320);
	if (v16)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)v16 + 8i64))(v16);
	v17 = *(_QWORD*)(a1 + 312);
	if (v17)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v17 - 16) + 8i64))(v17 - 16);
	LocalFree(*(HLOCAL*)(a1 + 288));
	v18 = *(HWND*)(a1 + 8);
	qword_140C65678 = 0i64;
	*(_QWORD*)a1 = &off_140B603A0;
	if (v18)
	{
		SetWindowLongPtrW(v18, -21, 0i64);
		DestroyWindow(*(HWND*)(a1 + 8));
	}
	v19 = *(_QWORD*)(a1 + 56);
	if (v19)
		LODWORD(v19) = CloseHandle(*(HANDLE*)(a1 + 56));
	return v19;
}
// 140B550F8: using guessed type __int64 (__fastcall *off_140B550F8[3])();
// 140B55100: using guessed type __int64 (__fastcall *off_140B55100[2])();
// 140B55120: using guessed type __int64 (__fastcall *off_140B55120[13])();
// 140B603A0: using guessed type __int64 (__fastcall *off_140B603A0)();
// 140C65678: using guessed type __int64 qword_140C65678;

