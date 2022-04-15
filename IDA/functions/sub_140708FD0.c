#include "../winhttp.h"

//----- (0000000140708FD0) ----------------------------------------------------
__int64 __fastcall sub_140708FD0(_QWORD* a1)
{
	__int64 v1; // rsi
	int v2; // eax
	__int64 v3; // rcx
	__int64 v4; // rbp
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // eax
	__int64 v11; // rcx
	int v12; // r10d
	__int64 v13; // rbx
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rdi
	__int64 v17; // rax
	__int64 v18; // rdx
	__int64 v19; // rax
	__int64 i; // rax
	__int64 j; // rax
	__int64* v22; // rax
	__int64 v23; // r8
	__int64 v24; // rdx
	int v25; // r10d
	__int64(__fastcall * *v26)(); // [rsp+20h] [rbp-48h] BYREF
	int v27; // [rsp+28h] [rbp-40h]
	__int64 v28; // [rsp+30h] [rbp-38h]
	int v29; // [rsp+38h] [rbp-30h]
	__int64(__fastcall * *v30)(); // [rsp+40h] [rbp-28h] BYREF
	int v31; // [rsp+48h] [rbp-20h]
	__int64 v32; // [rsp+50h] [rbp-18h]
	int v33; // [rsp+58h] [rbp-10h]

	v1 = (__int64)a1;
	v2 = sub_140056D60(a1, 1u);
	v4 = sub_140452850(v3, v2);
	if (v4)
	{
		v6 = *(_QWORD*)(v1 + 32);
		v7 = *(_QWORD*)(v6 + 112);
		v28 = v1;
		v26 = off_140B569F0;
		v29 = 1;
		if (*(_QWORD*)(v6 + 120) >= v7)
			sub_14005E2C0(v1);
		v8 = *(_QWORD*)(v1 + 16);
		v9 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v8 + 8) = 5;
		*(_QWORD*)v8 = v9;
		*(_QWORD*)(v1 + 16) += 16i64;
		v10 = sub_1400578C0(v1);
		v11 = *(_QWORD*)(v4 + 8);
		v12 = v10;
		v27 = v10;
		v13 = *(_QWORD*)(v11 + 16);
		if (v13 != v11)
		{
			do
			{
				v14 = *(_QWORD*)(v1 + 32);
				v30 = off_140B569F0;
				v32 = v1;
				v15 = *(_QWORD*)(v14 + 112);
				v33 = 1;
				if (*(_QWORD*)(v14 + 120) >= v15)
					sub_14005E2C0(v1);
				v16 = *(_QWORD*)(v1 + 16);
				v17 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v16 + 8) = 5;
				*(_QWORD*)v16 = v17;
				*(_QWORD*)(v1 + 16) += 16i64;
				LODWORD(v16) = sub_1400578C0(v1);
				v31 = v16;
				sub_140451EB0((unsigned int*)(v13 + 36), (__int64)&v30);
				sub_1400FB1D0((__int64)&v26);
				sub_1400579E0(v1, v18, v16);
				v19 = *(_QWORD*)(v13 + 24);
				if (v19)
				{
					v13 = *(_QWORD*)(v13 + 24);
					for (i = *(_QWORD*)(v19 + 16); i; i = *(_QWORD*)(i + 16))
						v13 = i;
				}
				else
				{
					for (j = *(_QWORD*)(v13 + 8); v13 == *(_QWORD*)(j + 24); j = *(_QWORD*)(j + 8))
						v13 = j;
					if (*(_QWORD*)(v13 + 24) != j)
						v13 = j;
				}
			} while (v13 != *(_QWORD*)(v4 + 8));
			v1 = v28;
			v12 = v27;
		}
		v22 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v12);
		v23 = *(_QWORD*)(v1 + 16);
		v24 = *v22;
		*(_QWORD*)v23 = *v22;
		*(_DWORD*)(v23 + 8) = *((_DWORD*)v22 + 2);
		*(_QWORD*)(v1 + 16) += 16i64;
		sub_1400579E0(v1, v24, v25);
		return 1i64;
	}
	else
	{
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
		return 1i64;
	}
}
// 140708FE9: variable 'v3' is possibly undefined
// 140709116: variable 'v18' is possibly undefined
// 1407091AD: variable 'v25' is possibly undefined
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();

