#include "../winhttp.h"

//----- (00000001405DC7F0) ----------------------------------------------------
void __fastcall sub_1405DC7F0(__int64 a1, __int64 a2)
{
	__int64 v3; // rdi
	__int64 v4; // rdx
	unsigned __int64 v5; // rax
	__int64 v7; // rbx
	__int64 v8; // rax
	unsigned __int64 v9; // rsi
	int v10; // ebx
	__int64 v11; // rbx
	__int64 v12; // rdi
	__int64 v13; // rax
	__int64 v14; // rcx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64(__fastcall * *v17)(); // [rsp+20h] [rbp-58h] BYREF
	int v18; // [rsp+28h] [rbp-50h]
	__int64 v19; // [rsp+30h] [rbp-48h]
	int v20; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v21)(); // [rsp+40h] [rbp-38h] BYREF
	int v22; // [rsp+48h] [rbp-30h]
	__int64 v23; // [rsp+50h] [rbp-28h]
	int v24; // [rsp+58h] [rbp-20h]

	if (a2)
	{
		v3 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
		v4 = *(_QWORD*)(v3 + 32);
		v17 = off_140B569F0;
		v19 = v3;
		v5 = *(_QWORD*)(v4 + 112);
		v20 = 1;
		if (*(_QWORD*)(v4 + 120) >= v5)
			sub_14005E2C0(v3);
		v7 = *(_QWORD*)(v3 + 16);
		v8 = sub_14005C1B0(v3, 0, 0);
		*(_DWORD*)(v7 + 8) = 5;
		*(_QWORD*)v7 = v8;
		*(_QWORD*)(v3 + 16) += 16i64;
		v9 = 0i64;
		v10 = sub_1400578C0(v3);
		v18 = v10;
		if (*(_QWORD*)(a1 + 112))
		{
			do
			{
				v21 = off_140B569F0;
				v24 = 1;
				v11 = *(_QWORD*)(*(_QWORD*)(qword_140C65898 + 29504) + 400i64);
				v23 = v11;
				if (*(_QWORD*)(*(_QWORD*)(v11 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v11 + 32) + 112i64))
					sub_14005E2C0(v11);
				v12 = *(_QWORD*)(v11 + 16);
				v13 = sub_14005C1B0(v11, 0, 0);
				*(_DWORD*)(v12 + 8) = 5;
				*(_QWORD*)v12 = v13;
				*(_QWORD*)(v11 + 16) += 16i64;
				LODWORD(v12) = sub_1400578C0(v11);
				v14 = *(_QWORD*)(*(_QWORD*)(a1 + 104) + 8 * v9);
				v22 = v12;
				sub_1405DBD60(v14, (__int64)&v21);
				sub_1400FB1D0((__int64)&v17);
				sub_1400579E0(v11, v15, v12);
				++v9;
			} while (v9 < *(_QWORD*)(a1 + 112));
			v3 = v19;
			v10 = v18;
		}
		sub_1400FB2A0(a2, (__int64)L"arCharacters", v10);
		if (v3)
			sub_1400579E0(v3, v16, v10);
	}
}
// 1405DC92F: variable 'v15' is possibly undefined
// 1405DC974: variable 'v16' is possibly undefined
// 140B22E58: using guessed type wchar_t aArcharacters[13];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

