#include "../winhttp.h"

//----- (00000001404315C0) ----------------------------------------------------
void __fastcall sub_1404315C0(__int64 a1, __int64 a2)
{
	_QWORD* v2; // rdi
	__int64 v3; // r13
	__int64 v5; // rax
	__int64 v6; // rcx
	_DWORD* v7; // r12
	unsigned int v8; // edx
	__int64 v9; // rcx
	unsigned __int64 v10; // rax
	__int64 v11; // rbx
	__int64 v12; // rax
	__int64 v13; // rsi
	int v14; // ebx
	unsigned int* v15; // r14
	__int64 v16; // rax
	__int64 v17; // rbp
	__int64 v18; // rdx
	unsigned __int64 v19; // rcx
	__int64 v20; // rbx
	__int64 v21; // rax
	int v22; // eax
	unsigned int v23; // r14d
	__int64 v24; // rcx
	int v25; // ebx
	_QWORD* v26; // rax
	__int64 v27; // rdx
	unsigned __int64* v28; // rdx
	unsigned __int64 v29; // r8
	_DWORD* v30; // rcx
	__int64* v31; // rax
	__int64 v32; // rdx
	__int64 v33; // rdx
	__int64 v34[2]; // [rsp+30h] [rbp-98h] BYREF
	__int64(__fastcall * *v35)(); // [rsp+40h] [rbp-88h] BYREF
	int v36; // [rsp+48h] [rbp-80h]
	_QWORD* v37; // [rsp+50h] [rbp-78h]
	int v38; // [rsp+58h] [rbp-70h]
	__int64(__fastcall * *v39)(); // [rsp+60h] [rbp-68h] BYREF
	int v40; // [rsp+68h] [rbp-60h]
	_QWORD* v41; // [rsp+70h] [rbp-58h]
	int v42; // [rsp+78h] [rbp-50h]
	__int64 v43; // [rsp+80h] [rbp-48h] BYREF
	__int64 v44; // [rsp+88h] [rbp-40h]

	v2 = *(_QWORD**)(a1 + 400);
	v3 = a1;
	if (*(_DWORD*)a2)
	{
		v5 = sub_140200660(*(_DWORD*)a2);
		v7 = (_DWORD*)v5;
		if (v5)
		{
			v8 = *(_DWORD*)(v5 + 4);
			if (v8)
			{
				if (qword_140C658F8 && sub_140448420(v6, v8))
				{
					v9 = v2[4];
					v35 = off_140B569F0;
					v10 = *(_QWORD*)(v9 + 112);
					v37 = v2;
					v38 = 1;
					if (*(_QWORD*)(v9 + 120) >= v10)
						sub_14005E2C0((__int64)v2);
					v11 = v2[2];
					v12 = sub_14005C1B0((__int64)v2, 0, 0);
					*(_DWORD*)(v11 + 8) = 5;
					*(_QWORD*)v11 = v12;
					v2[2] += 16i64;
					v13 = 0i64;
					v14 = sub_1400578C0((__int64)v2);
					v36 = v14;
					if (*(_DWORD*)(a2 + 4))
					{
						do
						{
							v15 = (unsigned int*)(*(_QWORD*)(a2 + 8) + 8 * v13);
							v16 = sub_140200AA0(*v15);
							v17 = v16;
							if (v16 && *(_DWORD*)(v16 + 4) == *v7)
							{
								v18 = v2[4];
								v39 = off_140B569F0;
								v41 = v2;
								v19 = *(_QWORD*)(v18 + 112);
								v42 = 1;
								if (*(_QWORD*)(v18 + 120) >= v19)
									sub_14005E2C0((__int64)v2);
								v20 = v2[2];
								v21 = sub_14005C1B0((__int64)v2, 0, 0);
								*(_DWORD*)(v20 + 8) = 5;
								*(_QWORD*)v20 = v21;
								v2[2] += 16i64;
								v22 = sub_1400578C0((__int64)v2);
								v23 = v15[1];
								v24 = *(_QWORD*)(v2[4] + 160i64);
								v25 = v22;
								v40 = v22;
								v26 = sub_14005C3C0(v24, v22);
								v27 = v2[2];
								*(_QWORD*)v27 = *v26;
								*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
								v2[2] += 16i64;
								v28 = (unsigned __int64*)sub_14018F0E0(&v43, L"bEnabled")[1];
								if (v28)
								{
									v29 = -1i64;
									do
										++v29;
									while (*((_BYTE*)v28 + v29));
									sub_140058710((__int64)v2, v28, v29);
								}
								else
								{
									*(_DWORD*)(v2[2] + 8i64) = 0;
									v2[2] += 16i64;
								}
								if (v44)
									sub_14018B900(v44, 0);
								v30 = (_DWORD*)v2[2];
								v30[2] = 1;
								*v30 = v23 != 0;
								v2[2] += 16i64;
								v31 = (__int64*)sub_1400580E0((__int64)v2, -3);
								sub_14005EA50((__int64)v2, v31, (int*)(v2[2] - 32i64), (unsigned int*)(v2[2] - 16i64));
								v2[2] -= 48i64;
								v34[0] = (__int64)off_140B6FE30;
								v34[1] = v17;
								if ((unsigned int)sub_1404343A0(v2, (__int64)v34))
								{
									sub_1400FB540((__int64)&v39);
									v2[2] -= 16i64;
								}
								v34[0] = (__int64)&off_140B567A8;
								sub_1400FB1D0((__int64)&v35);
								sub_1400579E0((__int64)v2, v32, v25);
							}
							v13 = (unsigned int)(v13 + 1);
						} while ((unsigned int)v13 < *(_DWORD*)(a2 + 4));
						v2 = v37;
						v14 = v36;
						v3 = a1;
					}
					sub_1400EA3E0(v3, "GenericMapShow", "iT", (unsigned int)v7[1], v14);
					if (v2)
						sub_1400579E0((__int64)v2, v33, v14);
				}
			}
		}
	}
}
// 14043161A: variable 'v6' is possibly undefined
// 14043185F: variable 'v32' is possibly undefined
// 1404318C3: variable 'v33' is possibly undefined
// 140B015F8: using guessed type wchar_t aBenabled_0[9];
// 140B567A8: using guessed type __int64 (__fastcall *off_140B567A8)();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B6FE30: using guessed type __int64 (__fastcall *off_140B6FE30[2])();
// 140C658F8: using guessed type __int64 qword_140C658F8;

