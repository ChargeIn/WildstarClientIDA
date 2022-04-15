#include "../winhttp.h"

//----- (00000001406922F0) ----------------------------------------------------
void __fastcall sub_1406922F0(__int64 a1, __int64 a2, __int64 a3)
{
	__int64 v6; // rdi
	__int64 v7; // rax
	int v8; // ebp
	_QWORD* v9; // rax
	__int64 v10; // rdx
	int v11; // r15d
	_QWORD* v12; // rax
	__int64 v13; // r10
	unsigned __int64* v14; // rdx
	unsigned __int64 v15; // rdi
	int v16; // esi
	unsigned __int64 v17; // r8
	_DWORD* v18; // rcx
	__int64* v19; // rax
	int v20; // r15d
	_QWORD* v21; // rax
	__int64 v22; // r10
	unsigned __int64* v23; // rdx
	unsigned __int64 v24; // r8
	_DWORD* v25; // rcx
	__int64* v26; // rax
	int v27; // r14d
	_QWORD* v28; // rax
	__int64 v29; // r10
	unsigned __int64* v30; // rdx
	_DWORD* v31; // rax
	__int64* v32; // rax
	__int64 v33; // rdx
	__int64 v34; // [rsp+20h] [rbp-38h] BYREF
	__int64 v35; // [rsp+28h] [rbp-30h]

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v6 = *(_QWORD*)(a1 + 16);
	v7 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v6 + 8) = 5;
	*(_QWORD*)v6 = v7;
	*(_QWORD*)(a1 + 16) += 16i64;
	v8 = sub_1400578C0(a1);
	v9 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	v10 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v10 = *v9;
	*(_DWORD*)(v10 + 8) = *((_DWORD*)v9 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400F0870(a1, v10, L"strMemberName", (unsigned __int16*)(a2 + 16));
	*(_QWORD*)(a1 + 16) -= 16i64;
	v11 = *(_DWORD*)(a2 + 84);
	v12 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v14 = (unsigned __int64*)sub_14018F0E0(&v34, L"bIsChannelOwner")[1];
	v15 = -1i64;
	v16 = 0;
	if (v14)
	{
		v17 = -1i64;
		do
			++v17;
		while (*((_BYTE*)v14 + v17));
		sub_140058710(a1, v14, v17);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v18 = *(_DWORD**)(a1 + 16);
	v18[2] = 1;
	*v18 = v11 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v19 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v19, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v20 = *(_DWORD*)(a2 + 88);
	v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	*(_QWORD*)v22 = *v21;
	*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v23 = (unsigned __int64*)sub_14018F0E0(&v34, L"bIsModerator")[1];
	if (v23)
	{
		v24 = -1i64;
		do
			++v24;
		while (*((_BYTE*)v23 + v24));
		sub_140058710(a1, v23, v24);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v25 = *(_DWORD**)(a1 + 16);
	v25[2] = 1;
	*v25 = v20 != 0;
	*(_QWORD*)(a1 + 16) += 16i64;
	v26 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v26, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v27 = *(_DWORD*)(a2 + 92);
	v28 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v8);
	*(_QWORD*)v29 = *v28;
	*(_DWORD*)(v29 + 8) = *((_DWORD*)v28 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v30 = (unsigned __int64*)sub_14018F0E0(&v34, L"bIsMuted")[1];
	if (v30)
	{
		do
			++v15;
		while (*((_BYTE*)v30 + v15));
		sub_140058710(a1, v30, v15);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (v35)
		sub_14018B900(v35, 0);
	v31 = *(_DWORD**)(a1 + 16);
	LOBYTE(v16) = v27 != 0;
	v31[2] = 1;
	*v31 = v16;
	*(_QWORD*)(a1 + 16) += 16i64;
	v32 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v32, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	sub_1400FB1D0(a3);
	sub_1400579E0(a1, v33, v8);
}
// 1406923BA: variable 'v13' is possibly undefined
// 14069247C: variable 'v22' is possibly undefined
// 140692539: variable 'v29' is possibly undefined
// 140692605: variable 'v33' is possibly undefined
// 140B33AF0: using guessed type wchar_t aBismuted[9];
// 140B33B08: using guessed type wchar_t aBischannelowne[16];
// 140B33B28: using guessed type wchar_t aBismoderator[13];
// 140B33B58: using guessed type wchar_t aStrmembername[14];

