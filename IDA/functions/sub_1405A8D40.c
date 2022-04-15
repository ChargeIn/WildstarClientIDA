//----- (00000001405A8D40) ----------------------------------------------------
void __fastcall sub_1405A8D40(__int64 a1, __int64 a2)
{
	__int64 v2; // r15
	__int64 v3; // rbp
	__int64 v5; // r8
	__int64 v6; // rcx
	__int64 v7; // r12
	__int64 v8; // rsi
	unsigned __int64 v9; // rdi
	_QWORD* v10; // rbx
	__int64* v11; // rbx
	__int64 v12; // rbx
	int v13; // edi
	int v14; // ecx
	__int64 v15; // rcx
	__int64 v16; // rdx
	unsigned __int64 v17; // rdi
	_QWORD* v18; // rbx
	_QWORD* v19; // rbx
	_QWORD* v20; // rsi
	int v21; // ebx
	int v22; // eax
	unsigned int* v23; // r11
	unsigned int v24; // edi
	int v25; // r10d
	unsigned int v26; // r8d
	__int64 v27; // rax
	__int64 v28; // rdx
	__int64 v29; // rcx
	__int64* v30; // rcx
	unsigned int v31; // eax
	int v32; // ebx
	__int64 v33; // rax
	__int64 v34; // rdi
	unsigned int v35; // ecx
	unsigned int v36; // ecx
	unsigned int v37; // ecx
	unsigned int v38; // ecx
	__int64 v39; // rcx
	unsigned int v40; // eax
	__int64 v41; // rax
	__int64 v42; // rdi
	unsigned int v43; // ecx
	unsigned int v44; // ecx
	unsigned int v45; // ecx
	unsigned int v46; // ecx
	__int64 v47; // rdx
	__int64 v48; // rcx
	__int64 v49; // [rsp+70h] [rbp+8h] BYREF
	int v50; // [rsp+78h] [rbp+10h] BYREF
	__int64 v51; // [rsp+80h] [rbp+18h] BYREF
	__int64 v52; // [rsp+88h] [rbp+20h] BYREF

	v49 = a1;
	v2 = *(_QWORD*)(a2 + 24);
	v3 = qword_140C65B80;
	if (v2)
	{
		v5 = *(_QWORD*)(v2 + 96);
		v6 = qword_140C66650;
		v7 = 0i64;
		v8 = 0i64;
		if (*(_DWORD*)(qword_140C66650 + 4 * v5))
		{
			do
			{
				LODWORD(v49) = *(_DWORD*)(v6 + 4 * (v5 + v8));
				v9 = (*(__int64(__fastcall**)(__int64*))(v3 + 32))(&v49);
				v10 = *(_QWORD**)(*(_QWORD*)(v3 + 24) + 8 * (v9 % *(_QWORD*)(v3 + 16)));
				if (v10)
				{
					while (v9 != *v10 || !(*(unsigned int(__fastcall**)(__int64*, _QWORD*))(v3 + 40))(&v49, v10 + 2))
					{
						v10 = (_QWORD*)v10[1];
						if (!v10)
							goto LABEL_19;
					}
					v11 = v10 + 3;
					if (v11)
					{
						v12 = *v11;
						v13 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(v12 + 8));
						if (v13 == 2
							|| (*(_BYTE*)(*(_QWORD*)(v12 + 8) + 12i64) & 1) != 0 && !(unsigned int)sub_140552550(v12, -8193))
						{
							*(_BYTE*)(a2 + 7212) = 1;
							if (*(_DWORD*)(*(_QWORD*)(v12 + 8) + 300i64) < 4u)
								*(_BYTE*)(a2 + 7220) = 1;
						}
						else if (v13 == 1)
						{
							v14 = 61;
							if (*(_DWORD*)(*(_QWORD*)(v12 + 8) + 20i64) == 5)
								v14 = 63;
							v15 = 9i64 * v14;
							*(_BYTE*)(a2 + 8 * v15 + 6420) = 1;
							if (*(_DWORD*)(*(_QWORD*)(v12 + 8) + 300i64) < 4u)
								*(_BYTE*)(a2 + 8 * v15 + 6428) = 1;
						}
					}
				}
			LABEL_19:
				v5 = *(_QWORD*)(v2 + 96);
				v6 = qword_140C66650;
				++v8;
			} while (*(_DWORD*)(qword_140C66650 + 4 * (v5 + v8)));
		}
		v16 = *(_QWORD*)(v2 + 88);
		if (*(_DWORD*)(v6 + 4 * v16))
		{
			do
			{
				v50 = *(_DWORD*)(v6 + 4 * (v16 + v7));
				v17 = (*(__int64(__fastcall**)(int*))(v3 + 32))(&v50);
				v18 = *(_QWORD**)(*(_QWORD*)(v3 + 24) + 8 * (v17 % *(_QWORD*)(v3 + 16)));
				if (!v18)
					goto LABEL_107;
				while (v17 != *v18 || !(*(unsigned int(__fastcall**)(int*, _QWORD*))(v3 + 40))(&v50, v18 + 2))
				{
					v18 = (_QWORD*)v18[1];
					if (!v18)
						goto LABEL_107;
				}
				v19 = v18 + 3;
				if (!v19)
					goto LABEL_107;
				v20 = (_QWORD*)*v19;
				v21 = sub_1405FBC40(*(_QWORD**)qword_140C65B80, **(_DWORD**)(*v19 + 8i64));
				v22 = sub_140552550((__int64)v20, -8193);
				v23 = (unsigned int*)v20[1];
				v24 = v23[3];
				v25 = v22;
				if ((v24 & 0x800) != 0)
				{
					if (!v22)
					{
						*(_BYTE*)(a2 + 7284) = 1;
						if (*(_DWORD*)(v20[1] + 300i64) < 4u)
							*(_BYTE*)(a2 + 7292) = 1;
					}
				}
				else
				{
					if ((v24 & 0x400) != 0)
					{
						v26 = *v23;
						v27 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
						v28 = v27;
						v29 = *(_QWORD*)(v27 + 8);
						while (v29)
						{
							if (*(_DWORD*)(v29 + 32) < v26)
							{
								v29 = *(_QWORD*)(v29 + 24);
							}
							else
							{
								v28 = v29;
								v29 = *(_QWORD*)(v29 + 16);
							}
						}
						if (v28 == v27 || v26 < *(_DWORD*)(v28 + 32))
						{
							v52 = *(_QWORD*)(*(_QWORD*)qword_140C65B80 + 40i64);
							v30 = &v52;
						}
						else
						{
							v51 = v28;
							v30 = &v51;
						}
						if (*v30 == v27 && !v25)
							goto LABEL_107;
					}
					if ((unsigned int)(v21 - 1) <= 1)
					{
						v40 = v23[5];
						if (v40 == 5)
						{
							v32 = 62;
							goto LABEL_100;
						}
						if (v40 == 3)
						{
							v32 = 60;
							goto LABEL_100;
						}
						if (v20[13] && !sub_1405533C0((__int64)v20))
						{
							v32 = 57;
							v41 = sub_1407242B0(*(_QWORD*)(v20[12] + 16i64), *(_DWORD*)(*(_QWORD*)(v20[12] + 16i64) + 32i64));
							v42 = v41;
							if (v41)
							{
								if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v41 + 104i64))(v41))
								{
									v32 = 59;
								}
								else if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v42 + 112i64))(v42))
								{
									v32 = 58;
								}
							}
							goto LABEL_100;
						}
						if ((v24 & 0x20) != 0)
						{
							v32 = 52;
							goto LABEL_100;
						}
						v43 = v23[109];
						if (!v43)
						{
							v32 = 51;
							goto LABEL_100;
						}
						v44 = v43 - 1;
						if (!v44)
						{
							v32 = 53;
							goto LABEL_100;
						}
						v45 = v44 - 1;
						if (!v45)
						{
							v32 = 54;
							goto LABEL_100;
						}
						v46 = v45 - 1;
						if (!v46)
						{
							v32 = 55;
							goto LABEL_100;
						}
						if (v46 == 1)
						{
							v32 = 56;
							goto LABEL_100;
						}
					}
					else if (v25)
					{
						v39 = *(_QWORD*)(qword_140C65898 + 120);
						if (v39 && *(_DWORD*)(v39 + 56) + 5 >= v23[6] && !(unsigned int)sub_140552550((__int64)v20, -3))
						{
							if (*(_DWORD*)(v20[1] + 20i64) == 5)
							{
								v32 = 93;
							}
							else if (!v20[13] || sub_1405533C0((__int64)v20))
							{
								v32 = 92;
							}
							else
							{
								v32 = 91;
							}
						LABEL_100:
							v47 = a2 + 72i64 * v32;
							*(_BYTE*)(v47 + 6420) = 1;
							if (*(_DWORD*)(v20[1] + 300i64) < 4u)
							{
								if (v32 == 51 || v32 == 62)
								{
									if (qword_140C65970)
									{
										v48 = *(int*)(qword_140C65970 + 8);
										if ((int)v48 < 4)
											*(_QWORD*)(v47 + 6440) = off_140B03988[v48];
									}
								}
								else
								{
									*(_BYTE*)(v47 + 6428) = 1;
								}
							}
						}
					}
					else
					{
						v31 = v23[5];
						if (v31 == 5)
						{
							v32 = 17;
							goto LABEL_100;
						}
						if (v31 == 3)
						{
							v32 = 18;
							goto LABEL_100;
						}
						if (v20[13] && !sub_1405533C0((__int64)v20))
						{
							v32 = 13;
							v33 = sub_1407242B0(*(_QWORD*)(v20[12] + 16i64), *(_DWORD*)(*(_QWORD*)(v20[12] + 16i64) + 32i64));
							v34 = v33;
							if (v33)
							{
								if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v33 + 104i64))(v33))
								{
									v32 = 15;
								}
								else if ((*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v34 + 112i64))(v34))
								{
									v32 = 14;
								}
							}
							goto LABEL_100;
						}
						if ((v24 & 0x20) != 0)
						{
							v32 = 19;
							goto LABEL_100;
						}
						v35 = v23[109];
						if (!v35)
						{
							v32 = 16;
							goto LABEL_100;
						}
						v36 = v35 - 1;
						if (!v36)
						{
							v32 = 20;
							goto LABEL_100;
						}
						v37 = v36 - 1;
						if (!v37)
						{
							v32 = 21;
							goto LABEL_100;
						}
						v38 = v37 - 1;
						if (!v38)
						{
							v32 = 22;
							goto LABEL_100;
						}
						if (v38 == 1)
						{
							v32 = 23;
							goto LABEL_100;
						}
					}
				}
			LABEL_107:
				v16 = *(_QWORD*)(v2 + 88);
				v6 = qword_140C66650;
				++v7;
			} while (*(_DWORD*)(qword_140C66650 + 4 * (v16 + v7)));
		}
	}
}
// 1405A90B0: variable 'v23' is possibly undefined
// 140B03988: using guessed type wchar_t *off_140B03988[4];
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C65B80: using guessed type __int64 qword_140C65B80;
// 140C66650: using guessed type __int64 qword_140C66650;

