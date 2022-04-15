#include "../winhttp.h"

//----- (0000000140479560) ----------------------------------------------------
__int64 __fastcall sub_140479560(__int64 a1)
{
	__int64 v2; // r10
	unsigned int v3; // edx
	__int64 v4; // r8
	__int64 v5; // rcx
	__int64 v6; // rax
	__int64 result; // rax
	__int64 v8; // rdi
	int v9; // eax
	__int64 v10; // rcx
	__int64 v11; // r9
	__int64 v12; // rax
	__int64 v13; // rcx
	int v14; // eax
	__int64 v15; // rax
	__int64 v16; // r10
	unsigned int v17; // edx
	_DWORD* v18; // rcx
	int v19; // r8d
	__int64 v20; // rax
	int v21; // eax
	__int64 v22; // rdx
	__int64 v23; // rcx
	int v24; // eax
	unsigned int v25; // edx
	__int64 v26; // rax
	__int64 v27; // rcx
	__int64 v28; // rcx
	__int64 v29; // rcx
	__int64 v30; // rcx
	__int64 v31; // r8
	__int64 v32; // rax
	unsigned int v33; // r10d
	unsigned int v34; // edx
	__int64 v35; // rax
	__int64 v36; // rcx
	int v37; // eax
	__int64 v38; // rcx
	int v39; // eax
	__int64 v40; // rdi
	__int64 v41; // rax
	__int64 v42; // rax
	unsigned int v43; // eax
	__int64 v44; // rcx
	__int64 v45; // rax
	unsigned int v46; // eax
	__int64 v47; // rcx
	unsigned __int64 v48; // rdx
	unsigned __int64 v49; // rcx
	_DWORD* v50; // rax
	unsigned int v51; // ecx
	__int64 v52; // rax
	__int64 v53; // rcx
	__int64 v54; // rax
	__int64 v55; // r8
	unsigned int v56; // edx
	__int64 v57; // rdi
	unsigned int v58; // edx
	__int64 v59; // rax
	__int64 v60; // rax
	__int64 v61; // rcx
	unsigned int v62; // edx
	__int64 v63; // [rsp+30h] [rbp-18h] BYREF
	__int64 v64; // [rsp+38h] [rbp-10h]
	__int64 v65; // [rsp+50h] [rbp+8h] BYREF

	sub_14046C4D0(a1);
	v2 = qword_140C65898;
	v3 = *(_DWORD*)(a1 + 8);
	*(_QWORD*)(a1 + 6408) = a1 + 13688;
	v4 = *(_QWORD*)(*(_QWORD*)(v2 + 32144) + 40i64);
	v5 = v4;
	v6 = *(_QWORD*)(v4 + 8);
	while (v6)
	{
		if (*(_DWORD*)(v6 + 32) < v3)
		{
			v6 = *(_QWORD*)(v6 + 24);
		}
		else
		{
			v5 = v6;
			v6 = *(_QWORD*)(v6 + 16);
		}
	}
	if (v5 == v4 || (v65 = v5, v3 < *(_DWORD*)(v5 + 32)))
		v65 = v4;
	result = v65;
	if (v65 != v4)
	{
		result = v65 + 40;
		if (v65 != -40)
		{
			if (*(_DWORD*)(v65 + 108))
			{
				if (*(_DWORD*)(v65 + 52) != 2 && !*(_DWORD*)(v65 + 112))
				{
					v5 = *(_QWORD*)(v65 + 88);
					if (!v5 || (*(_BYTE*)(v5 + 8) & 2) == 0)
						*(_BYTE*)(a1 + 11028) = 1;
				}
			}
		}
	}
	v8 = *(_QWORD*)(v2 + 120);
	if (v8)
	{
		result = qword_140C65970;
		if (qword_140C65970)
		{
			if (*(_DWORD*)(a1 + 128) == 20)
			{
				result = sub_14045A950(*(_QWORD*)(v2 + 120), *(_DWORD*)(a1 + 8));
				if ((_DWORD)result == 2)
				{
					if (*(_DWORD*)(a1 + 592))
					{
						result = qword_140C65898;
						if ((*(_BYTE*)(qword_140C65898 + 7020) & 4) != 0 && !*(_DWORD*)(qword_140C65898 + 7044))
							*(_BYTE*)(a1 + 11964) = 1;
					}
				}
				return result;
			}
			if (*(_QWORD*)(a1 + 24))
			{
				if (*(_DWORD*)(qword_140C65970 + 8) == 2)
					sub_140570C90(v5, a1, 1, 0i64);
				LODWORD(v65) = 0;
				if ((unsigned int)sub_1405A92C0(a1, &v65))
				{
					if ((_DWORD)v65)
						*(_BYTE*)(a1 + 13260) = 1;
					else
						*(_BYTE*)(a1 + 13332) = 1;
				}
				v9 = *(_DWORD*)(a1 + 40);
				if ((v9 & 0x100000) != 0 || (v9 & 0x200000) != 0)
					*(_BYTE*)(a1 + 13620) = 1;
				result = sub_140482450(a1);
				if (!(_DWORD)result && (*(_DWORD*)(a1 + 40) & 0x4000) == 0 && *(_DWORD*)(a1 + 6400) != 1)
				{
					if (*(_DWORD*)(qword_140C65970 + 8) != 1)
						goto LABEL_58;
					v12 = sub_140480840(v10, **(_DWORD**)(a1 + 24));
					if (v12)
					{
						if (*(_DWORD*)(v12 + 16) && !(unsigned int)sub_140480700(v12, *(_QWORD*)(qword_140C65898 + 120)))
						{
						LABEL_55:
							v20 = sub_1403D3950(*(_QWORD*)(a1 + 24), **(_DWORD**)(a1 + 24), *(_QWORD*)(qword_140C65898 + 120));
							if (v20)
							{
								*(_BYTE*)(a1 + 8580) = 1;
								if ((*(_BYTE*)(*(_QWORD*)(v20 + 8) + 36i64) & 1) != 0)
									*(_BYTE*)(a1 + 8588) = 0;
							}
						LABEL_58:
							if (*(_DWORD*)(qword_140C65970 + 8))
								goto LABEL_65;
							if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 328i64))
							{
								v21 = sub_140570810(v10, a1, 0i64);
								if (v21 != 1)
								{
									if (v21 == 4)
										*(_BYTE*)(a1 + 8796) = 1;
								LABEL_65:
									if (*(_DWORD*)(qword_140C65970 + 8) == 3)
									{
										if ((*(_BYTE*)(a1 + 44) & 0x20) != 0)
										{
											*(_BYTE*)(a1 + 8868) = 1;
										}
										else
										{
											if ((unsigned int)sub_140722830(v10, a1) == 2)
												*(_BYTE*)(a1 + 6564) = 1;
											v24 = sub_140571850(v23, v22, 0i64);
											if (v24 != 101)
												*(_BYTE*)(a1 + 72i64 * v24 + 6420) = 1;
										}
									}
									if (*(_DWORD*)(qword_140C65970 + 8) == 2)
									{
										v25 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 120i64);
										if (v25)
										{
											v26 = sub_1404804A0(qword_140C65970, v25, 22);
											if (v26)
											{
												if (!(*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)v26 + 56i64))(v26))
													*(_BYTE*)(a1 + 8508) = 1;
											}
										}
									}
									if (*(_DWORD*)(a1 + 128) == 36
										&& (*(_DWORD*)(a1 + 304)
											|| (v27 = *(_QWORD*)(qword_140C65898 + 120)) != 0 && *(_DWORD*)(a1 + 292) == *(_DWORD*)(v27 + 8)
											|| !(unsigned int)sub_14045BD30(a1)))
									{
										*(_BYTE*)(a1 + 6492) = 1;
									}
									result = sub_14046C6A0(a1);
									if (!(_DWORD)result)
									{
										sub_1405A8D40(v28, a1);
										if ((unsigned int)sub_1405FC800(*(_QWORD*)qword_140C65B80, a1))
											*(_BYTE*)(a1 + 9084) = 1;
										if ((unsigned int)sub_1405FC900(*(_QWORD*)qword_140C65B80, a1))
											*(_BYTE*)(a1 + 9228) = 1;
										sub_1405F5860(v29, a1, 1, 0i64);
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 304i64) && *(_QWORD*)(qword_140C65898 + 29064))
											*(_BYTE*)(a1 + 7140) = 1;
										if ((*(_BYTE*)(a1 + 44) & 0x10) != 0)
											*(_BYTE*)(a1 + 9444) = 1;
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 64i64) && *(_DWORD*)(v8 + 56) >= 0xAu)
											*(_BYTE*)(a1 + 9516) = 1;
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 68i64)
											&& (unsigned int)sub_1403A0E80(v30, a1)
											&& *(_DWORD*)(v8 + 56) >= 0xAu)
										{
											*(_BYTE*)(a1 + 9588) = 1;
										}
										if (*(_DWORD*)(a1 + 14036))
										{
											v31 = *(unsigned int*)(a1 + 14032);
											if (!(_DWORD)v31
												|| (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
													qword_140C659A0,
													0i64,
													v31,
													a1,
													0i64,
													0))
											{
												*(_BYTE*)(a1 + 9948) = 1;
											}
										}
										v32 = *(_QWORD*)(a1 + 24);
										if (v32 && *(_DWORD*)(v32 + 116))
										{
											if (sub_14047AAA0(a1))
											{
												*(_BYTE*)(a1 + 9660) = 1;
											}
											else if (sub_14047AB20(a1))
											{
												*(_BYTE*)(a1 + 9732) = 1;
											}
											else if (sub_1404AD9B0(qword_140C659D0, v33)
												|| !(unsigned int)sub_1404ADB70(
													qword_140C659D0,
													*(_DWORD*)(*(_QWORD*)(a1 + 24) + 116i64)))
											{
												if ((unsigned int)sub_1404ADB70(qword_140C659D0, *(_DWORD*)(*(_QWORD*)(a1 + 24) + 116i64)))
													*(_BYTE*)(a1 + 9876) = 1;
											}
											else
											{
												*(_BYTE*)(a1 + 9804) = 1;
											}
										}
										v34 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 112i64);
										if (v34)
										{
											v35 = sub_1403AC530(v30, v34);
											v36 = v35;
											if (v35)
											{
												v37 = *(_DWORD*)(v35 + 40);
												if (v37)
												{
													if (((v37 - 1) & 0xFFFFFFFD) == 0
														&& ((*(_BYTE*)(*(_QWORD*)v36 + 4i64) & 1) == 0 || *(_DWORD*)(qword_140C65970 + 8) == 1))
													{
														*(_BYTE*)(a1 + 9372) = 1;
													}
												}
												else if ((*(_BYTE*)(*(_QWORD*)v36 + 4i64) & 1) != 0)
												{
													if (*(_DWORD*)(qword_140C65970 + 8) == 1)
														*(_BYTE*)(a1 + 9300) = 1;
												}
												else
												{
													*(_BYTE*)(a1 + 9300) = 1;
												}
											}
										}
										if ((*(_BYTE*)(a1 + 44) & 2) != 0)
											*(_BYTE*)(a1 + 6780) = 1;
										if ((*(_BYTE*)(a1 + 44) & 4) != 0)
											*(_BYTE*)(a1 + 6852) = 1;
										if ((*(_BYTE*)(a1 + 44) & 8) != 0)
											*(_BYTE*)(a1 + 6924) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x2000) != 0)
											*(_BYTE*)(a1 + 6996) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x4000) != 0)
											*(_BYTE*)(a1 + 7068) = 1;
										if ((unsigned int)sub_140480580(
											*(_QWORD*)(a1 + 24),
											**(_DWORD**)(a1 + 24),
											*(_QWORD*)(qword_140C65898 + 120)))
											*(_BYTE*)(a1 + 8148) = 1;
										v39 = sub_140722930(v38, a1);
										if (v39 != 101)
											*(_BYTE*)(a1 + 72i64 * v39 + 6420) = 1;
										v40 = qword_140C65970;
										if (*(_DWORD*)(qword_140C65970 + 8) == 1)
										{
											if ((*(_BYTE*)(a1 + 44) & 0x40) != 0)
											{
												*(_BYTE*)(a1 + 8292) = 1;
												*(_BYTE*)(a1 + 8300) = 1;
												*(_BYTE*)(a1 + 8295) = 1;
											}
											if ((*(_DWORD*)(a1 + 44) & 0x10000) != 0)
												*(_BYTE*)(a1 + 11748) = 1;
										}
										if (!*(_DWORD*)(v40 + 8))
										{
											v41 = *(_QWORD*)(a1 + 24);
											if (!*(_DWORD*)(v41 + 328) && v41 && *(_QWORD*)(v40 + 88))
											{
												if ((v42 = sub_140573A30(v40, a1)) != 0
													&& (v43 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v42 + 8i64))(v42),
														(unsigned int)sub_1404A1950(v44, v43))
													|| (v45 = sub_140573BA0(v40, a1)) != 0
													&& (v46 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v45 + 8i64))(v45),
														(unsigned int)sub_1404A1950(v47, v46)))
												{
													*(_BYTE*)(a1 + 13188) = 1;
												}
											}
										}
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 4i64) == 8)
											*(_BYTE*)(a1 + 8292) = 1;
										if (*(_DWORD*)(a1 + 128) == 1)
											*(_BYTE*)(a1 + 11028) = 1;
										if (*(_QWORD*)(qword_140C65898 + 120)
											&& (!sub_14039E0E0(qword_140C65898) || sub_14039E0A0(qword_140C65898))
											&& (*(unsigned int(__fastcall**)(__int64))(*(_QWORD*)a1 + 32i64))(a1)
											&& (unsigned int)sub_14047B5C0((_QWORD*)a1)
											&& *(_DWORD*)(a1 + 128) != 7)
										{
											v48 = *(_QWORD*)(a1 + 408);
											v49 = 0i64;
											if (v48)
											{
												v50 = (_DWORD*)(*(_QWORD*)(a1 + 400) + 8i64);
												while (*v50 != *(_DWORD*)(*(_QWORD*)(qword_140C65898 + 120) + 8i64))
												{
													++v49;
													v50 += 3;
													if (v49 >= v48)
														goto LABEL_168;
												}
											}
											else
											{
											LABEL_168:
												*(_BYTE*)(a1 + 8364) = 1;
												*(_BYTE*)(a1 + 8368) = *(_DWORD*)(a1 + 6400) == 2;
											}
										}
										v51 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 332i64);
										if (v51)
										{
											v52 = sub_1402092A0(v51);
											if (v52)
											{
												if (((*(_DWORD*)(v52 + 20) - 1) & 0xFFFFFFFD) == 0)
													*(_BYTE*)(a1 + 9012) = 1;
											}
										}
										if ((unsigned int)sub_14046C580(a1, *(_QWORD*)(qword_140C65898 + 120)))
										{
											if ((*(_DWORD*)(a1 + 44) & 0x800) == 0)
											{
												v54 = *(_QWORD*)(a1 + 24);
												if (!*(_DWORD*)(v54 + 124) && !*(_DWORD*)(v54 + 128))
													*(_BYTE*)(a1 + 10020) = 1;
											}
										}
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 160i64))
											sub_1405A8B30(v53, a1, 1);
										v55 = *(unsigned int*)(*(_QWORD*)(a1 + 24) + 156i64);
										if ((_DWORD)v55
											&& (*(unsigned int(__fastcall**)(__int64, _QWORD, __int64, __int64, _QWORD, _DWORD))(*(_QWORD*)qword_140C659A0 + 24i64))(
												qword_140C659A0,
												*(_QWORD*)(qword_140C65898 + 120),
												v55,
												a1,
												0i64,
												0)
											&& (*(_DWORD*)(a1 + 44) & 0x800) == 0)
										{
											*(_BYTE*)(a1 + 9228) = 1;
										}
										v56 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 124i64);
										if (v56)
											v57 = sub_1404A7EB0(qword_140C659B0, v56);
										else
											v57 = 0i64;
										v58 = *(_DWORD*)(*(_QWORD*)(a1 + 24) + 128i64);
										if (v58)
											v59 = sub_1404A7F00(qword_140C659B0, v58);
										else
											v59 = 0i64;
										if ((v57 || v59) && !(unsigned int)sub_1404A8180(v53, a1))
										{
											v60 = qword_140C65970;
											*(_BYTE*)(a1 + 9156) = 1;
											if (*(_DWORD*)(v60 + 8) == 2 && v57 && !*(_DWORD*)(*(_QWORD*)v57 + 4i64))
												*(_BYTE*)(a1 + 9164) = 1;
										}
										if (*(_DWORD*)(*(_QWORD*)(a1 + 24) + 108i64) && (unsigned int)sub_14045B830(a1))
											*(_BYTE*)(a1 + 6708) = 1;
										if ((*(_DWORD*)(a1 + 40) & 0x20000) != 0)
											*(_BYTE*)(a1 + 11100) = 1;
										if ((*(_BYTE*)(a1 + 44) & 1) != 0)
											*(_BYTE*)(a1 + 11172) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x10000000) != 0)
											*(_BYTE*)(a1 + 11244) = 1;
										result = *(_QWORD*)(a1 + 24);
										if (*(_DWORD*)(result + 4) == 12)
											*(_BYTE*)(a1 + 11316) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x1000) != 0)
											*(_BYTE*)(a1 + 11388) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x100) != 0)
											*(_BYTE*)(a1 + 11460) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x200) != 0)
											*(_BYTE*)(a1 + 11532) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x8000) != 0)
											*(_BYTE*)(a1 + 11604) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x80000) != 0)
											*(_BYTE*)(a1 + 11676) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x400000) != 0)
											*(_BYTE*)(a1 + 12108) = 1;
										v61 = qword_140C65898;
										if ((*(_DWORD*)(a1 + 44) & 0x20000) != 0)
										{
											result = (unsigned int)~(*(_DWORD*)(qword_140C65898 + 32616) >> 1);
											if ((result & 1) != 0)
												*(_BYTE*)(a1 + 11820) = 1;
										}
										if ((*(_DWORD*)(a1 + 44) & 0x40000) != 0)
										{
											result = (unsigned int)~*(_DWORD*)(v61 + 32616);
											if ((*(_BYTE*)(v61 + 32616) & 1) == 0)
												*(_BYTE*)(a1 + 11892) = 1;
										}
										if ((*(_DWORD*)(a1 + 44) & 0x200000) != 0)
											*(_BYTE*)(a1 + 12036) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x100000) != 0)
											*(_BYTE*)(a1 + 12180) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x4000000) != 0)
											*(_BYTE*)(a1 + 12468) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x8000000) != 0)
											*(_BYTE*)(a1 + 12540) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x10000000) != 0)
											*(_BYTE*)(a1 + 11244) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x20000000) != 0)
											*(_BYTE*)(a1 + 12612) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x40000000) != 0)
											*(_BYTE*)(a1 + 12684) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x800000) != 0)
										{
											v62 = *(_DWORD*)(a1 + 6120);
											v64 = 0i64;
											v63 = 0i64;
											result = (__int64)sub_1403A9DA0(v61, v62, &v63);
											if (v64)
												*(_BYTE*)(a1 + 12252) = 1;
											else
												result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)a1 + 8i64))(a1);
											if (v63)
												result = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)(v63 - 16) + 8i64))(v63 - 16);
										}
										if (*(_DWORD*)(a1 + 128) == 5)
										{
											result = *(_QWORD*)(a1 + 24);
											if (*(_DWORD*)(result + 168))
												*(_BYTE*)(a1 + 12396) = 1;
										}
										if (*(int*)(a1 + 44) < 0)
											*(_BYTE*)(a1 + 13548) = 1;
										if ((*(_DWORD*)(a1 + 44) & 0x1000000) != 0)
											*(_BYTE*)(a1 + 12756) = 1;
									}
									return result;
								}
							}
							else if (!(unsigned int)sub_140570990(v10, a1, 0i64, v11))
							{
								goto LABEL_65;
							}
							*(_BYTE*)(a1 + 8724) = 1;
							goto LABEL_65;
						}
					}
					else
					{
						v13 = *(_QWORD*)(v8 + 272);
						if (v13)
							v14 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)v13 + 24i64))(v13);
						else
							v14 = 0;
						v15 = sub_1404808F0(v13, **(_DWORD**)(a1 + 24), (unsigned int)(v14 != 167) + 1);
						if (!v15 || !*(_DWORD*)(v15 + 16))
							goto LABEL_55;
						v16 = *(_QWORD*)(v15 + 8);
						v17 = 0;
						v18 = (_DWORD*)(v16 + 36);
						while (**(_DWORD**)(a1 + 24) != *v18)
						{
							++v17;
							++v18;
							if (v17 >= 3)
							{
								v19 = 0;
								goto LABEL_53;
							}
						}
						v19 = *(_DWORD*)(v16 + 4i64 * v17 + 48);
					LABEL_53:
						if ((unsigned int)sub_140480790(v15, *(_QWORD*)(qword_140C65898 + 120), v19))
							goto LABEL_55;
					}
					*(_BYTE*)(a1 + 8436) = 1;
					goto LABEL_55;
				}
			}
		}
	}
	return result;
}
// 14047972A: variable 'v10' is possibly undefined
// 140479788: variable 'v13' is possibly undefined
// 140479853: variable 'v11' is possibly undefined
// 140479896: variable 'v23' is possibly undefined
// 140479896: variable 'v22' is possibly undefined
// 14047993C: variable 'v28' is possibly undefined
// 140479985: variable 'v29' is possibly undefined
// 1404799DC: variable 'v30' is possibly undefined
// 140479A76: variable 'v33' is possibly undefined
// 140479B95: variable 'v38' is possibly undefined
// 140479C1C: variable 'v44' is possibly undefined
// 140479C40: variable 'v47' is possibly undefined
// 140479D86: variable 'v53' is possibly undefined
// 140C65898: using guessed type __int64 qword_140C65898;
// 140C65970: using guessed type __int64 qword_140C65970;
// 140C659A0: using guessed type __int64 qword_140C659A0;
// 140C659B0: using guessed type __int64 qword_140C659B0;
// 140C659D0: using guessed type __int64 qword_140C659D0;
// 140C65B80: using guessed type __int64 qword_140C65B80;

