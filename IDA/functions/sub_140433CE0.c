#include "../winhttp.h"

//----- (0000000140433CE0) ----------------------------------------------------
void __fastcall sub_140433CE0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
	__int64* v7; // r12
	__int64 v8; // rsi
	__int64 v9; // rbx
	__int64 v10; // rcx
	__int64 v11; // rdi
	__int64 v12; // rax
	int v13; // eax
	__int64 v14; // rdx
	int v15; // ebp
	__int64 v16; // rdi
	__int64 v17; // rax
	int v18; // ecx
	__int64 v19; // rcx
	__int64 v20; // rdx
	__int64(__fastcall * *v21)(); // [rsp+20h] [rbp-148h] BYREF
	int v22; // [rsp+28h] [rbp-140h]
	__int64 v23; // [rsp+30h] [rbp-138h]
	int v24; // [rsp+38h] [rbp-130h]
	int v25[2]; // [rsp+40h] [rbp-128h] BYREF
	__int64 v26; // [rsp+48h] [rbp-120h]
	__int64 v27; // [rsp+50h] [rbp-118h]
	int v28; // [rsp+58h] [rbp-110h]
	int v29; // [rsp+5Ch] [rbp-10Ch]
	_DWORD v30[48]; // [rsp+60h] [rbp-108h] BYREF

	v7 = (__int64*)sub_140498A40(qword_140C65980, a4, 0);
	if (v7 && a3)
	{
		v8 = a2 + 8;
		do
		{
			v9 = *(_QWORD*)(a1 + 16);
			v21 = off_140B569F0;
			v24 = 1;
			v10 = *(_QWORD*)(v9 + 32);
			v23 = v9;
			if (*(_QWORD*)(v10 + 120) >= *(_QWORD*)(v10 + 112))
				sub_14005E2C0(v9);
			v11 = *(_QWORD*)(v9 + 16);
			v12 = sub_14005C1B0(v9, 0, 0);
			*(_DWORD*)(v11 + 8) = 5;
			*(_QWORD*)v11 = v12;
			*(_QWORD*)(v9 + 16) += 16i64;
			v13 = sub_1400578C0(v9);
			v14 = *v7;
			v15 = v13;
			v22 = v13;
			v16 = (*(__int64(__fastcall**)(__int64*))(v14 + 24))(v7);
			LODWORD(v26) = 0;
			v27 = 0i64;
			sub_1405F8DC0(v30);
			v17 = *(_QWORD*)(v8 + 8);
			v25[0] = *(_DWORD*)(v8 - 8);
			v18 = *(_DWORD*)(v8 - 4);
			v28 = 23;
			v25[1] = v18;
			v19 = *(_QWORD*)v8;
			v29 = 4;
			v26 = v19;
			v27 = v17;
			sub_1405F8C40((__int64)v30, v8 + 24);
			v28 = *(_DWORD*)(v8 + 16);
			v29 = *(_DWORD*)(v8 + 20);
			if ((unsigned int)sub_1405F0F90((__int64)&v21, (__int64)v25, v16, 1))
				sub_1400FB1D0(a1);
			sub_1400579E0(v9, v20, v15);
			v8 += 48i64;
			--a3;
		} while (a3);
	}
}
// 140433E53: variable 'v20' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65980: using guessed type __int64 qword_140C65980;
// 140433CE0: using guessed type _DWORD var_108[48];

