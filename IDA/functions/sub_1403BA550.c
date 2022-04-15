#include "../winhttp.h"

//----- (00000001403BA550) ----------------------------------------------------
void __fastcall sub_1403BA550(__int64 a1, unsigned int a2)
{
	__int64 v2; // r9
	__int64 v5; // rax
	__int64 v6; // r8
	unsigned __int8 v7; // bp
	__int64 v8; // rcx
	unsigned int v9; // eax
	__int64 v10; // rcx
	unsigned int v11; // r14d
	__int64 v12; // rbx
	unsigned int v13; // eax
	__int64 v14; // r8
	__int64 v15; // rax
	unsigned __int8 v16; // di
	unsigned __int64 v17; // rdx
	_DWORD* v18; // rcx
	int* v19; // rax
	__int64* v20; // r15
	unsigned __int8 v21; // r13
	int v22; // eax
	unsigned __int64 v23; // rsi
	int* v24; // rax
	int* v25; // rdi
	int v26; // eax
	unsigned int v27; // ebx
	__int64 v28; // rax
	__int64 v29; // rcx
	int v30; // r10d
	__int64 v31; // r11
	int v32; // r10d
	int v33; // ecx
	__int64 v34; // rbx
	__int64 v35; // rbp
	int* v36; // rax
	int* v37; // rsi
	int v38; // esi
	__int64 v39; // rcx
	unsigned __int8 v40; // bl
	unsigned int v41; // edx
	__int64 v42; // rax
	BOOL v43; // r8d
	__int64 v44; // r9
	__int64 v45; // r8
	__int64 v46; // rax
	__int64* v47; // rax
	__int64 v48; // rax
	__int64 v49; // rax
	unsigned __int8 v50; // dl
	int j; // r9d
	__int64 v52; // rcx
	unsigned int v53; // edx
	__int64 v54; // rcx
	unsigned int v55; // edx
	__int64 v56; // rcx
	int v57; // eax
	__int64 v58; // rcx
	_DWORD* v59; // r10
	_DWORD* v60; // r10
	__int64 v61; // rdx
	__int64 v62; // rcx
	__int64 v63; // rax
	unsigned __int64 i; // [rsp+20h] [rbp-78h]
	__int64 v65; // [rsp+28h] [rbp-70h] BYREF
	__int64 v66[4]; // [rsp+38h] [rbp-60h] BYREF
	unsigned __int8 v68; // [rsp+A8h] [rbp+10h]
	__int64 v69; // [rsp+B0h] [rbp+18h] BYREF
	__int64 v70; // [rsp+B8h] [rbp+20h] BYREF

	if (a2)
	{
		v2 = *(_QWORD*)(a1 + 2728);
		v5 = *(_QWORD*)(v2 + 8);
		v6 = v2;
		while (v5)
		{
			if (*(_DWORD*)(v5 + 32) < a2)
			{
				v5 = *(_QWORD*)(v5 + 24);
			}
			else
			{
				v6 = v5;
				v5 = *(_QWORD*)(v5 + 16);
			}
		}
		if (v6 == v2 || (v69 = v6, a2 < *(_DWORD*)(v6 + 32)))
			v69 = v2;
		if (v69 == v2)
		{
			v7 = sub_1407A1590((__int64)&v69, a2);
			v68 = v7;
			v9 = sub_1407A1440(v8, a2, 1u);
			v11 = 0;
			LODWORD(v12) = v9 ? sub_1403BAF90(a1, v9) : 0;
			v13 = sub_1407A1440(v10, a2, 1u);
			v14 = *(_QWORD*)(a1 + 120);
			LODWORD(v69) = v13;
			v15 = sub_1403ACD90(qword_140C65B70, v13, v14);
			v65 = v15;
			if (v15)
			{
				v16 = 4;
				v17 = 0i64;
				v18 = (_DWORD*)(*(_QWORD*)(v15 + 112) + 408i64);
				while (*v18 != 6)
				{
					++v17;
					++v18;
					if (v17 >= 5)
						goto LABEL_20;
				}
				v16 = 1;
			LABEL_20:
				v19 = sub_14018B280(16i64, 0);
				v20 = (__int64*)v19;
				if (v19)
				{
					*((_QWORD*)v19 + 1) = 0i64;
					*(_QWORD*)v19 = 0i64;
				}
				else
				{
					v20 = 0i64;
				}
				v12 = (int)v12;
				v21 = 0;
				LODWORD(v70) = v16;
				v66[0] = (int)v12;
				v22 = v7 + 1;
				v23 = v22;
				for (i = v22; ; v23 = i)
				{
					v24 = sub_14018B280(40i64, 0);
					v25 = v24;
					if (v24)
					{
						*(_QWORD*)v24 = 0i64;
						*((_WORD*)v24 + 4) = 0;
						*((_QWORD*)v24 + 2) = 0i64;
						*((_QWORD*)v24 + 4) = 0i64;
						*((_QWORD*)v24 + 3) = 0i64;
					}
					else
					{
						v25 = 0i64;
					}
					v26 = v69;
					*v25 = a2;
					*((_BYTE*)v25 + 9) = v7;
					v25[1] = v26;
					sub_140052360((__int64*)v25 + 3, v23);
					if (v12)
						*((_BYTE*)v25 + 8) = 1;
					if ((unsigned int)sub_1403B5000(v65, 3))
					{
						v27 = qword_140C65970
							? (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65970 + 16i64))(qword_140C65970)
							: 0;
						v28 = sub_1407A1500(qword_140C65B70, a2);
						if (v28)
						{
							v30 = *(_DWORD*)(v28 + 8) - 1;
							if (v30 >= 0)
							{
								v31 = *(_QWORD*)v28;
								while (v27 < (unsigned int)sub_140491E90(v29, *(_DWORD*)(v31 + 4i64 * v30)))
								{
									v30 = v32 - 1;
									if (v30 < 0)
										goto LABEL_42;
								}
								v33 = *(_DWORD*)(v31 + 4i64 * v32);
								*((_BYTE*)v25 + 8) = v32 + 1;
								v25[1] = v33;
							}
						}
					}
				LABEL_42:
					v34 = v20[1];
					v35 = v34 + 1;
					v36 = sub_14018DB00(*v20, v34 + 1, 8i64);
					v37 = v36;
					*(_QWORD*)&v36[2 * v34] = v25;
					if ((int*)*v20 != v36)
					{
						sub_1407DB590(v36, (int*)*v20, 8 * v20[1]);
						if (*v20)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)(*v20 - 16) + 8i64))(*v20 - 16);
						*v20 = (__int64)v37;
					}
					v38 = v70;
					v12 = v66[0];
					++v21;
					v20[1] = v35;
					v7 = v68;
					if (v21 >= v38)
						break;
				}
				LODWORD(v66[0]) = a2;
				v66[1] = (__int64)v20;
				sub_140055F80(a1 + 2720, (__int64)&v65, v66);
				v40 = 1;
				if (v68)
				{
					do
					{
						v41 = sub_1407A1440(v39, a2, v40);
						v42 = *(_QWORD*)(a1 + 120);
						if (v41)
						{
							if (v42)
							{
								v43 = *(_QWORD*)(qword_140C65898 + 120) == v42
									|| *(_QWORD*)(qword_140C65898 + 25744) == *(_QWORD*)(a1 + 120);
								v44 = 0i64;
								if (v43)
									v44 = qword_140C65898;
								if (v44)
								{
									v45 = *(_QWORD*)(v44 + 32024);
									v39 = v45;
									v46 = *(_QWORD*)(v45 + 8);
									while (v46)
									{
										if (*(_DWORD*)(v46 + 32) < v41)
										{
											v46 = *(_QWORD*)(v46 + 24);
										}
										else
										{
											v39 = v46;
											v46 = *(_QWORD*)(v46 + 16);
										}
									}
									if (v39 == v45 || v41 < *(_DWORD*)(v39 + 32))
									{
										v66[0] = *(_QWORD*)(v44 + 32024);
										v47 = v66;
									}
									else
									{
										v70 = v39;
										v47 = &v70;
									}
									v48 = *v47;
									if (v48 != v45)
									{
										v49 = *(_QWORD*)(v48 + 40);
										if (v49)
											goto LABEL_68;
									}
								}
							}
							v49 = sub_1407A0FD0(qword_140C65B70, v41);
							if (v49)
							{
							LABEL_68:
								v50 = 0;
								for (j = *(_DWORD*)(*(_QWORD*)(v49 + 112) + 396i64);
									v50 < v38;
									*(_DWORD*)(4i64 * v40 + *(_QWORD*)(v39 + 24)) = j)
								{
									v52 = v50++;
									v39 = *(_QWORD*)(*v20 + 8 * v52);
								}
							}
						}
						++v40;
					} while (v40 <= (int)v68);
				}
				if (!*(_DWORD*)(a1 + 29056))
				{
					v53 = sub_1403BAD30(a1, a2, *(_BYTE*)(a1 + 28140));
					if (v53)
					{
						if (sub_1407A16F0(v54, v53))
						{
							if (*(_QWORD*)(a1 + 120))
							{
								if (sub_1407A16F0(v56, v55))
								{
									v57 = sub_1405A76A0(a1, a2);
									if (*v59 + v57)
									{
										v60 = (_DWORD*)sub_1407A16F0(v58, v69);
										if (v60)
										{
											v61 = *(_QWORD*)(a1 + 28096);
											v62 = v61;
											v63 = *(_QWORD*)(v61 + 8);
											while (v63)
											{
												if (*(_DWORD*)(v63 + 32) < a2)
												{
													v63 = *(_QWORD*)(v63 + 24);
												}
												else
												{
													v62 = v63;
													v63 = *(_QWORD*)(v63 + 16);
												}
											}
											if (v62 == v61 || (v69 = v62, a2 < *(_DWORD*)(v62 + 32)))
												v69 = v61;
											if (v69 != v61)
												v11 = *(_DWORD*)(v69 + 36);
											v11 += *v60;
										}
										sub_1405A6C90(a1, a2, v11);
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
// 1403BA6AD: conditional instruction was optimized away because di.1 is in (==1|==4)
// 1403BA5EA: variable 'v8' is possibly undefined
// 1403BA60D: variable 'v10' is possibly undefined
// 1403BA779: variable 'v29' is possibly undefined
// 1403BA775: variable 'v31' is possibly undefined
// 1403BA782: variable 'v32' is possibly undefined
// 1403BA857: variable 'v39' is possibly undefined
// 1403BA99C: variable 'v54' is possibly undefined
// 1403BA9B4: variable 'v56' is possibly undefined
// 1403BA9B4: variable 'v55' is possibly undefined
// 1403BA9D0: variable 'v59' is possibly undefined
// 1403BA9E0: variable 'v58' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B70: using guessed type __int64 qword_140C65B70;

