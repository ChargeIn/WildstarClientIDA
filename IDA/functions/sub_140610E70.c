#include "../winhttp.h"

//----- (0000000140610E70) ----------------------------------------------------
void __fastcall sub_140610E70(__int64 a1)
{
	_QWORD* v2; // rbx
	__int64 v3; // rdx
	__int64 v4; // rdi
	__int64 v5; // rax
	unsigned int v6; // eax
	int v7; // edx
	unsigned int v8; // edi
	__int64 v9; // rax
	__int64 v10; // rax
	int v11; // edx
	_QWORD* v12; // rax
	__int64 v13; // rdx
	int v14; // r10d
	int v15; // ebp
	_QWORD* v16; // rax
	__int64 v17; // r10
	unsigned __int64* v18; // rdx
	int v19; // esi
	unsigned __int64 v20; // r8
	_DWORD* v21; // rax
	__int64* v22; // rax
	__int64 v23; // rcx
	__int64 v24; // rdx
	__int64(__fastcall * *v25)(); // [rsp+20h] [rbp-28h] BYREF
	__int64 v26; // [rsp+28h] [rbp-20h]
	_QWORD* v27; // [rsp+30h] [rbp-18h]
	int v28; // [rsp+38h] [rbp-10h]

	v28 = 1;
	v2 = *(_QWORD**)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
	v25 = off_140B569F0;
	v3 = v2[4];
	v27 = v2;
	if (*(_QWORD*)(v3 + 120) >= *(_QWORD*)(v3 + 112))
		sub_14005E2C0((__int64)v2);
	v4 = v2[2];
	v5 = sub_14005C1B0((__int64)v2, 0, 0);
	*(_DWORD*)(v4 + 8) = 5;
	*(_QWORD*)v4 = v5;
	v2[2] += 16i64;
	v6 = sub_1400578C0((__int64)v2);
	v7 = *(_DWORD*)(a1 + 8);
	v8 = v6;
	LODWORD(v26) = v6;
	if ((unsigned int)sub_140649870(v2, v7))
	{
		sub_1400FB540((__int64)&v25);
		v2[2] -= 16i64;
	}
	v9 = sub_1403D90D0(qword_140C65898, *(_DWORD*)(a1 + 8));
	if (v9)
	{
		v10 = sub_14047DCA0(v9);
		if (v10)
		{
			v11 = *(_DWORD*)(v10 + 8);
			if (v11 != *(_DWORD*)(a1 + 8))
			{
				if ((unsigned int)sub_140649870(v2, v11))
				{
					sub_1400FB540((__int64)&v25);
					v2[2] -= 16i64;
				}
			}
		}
	}
	v12 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	v13 = v2[2];
	*(_QWORD*)v13 = *v12;
	*(_DWORD*)(v13 + 8) = *((_DWORD*)v12 + 2);
	v2[2] += 16i64;
	sub_1400F06F0((__int64)v2, v13, L"eDatacubeType", v14);
	v2[2] -= 16i64;
	v15 = *(_DWORD*)(a1 + 20);
	v16 = sub_14005C3C0(*(_QWORD*)(v2[4] + 160i64), v8);
	*(_QWORD*)v17 = *v16;
	*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
	v2[2] += 16i64;
	v18 = (unsigned __int64*)sub_14018F0E0(&v25, L"bHasPieces")[1];
	v19 = 0;
	if (v18)
	{
		v20 = -1i64;
		do
			++v20;
		while (*((_BYTE*)v18 + v20));
		sub_140058710((__int64)v2, v18, v20);
	}
	else
	{
		*(_DWORD*)(v2[2] + 8i64) = 0;
		v2[2] += 16i64;
	}
	if (v26)
		sub_14018B900(v26, 0);
	v21 = (_DWORD*)v2[2];
	LOBYTE(v19) = v15 != 0;
	v21[2] = 1;
	*v21 = v19;
	v2[2] += 16i64;
	v22 = (__int64*)sub_1400580E0((__int64)v2, -3);
	sub_14005EA50((__int64)v2, v22, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
	v23 = qword_140C65898;
	v2[2] -= 48i64;
	Apollo_LUAEvent(*(_QWORD*)(v23 + 29504), "CombatLogDatacube", byte_1409EB774, v8, v25);
	sub_1400579E0((__int64)v2, v24, v8);
}
// 140610FA1: variable 'v14' is possibly undefined
// 140610FCE: variable 'v17' is possibly undefined
// 1406110A5: variable 'v24' is possibly undefined
// 1409EB774: using guessed type _BYTE byte_1409EB774[112];
// 140B26E58: using guessed type wchar_t aEdatacubetype[14];
// 140B26E78: using guessed type wchar_t aBhaspieces[11];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

