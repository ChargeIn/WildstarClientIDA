#include "../winhttp.h"

//----- (00000001406F9320) ----------------------------------------------------
__int64 __fastcall sub_1406F9320(__int64 a1)
{
	unsigned __int64 v1; // rsi
	__int64 v2; // rdi
	__int64 v3; // rcx
	unsigned __int64 v4; // rax
	__int64 v5; // rbx
	__int64 v6; // rax
	int v7; // eax
	unsigned __int64 v8; // r12
	__int64 v9; // rbp
	int v10; // r9d
	__int64 v11; // rax
	__int64 v12; // rcx
	unsigned int v13; // r11d
	__int64 v14; // rax
	__int64 v15; // rax
	__int64 v16; // r15
	__int64 v17; // rbx
	__int64 v18; // rax
	_QWORD* v19; // rax
	__int64 v20; // rdx
	int v21; // r10d
	__int64 v22; // rcx
	_QWORD* v23; // rax
	__int64 v24; // rdx
	unsigned __int16* v25; // r10
	_QWORD* v26; // rax
	__int64 v27; // r10
	__int64 v28; // rdx
	int v29; // r11d
	_QWORD* v30; // rax
	__int64 v31; // r10
	__int64 v32; // rdx
	int v33; // r11d
	__int64 v34; // rdx
	__int64 v35; // r10
	_DWORD* v36; // rcx
	__int64 v37; // r8
	__int64 v38; // rdx
	__int64 v40; // [rsp+20h] [rbp-58h] BYREF
	unsigned __int64 v41; // [rsp+28h] [rbp-50h]
	__int64(__fastcall * *v42)(); // [rsp+30h] [rbp-48h] BYREF
	int v43; // [rsp+38h] [rbp-40h]
	__int64 v44; // [rsp+40h] [rbp-38h]
	int v45; // [rsp+48h] [rbp-30h]
	double v46; // [rsp+80h] [rbp+8h]

	v1 = 0i64;
	v41 = 0i64;
	v40 = 0i64;
	v2 = a1;
	sub_14044FF10(a1, &v40);
	v3 = *(_QWORD*)(v2 + 32);
	v42 = off_140B569F0;
	v4 = *(_QWORD*)(v3 + 112);
	v44 = v2;
	v45 = 1;
	if (*(_QWORD*)(v3 + 120) >= v4)
		sub_14005E2C0(v2);
	v5 = *(_QWORD*)(v2 + 16);
	v6 = sub_14005C1B0(v2, 0, 0);
	*(_DWORD*)(v5 + 8) = 5;
	*(_QWORD*)v5 = v6;
	*(_QWORD*)(v2 + 16) += 16i64;
	v7 = sub_1400578C0(v2);
	v8 = v41;
	v9 = v40;
	v10 = v7;
	v43 = v7;
	if (v41)
	{
		do
		{
			v11 = sub_1404530F0(qword_140C65910, 1, *(_DWORD*)(v9 + 4 * v1));
			if (!v11 || !*(_DWORD*)(v11 + 4) && !*(_DWORD*)(v11 + 8))
			{
				v14 = sub_14044FD50(v12, v13);
				if (v14)
				{
					if (*(_DWORD*)(v14 + 8))
					{
						if (*(_DWORD*)(v14 + 12))
						{
							v15 = sub_1401FCF20(*(_DWORD*)(v9 + 4 * v1));
							v16 = v15;
							if (v15)
							{
								if ((*(_BYTE*)(v15 + 4) & 2) != 0)
								{
									if (*(_QWORD*)(*(_QWORD*)(v2 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v2 + 32) + 112i64))
										sub_14005E2C0(v2);
									v17 = *(_QWORD*)(v2 + 16);
									v18 = sub_14005C1B0(v2, 0, 0);
									*(_DWORD*)(v17 + 8) = 5;
									*(_QWORD*)v17 = v18;
									*(_QWORD*)(v2 + 16) += 16i64;
									LODWORD(v17) = sub_1400578C0(v2);
									v19 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
									v20 = *(_QWORD*)(v2 + 16);
									*(_QWORD*)v20 = *v19;
									*(_DWORD*)(v20 + 8) = *((_DWORD*)v19 + 2);
									*(_QWORD*)(v2 + 16) += 16i64;
									sub_1400F06F0(v2, v20, L"nId", v21);
									*(_QWORD*)(v2 + 16) -= 16i64;
									sub_14034BDD0(v22, *(_DWORD*)(v16 + 8));
									v23 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
									v24 = *(_QWORD*)(v2 + 16);
									*(_QWORD*)v24 = *v23;
									*(_DWORD*)(v24 + 8) = *((_DWORD*)v23 + 2);
									*(_QWORD*)(v2 + 16) += 16i64;
									sub_1400F0870(v2, v24, L"strName", v25);
									*(_QWORD*)(v2 + 16) -= 16i64;
									v26 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
									*(_QWORD*)v27 = *v26;
									*(_DWORD*)(v27 + 8) = *((_DWORD*)v26 + 2);
									*(_QWORD*)(v2 + 16) += 16i64;
									sub_1400F06F0(v2, v28, L"nRampIndex", v29);
									*(_QWORD*)(v2 + 16) -= 16i64;
									v30 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64), v17);
									*(_QWORD*)v31 = *v30;
									*(_DWORD*)(v31 + 8) = *((_DWORD*)v30 + 2);
									*(_QWORD*)(v2 + 16) += 16i64;
									sub_1400F06F0(v2, v32, L"nStoreLinkId", v33);
									*(_QWORD*)(v2 + 16) -= 16i64;
									sub_1400FB1D0((__int64)&v42);
									sub_1400579E0(v2, v34, v17);
								}
							}
						}
					}
				}
			}
			++v1;
		} while (v1 < v8);
		v2 = v44;
		v10 = v43;
	}
	v35 = *(_QWORD*)(*(_QWORD*)(v2 + 32) + 160i64);
	if ((unsigned int)(v10 - 1) >= *(_DWORD*)(v35 + 56))
	{
		if ((double)v10 == 0.0)
		{
			v36 = *(_DWORD**)(v35 + 32);
		}
		else
		{
			v46 = (double)v10;
			v36 = (_DWORD*)(*(_QWORD*)(v35 + 32)
				+ 40 * ((unsigned int)(LODWORD(v46) + HIDWORD(v46)) % (((1i64 << *(_BYTE*)(v35 + 11)) - 1) | 1)));
		}
		while (v36[6] != 3 || (double)v10 != *((double*)v36 + 2))
		{
			v36 = (_DWORD*)*((_QWORD*)v36 + 4);
			if (!v36)
			{
				v36 = dword_140A12138;
				break;
			}
		}
	}
	else
	{
		v36 = (_DWORD*)(*(_QWORD*)(v35 + 24) + 16i64 * (v10 - 1));
	}
	v37 = *(_QWORD*)(v2 + 16);
	*(_QWORD*)v37 = *(_QWORD*)v36;
	v38 = (unsigned int)v36[2];
	*(_DWORD*)(v37 + 8) = v38;
	*(_QWORD*)(v2 + 16) += 16i64;
	sub_1400579E0(v2, v38, v10);
	if (v9)
		(*(void(__fastcall**)(__int64))(*(_QWORD*)(v9 - 16) + 8i64))(v9 - 16);
	return 1i64;
}
// 1406F9405: variable 'v12' is possibly undefined
// 1406F9405: variable 'v13' is possibly undefined
// 1406F94C0: variable 'v21' is possibly undefined
// 1406F94CE: variable 'v22' is possibly undefined
// 1406F950A: variable 'v25' is possibly undefined
// 1406F953B: variable 'v27' is possibly undefined
// 1406F954D: variable 'v28' is possibly undefined
// 1406F954D: variable 'v29' is possibly undefined
// 1406F957D: variable 'v31' is possibly undefined
// 1406F958F: variable 'v32' is possibly undefined
// 1406F958F: variable 'v33' is possibly undefined
// 1406F95AB: variable 'v34' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140B41558: using guessed type wchar_t aNstorelinkid_0[13];
// 140B41578: using guessed type wchar_t aNrampindex_0[11];
// 140B41590: using guessed type wchar_t aStrname_86[8];
// 140B415A0: using guessed type wchar_t aNid_31[4];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65910: using guessed type __int64 qword_140C65910;

