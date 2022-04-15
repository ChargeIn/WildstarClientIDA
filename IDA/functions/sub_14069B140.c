#include "../winhttp.h"

//----- (000000014069B140) ----------------------------------------------------
__int64 __fastcall sub_14069B140(_QWORD* a1)
{
	__int64 v1; // rdi
	__int64 v2; // rax
	__int64 v3; // rcx
	__int64 v4; // rdx
	__int64 v5; // r14
	__int64 v6; // rcx
	unsigned __int64 v7; // rax
	__int64 v8; // rbx
	__int64 v9; // rax
	int v10; // ebx
	unsigned int v11; // esi
	unsigned int v12; // eax
	unsigned int v13; // ebp
	__int64 v14; // rcx
	unsigned __int64 v15; // rax
	__int64 v16; // rbx
	__int64 v17; // rax
	int v18; // ebx
	unsigned int* v19; // rax
	__int64 v20; // rdx
	_QWORD* v21; // rax
	__int64 v22; // r8
	__int64 v23; // rdx
	__int64(__fastcall * *v25)(); // [rsp+20h] [rbp-58h] BYREF
	int v26; // [rsp+28h] [rbp-50h]
	__int64 v27; // [rsp+30h] [rbp-48h]
	int v28; // [rsp+38h] [rbp-40h]
	__int64(__fastcall * *v29)(); // [rsp+40h] [rbp-38h] BYREF
	int v30; // [rsp+48h] [rbp-30h]
	__int64 v31; // [rsp+50h] [rbp-28h]
	int v32; // [rsp+58h] [rbp-20h]

	v1 = (__int64)a1;
	v2 = sub_140056AB0(a1, 1u);
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 8);
		if (v4)
		{
			v5 = sub_1405845F0(v3, *(_QWORD*)(v4 + 8));
			if (v5)
			{
				v6 = *(_QWORD*)(v1 + 32);
				v7 = *(_QWORD*)(v6 + 112);
				v25 = off_140B569F0;
				v27 = v1;
				v28 = 1;
				if (*(_QWORD*)(v6 + 120) >= v7)
					sub_14005E2C0(v1);
				v8 = *(_QWORD*)(v1 + 16);
				v9 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v8 + 8) = 5;
				*(_QWORD*)v8 = v9;
				*(_QWORD*)(v1 + 16) += 16i64;
				v10 = sub_1400578C0(v1);
				v26 = v10;
				v11 = 0;
				if (qword_140C63838)
				{
					v12 = qword_140C63838(off_140A6A638, qword_140C63858);
				}
				else
				{
					if (dword_140C655D0 || (int)sub_140202A40() < 0)
					{
					LABEL_23:
						v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v10);
						v22 = *(_QWORD*)(v1 + 16);
						*(_QWORD*)v22 = *v21;
						v23 = *((unsigned int*)v21 + 2);
						*(_DWORD*)(v22 + 8) = v23;
						*(_QWORD*)(v1 + 16) += 16i64;
						sub_1400579E0(v1, v23, v10);
						return 1i64;
					}
					v12 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C646B0 + 40i64))(qword_140C646B0);
				}
				v13 = v12;
				if (v12)
				{
					do
					{
						v14 = *(_QWORD*)(v1 + 32);
						v29 = off_140B569F0;
						v31 = v1;
						v15 = *(_QWORD*)(v14 + 112);
						v32 = 1;
						if (*(_QWORD*)(v14 + 120) >= v15)
							sub_14005E2C0(v1);
						v16 = *(_QWORD*)(v1 + 16);
						v17 = sub_14005C1B0(v1, 0, 0);
						*(_DWORD*)(v16 + 8) = 5;
						*(_QWORD*)v16 = v17;
						*(_QWORD*)(v1 + 16) += 16i64;
						v18 = sub_1400578C0(v1);
						v30 = v18;
						if (qword_140C63848)
						{
							v19 = (unsigned int*)qword_140C63848(off_140A6A638, v11, qword_140C63858);
						}
						else if (dword_140C655D0)
						{
							v19 = 0i64;
						}
						else if ((int)sub_140202A40() >= 0)
						{
							v19 = (unsigned int*)(*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C646B0 + 32i64))(
								qword_140C646B0,
								v11);
						}
						else
						{
							v19 = 0i64;
						}
						sub_140580280(v5, (__int64)&v29, v19);
						sub_1400FB1D0((__int64)&v25);
						sub_1400579E0(v1, v20, v18);
						++v11;
					} while (v11 < v13);
					v1 = v27;
					v10 = v26;
				}
				goto LABEL_23;
			}
		}
	}
	*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
	*(_QWORD*)(v1 + 16) += 16i64;
	return 1i64;
}
// 14069B176: variable 'v3' is possibly undefined
// 14069B312: variable 'v20' is possibly undefined
// 140A6A638: using guessed type wchar_t *off_140A6A638[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C646B0: using guessed type __int64 qword_140C646B0;
// 140C655D0: using guessed type int dword_140C655D0;

