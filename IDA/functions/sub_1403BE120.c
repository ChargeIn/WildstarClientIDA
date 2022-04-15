//----- (00000001403BE120) ----------------------------------------------------
void __fastcall sub_1403BE120(__int64 a1, unsigned int a2, __int64 a3)
{
	__int64 v3; // rax
	unsigned int v4; // edi
	unsigned int v6; // ebp
	BOOL v8; // r8d
	__int64 v9; // rcx
	__int64 v10; // rdx
	__int64 v11; // r8
	int v12; // ecx
	int v13; // r9d
	unsigned __int64 v14; // r8
	__int64 v15; // rcx
	__int64* i; // rax
	__int64 v17; // r14
	__int64 v18; // rcx
	__int64 v19; // rax
	int v20; // edx
	__int64 v21; // rax
	unsigned int v22; // esi
	unsigned int v23; // eax
	__int64 v24; // rax
	int v25; // edx
	int v26; // r13d
	__int64 v27; // rdx
	__int64 v28; // rcx
	__int64 v29; // rax
	__int64 v30; // rcx
	int v31; // eax
	unsigned int v32; // edx
	unsigned int v33; // eax
	int v34; // esi
	int v35; // ecx
	__int64 v36; // r8
	__int64 v37; // rcx
	__int64 v38; // rcx
	__int64 j; // rax
	__int64 k; // rax
	__int64 v41; // r8
	unsigned __int64 v42; // rcx
	__int64 v43; // rax
	__int64 v44; // rax
	__int64 v45; // rcx
	int v46; // eax
	__int64 v47; // rdx
	__int64 v48; // rcx
	__int64 v49; // rax
	__int64 v50; // [rsp+70h] [rbp+8h] BYREF
	__int64 v51; // [rsp+88h] [rbp+20h]

	if (!a2)
		return;
	v3 = *(_QWORD*)(a1 + 120);
	v4 = 0;
	v6 = a2;
	if (!v3)
		goto LABEL_11;
	v8 = *(_QWORD*)(qword_140C65898 + 120) == v3 || *(_QWORD*)(qword_140C65898 + 25744) == v3;
	v9 = 0i64;
	if (v8)
		v9 = qword_140C65898;
	if (!v9 || (v10 = sub_1405A5B90(v9, a2)) == 0)
	{
		a2 = v6;
	LABEL_11:
		v10 = sub_1407A0FD0(qword_140C65B70, a2);
	}
	if (v10)
	{
		v11 = *(_QWORD*)(v10 + 112);
		v12 = *(_DWORD*)(v11 + 24);
		if (((v12 - 2) & 0xFFFFFFFA) == 0 && v12 != 3)
		{
			v13 = *(_DWORD*)(v11 + 4);
			if (v13)
			{
				v14 = *(_QWORD*)(a1 + 2712);
				v15 = 0i64;
				if (v14)
				{
					for (i = *(__int64**)(a1 + 2704); ; ++i)
					{
						v17 = *i;
						if (*i)
						{
							if (*(_DWORD*)(v17 + 64) == v13)
								break;
						}
						if (++v15 >= v14)
							return;
					}
					v18 = *(_QWORD*)(a1 + 28048);
					if (v18)
					{
						v18 = *(_QWORD*)((*(__int64(__fastcall**)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD*)v18 + 24i64))(
							v18,
							v10,
							*(_QWORD*)(a1 + 120),
							0i64)
							+ 112);
						v6 = *(_DWORD*)v18;
					}
					v19 = *(_QWORD*)(a1 + 25744);
					if (v19 && (v20 = *(_DWORD*)(v19 + 264)) != 0)
						v21 = sub_1403D90D0(a1, v20);
					else
						v21 = 0i64;
					v22 = sub_1403D3520(v18, v6, *(_QWORD*)(a1 + 120), v21);
					v23 = sub_1403C0190(a1, v6);
					if (v23)
						v22 = v23;
					v24 = sub_1403ACD90(qword_140C65B70, v22, *(_QWORD*)(a1 + 120));
					v51 = v24;
					if (v24)
					{
						v25 = *(_DWORD*)(*(_QWORD*)(v24 + 112) + 24i64);
						v26 = 1;
						if (v25 == 2)
						{
							if (sub_1403BF980(a1, v22) || !(unsigned int)sub_1403C0870(v45, v22))
								goto LABEL_79;
							v46 = dword_140C45E80;
							if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
								v46 = *(_DWORD*)qword_140C63750;
							if (*((_BYTE*)&dword_140C45E90 + v46)
								&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 168i64))(a3) != 2)
							{
							LABEL_79:
								v47 = *(_QWORD*)(a1 + 5512);
								v48 = v47;
								v49 = *(_QWORD*)(v47 + 8);
								while (v49)
								{
									if (*(_DWORD*)(v49 + 32) < v6)
									{
										v49 = *(_QWORD*)(v49 + 24);
									}
									else
									{
										v48 = v49;
										v49 = *(_QWORD*)(v49 + 16);
									}
								}
								if (v48 == v47 || (v50 = v48, v6 < *(_DWORD*)(v48 + 32)))
									v50 = v47;
								if (v50 != v47)
									sub_14039CC30(a1, *(_DWORD*)(*(_QWORD*)(v50 + 40) + 24i64), 6u);
								sub_1403BEF30((__int64*)a1, v22, 0);
							}
							else if (*(_DWORD*)(a1 + 25444) == v22)
							{
								sub_1403C06B0(a1, v22, 1u);
							}
						}
						else
						{
							if (v25 != 7)
								goto LABEL_53;
							v27 = *(_QWORD*)(a1 + 5576);
							v28 = v27;
							v29 = *(_QWORD*)(v27 + 8);
							while (v29)
							{
								if (*(_DWORD*)(v29 + 32) < v22)
								{
									v29 = *(_QWORD*)(v29 + 24);
								}
								else
								{
									v28 = v29;
									v29 = *(_QWORD*)(v29 + 16);
								}
							}
							if (v28 == v27 || (v50 = v28, v22 < *(_DWORD*)(v28 + 32)))
								v50 = v27;
							if (v50 != v27)
								sub_1403D5FD0(a1 + 5568, &v50);
							if (!sub_1403BF980(a1, v22) && (unsigned int)sub_1403C0870(v30, v22))
							{
								v31 = dword_140C45E80;
								if (*(_DWORD*)qword_140C63750 < dword_140C45E80)
									v31 = *(_DWORD*)qword_140C63750;
								if (!*((_BYTE*)&dword_140C45E90 + v31)
									|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 168i64))(a3) == 2)
								{
									if (*(_DWORD*)(a1 + 25444))
										sub_1403C06B0(a1, v22, 1u);
									v26 = 0;
								}
							}
							sub_1403BF400((__int64*)a1, v22);
							if (v26)
							{
							LABEL_53:
								v32 = *(_DWORD*)(v17 + 36);
								v50 = 0i64;
								v33 = sub_14039A040(qword_140C65898, v32, 0i64, 0, 0, &v50);
								v34 = v33;
								if (!v33 || v33 == 317)
								{
									for (j = *(_QWORD*)(a3 + 416); j; j = *(_QWORD*)(j + 8))
										*(_DWORD*)(j + 44) = 1;
									for (k = *(_QWORD*)(a3 + 408); k; k = *(_QWORD*)(k + 8))
										*(_DWORD*)(k + 44) = 1;
									sub_1405CAA50(a3, v50);
									v41 = *(_QWORD*)(a1 + 29544);
									v42 = *(_QWORD*)(v41 + 16);
									if (v42)
									{
										v43 = 0i64;
										while (1)
										{
											v44 = *(_QWORD*)(*(_QWORD*)(v41 + 8) + 8 * v43);
											if (*(_DWORD*)(v44 + 4) == 4 && *(_DWORD*)(v44 + 8) == *(_DWORD*)(v17 + 36))
												break;
											v43 = ++v4;
											if (v4 >= v42)
												return;
										}
										*(_BYTE*)(v41 + 24) = 1;
										*(_QWORD*)v41 = v4;
									}
								}
								else
								{
									sub_1403B5250(v33);
									sub_1400035B0();
									v35 = dword_140C45E40;
									if (*(_DWORD*)qword_140C63750 < dword_140C45E40)
										v35 = *(_DWORD*)qword_140C63750;
									if (!*((_BYTE*)&dword_140C45E50 + v35)
										|| (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a3 + 168i64))(a3) != 2)
									{
										v36 = v51;
										*(_DWORD*)(a3 + 328) = 1;
										sub_1403A12A0(a1, v34, v36, 0);
										sub_1403BDAC0(qword_140C65898);
										sub_1405CA990(v37, (__int64*)(a3 + 416));
										sub_1405CA990(v38, (__int64*)(a3 + 408));
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
// 1403BE25F: variable 'v18' is possibly undefined
// 1403BE33E: variable 'v30' is possibly undefined
// 1403BE463: variable 'v37' is possibly undefined
// 1403BE46F: variable 'v38' is possibly undefined
// 1403BE52C: variable 'v45' is possibly undefined
// 140C45E40: using guessed type int dword_140C45E40;
// 140C45E50: using guessed type int dword_140C45E50;
// 140C45E80: using guessed type int dword_140C45E80;
// 140C45E90: using guessed type int dword_140C45E90;
// 140C63750: using guessed type __int64 qword_140C63750;
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65B70: using guessed type __int64 qword_140C65B70;

