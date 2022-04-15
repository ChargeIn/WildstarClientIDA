#include "../winhttp.h"

//----- (0000000140530210) ----------------------------------------------------
__int64 __fastcall sub_140530210(_QWORD* a1)
{
	__int64 v1; // rbp
	__int64 v2; // r13
	__int64 v3; // rax
	__int64 (***v4)(void); // rcx
	int v5; // eax
	__int64 v6; // rdx
	int v7; // edi
	unsigned __int64 v8; // rcx
	__int64 v9; // rbx
	__int64 v10; // rax
	int v11; // ebx
	unsigned __int64 v12; // r15
	__int64 v13; // rax
	__int64 v14; // r14
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // r12d
	_QWORD* v18; // rax
	__int64 v19; // rdx
	int v20; // r10d
	_QWORD* v21; // rax
	__int64 v22; // r10
	__int64 v23; // rdx
	int v24; // r11d
	__int64 v25; // rcx
	__int16* v26; // rax
	int* v27; // rsi
	unsigned __int64 v28; // rbx
	int* v29; // rax
	unsigned __int16* v30; // rdi
	unsigned __int64 v31; // rbx
	unsigned __int64 v32; // rsi
	_QWORD* v33; // rax
	__int64 v34; // rdx
	unsigned __int16* v35; // rbx
	__int64 v36; // rax
	__int64 v37; // rcx
	__int16* v38; // rax
	int* v39; // r14
	int* v40; // rax
	unsigned __int64 v41; // rsi
	_QWORD* v42; // rax
	__int64 v43; // rdx
	__int64 v44; // rdx
	_QWORD* v45; // rax
	__int64 v46; // r8
	__int64 v47; // rdx
	__int64(__fastcall * *v49)(); // [rsp+20h] [rbp-58h] BYREF
	int v50; // [rsp+28h] [rbp-50h]
	__int64 v51; // [rsp+30h] [rbp-48h]
	int v52; // [rsp+38h] [rbp-40h]
	int v53; // [rsp+88h] [rbp+10h]
	unsigned __int64 v54; // [rsp+90h] [rbp+18h]

	v1 = (__int64)a1;
	v2 = *(_QWORD*)(qword_140C65898 + 7152);
	v3 = sub_14052E9B0(a1);
	if (!v3)
		return 0i64;
	v4 = *(__int64 (****)(void))(v3 + 1152);
	if (!v4 || !v2)
		return 0i64;
	v5 = (**v4)();
	v6 = *(_QWORD*)(v1 + 32);
	v7 = v5;
	v53 = v5;
	v8 = *(_QWORD*)(v6 + 112);
	v51 = v1;
	v49 = off_140B569F0;
	v52 = 1;
	if (*(_QWORD*)(v6 + 120) >= v8)
		sub_14005E2C0(v1);
	v9 = *(_QWORD*)(v1 + 16);
	v10 = sub_14005C1B0(v1, 0, 0);
	*(_DWORD*)(v9 + 8) = 5;
	*(_QWORD*)v9 = v10;
	*(_QWORD*)(v1 + 16) += 16i64;
	v11 = sub_1400578C0(v1);
	v50 = v11;
	v54 = sub_140449A00(v7);
	v12 = 0i64;
	if (v54)
	{
		do
		{
			v13 = sub_140449890(v7, v12);
			v14 = v13;
			if (v13
				&& (*(unsigned int(__fastcall**)(__int64, _QWORD))(*(_QWORD*)v2 + 48i64))(v2, *(unsigned int*)(v13 + 12)))
			{
				if (*(_QWORD*)(*(_QWORD*)(v1 + 32) + 120i64) >= *(_QWORD*)(*(_QWORD*)(v1 + 32) + 112i64))
					sub_14005E2C0(v1);
				v15 = *(_QWORD*)(v1 + 16);
				v16 = sub_14005C1B0(v1, 0, 0);
				*(_DWORD*)(v15 + 8) = 5;
				*(_QWORD*)v15 = v16;
				*(_QWORD*)(v1 + 16) += 16i64;
				v17 = sub_1400578C0(v1);
				v18 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				v19 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v19 = *v18;
				*(_DWORD*)(v19 + 8) = *((_DWORD*)v18 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F06F0(v1, v19, L"id", v20);
				*(_QWORD*)(v1 + 16) -= 16i64;
				v21 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				*(_QWORD*)v22 = *v21;
				*(_DWORD*)(v22 + 8) = *((_DWORD*)v21 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F06F0(v1, v23, L"hexGroupId", v24);
				*(_QWORD*)(v1 + 16) -= 16i64;
				v26 = sub_14034BDD0(v25, *(_DWORD*)(v14 + 8));
				v27 = (int*)v26;
				if (v26)
				{
					v28 = 0i64;
					if (*v26)
					{
						do
							++v28;
						while (v26[v28]);
					}
					v29 = sub_14018B280(2 * v28 + 18, 0);
					if (v29)
					{
						*((_QWORD*)v29 + 1) = v28;
						*(_QWORD*)v29 = off_140B55060;
					}
					else
					{
						v29 = 0i64;
					}
					v30 = (unsigned __int16*)(v29 + 4);
					v31 = v28;
					sub_1407DB590(v29 + 4, v27, v31 * 2);
					v32 = 0i64;
					v30[v31] = 0;
				}
				else
				{
					v32 = 0i64;
					v30 = 0i64;
				}
				v33 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				v34 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v34 = *v33;
				*(_DWORD*)(v34 + 8) = *((_DWORD*)v33 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v34, L"strDescription", v30);
				*(_QWORD*)(v1 + 16) -= 16i64;
				v35 = 0i64;
				v36 = sub_1401FF120(*(_DWORD*)(v14 + 12));
				if (v36)
				{
					v38 = sub_14034BDD0(v37, *(_DWORD*)(v36 + 12));
					v39 = (int*)v38;
					if (v38)
					{
						if (*v38)
						{
							do
								++v32;
							while (v38[v32]);
						}
						v40 = sub_14018B280(2 * v32 + 18, 0);
						if (v40)
						{
							*((_QWORD*)v40 + 1) = v32;
							*(_QWORD*)v40 = off_140B55060;
						}
						v35 = (unsigned __int16*)(v40 + 4);
						v41 = v32;
						sub_1407DB590(v40 + 4, v39, v41 * 2);
						v35[v41] = 0;
					}
				}
				v42 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
				v43 = *(_QWORD*)(v1 + 16);
				*(_QWORD*)v43 = *v42;
				*(_DWORD*)(v43 + 8) = *((_DWORD*)v42 + 2);
				*(_QWORD*)(v1 + 16) += 16i64;
				sub_1400F0870(v1, v43, L"strFactionName", v35);
				*(_QWORD*)(v1 + 16) -= 16i64;
				sub_1400FB1D0((__int64)&v49);
				if (v35)
					(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v35 - 2) + 8i64))(v35 - 8);
				if (v30)
					(*(void(__fastcall**)(unsigned __int16*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 8);
				sub_1400579E0(v1, v44, v17);
				v7 = v53;
			}
			++v12;
		} while (v12 < v54);
		v1 = v51;
		v11 = v50;
	}
	v45 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v11);
	v46 = *(_QWORD*)(v1 + 16);
	*(_QWORD*)v46 = *v45;
	v47 = *((unsigned int*)v45 + 2);
	*(_DWORD*)(v46 + 8) = v47;
	*(_QWORD*)(v1 + 16) += 16i64;
	sub_1400579E0(v1, v47, v11);
	return 1i64;
}
// 1405303A4: variable 'v20' is possibly undefined
// 1405303D6: variable 'v22' is possibly undefined
// 1405303E8: variable 'v23' is possibly undefined
// 1405303E8: variable 'v24' is possibly undefined
// 1405303F6: variable 'v25' is possibly undefined
// 1405304B4: variable 'v37' is possibly undefined
// 140530589: variable 'v44' is possibly undefined
// 140B133A0: using guessed type wchar_t aHexgroupid[11];
// 140B133B8: using guessed type wchar_t aId_18[3];
// 140B133C0: using guessed type wchar_t aStrfactionname[15];
// 140B133E0: using guessed type wchar_t aStrdescription_8[15];
// 140B55060: using guessed type __int64 (__fastcall *off_140B55060[2])();
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;

