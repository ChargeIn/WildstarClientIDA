#include "../winhttp.h"

//----- (00000001404308E0) ----------------------------------------------------
void __fastcall sub_1404308E0(__int64 a1, __int64 a2)
{
	__int64 v2; // rdi
	__int64 v5; // rbx
	__int64 v6; // rax
	__int64 v7; // rax
	unsigned __int64* v8; // rdx
	unsigned __int64 v9; // r8
	__int64 v10; // rbx
	__int64 v11; // rdx
	__int64 v12; // [rsp+20h] [rbp-88h] BYREF
	__int64 v13; // [rsp+28h] [rbp-80h]
	unsigned __int16 v14[32]; // [rsp+40h] [rbp-68h] BYREF

	v2 = *(_QWORD*)(a1 + 400);
	if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
		sub_14005E2C0(v2);
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_14001B370(v14, 30i64, L"%I64u", a2);
	v7 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v7 = 0x3FF0000000000000i64;
	*(_DWORD*)(v7 + 8) = 3;
	*(_QWORD*)(v2 + 16) += 16i64;
	v8 = (unsigned __int64*)sub_14018F0E0(&v12, v14)[1];
	if (v8)
	{
		v9 = -1i64;
		do
			++v9;
		while (*((_BYTE*)v8 + v9));
		sub_140058710(v2, v8, v9);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v2 + 16) + 8i64) = 0;
		*(_QWORD*)(v2 + 16) += 16i64;
	}
	if (v13)
		sub_14018B900(v13, 0);
	sub_14005EA50(
		v2,
		(__int64*)(*(_QWORD*)(v2 + 16) - 48i64),
		(int*)(*(_QWORD*)(v2 + 16) - 32i64),
		(unsigned int*)(*(_QWORD*)(v2 + 16) - 16i64));
	*(_QWORD*)(v2 + 16) -= 32i64;
	v10 = (unsigned int)sub_1400578C0(v2);
	sub_1400EA3E0(a1, "UnavailableMail", L"T", v10);
	sub_1400579E0(v2, v11, v10);
}
// 140430A0D: variable 'v11' is possibly undefined
// 1409EECBC: using guessed type wchar_t aT_52[2];
// 140B01458: using guessed type wchar_t aI64u_1[6];
// 1404308E0: using guessed type unsigned __int16 var_68[32];

