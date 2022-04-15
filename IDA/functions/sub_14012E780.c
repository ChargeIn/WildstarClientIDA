//----- (000000014012E780) ----------------------------------------------------
__int64 __fastcall sub_14012E780(__int64 a1)
{
	int* v2; // rax
	__int64 v3; // rdi
	_QWORD* v4; // rsi
	__int64 v5; // rax
	_QWORD* v6; // rbx
	__int64 v7; // rax
	_QWORD* v8; // rbx
	_DWORD* v9; // rax
	_DWORD* v10; // rax
	__int64 v11; // r8

	v2 = sub_14018B280(872i64, 0);
	if (v2)
		v3 = sub_140129AF0((__int64)v2, 0i64);
	else
		v3 = 0i64;
	v4 = *(_QWORD**)((*(__int64(__fastcall**)(__int64))(*(_QWORD*)v3 + 16i64))(v3) + 8);
	v5 = (*(__int64(__fastcall**)(_QWORD*))(v4[64] + 16i64))(v4 + 64);
	v6 = (_QWORD*)v5;
	if (v5)
	{
		*(_QWORD*)(v5 + 8) = v4;
		*(_QWORD*)(v5 + 16) = 0i64;
		*(_DWORD*)(v5 + 24) = 0;
		*(_QWORD*)(v5 + 32) = 0i64;
		*(_QWORD*)(v5 + 40) = 0i64;
		*(_QWORD*)(v5 + 48) = 0i64;
		*(_QWORD*)(v5 + 56) = 0i64;
		*(_QWORD*)(v5 + 64) = 0i64;
		*(_QWORD*)(v5 + 72) = 0i64;
		*(_QWORD*)(v5 + 80) = 0i64;
		*(_QWORD*)v5 = off_140B5ED50;
	}
	else
	{
		v6 = 0i64;
	}
	v6[10] = v4 + 64;
	sub_1401A4C50((__int64)(v6 + 3), (int*)L"xml version=\"1.0\" encoding=\"UTF-8\"");
	sub_1401A5A70(v4, v6);
	v7 = (*(__int64(__fastcall**)(_QWORD*))(v4[16] + 16i64))(v4 + 16);
	v8 = (_QWORD*)v7;
	if (v7)
	{
		*(_QWORD*)(v7 + 8) = v4;
		*(_QWORD*)(v7 + 16) = 0i64;
		*(_DWORD*)(v7 + 24) = 0;
		*(_QWORD*)(v7 + 32) = 0i64;
		*(_QWORD*)(v7 + 40) = 0i64;
		*(_QWORD*)(v7 + 48) = 0i64;
		*(_QWORD*)(v7 + 56) = 0i64;
		*(_QWORD*)(v7 + 64) = 0i64;
		*(_QWORD*)(v7 + 72) = 0i64;
		*(_QWORD*)(v7 + 80) = 0i64;
		*(_DWORD*)(v7 + 88) = 0;
		*(_QWORD*)v7 = off_140B5EBA0;
		*(_QWORD*)(v7 + 96) = 0i64;
	}
	else
	{
		v8 = 0i64;
	}
	v8[10] = v4 + 16;
	sub_1401A4C50((__int64)(v8 + 3), (int*)L"Document");
	sub_1401A5A70(v4, v8);
	v9 = sub_1400580E0(a1, -1);
	if (v9 != dword_140A12138 && v9[2] == 5)
	{
		v10 = sub_1400580E0(a1, -1);
		v11 = *(_QWORD*)(a1 + 16);
		*(_QWORD*)v11 = *(_QWORD*)v10;
		*(_DWORD*)(v11 + 8) = v10[2];
		*(_QWORD*)(a1 + 16) += 16i64;
		sub_14012E140(a1, v8);
		*(_QWORD*)(a1 + 16) -= 16i64;
	}
	return v3;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A209A8: using guessed type wchar_t aDocument_0[9];
// 140A452D0: using guessed type wchar_t aXmlVersion10En[35];
// 140B5EBA0: using guessed type __int64 (__fastcall *off_140B5EBA0[17])();
// 140B5ED50: using guessed type __int64 (__fastcall *off_140B5ED50[17])();

