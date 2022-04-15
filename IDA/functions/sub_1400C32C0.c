//----- (00000001400C32C0) ----------------------------------------------------
__int64 __fastcall sub_1400C32C0(__int64 a1)
{
	int* v2; // rax
	int v3; // eax
	__int64 v4; // rcx
	__int64 v5; // r8
	__int64 v6; // rdx
	_DWORD* v7; // rcx
	int v8; // eax
	int* v9; // rax
	int* v10; // rax
	__int64 result; // rax

	*(_WORD*)a1 = 1;
	*(_QWORD*)(a1 + 16) = 0i64;
	*(_QWORD*)(a1 + 24) = 0i64;
	*(_QWORD*)(a1 + 32) = 0i64;
	v2 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 16) = v2;
	*(_QWORD*)(a1 + 24) = v2;
	*(_QWORD*)(a1 + 32) = v2 + 4;
	if (v2)
		*(_WORD*)v2 = 0;
	v3 = sub_140142170(qword_140C63678, L"white");
	v4 = qword_140C63678;
	*(_DWORD*)(a1 + 40) = v3;
	*(_DWORD*)(a1 + 44) = sub_140142170(v4, L"white");
	v5 = 4i64;
	*(_DWORD*)(a1 + 128) = 0;
	v6 = a1 + 64;
	v7 = (_DWORD*)(a1 + 112);
	do
	{
		v8 = *(_DWORD*)((char*)v7 + (_QWORD)((char*)&unk_140A14E90 - a1 - 48) - 64);
		*v7 = 0;
		v6 += 8i64;
		*(v7 - 4) = v8;
		*(_QWORD*)(v6 - 8) = 0i64;
		++v7;
		--v5;
	} while (v5);
	*(_DWORD*)(a1 + 144) = 0;
	*(_QWORD*)(a1 + 160) = 0i64;
	*(_QWORD*)(a1 + 168) = 0i64;
	*(_QWORD*)(a1 + 176) = 0i64;
	v9 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 160) = v9;
	*(_QWORD*)(a1 + 168) = v9;
	*(_QWORD*)(a1 + 176) = v9 + 4;
	if (v9)
		*(_WORD*)v9 = 0;
	*(_QWORD*)(a1 + 192) = 0i64;
	*(_QWORD*)(a1 + 200) = 0i64;
	*(_QWORD*)(a1 + 208) = 0i64;
	v10 = sub_14018B280(16i64, 0);
	*(_QWORD*)(a1 + 192) = v10;
	*(_QWORD*)(a1 + 200) = v10;
	*(_QWORD*)(a1 + 208) = v10 + 4;
	if (v10)
		*(_WORD*)v10 = 0;
	result = a1;
	*(_DWORD*)(a1 + 216) = 0;
	return result;
}
// 140B567B8: using guessed type wchar_t aWhite_3[6];
// 140C63678: using guessed type __int64 qword_140C63678;

