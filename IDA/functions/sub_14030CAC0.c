//----- (000000014030CAC0) ----------------------------------------------------
__int64 __fastcall sub_14030CAC0(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rax
	unsigned __int64 v8; // rdx
	unsigned int v9; // r8d
	__int64 v10; // rcx
	__int64 v11; // r14
	unsigned __int64 v12; // rax
	unsigned int v13; // r11d
	__int64 v14; // rdx
	int v15; // r11d
	unsigned int* v16; // r8
	unsigned __int64 i; // rbp
	__int64 v18; // rdx
	__int64 v19; // r8
	unsigned __int64 v20; // rbp
	unsigned int* v21; // r8
	__int64 v22; // rdx
	__int64 v23; // r8
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // rdx
	__int64 v27; // rdx
	__int64 v28; // rdx
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 v31; // rdx
	__int64 v32; // rax
	__int64 v33; // rax
	__int64 v34; // rdx
	__int64 v35; // rcx
	__int64 v36; // rax
	__int64 v37; // rdx
	_QWORD* v38; // rcx
	__int64 v39; // rax
	__int64 v40; // rcx
	__int64 v41; // rdx
	__int64 v42; // rax
	__int64 v43; // rax
	__int64 v44; // rdx
	__int64 v45; // rcx
	__int64 v46; // rax
	__int64 v47; // rax
	__int64 v48; // rdx
	__int64 v49; // rcx
	__int64 v50; // rax
	__int64 v51; // rax
	__int64 v52; // rdx
	__int64 v53; // rcx
	__int64 v54; // rax
	__int64 v55; // rax
	__int64 v56; // rdx
	__int64 v57; // rax
	__int64 v58; // rax
	__int64 v59; // rcx
	__int64 v60; // rdx
	__int64 v61; // rax
	__int64 v62; // rax
	__int64 v63; // rdx
	__int64 v64; // rcx
	__int64 v65; // rax
	__int64 v66; // rax
	__int64 v67; // rdx
	__int64 v68; // rcx
	__int64 v69; // rax
	__int64 v70; // rax
	__int64 v71; // r8
	__int64 v72; // rdx
	__int64 v73; // rax
	unsigned int v74; // ebp
	__int64 v75; // r15
	__int64 v76; // rax
	__int64 v77; // rdx
	unsigned int v78; // r8d
	__int64 v79; // rcx
	__int64 v80; // rax
	unsigned int v81; // ebp
	__int64 v82; // rdx
	__int64 v83; // rax
	__int64 v84; // rdx
	unsigned int v85; // r8d
	__int64 v86; // rcx
	__int64 v87; // rax
	unsigned int v88; // ebp
	__int64 v89; // rdx
	__int64 v90; // rdx
	__int64 v91; // rdx
	__int64 v92; // rdx
	__int64 v93; // rax
	__int64 v94; // rcx
	__int64 v95; // rdx
	__int64 v96; // rax
	__int64 v97; // rdx
	_QWORD* v98; // rcx
	__int64 v99; // rdx
	__int64 v100; // rcx
	__int64 v101; // rdx

	if (*(_DWORD*)a3 != 1297040460)
		return 2684747777i64;
	if (*(_DWORD*)(a3 + 4) != 100)
		return 2684747778i64;
	v7 = *(_QWORD*)(a3 + 24);
	v8 = v7 + a2;
	if (v8 < *a1)
		return 2147500037i64;
	v9 = *(_DWORD*)(a3 + 16);
	v10 = 112i64 * v9;
	if (a2 + v10 + v7 > a1[1])
		return 2147500037i64;
	v11 = 0i64;
	v12 = 0i64;
	v13 = 0;
	if (v9)
		v12 = v8;
	*(_QWORD*)(a3 + 24) = v12;
	v14 = v12 + ((v10 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
	if (v9)
	{
		while (1)
		{
			result = sub_1402CA420(a1, v14, (unsigned int*)(a1[2] + *(_QWORD*)(a3 + 24) + 112i64 * v13 + 96));
			if ((int)result < 0)
				break;
			v13 = v15 + 1;
			if (v13 >= *(_DWORD*)(a3 + 16))
				goto LABEL_12;
		}
	}
	else
	{
	LABEL_12:
		v16 = (unsigned int*)(a3 + 32);
		for (i = 0i64; i < 4; ++i)
		{
			result = sub_14030EB90(a1, a2, v16);
			if ((int)result < 0)
				return result;
			v16 = (unsigned int*)(v19 + 24);
		}
		result = sub_14030EFA0(a1, v18, (unsigned int*)(a3 + 128));
		if ((int)result >= 0)
		{
			v20 = 0i64;
			v21 = (unsigned int*)(a3 + 144);
			do
			{
				result = sub_14030EB90(a1, a2, v21);
				if ((int)result < 0)
					return result;
				++v20;
				v21 = (unsigned int*)(v23 + 24);
			} while (v20 < 4);
			result = sub_14030F080(a1, v22, (int*)(a3 + 240));
			if ((int)result >= 0)
			{
				result = sub_14030AC30(a1, a2, (unsigned int*)(a3 + 256));
				if ((int)result >= 0)
				{
					result = sub_14030F130(a1, v24, (int*)(a3 + 384));
					if ((int)result >= 0)
					{
						result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 400));
						if ((int)result >= 0)
						{
							result = sub_1402CA420(a1, v25, (unsigned int*)(a3 + 416));
							if ((int)result >= 0)
							{
								result = sub_1402CA420(a1, v26, (unsigned int*)(a3 + 432));
								if ((int)result >= 0)
								{
									result = sub_1402CA530(a1, v27, (unsigned int*)(a3 + 448));
									if ((int)result >= 0)
									{
										result = sub_1402CA420(a1, a2, (unsigned int*)(a3 + 464));
										if ((int)result >= 0)
										{
											result = sub_14030F1E0(a1, v28, (int*)(a3 + 480));
											if ((int)result >= 0)
											{
												result = sub_14030F290(a1, a2, (unsigned int*)(a3 + 496));
												if ((int)result >= 0)
												{
													v29 = *(_QWORD*)(a3 + 520);
													v30 = v29 + a2;
													if (v29 + a2 >= *a1)
													{
														v31 = *(unsigned int*)(a3 + 512);
														if (a2 + v29 + 4 * v31 <= a1[1])
														{
															v32 = 0i64;
															if ((_DWORD)v31)
																v32 = v30;
															*(_QWORD*)(a3 + 520) = v32;
															v33 = *(_QWORD*)(a3 + 536);
															v34 = v33 + a2;
															if (v33 + a2 >= *a1)
															{
																v35 = *(unsigned int*)(a3 + 528);
																if (a2 + v33 + 2 * v35 <= a1[1])
																{
																	v36 = 0i64;
																	if ((_DWORD)v35)
																		v36 = v34;
																	*(_QWORD*)(a3 + 536) = v36;
																	result = sub_14030B0C0(a1, a2, (unsigned int*)(a3 + 544));
																	if ((int)result < 0)
																		return result;
																	result = sub_14030F340(v38, v37, (int*)(a3 + 592));
																	if ((int)result < 0)
																		return result;
																	v39 = *(_QWORD*)(a3 + 616);
																	v40 = v39 + a2;
																	if (v39 + a2 >= *a1)
																	{
																		v41 = *(unsigned int*)(a3 + 608);
																		if (a2 + v39 + 4 * v41 <= a1[1])
																		{
																			v42 = 0i64;
																			if ((_DWORD)v41)
																				v42 = v40;
																			*(_QWORD*)(a3 + 616) = v42;
																			v43 = *(_QWORD*)(a3 + 632);
																			v44 = v43 + a2;
																			if (v43 + a2 >= *a1)
																			{
																				v45 = *(unsigned int*)(a3 + 624);
																				if (a2 + v43 + 2 * v45 <= a1[1])
																				{
																					v46 = 0i64;
																					if ((_DWORD)v45)
																						v46 = v44;
																					*(_QWORD*)(a3 + 632) = v46;
																					v47 = *(_QWORD*)(a3 + 648);
																					v48 = v47 + a2;
																					if (v47 + a2 >= *a1)
																					{
																						v49 = *(unsigned int*)(a3 + 640);
																						if (a2 + v47 + 8 * v49 <= a1[1])
																						{
																							v50 = 0i64;
																							if ((_DWORD)v49)
																								v50 = v48;
																							*(_QWORD*)(a3 + 648) = v50;
																							v51 = *(_QWORD*)(a3 + 664);
																							v52 = v51 + a2;
																							if (v51 + a2 >= *a1)
																							{
																								v53 = *(unsigned int*)(a3 + 656);
																								if (a2 + v51 + 4 * v53 <= a1[1])
																								{
																									v54 = 0i64;
																									if ((_DWORD)v53)
																										v54 = v52;
																									*(_QWORD*)(a3 + 664) = v54;
																									v55 = *(_QWORD*)(a3 + 672);
																									v56 = v55 + a2;
																									if (v55 + a2 >= *a1 && a2 + v55 + 2 * v53 <= a1[1])
																									{
																										v57 = 0i64;
																										if ((_DWORD)v53)
																											v57 = v56;
																										*(_QWORD*)(a3 + 672) = v57;
																										result = sub_1402D4B30(a1, a2, (unsigned int*)(a3 + 680));
																										if ((int)result < 0)
																											return result;
																										result = sub_14030F3F0(a1, a2, (unsigned int*)(a3 + 696));
																										if ((int)result < 0)
																											return result;
																										v58 = *(_QWORD*)(a3 + 720);
																										v59 = v58 + a2;
																										if (v58 + a2 >= *a1)
																										{
																											v60 = *(unsigned int*)(a3 + 712);
																											if (a2 + v58 + 8 * v60 <= a1[1])
																											{
																												v61 = 0i64;
																												if ((_DWORD)v60)
																													v61 = v59;
																												*(_QWORD*)(a3 + 720) = v61;
																												v62 = *(_QWORD*)(a3 + 736);
																												v63 = v62 + a2;
																												if (v62 + a2 >= *a1)
																												{
																													v64 = *(unsigned int*)(a3 + 728);
																													if (a2 + v62 + 2 * v64 <= a1[1])
																													{
																														v65 = 0i64;
																														if ((_DWORD)v64)
																															v65 = v63;
																														*(_QWORD*)(a3 + 736) = v65;
																														v66 = *(_QWORD*)(a3 + 752);
																														v67 = v66 + a2;
																														if (v66 + a2 >= *a1)
																														{
																															v68 = *(unsigned int*)(a3 + 744);
																															if (a2 + v66 + 8 * v68 <= a1[1])
																															{
																																v69 = 0i64;
																																if ((_DWORD)v68)
																																	v69 = v67;
																																*(_QWORD*)(a3 + 752) = v69;
																																v70 = *(_QWORD*)(a3 + 768);
																																v71 = v70 + a2;
																																if (v70 + a2 >= *a1)
																																{
																																	v72 = *(unsigned int*)(a3 + 760);
																																	if (a2 + 160 * v72 + v70 <= a1[1])
																																	{
																																		v73 = 0i64;
																																		if ((_DWORD)v72)
																																			v73 = v71;
																																		v74 = 0;
																																		v75 = v73
																																			+ ((160 * v72 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
																																		*(_QWORD*)(a3 + 768) = v73;
																																		if ((_DWORD)v72)
																																		{
																																			do
																																			{
																																				result = sub_14030C6A0(
																																					a1,
																																					v75,
																																					a1[2]
																																					+ *(_QWORD*)(a3 + 768)
																																					+ 160i64 * v74);
																																				if ((int)result < 0)
																																					return result;
																																			} while (++v74 < *(_DWORD*)(a3 + 760));
																																		}
																																		result = sub_14030F4E0(
																																			a1,
																																			a2,
																																			(unsigned int*)(a3 + 776));
																																		if ((int)result < 0)
																																			return result;
																																		v76 = *(_QWORD*)(a3 + 800);
																																		v77 = v76 + a2;
																																		if (v76 + a2 >= *a1)
																																		{
																																			v78 = *(_DWORD*)(a3 + 792);
																																			v79 = 400i64 * v78;
																																			if (a2 + v79 + v76 <= a1[1])
																																			{
																																				v80 = 0i64;
																																				v81 = 0;
																																				if (v78)
																																					v80 = v77;
																																				*(_QWORD*)(a3 + 800) = v80;
																																				v82 = v80
																																					+ ((v79 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
																																				if (v78)
																																				{
																																					do
																																					{
																																						result = sub_14030C7D0(
																																							a1,
																																							v82,
																																							(unsigned int*)(a1[2] + *(_QWORD*)(a3 + 800) + 400i64 * v81));
																																						if ((int)result < 0)
																																							return result;
																																					} while (++v81 < *(_DWORD*)(a3 + 792));
																																				}
																																				v83 = *(_QWORD*)(a3 + 816);
																																				v84 = v83 + a2;
																																				if (v83 + a2 >= *a1)
																																				{
																																					v85 = *(_DWORD*)(a3 + 808);
																																					v86 = 56i64 * v85;
																																					if (a2 + v86 + v83 <= a1[1])
																																					{
																																						v87 = 0i64;
																																						v88 = 0;
																																						if (v85)
																																							v87 = v84;
																																						*(_QWORD*)(a3 + 816) = v87;
																																						v89 = v87
																																							+ ((v86 + 15) & 0xFFFFFFFFFFFFFFF0ui64);
																																						if (v85)
																																						{
																																							do
																																							{
																																								result = sub_14030ED20(
																																									a1,
																																									v89,
																																									(unsigned int*)(a1[2] + *(_QWORD*)(a3 + 816) + 56i64 * v88 + 16));
																																								if ((int)result < 0)
																																									return result;
																																							} while (++v88 < *(_DWORD*)(a3 + 808));
																																						}
																																						result = sub_1402CA420(
																																							a1,
																																							a2,
																																							(unsigned int*)(a3 + 824));
																																						if ((int)result < 0)
																																							return result;
																																						result = sub_1402CA3C0(
																																							a1,
																																							v90,
																																							(unsigned int*)(a3 + 848));
																																						if ((int)result < 0)
																																							return result;
																																						result = sub_1402CA3C0(
																																							a1,
																																							v91,
																																							(unsigned int*)(a3 + 880));
																																						if ((int)result < 0)
																																							return result;
																																						result = sub_14030F5B0(
																																							a1,
																																							v92,
																																							(int*)(a3 + 1168));
																																						if ((int)result < 0)
																																							return result;
																																						v93 = *(_QWORD*)(a3 + 1192);
																																						v94 = v93 + a2;
																																						if (v93 + a2 >= *a1)
																																						{
																																							v95 = *(unsigned int*)(a3 + 1184);
																																							if (a2 + v93 + 4 * v95 <= a1[1])
																																							{
																																								v96 = 0i64;
																																								if ((_DWORD)v95)
																																									v96 = v94;
																																								*(_QWORD*)(a3 + 1192) = v96;
																																								result = sub_14030B340(
																																									a1,
																																									a2,
																																									(unsigned int*)(a3 + 1296));
																																								if ((int)result < 0)
																																									return result;
																																								result = sub_14030F660(
																																									v98,
																																									v97,
																																									(int*)(a3 + 1344));
																																								if ((int)result < 0)
																																									return result;
																																								result = sub_1402CA420(
																																									a1,
																																									a2,
																																									(unsigned int*)(a3 + 1360));
																																								if ((int)result < 0)
																																									return result;
																																								result = sub_14030F710(
																																									a1,
																																									v99,
																																									(unsigned int*)(a3 + 1376));
																																								if ((int)result < 0)
																																									return result;
																																								result = sub_14030EE60(
																																									a1,
																																									a2,
																																									(int*)(a3 + 1392));
																																								if ((int)result < 0)
																																									return result;
																																								result = sub_14030F7C0(
																																									a1,
																																									a2,
																																									(int*)(a3 + 1416));
																																								if ((int)result < 0)
																																									return result;
																																								v100 = *(_QWORD*)(a3 + 1440);
																																								if (v100 + a2 >= *a1
																																									&& a2
																																									+ v100
																																									+ 76
																																									* (unsigned __int64)*(unsigned int*)(a3 + 1432) <= a1[1])
																																								{
																																									if (*(_DWORD*)(a3 + 1432))
																																										v11 = v100 + a2;
																																									*(_QWORD*)(a3 + 1440) = v11;
																																									result = sub_1402CA420(
																																										a1,
																																										a2,
																																										(unsigned int*)(a3 + 1448));
																																									if ((int)result >= 0)
																																									{
																																										result = sub_14030EB90(
																																											a1,
																																											v101,
																																											(unsigned int*)(a3 + 1472));
																																										if ((int)result >= 0)
																																											return 0i64;
																																									}
																																									return result;
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
																				}
																			}
																		}
																	}
																}
															}
														}
													}
													return 2147500037i64;
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
		}
	}
	return result;
}
// 14030CB66: variable 'v14' is possibly undefined
// 14030CB73: variable 'v15' is possibly undefined
// 14030CBA6: variable 'v19' is possibly undefined
// 14030CBBA: variable 'v18' is possibly undefined
// 14030CBE7: variable 'v23' is possibly undefined
// 14030CC00: variable 'v22' is possibly undefined
// 14030CC31: variable 'v24' is possibly undefined
// 14030CC62: variable 'v25' is possibly undefined
// 14030CC75: variable 'v26' is possibly undefined
// 14030CC88: variable 'v27' is possibly undefined
// 14030CCB1: variable 'v28' is possibly undefined
// 14030CD73: variable 'v38' is possibly undefined
// 14030CD73: variable 'v37' is possibly undefined
// 14030D0A8: variable 'v82' is possibly undefined
// 14030D139: variable 'v89' is possibly undefined
// 14030D174: variable 'v90' is possibly undefined
// 14030D18B: variable 'v91' is possibly undefined
// 14030D1A2: variable 'v92' is possibly undefined
// 14030D20B: variable 'v98' is possibly undefined
// 14030D20B: variable 'v97' is possibly undefined
// 14030D23C: variable 'v99' is possibly undefined
// 14030D2E1: variable 'v101' is possibly undefined

