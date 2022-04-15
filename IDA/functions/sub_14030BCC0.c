#include "../winhttp.h"

//----- (000000014030BCC0) ----------------------------------------------------
__int64 __fastcall sub_14030BCC0(unsigned __int64* a1, __int64 a2, __int64 a3)
{
	__int64 result; // rax
	__int64 v7; // rdx
	__int64 v8; // rdx
	__int64 v9; // rdx
	__int64 v10; // rdx
	__int64 v11; // rdx
	__int64 v12; // rdx
	__int64 v13; // rdx
	__int64 v14; // rdx
	__int64 v15; // rdx
	__int64 v16; // rdx
	__int64 v17; // rdx
	__int64 v18; // rdx
	__int64 v19; // rdx
	__int64 v20; // rdx
	__int64 v21; // rdx
	__int64 v22; // rdx
	__int64 v23; // rdx
	__int64 v24; // rdx
	__int64 v25; // rdx
	__int64 v26; // r15
	unsigned int v27; // r14d
	unsigned int v28; // ebp
	unsigned int v29; // ebp
	unsigned int v30; // ebp
	unsigned int v31; // ebp
	unsigned int v32; // ebp
	unsigned int v33; // ebp
	unsigned int v34; // ebp
	unsigned int v35; // ebp
	unsigned int v36; // ebp
	unsigned int v37; // ebp
	unsigned int v38; // ebp
	unsigned int v39; // ebp
	__int64 v40; // rdx
	unsigned int v41; // ebp
	unsigned int v42; // ebp
	unsigned int v43; // ebp
	unsigned int v44; // ebp
	unsigned int v45; // ebp
	unsigned int v46; // ebp
	unsigned int v47; // ebp
	unsigned int v48; // ebp
	unsigned int v49; // ebp
	unsigned int v50; // ebp
	__int64 v51; // rax
	__int64 v52; // rdx

	result = sub_14030BA20(a1, a2, (_QWORD*)(a3 + 8));
	if ((int)result >= 0)
	{
		result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 104));
		if ((int)result >= 0)
		{
			result = sub_14030ED20(a1, v7, (unsigned int*)(a3 + 128));
			if ((int)result >= 0)
			{
				result = sub_1402CA3C0(a1, v8, (unsigned int*)(a3 + 152));
				if ((int)result >= 0)
				{
					result = sub_1402CA3C0(a1, v9, (unsigned int*)(a3 + 176));
					if ((int)result >= 0)
					{
						result = sub_14030ED20(a1, v10, (unsigned int*)(a3 + 200));
						if ((int)result >= 0)
						{
							result = sub_14030ED20(a1, v11, (unsigned int*)(a3 + 224));
							if ((int)result >= 0)
							{
								result = sub_1402CA3C0(a1, v12, (unsigned int*)(a3 + 248));
								if ((int)result >= 0)
								{
									result = sub_1402CA3C0(a1, v13, (unsigned int*)(a3 + 272));
									if ((int)result >= 0)
									{
										result = sub_14030EBF0(a1, v14, (unsigned int*)(a3 + 296));
										if ((int)result >= 0)
										{
											result = sub_14030EBF0(a1, a2, (unsigned int*)(a3 + 320));
											if ((int)result >= 0)
											{
												result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 344));
												if ((int)result >= 0)
												{
													result = sub_14030ED20(a1, v15, (unsigned int*)(a3 + 368));
													if ((int)result >= 0)
													{
														result = sub_14030EBF0(a1, v16, (unsigned int*)(a3 + 392));
														if ((int)result >= 0)
														{
															result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 416));
															if ((int)result >= 0)
															{
																result = sub_14030ED20(a1, v17, (unsigned int*)(a3 + 440));
																if ((int)result >= 0)
																{
																	result = sub_14030ED20(a1, v18, (unsigned int*)(a3 + 464));
																	if ((int)result >= 0)
																	{
																		result = sub_14030ED20(a1, v19, (unsigned int*)(a3 + 488));
																		if ((int)result >= 0)
																		{
																			result = sub_14030ED20(a1, v20, (unsigned int*)(a3 + 512));
																			if ((int)result >= 0)
																			{
																				result = sub_14030ED20(a1, v21, (unsigned int*)(a3 + 536));
																				if ((int)result >= 0)
																				{
																					result = sub_14030ED20(a1, v22, (unsigned int*)(a3 + 560));
																					if ((int)result >= 0)
																					{
																						result = sub_14030ED20(a1, v23, (unsigned int*)(a3 + 584));
																						if ((int)result >= 0)
																						{
																							result = sub_1402CA3C0(a1, v24, (unsigned int*)(a3 + 608));
																							if ((int)result >= 0)
																							{
																								result = sub_14030EB00(a1, v25, (unsigned int*)(a3 + 632));
																								if ((int)result >= 0)
																								{
																									v26 = 0i64;
																									v27 = 0;
																								LABEL_26:
																									v28 = 0;
																									while (1)
																									{
																										result = sub_1402CA3C0(
																											a1,
																											a2,
																											(unsigned int*)(a3 + 8 * (3 * (5i64 * v27 + v28) + 83)));
																										if ((int)result < 0)
																											break;
																										if (++v28 >= 5)
																										{
																											if (++v27 < 2)
																												goto LABEL_26;
																											v29 = 0;
																											while (1)
																											{
																												result = sub_14030EB90(
																													a1,
																													a2,
																													(unsigned int*)(a3 + 8 * (v29 + 2i64 * v29 + 113)));
																												if ((int)result < 0)
																													break;
																												if (++v29 >= 5)
																												{
																													v30 = 0;
																													while (1)
																													{
																														result = sub_14030EB90(
																															a1,
																															a2,
																															(unsigned int*)(a3 + 24 * (v30 + 43i64)));
																														if ((int)result < 0)
																															break;
																														if (++v30 >= 5)
																														{
																															v31 = 0;
																															while (1)
																															{
																																result = sub_14030EB90(
																																	a1,
																																	a2,
																																	(unsigned int*)(a3 + 24 * (v31 + 48i64)));
																																if ((int)result < 0)
																																	break;
																																if (++v31 >= 5)
																																{
																																	v32 = 0;
																																	while (1)
																																	{
																																		result = sub_14030ED20(
																																			a1,
																																			a2,
																																			(unsigned int*)(a3
																																				+ 8
																																				* (v32 + 2 * (v32 + 80i64))));
																																		if ((int)result < 0)
																																			break;
																																		if (++v32 >= 5)
																																		{
																																			v33 = 0;
																																			while (1)
																																			{
																																				result = sub_14030EB90(
																																					a1,
																																					a2,
																																					(unsigned int*)(a3
																																						+ 8 * (v33 + 2i64 * v33 + 175)));
																																				if ((int)result < 0)
																																					break;
																																				if (++v33 >= 5)
																																				{
																																					v34 = 0;
																																					while (1)
																																					{
																																						result = sub_14030ED20(
																																							a1,
																																							a2,
																																							(unsigned int*)(a3 + 8 * (v34 + 2i64 * v34 + 191)));
																																						if ((int)result < 0)
																																							break;
																																						if (++v34 >= 5)
																																						{
																																							v35 = 0;
																																							while (1)
																																							{
																																								result = sub_14030EB90(
																																									a1,
																																									a2,
																																									(unsigned int*)(a3 + 8 * (v35 + 2 * (v35 + 103i64))));
																																								if ((int)result < 0)
																																									break;
																																								if (++v35 >= 5)
																																								{
																																									v36 = 0;
																																									while (1)
																																									{
																																										result = sub_1402CA3C0(
																																											a1,
																																											a2,
																																											(unsigned int*)(a3 + 24 * (v36 + 74i64)));
																																										if ((int)result < 0)
																																											break;
																																										if (++v36 >= 5)
																																										{
																																											v37 = 0;
																																											while (1)
																																											{
																																												result = sub_14030EB90(
																																													a1,
																																													a2,
																																													(unsigned int*)(a3 + 24 * (v37 + 79i64)));
																																												if ((int)result < 0)
																																													break;
																																												if (++v37 >= 5)
																																												{
																																													v38 = 0;
																																													while (1)
																																													{
																																														result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 24 * (v38 + 90i64)));
																																														if ((int)result < 0)
																																															break;
																																														if (++v38 >= 5)
																																														{
																																															v39 = 0;
																																															while (1)
																																															{
																																																result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 24 * (v39 + 95i64)));
																																																if ((int)result < 0)
																																																	break;
																																																if (++v39 >= 5)
																																																{
																																																	result = sub_14030ED20(a1, v40, (unsigned int*)(a3 + 2400));
																																																	if ((int)result >= 0)
																																																	{
																																																		v41 = 0;
																																																		while (1)
																																																		{
																																																			result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 8 * (v41 + 2 * (v41 + 154i64))));
																																																			if ((int)result < 0)
																																																				break;
																																																			if (++v41 >= 5)
																																																			{
																																																				v42 = 0;
																																																				while (1)
																																																				{
																																																					result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * (v42 + 2i64 * v42 + 323)));
																																																					if ((int)result < 0)
																																																						break;
																																																					if (++v42 >= 5)
																																																					{
																																																						v43 = 0;
																																																						while (1)
																																																						{
																																																							result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 24 * (v43 + 113i64)));
																																																							if ((int)result < 0)
																																																								break;
																																																							if (++v43 >= 5)
																																																							{
																																																								v44 = 0;
																																																								while (1)
																																																								{
																																																									result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 24 * (v44 + 118i64)));
																																																									if ((int)result < 0)
																																																										break;
																																																									if (++v44 >= 5)
																																																									{
																																																										v45 = 0;
																																																										while (1)
																																																										{
																																																											result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 8 * (v45 + 2 * (v45 + 185i64))));
																																																											if ((int)result < 0)
																																																												break;
																																																											if (++v45 >= 5)
																																																											{
																																																												v46 = 0;
																																																												while (1)
																																																												{
																																																													result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * (v46 + 2i64 * v46 + 385)));
																																																													if ((int)result < 0)
																																																														break;
																																																													if (++v46 >= 5)
																																																													{
																																																														v47 = 0;
																																																														while (1)
																																																														{
																																																															result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 8 * (v47 + 2i64 * v47 + 401)));
																																																															if ((int)result < 0)
																																																																break;
																																																															if (++v47 >= 5)
																																																															{
																																																																v48 = 0;
																																																																while (1)
																																																																{
																																																																	result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 8 * (v48 + 2 * (v48 + 208i64))));
																																																																	if ((int)result < 0)
																																																																		break;
																																																																	if (++v48 >= 5)
																																																																	{
																																																																		v49 = 0;
																																																																		while (1)
																																																																		{
																																																																			result = sub_14030ED20(a1, a2, (unsigned int*)(a3 + 24 * (v49 + 144i64)));
																																																																			if ((int)result < 0)
																																																																				break;
																																																																			if (++v49 >= 5)
																																																																			{
																																																																				v50 = 0;
																																																																				while (1)
																																																																				{
																																																																					result = sub_14030EB90(a1, a2, (unsigned int*)(a3 + 24 * (v50 + 149i64)));
																																																																					if ((int)result < 0)
																																																																						break;
																																																																					if (++v50 >= 5)
																																																																					{
																																																																						v51 = *(_QWORD*)(a3 + 3776);
																																																																						if (v51 + a2 < *a1)
																																																																							return 2147500037i64;
																																																																						v52 = *(unsigned int*)(a3 + 3768);
																																																																						if (a2 + v51 + 2 * v52 > a1[1])
																																																																							return 2147500037i64;
																																																																						if ((_DWORD)v52)
																																																																							v26 = v51 + a2;
																																																																						result = 0i64;
																																																																						*(_QWORD*)(a3 + 3776) = v26;
																																																																						return result;
																																																																					}
																																																																				}
																																																																				return result;
																																																																			}
																																																																		}
																																																																		return result;
																																																																	}
																																																																}
																																																																return result;
																																																															}
																																																														}
																																																														return result;
																																																													}
																																																												}
																																																												return result;
																																																											}
																																																										}
																																																										return result;
																																																									}
																																																								}
																																																								return result;
																																																							}
																																																						}
																																																						return result;
																																																					}
																																																				}
																																																				return result;
																																																			}
																																																		}
																																																	}
																																																	return result;
																																																}
																																															}
																																															return result;
																																														}
																																													}
																																													return result;
																																												}
																																											}
																																											return result;
																																										}
																																									}
																																									return result;
																																								}
																																							}
																																							return result;
																																						}
																																					}
																																					return result;
																																				}
																																			}
																																			return result;
																																		}
																																	}
																																	return result;
																																}
																															}
																															return result;
																														}
																													}
																													return result;
																												}
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
	return result;
}
// 14030BD03: variable 'v7' is possibly undefined
// 14030BD1A: variable 'v8' is possibly undefined
// 14030BD31: variable 'v9' is possibly undefined
// 14030BD48: variable 'v10' is possibly undefined
// 14030BD5F: variable 'v11' is possibly undefined
// 14030BD76: variable 'v12' is possibly undefined
// 14030BD8D: variable 'v13' is possibly undefined
// 14030BDA4: variable 'v14' is possibly undefined
// 14030BDEF: variable 'v15' is possibly undefined
// 14030BE06: variable 'v16' is possibly undefined
// 14030BE37: variable 'v17' is possibly undefined
// 14030BE4E: variable 'v18' is possibly undefined
// 14030BE65: variable 'v19' is possibly undefined
// 14030BE7C: variable 'v20' is possibly undefined
// 14030BE93: variable 'v21' is possibly undefined
// 14030BEAA: variable 'v22' is possibly undefined
// 14030BEC1: variable 'v23' is possibly undefined
// 14030BED8: variable 'v24' is possibly undefined
// 14030BEEF: variable 'v25' is possibly undefined
// 14030C182: variable 'v40' is possibly undefined

