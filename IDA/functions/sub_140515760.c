#include "../winhttp.h"

//----- (0000000140515760) ----------------------------------------------------
int __fastcall sub_140515760(__int64 a1)
{
	__int64 v1; // rax
	int* v2; // rdx
	unsigned int v4; // ecx
	__int64 v5; // rcx
	__int64 v6; // rdx
	wchar_t* v7; // r9
	WCHAR* v8; // r8
	__int64 v9; // rcx
	int v11; // [rsp+20h] [rbp-38h]
	_QWORD v12[5]; // [rsp+30h] [rbp-28h] BYREF
	__int64 v13; // [rsp+60h] [rbp+8h] BYREF

	LODWORD(v1) = *(_DWORD*)(a1 + 16);
	v2 = (int*)(a1 + 16);
	if ((int)v1 < 300)
	{
		v4 = *(_DWORD*)(a1 + 20);
		if (v4 != -1 && ((_DWORD)v1 || (LODWORD(v1) = v4 < 0x1F) != 0))
		{
			v1 = sub_1403AC780(qword_140C65898 + 160, v2);
			if (v1)
			{
				v5 = *(_QWORD*)(v1 + 72);
				v13 = 0i64;
				if (v5)
					v6 = v5;
				else
					v6 = *(_QWORD*)(v1 + 64) + 8i64;
				if (!v6)
					goto LABEL_16;
				if (!v5)
					v5 = *(_QWORD*)(v1 + 64) + 8i64;
				if (sub_1404AA7D0(
					v5,
					*(_DWORD*)(*(_QWORD*)(v1 + 64) + 324i64),
					**(_DWORD**)(v1 + 64),
					*(_DWORD*)(v5 + 4),
					v11,
					&v13)
					&& v13
					&& (*(_BYTE*)(v13 + 8) & 4) != 0)
				{
					v7 = L"Salvage With Key:";
					v8 = L"CRB_SalvageWithKey";
				}
				else
				{
				LABEL_16:
					v7 = L"Salvage:";
					v8 = L"CRB_Salvage";
				}
				sub_1400E2630(v5, v12, v8, (int*)v7);
				v9 = *(_QWORD*)(a1 + 32);
				*(_QWORD*)(a1 + 32) = v12[1];
				*(_QWORD*)(a1 + 40) = v12[2];
				*(_QWORD*)(a1 + 48) = v12[3];
				if (v9)
					sub_14018B900(v9, 0);
				LODWORD(v1) = sub_1405153A0(a1);
			}
		}
	}
	return v1;
}
// 140515801: variable 'v11' is possibly undefined
// 14051583D: variable 'v5' is possibly undefined
// 140B6B890: using guessed type wchar_t aSalvageWithKey[18];
// 140B6B8B8: using guessed type wchar_t aCrbSalvagewith[19];
// 140B6B8E0: using guessed type wchar_t aCrbSalvage[12];
// 140B6B908: using guessed type wchar_t aSalvage_0[9];
// 140C65898: using guessed type __int64 qword_140C65898;

