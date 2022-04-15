#include "../winhttp.h"

//----- (0000000140737470) ----------------------------------------------------
__int64 __fastcall sub_140737470(__int64 a1)
{
	__int64 v2; // rdi
	__int64 v3; // rax
	int v4; // edi
	int v5; // esi
	int v6; // ebp
	__int64 v7; // rdx
	__int64 v8; // rcx
	__int64 v9; // rax
	_QWORD* v10; // rax
	__int64 v11; // rdx
	int v12; // r10d
	_QWORD* v13; // rax
	__int64 v14; // rdx
	unsigned __int64* v15; // rdx
	unsigned __int64 v16; // r8
	_DWORD* v17; // rax
	__int64* v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // r10
	__int64 v21; // rdx
	__int128 v23[2]; // [rsp+20h] [rbp-28h] BYREF

	if (*(_QWORD*)(*(_QWORD*)(a1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(a1 + 32) + 112i64))
		sub_14005E2C0(a1);
	v2 = *(_QWORD*)(a1 + 16);
	v3 = sub_14005C1B0(a1, 0, 0);
	*(_DWORD*)(v2 + 8) = 5;
	*(_QWORD*)v2 = v3;
	*(_QWORD*)(a1 + 16) += 16i64;
	v4 = 0;
	v5 = sub_1400578C0(a1);
	v6 = 0;
	v7 = 0i64;
	if (qword_140C7DE20)
	{
		while (1)
		{
			v8 = *(_QWORD*)(qword_140C7DE18 + 8 * v7);
			if (*(_DWORD*)(v8 + 16) == 7)
				break;
			if (++v7 >= (unsigned __int64)qword_140C7DE20)
				goto LABEL_11;
		}
		if (v8)
		{
			LODWORD(v23[0]) = *(_DWORD*)(qword_140C635F0 + 5760);
			*((_QWORD*)&v23[0] + 1) = *(_QWORD*)(qword_140C635F0 + 5792);
			v9 = sub_14057FF90(v8, v23);
			if (v9)
			{
				if (*(_DWORD*)(v9 + 80) != -1)
				{
					v6 = 1;
					v10 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
					v11 = *(_QWORD*)(a1 + 16);
					*(_QWORD*)v11 = *v10;
					*(_DWORD*)(v11 + 8) = *((_DWORD*)v10 + 2);
					*(_QWORD*)(a1 + 16) += 16i64;
					sub_1400F06F0(a1, v11, L"nPlotIndex", v12);
					*(_QWORD*)(a1 + 16) -= 16i64;
				}
			}
		}
	}
LABEL_11:
	v13 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	v14 = *(_QWORD*)(a1 + 16);
	*(_QWORD*)v14 = *v13;
	*(_DWORD*)(v14 + 8) = *((_DWORD*)v13 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	v15 = (unsigned __int64*)sub_14018F0E0(v23, L"bHasReservation")[1];
	if (v15)
	{
		v16 = -1i64;
		do
			++v16;
		while (*((_BYTE*)v15 + v16));
		sub_140058710(a1, v15, v16);
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(a1 + 16) + 8i64) = 0;
		*(_QWORD*)(a1 + 16) += 16i64;
	}
	if (*((_QWORD*)&v23[0] + 1))
		sub_14018B900(*((__int64*)&v23[0] + 1), 0);
	v17 = *(_DWORD**)(a1 + 16);
	LOBYTE(v4) = v6 != 0;
	v17[2] = 1;
	*v17 = v4;
	*(_QWORD*)(a1 + 16) += 16i64;
	v18 = (__int64*)sub_1400580E0(a1, -3);
	sub_14005EA50(a1, v18, (int*)(*(_QWORD*)(a1 + 16) - 32i64), (unsigned int*)(*(_QWORD*)(a1 + 16) - 16i64));
	*(_QWORD*)(a1 + 16) -= 48i64;
	v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(a1 + 32) + 160i64), v5);
	*(_QWORD*)v20 = *v19;
	*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
	*(_QWORD*)(a1 + 16) += 16i64;
	sub_1400579E0(a1, v21, v5);
	return 1i64;
}
// 14073756C: variable 'v12' is possibly undefined
// 14073764F: variable 'v20' is possibly undefined
// 140737661: variable 'v21' is possibly undefined
// 140B47460: using guessed type wchar_t aBhasreservatio[16];
// 140B47480: using guessed type wchar_t aNplotindex[11];
// 140C635F0: using guessed type __int64 qword_140C635F0;
// 140C7DE18: using guessed type __int64 qword_140C7DE18;
// 140C7DE20: using guessed type __int64 qword_140C7DE20;

