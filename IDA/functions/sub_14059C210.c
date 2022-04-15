#include "../winhttp.h"

//----- (000000014059C210) ----------------------------------------------------
__int64 __fastcall sub_14059C210(_QWORD* a1)
{
	__int64 v1; // rdi
	unsigned int v2; // eax
	__int64 v3; // rax
	unsigned int v4; // r8d
	__int64 v5; // rcx
	unsigned __int64 v6; // rdx
	__int64 v7; // rsi
	__int64 v8; // rax
	__int64 v9; // rsi
	__int64 v10; // r10
	__int64 v11; // rbx
	int* v12; // rax
	__int64 v13; // rcx
	unsigned __int64 v14; // rax
	__int64 v15; // rbx
	__int64 v16; // rax
	int v17; // ebx
	_QWORD** v18; // r14
	__int64 v19; // rbx
	_QWORD* v20; // r14
	__int64 v21; // rcx
	unsigned __int64 v22; // rax
	__int64 v23; // r15
	__int64 v24; // rbx
	__int64 v25; // rax
	int v26; // eax
	unsigned __int64 v27; // r13
	unsigned __int64 v28; // rbx
	int v29; // r12d
	__int64 v30; // rax
	int v31; // edx
	int v32; // ecx
	__int64 v33; // rcx
	unsigned __int64 v34; // rax
	__int64 v35; // rbx
	__int64 v36; // rax
	int v37; // eax
	_QWORD** v38; // r14
	__int64 v39; // rcx
	_QWORD* v40; // rax
	__int64 v41; // rcx
	__int64 v42; // rdx
	int v43; // r11d
	__int64 v44; // rdx
	__int64 v45; // rdx
	_QWORD* v46; // rax
	__int64 v47; // r8
	__int64 v48; // rdx
	__int64 v49; // rax
	__int64 v52; // [rsp+28h] [rbp-51h] BYREF
	__int64 v53; // [rsp+30h] [rbp-49h]
	__int64(__fastcall * *v54)(); // [rsp+38h] [rbp-41h] BYREF
	int v55; // [rsp+40h] [rbp-39h]
	__int64 v56; // [rsp+48h] [rbp-31h]
	int v57; // [rsp+50h] [rbp-29h]
	__int64(__fastcall * *v58)(); // [rsp+58h] [rbp-21h] BYREF
	int v59; // [rsp+60h] [rbp-19h]
	__int64 v60; // [rsp+68h] [rbp-11h]
	int v61; // [rsp+70h] [rbp-9h]
	__int64(__fastcall * *v62)(); // [rsp+78h] [rbp-1h] BYREF
	int v63; // [rsp+80h] [rbp+7h]
	__int64 v64; // [rsp+88h] [rbp+Fh]
	int v65; // [rsp+90h] [rbp+17h]
	_QWORD** v66; // [rsp+E8h] [rbp+6Fh]
	__int64 v67; // [rsp+F0h] [rbp+77h]
	int* v68; // [rsp+F8h] [rbp+7Fh]

	v1 = (__int64)a1;
	v2 = sub_1405925D0(a1, 1u);
	if (!v2)
		v2 = *(_DWORD*)(qword_140C65898 + 6864);
	v3 = sub_140245C00(v2);
	if (!v3)
		goto LABEL_41;
	v4 = *(_DWORD*)(v3 + 8);
	v5 = 0i64;
	v6 = *(_QWORD*)(qword_140C65898 + 5792);
	if (v6)
	{
		v7 = *(_QWORD*)(qword_140C65898 + 5784);
		v8 = 0i64;
		while (*(_DWORD*)(*(_QWORD*)(v7 + 8 * v8) + 8i64) != v4)
		{
			v5 = (unsigned int)(v5 + 1);
			v8 = (unsigned int)v5;
			if ((unsigned int)v5 >= v6)
				goto LABEL_8;
		}
		v9 = *(_QWORD*)(v7 + 8 * v5);
	}
	else
	{
	LABEL_8:
		v9 = 0i64;
	}
	v11 = sub_1405BE150(v5, v4);
	v12 = sub_1400B5DF0(qword_140C658F0, *(_DWORD*)(v10 + 12), 0i64);
	v68 = v12;
	if (v11 && v12 && (*(_BYTE*)(v11 + 16) & 4) != 0)
	{
		v13 = *(_QWORD*)(v1 + 32);
		v14 = *(_QWORD*)(v13 + 112);
		v58 = off_140B569F0;
		v60 = v1;
		v61 = 1;
		if (*(_QWORD*)(v13 + 120) >= v14)
			sub_14005E2C0(v1);
		v15 = *(_QWORD*)(v1 + 16);
		v16 = sub_14005C1B0(v1, 0, 0);
		*(_DWORD*)(v15 + 8) = 5;
		*(_QWORD*)v15 = v16;
		*(_QWORD*)(v1 + 16) += 16i64;
		v17 = sub_1400578C0(v1);
		v59 = v17;
		v53 = 0i64;
		v52 = 0i64;
		sub_14040E8B0(qword_140C658F0, &v52, 127);
		v67 = v53;
		if (v53)
		{
			v18 = (_QWORD**)(v52 + 8);
			v19 = v53;
			v66 = (_QWORD**)(v52 + 8);
			do
			{
				v20 = *v18;
				if (v20)
				{
					v21 = *(_QWORD*)(v1 + 32);
					v54 = off_140B569F0;
					v56 = v1;
					v22 = *(_QWORD*)(v21 + 112);
					v23 = v1;
					v57 = 1;
					if (*(_QWORD*)(v21 + 120) >= v22)
						sub_14005E2C0(v1);
					v24 = *(_QWORD*)(v1 + 16);
					v25 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v24 + 8) = 5;
					*(_QWORD*)v24 = v25;
					*(_QWORD*)(v1 + 16) += 16i64;
					v26 = sub_1400578C0(v1);
					v27 = v20[1];
					v28 = 0i64;
					v29 = v26;
					v55 = v26;
					if (v27)
					{
						do
						{
							v30 = sub_1402479C0(*(_DWORD*)(*v20 + 4 * v28));
							if (v30)
							{
								v31 = *(_DWORD*)(v30 + 44);
								if (!v31 || v9 && (v31 & *(_DWORD*)(v9 + 16)) == v31)
								{
									v32 = *(_DWORD*)(v30 + 52);
									if (!v32 || (v32 & v68[96]) != 0)
										sub_1400FA9E0((__int64)&v54);
								}
							}
							++v28;
						} while (v28 < v27);
						v23 = v56;
						v29 = v55;
						v1 = (__int64)a1;
					}
					v33 = *(_QWORD*)(v1 + 32);
					v64 = v1;
					v62 = off_140B569F0;
					v34 = *(_QWORD*)(v33 + 112);
					v65 = 1;
					if (*(_QWORD*)(v33 + 120) >= v34)
						sub_14005E2C0(v1);
					v35 = *(_QWORD*)(v1 + 16);
					v36 = sub_14005C1B0(v1, 0, 0);
					*(_DWORD*)(v35 + 8) = 5;
					*(_QWORD*)v35 = v36;
					*(_QWORD*)(v1 + 16) += 16i64;
					v37 = sub_1400578C0(v1);
					v38 = v66;
					v39 = *(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64);
					LODWORD(v35) = v37;
					v63 = v37;
					v40 = sub_14005C3C0(v39, v37);
					v41 = *(_QWORD*)(v1 + 16);
					*(_QWORD*)v41 = *v40;
					*(_DWORD*)(v41 + 8) = *((_DWORD*)v40 + 2);
					*(_QWORD*)(v1 + 16) += 16i64;
					sub_1400F06F0(v1, v42, L"eCraftingGroup", v43);
					*(_QWORD*)(v1 + 16) -= 16i64;
					sub_1400FB2A0((__int64)&v62, (__int64)L"arProperties", v29);
					sub_1400FB1D0((__int64)&v58);
					sub_1400579E0(v1, v44, v35);
					if (v23)
						sub_1400579E0(v23, v45, v29);
					v19 = v67;
				}
				else
				{
					v38 = v66;
				}
				v18 = v38 + 2;
				v67 = --v19;
				v66 = v18;
			} while (v19);
			v1 = v60;
			v17 = v59;
		}
		v46 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v1 + 32) + 160i64), v17);
		v47 = *(_QWORD*)(v1 + 16);
		*(_QWORD*)v47 = *v46;
		v48 = *((unsigned int*)v46 + 2);
		v49 = v52;
		*(_DWORD*)(v47 + 8) = v48;
		*(_QWORD*)(v1 + 16) += 16i64;
		if (v49)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)(v49 - 16) + 8i64))(v49 - 16);
		sub_1400579E0(v1, v48, v17);
	}
	else
	{
	LABEL_41:
		*(_DWORD*)(*(_QWORD*)(v1 + 16) + 8i64) = 0;
		*(_QWORD*)(v1 + 16) += 16i64;
	}
	return 1i64;
}
// 14059C2B1: variable 'v10' is possibly undefined
// 14059C50D: variable 'v42' is possibly undefined
// 14059C50D: variable 'v43' is possibly undefined
// 14059C53B: variable 'v44' is possibly undefined
// 14059C54B: variable 'v45' is possibly undefined
// 14059C5DD: variable 'v48' is possibly undefined
// 140B1FEF0: using guessed type wchar_t aArproperties[13];
// 140B1FF10: using guessed type wchar_t aEcraftinggroup[15];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C658F0: using guessed type __int64 qword_140C658F0;

