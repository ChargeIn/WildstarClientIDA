//----- (00000001404FA280) ----------------------------------------------------
__int64 __fastcall sub_1404FA280(_QWORD* a1)
{
	__int64 v2; // rax
	__int64 v3; // rbx
	__int64 v4; // rcx
	unsigned __int64 v5; // rdx
	_DWORD* v6; // rax
	__int64 v7; // rsi
	_DWORD* v8; // rbx
	__int64 v9; // rcx
	__int64 v10; // rdx
	unsigned __int64 v11; // rcx
	int v12; // eax
	__int64 v13; // rdx
	__int64 v14; // rbx
	int v15; // edi
	_QWORD* v16; // rax
	__int64 v17; // rdx
	__int64 v18; // rax
	__int64 v19; // rdx
	unsigned int v21; // ebx
	__int64(__fastcall * **v22)(); // r12
	__int64 v23; // rdi
	signed int v24; // eax
	int v25; // r14d
	__int64 v26; // rax
	int v27; // ecx
	__int64* v28; // rax
	__int64 v29; // rcx
	unsigned int* v30; // r13
	unsigned int v31; // ebx
	__int64 v32; // r14
	__int64(__fastcall * **v33)(); // rsi
	__int64 v34; // rbx
	__int64 v35; // r15
	unsigned int v36; // edi
	__int64 v37; // rax
	int v38; // ecx
	int v39; // esi
	int v40; // edi
	int v41; // ebx
	__int64 v42; // r9
	bool v43; // zf
	__int64(__fastcall * *v44)(); // [rsp+20h] [rbp-89h] BYREF
	int v45; // [rsp+28h] [rbp-81h]
	_QWORD* v46; // [rsp+30h] [rbp-79h]
	int v47; // [rsp+38h] [rbp-71h]
	__int64 v48; // [rsp+40h] [rbp-69h]
	__int64* v49; // [rsp+48h] [rbp-61h]
	__int64(__fastcall * *v50)(); // [rsp+50h] [rbp-59h] BYREF
	int v51; // [rsp+58h] [rbp-51h]
	__int64 v52; // [rsp+60h] [rbp-49h]
	__int64(__fastcall * **v53)(); // [rsp+68h] [rbp-41h]
	__int64 v54; // [rsp+70h] [rbp-39h]
	__int64 v55[6]; // [rsp+78h] [rbp-31h] BYREF
	int v56[4]; // [rsp+A8h] [rbp-1h] BYREF
	int v57; // [rsp+B8h] [rbp+Fh] BYREF
	int v58; // [rsp+BCh] [rbp+13h]
	int v59; // [rsp+C0h] [rbp+17h]
	__int64 v60; // [rsp+C8h] [rbp+1Fh]

	v2 = sub_1404F87C0(a1, 1u);
	v3 = v2;
	if (v2)
	{
		v4 = *(_QWORD*)(v2 + 2328);
		if (v4 && (*(int(__fastcall**)(__int64))(*(_QWORD*)v4 + 24i64))(v4) > 0)
			(*(void(__fastcall**)(_QWORD))(**(_QWORD**)(v3 + 2328) + 112i64))(*(_QWORD*)(v3 + 2328));
		v54 = *(_QWORD*)(v3 + 2168);
		if (v54)
		{
			v5 = a1[2];
			v6 = (_DWORD*)(a1[3] + 16i64);
			v7 = 0i64;
			if ((unsigned __int64)v6 >= v5
				|| (v8 = dword_140A12138, v6 == dword_140A12138)
				|| *(_DWORD*)(a1[3] + 24i64) != 5)
			{
				v55[0] = sub_140417660((__int64)a1, 2);
				if (!v55[0])
					goto LABEL_26;
				LODWORD(v7) = 1;
			}
			else
			{
				v47 = 1;
				v45 = -2;
				v44 = off_140B569F0;
				v9 = (__int64)a1;
				v46 = a1;
				if ((unsigned __int64)v6 < v5 && v6 != dword_140A12138 && v6[2] == 5)
				{
					sub_1400579E0((__int64)a1, v5, -2);
					v10 = (__int64)v46;
					v11 = v46[2];
					if (v46[3] + 16i64 < v11)
						v8 = (_DWORD*)(v46[3] + 16i64);
					*(_QWORD*)v11 = *(_QWORD*)v8;
					*(_DWORD*)(v11 + 8) = v8[2];
					*(_QWORD*)(v10 + 16) += 16i64;
					v12 = sub_1400578C0((__int64)v46);
					v9 = (__int64)v46;
					v45 = v12;
				}
				v52 = v9;
				v51 = -2;
				v53 = &v44;
				v50 = off_140B56A08;
				*(_DWORD*)(*(_QWORD*)(v9 + 16) + 8i64) = 0;
				*(_QWORD*)(v9 + 16) += 16i64;
				((void(__fastcall*)(__int64(__fastcall***)(), __int64))v50[2])(&v50, 0xFFFFFFFFi64);
				v46[2] -= 16i64;
				do
				{
					if (!((unsigned int(__fastcall*)(__int64(__fastcall***)()))(*v53)[1])(v53)
						|| !(unsigned int)sub_1400FCBA0((__int64)&v50))
					{
						break;
					}
					sub_1400FB8D0((__int64)&v50, (__int64)&v57);
					v14 = v60;
					v15 = v59;
					v16 = sub_14005C3C0(*(_QWORD*)(*(_QWORD*)(v60 + 32) + 160i64), v59);
					v17 = *(_QWORD*)(v14 + 16);
					*(_QWORD*)v17 = *v16;
					*(_DWORD*)(v17 + 8) = *((_DWORD*)v16 + 2);
					*(_QWORD*)(v14 + 16) += 16i64;
					v18 = sub_140417660((__int64)a1, -1);
					a1[2] -= 16i64;
					v55[v7] = v18;
					if (v18)
						v7 = (unsigned int)(v7 + 1);
					sub_1400579E0(v14, v19, v15);
				} while ((unsigned int)v7 < 6);
				v50 = off_140B56A08;
				if (v52)
					sub_1400579E0(v52, v13, v51);
				v44 = off_140B56A08;
				if (v46)
					sub_1400579E0((__int64)v46, v13, v45);
				if (!(_DWORD)v7)
					LABEL_26:
				sub_140056570(a1, 2u, "item instance or table of item instances expected");
			}
			v21 = 0;
			v22 = &v44;
			v23 = 0i64;
			do
			{
				v24 = sub_140056D60(a1, v21 + 3);
				v25 = v24;
				if (v24 < 0)
					v26 = 0i64;
				else
					v26 = sub_1401FCF20(v24);
				*v22 = (__int64(__fastcall**)())v26;
				if (v26)
					v27 = *(_DWORD*)(v26 + 12);
				else
					v27 = 0;
				*(int*)((char*)&v57 + v23) = v27;
				++v21;
				v23 += 4i64;
				*(_DWORD*)((char*)&v55[5] + v23 + 4) = v25 < 0;
				++v22;
			} while (v21 < 3);
			v28 = v55;
			v49 = v55;
			v48 = (unsigned int)v7;
		LABEL_39:
			v29 = *(_QWORD*)*v28;
			if (v29 && *(_DWORD*)(v29 + 1184))
			{
				v30 = *(unsigned int**)(v29 + 8);
				if (v30)
				{
					v31 = v30[98];
					if (qword_140C63840)
					{
						v32 = qword_140C63840(off_140A6AD70, v31, qword_140C63858);
					LABEL_49:
						v33 = &v44;
						v34 = 0i64;
						v35 = 3i64;
						while (*v33 && !v56[v34])
						{
						LABEL_63:
							++v33;
							++v34;
							if (!--v35)
							{
								v39 = v59;
								v40 = v58;
								v41 = v57;
								v42 = (unsigned int)sub_140445140(
									v30[98],
									0,
									v57 & 0x3FF | ((v58 & 0x3FF | ((v59 & 0x3FF | 0xFFFFF800) << 10)) << 10));
								if (v56[0] && !v41)
									v42 = (unsigned int)v42 & 0xFFFFFC00;
								if (v56[1] && !v40)
									v42 = (unsigned int)v42 & 0xFFF003FF;
								if (v56[2] && !v39)
									v42 = (unsigned int)v42 & 0xC00FFFFF;
								(*(void(__fastcall**)(__int64, _QWORD, _QWORD, __int64, __int64(__fastcall**)()))(*(_QWORD*)v54 + 80i64))(
									v54,
									v30[95],
									v30[97],
									v42,
									v44);
								v28 = v49 + 1;
								v43 = v48-- == 1;
								++v49;
								if (v43)
									return 0i64;
								goto LABEL_39;
							}
						}
						if (v32)
						{
							v36 = *(int*)((char*)&v56[v34 + 1] + v32 - (_QWORD)v56);
							if (qword_140C63840)
							{
								v37 = qword_140C63840(off_140A6A168, v36, qword_140C63858);
							LABEL_59:
								if (v37)
									v38 = *(_DWORD*)(v37 + 12);
								else
									v38 = 0;
								*(int*)((char*)&v57 + v34 * 4) = v38;
								goto LABEL_63;
							}
							if (!dword_140C63EAC && (int)sub_1401FCCC0() >= 0)
							{
								v37 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C63AE0 + 24i64))(
									qword_140C63AE0,
									v36);
								goto LABEL_59;
							}
						}
						v37 = 0i64;
						goto LABEL_59;
					}
					if (!dword_140C63DA4 && (int)sub_14020B680() >= 0)
					{
						v32 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C64BA8 + 24i64))(
							qword_140C64BA8,
							v31);
						goto LABEL_49;
					}
				}
			}
			else
			{
				v30 = 0i64;
			}
			v32 = 0i64;
			goto LABEL_49;
		}
	}
	return 0i64;
}
// 1404FA56E: conditional instruction was optimized away because esi.4!=0
// 1404FA468: variable 'v19' is possibly undefined
// 1404FA487: variable 'v13' is possibly undefined
// 140A12138: using guessed type _DWORD dword_140A12138[4];
// 140A6A168: using guessed type wchar_t *off_140A6A168[2];
// 140A6AD70: using guessed type wchar_t *off_140A6AD70[2];
// 140B569F0: using guessed type __int64 (__fastcall *off_140B569F0[6])();
// 140B56A08: using guessed type __int64 (__fastcall *off_140B56A08[3])();
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C63AE0: using guessed type __int64 qword_140C63AE0;
// 140C63DA4: using guessed type int dword_140C63DA4;
// 140C63EAC: using guessed type int dword_140C63EAC;
// 140C64BA8: using guessed type __int64 qword_140C64BA8;

