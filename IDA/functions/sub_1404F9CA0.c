#include "../winhttp.h"

//----- (00000001404F9CA0) ----------------------------------------------------
__int64 __fastcall sub_1404F9CA0(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rsi
	__int64 v4; // rcx
	__int64 v5; // r14
	__int64 v6; // rcx
	__int64 v7; // rbx
	__int64 v8; // rax
	int v9; // eax
	__int64 v10; // rcx
	_DWORD* v11; // rdx
	_DWORD* v12; // rbx
	__int64 v13; // rdx
	unsigned __int64 v14; // rcx
	__int64 v15; // rax
	__int64 v16; // rax
	__int64 v17; // rbx
	__int64 v18; // rdi
	int v19; // eax
	signed int v20; // eax
	__int64(__fastcall * *v22)(); // [rsp+30h] [rbp-158h] BYREF
	int v23; // [rsp+38h] [rbp-150h]
	_QWORD* v24; // [rsp+40h] [rbp-148h]
	int v25; // [rsp+48h] [rbp-140h]
	__int64 v26; // [rsp+50h] [rbp-138h] BYREF
	int v27; // [rsp+58h] [rbp-130h]
	unsigned int v28[4]; // [rsp+60h] [rbp-128h] BYREF
	WCHAR Buffer[128]; // [rsp+70h] [rbp-118h] BYREF

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v5 = *(_QWORD*)(v3 + 2168);
		if (v5)
		{
			v6 = a1[4];
			v24 = a1;
			v22 = off_140B569F0;
			v25 = 1;
			v23 = -2;
			if (*(_QWORD*)(v6 + 120) >= *(_QWORD*)(v6 + 112))
				sub_14005E2C0((__int64)a1);
			v7 = a1[2];
			v8 = sub_14005C1B0((__int64)a1, 0, 0);
			*(_DWORD*)(v7 + 8) = 5;
			*(_QWORD*)v7 = v8;
			a1[2] += 16i64;
			v9 = sub_1400578C0((__int64)a1);
			v10 = (__int64)v24;
			v23 = v9;
			v11 = (_DWORD*)(v24[3] + 16i64);
			if ((unsigned __int64)v11 < v24[2])
			{
				v12 = dword_140A12138;
				if (v11 != dword_140A12138 && *(_DWORD*)(v24[3] + 24i64) == 5)
				{
					sub_1400579E0((__int64)v24, (__int64)v11, v9);
					v13 = (__int64)v24;
					v14 = v24[2];
					if (v24[3] + 16i64 < v14)
						v12 = (_DWORD*)(v24[3] + 16i64);
					*(_QWORD*)v14 = *(_QWORD*)v12;
					*(_DWORD*)(v14 + 8) = v12[2];
					*(_QWORD*)(v13 + 16) += 16i64;
					v23 = sub_1400578C0((__int64)v24);
					sub_14069DD00((__int64)v28, &v22);
					v15 = sub_140202860(v28[0]);
					if (v15)
					{
						v16 = sub_14020BD20(*(_DWORD*)(v15 + 12));
						v17 = v16;
						if (v16)
						{
							v18 = sub_14020A3A0(*(_DWORD*)(v16 + 16));
							if (v18)
							{
								v19 = sub_14057AA00(v28);
								v26 = v17;
								v27 = v19;
								v20 = (*(__int64(__fastcall**)(__int64, _QWORD, __int64*))(*(_QWORD*)v5 + 72i64))(
									v5,
									*(unsigned int*)(v18 + 8),
									&v26);
								if (v20 < 0)
								{
									sub_1401B3450((char*)Buffer, 128i64, v20);
									sub_1400035B0();
								}
								*(_DWORD*)(v3 + 1040) = 1;
							}
						}
					}
					v9 = v23;
					v10 = (__int64)v24;
				}
			}
			v22 = off_140B56A08;
			if (v10)
				sub_1400579E0(v10, (__int64)off_140B56A08, v9);
		}
	}
	return 0i64;
}
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 1404F9CA0: using guessed type WCHAR Buffer[128];

