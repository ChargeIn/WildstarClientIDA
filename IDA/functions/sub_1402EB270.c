//----- (00000001402EB270) ----------------------------------------------------
__int64 __fastcall sub_1402EB270(_QWORD* a1, int a2)
{
	unsigned int v3; // esi
	__int64 result; // rax
	__int64 v5; // rax
	__int64* v6; // rcx
	__int64 v7; // rax
	__int64 v8; // rax
	int v9; // eax
	unsigned int v10; // eax
	unsigned __int64 v11; // rbx
	__int64 v12; // r15
	__int64 v13; // rax
	unsigned __int64 v14; // kr00_8
	int* v15; // rax
	unsigned int v16; // ecx
	__int64 v17; // r14
	int* v18; // rdx
	int v19; // r13d
	int v20; // r12d
	unsigned int* v21; // rbx
	__int64 v22; // r14
	int v23; // ecx
	__int64 v24; // rax
	int* v25; // rax
	__int64 v26; // r8
	int v27; // ebx
	unsigned int* v28; // rsi
	_DWORD* v29; // rax
	int v30; // r8d
	__int64 v31; // rdx
	unsigned int v32; // esi
	unsigned int i; // ebx
	__int64 v34; // rax
	unsigned int v35; // ecx
	unsigned int v36; // eax
	__int64 v37; // rax
	int* v38; // rax
	unsigned int v39; // r8d
	unsigned int j; // edx
	__int64 v41; // rcx
	unsigned int k; // ebx
	_DWORD* v43; // rax
	int* v44; // rax
	unsigned int v45; // r14d
	__int64 v46; // rax
	__int16 m; // r15
	unsigned int v48; // eax
	unsigned int v49; // esi
	unsigned int v50; // ecx
	int* v51; // rdx
	__int64 v52; // rax
	__int64 v53; // rax
	int* v54; // rbx
	int* v55; // rcx
	int v56; // ebx
	__int64 v57; // rax
	int* v58; // rax
	int v59; // edx
	int* n; // rcx
	int v61; // edx
	__int64 v62; // rax
	int* v63; // rax
	int* v64; // rcx
	__int64 v65; // r9
	__int64 v66; // rax
	unsigned int v67; // r8d
	__int64 v68; // rdx
	__int64 v69; // rcx
	__int64 ii; // rcx
	__int64 jj; // rcx
	__int64 v72; // rcx
	char v73[16]; // [rsp+50h] [rbp-29h] BYREF
	char v74[8]; // [rsp+60h] [rbp-19h] BYREF
	int* v75; // [rsp+68h] [rbp-11h]
	unsigned __int64 v76; // [rsp+70h] [rbp-9h]
	int v77; // [rsp+80h] [rbp+7h] BYREF
	int* v78; // [rsp+88h] [rbp+Fh]
	void(__fastcall * v79)(__int64); // [rsp+90h] [rbp+17h]
	__int64 v80; // [rsp+98h] [rbp+1Fh]
	int* v81; // [rsp+E0h] [rbp+67h]
	unsigned int v82; // [rsp+E8h] [rbp+6Fh] BYREF

	v82 = a2;
	v3 = 0;
	*(_DWORD*)a1 = 0;
	result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 144i64))(
		qword_140C65670,
		L"Shaders\\ModelVS.sho",
		a1 + 255);
	if ((int)result >= 0)
	{
		result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 152i64))(
			qword_140C65670,
			L"Shaders\\ModelPS.sho",
			a1 + 256);
		if ((int)result >= 0)
		{
			result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 144i64))(
				qword_140C65670,
				L"Shaders\\M3CloudVS.sho",
				a1 + 257);
			if ((int)result >= 0)
			{
				result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 152i64))(
					qword_140C65670,
					L"Shaders\\M3CloudPS.sho",
					a1 + 258);
				if ((int)result >= 0)
				{
					result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 144i64))(
						qword_140C65670,
						L"Shaders\\SimpleVS.sho",
						a1 + 259);
					if ((int)result >= 0)
					{
						result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670 + 152i64))(
							qword_140C65670,
							L"Shaders\\SimplePS.sho",
							a1 + 260);
						if ((int)result >= 0)
						{
							result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670
								+ 152i64))(
									qword_140C65670,
									L"shaders\\ParticlePS.sho",
									a1 + 262);
							if ((int)result >= 0)
							{
								result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670
									+ 144i64))(
										qword_140C65670,
										L"Shaders\\ParticleGPUVS.sho",
										a1 + 261);
								if ((int)result >= 0)
								{
									result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670
										+ 144i64))(
											qword_140C65670,
											L"shaders\\RibbonVS.sho",
											a1 + 263);
									if ((int)result >= 0)
									{
										result = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD*))(*(_QWORD*)qword_140C65670
											+ 152i64))(
												qword_140C65670,
												L"shaders\\RibbonPS.sho",
												a1 + 264);
										if ((int)result >= 0)
										{
											result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
												qword_140C65670,
												2i64,
												2i64,
												0i64,
												0,
												1,
												0,
												21,
												0,
												a1 + 265);
											if ((int)result >= 0)
											{
												result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
													qword_140C65670,
													1i64,
													1i64,
													0i64,
													0,
													1,
													0,
													21,
													0,
													a1 + 266);
												if ((int)result >= 0)
												{
													result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
														qword_140C65670,
														1i64,
														1i64,
														0i64,
														0,
														1,
														0,
														21,
														0,
														a1 + 267);
													if ((int)result >= 0)
													{
														result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
															qword_140C65670,
															1i64,
															1i64,
															0i64,
															0,
															1,
															0,
															21,
															0,
															a1 + 268);
														if ((int)result >= 0)
														{
															result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																qword_140C65670,
																1i64,
																1i64,
																0i64,
																0,
																1,
																0,
																21,
																0,
																a1 + 269);
															if ((int)result >= 0)
															{
																result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																	qword_140C65670,
																	1i64,
																	1i64,
																	0i64,
																	0,
																	1,
																	0,
																	21,
																	0,
																	a1 + 270);
																if ((int)result >= 0)
																{
																	result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																		qword_140C65670,
																		1i64,
																		1i64,
																		0i64,
																		0,
																		1,
																		0,
																		21,
																		0,
																		a1 + 271);
																	if ((int)result >= 0)
																	{
																		result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																			qword_140C65670,
																			1i64,
																			1i64,
																			0i64,
																			0,
																			1,
																			0,
																			21,
																			0,
																			a1 + 272);
																		if ((int)result >= 0)
																		{
																			result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, _DWORD, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																				qword_140C65670,
																				1i64,
																				1i64,
																				0i64,
																				0,
																				1,
																				0,
																				21,
																				0,
																				a1 + 273);
																			if ((int)result >= 0)
																			{
																				result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD, int, int, _DWORD, int, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																					qword_140C65670,
																					1i64,
																					1i64,
																					0i64,
																					17,
																					1,
																					0,
																					21,
																					0,
																					a1 + 274);
																				if ((int)result >= 0)
																				{
																					result = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, _DWORD, _QWORD*))(*(_QWORD*)qword_140C65670 + 88i64))(
																						qword_140C65670,
																						256i64,
																						256i64,
																						1i64,
																						19,
																						1,
																						0,
																						0,
																						0,
																						a1 + 275);
																					if ((int)result >= 0)
																					{
																						v5 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65670 + 712i64))(qword_140C65670);
																						result = (*(__int64(__fastcall**)(__int64, _QWORD, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 56i64))(
																							qword_140C65670,
																							(unsigned int)(4 * *(_DWORD*)(v5 + 48)),
																							1i64,
																							a1 + 277);
																						if ((int)result >= 0)
																						{
																							result = (*(__int64(__fastcall**)(__int64, __int64, __int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 56i64))(
																								qword_140C65670,
																								16i64,
																								1i64,
																								a1 + 279);
																							if ((int)result >= 0)
																							{
																								sub_1402EBF40((__int64)a1);
																								result = (*(__int64(__fastcall**)(__int64, _QWORD*))(*(_QWORD*)qword_140C65670 + 192i64))(
																									qword_140C65670,
																									a1 + 278);
																								if ((int)result >= 0)
																								{
																									v6 = (__int64*)a1[278];
																									v79 = sub_1402EBF40;
																									v7 = *v6;
																									v77 = 0;
																									v78 = (int*)a1;
																									v80 = 0i64;
																									(*(void(__fastcall**)(__int64*, _QWORD, int*))(v7 + 24))(
																										v6,
																										0i64,
																										&v77);
																									sub_1407E4830((int*)a1 + 28, 0i64, 0x630ui64);
																									*((_DWORD*)a1 + 28) = 1297040460;
																									*((_DWORD*)a1 + 29) = 100;
																									sub_1402ECF40((unsigned int*)a1 + 32);
																									*(_WORD*)a1[17] = 150;
																									sub_1402ED080((unsigned int*)a1 + 88);
																									*(_WORD*)(a1[45] + 2i64) = -1;
																									sub_1402ED1A0((unsigned int*)a1 + 124);
																									v8 = a1[63];
																									*(_WORD*)v8 = -1;
																									*(_WORD*)(v8 + 4) = -1;
																									*(_OWORD*)(v8 + 208) = xmmword_140C78390;
																									*(_OWORD*)(v8 + 224) = xmmword_140C783A0;
																									*(_OWORD*)(v8 + 240) = xmmword_140C783B0;
																									*(_OWORD*)(v8 + 256) = xmmword_140C783C0;
																									*(_OWORD*)(v8 + 272) = xmmword_140C78390;
																									*(_OWORD*)(v8 + 288) = xmmword_140C783A0;
																									*(_OWORD*)(v8 + 304) = xmmword_140C783B0;
																									*(_OWORD*)(v8 + 320) = xmmword_140C783C0;
																									sub_1402ED680((unsigned int*)a1 + 320);
																									if (*((_DWORD*)a1 + 324))
																									{
																										sub_14018B900(a1[163], 0);
																										*((_DWORD*)a1 + 324) = 0;
																										a1[163] = 0i64;
																									}
																									sub_1402ED3E0((unsigned int*)a1 + 176);
																									*((_DWORD*)a1 + 426) = 0;
																									*((_DWORD*)a1 + 427) = 1065353216;
																									a1[214] = 1065353216i64;
																									a1[215] = 0i64;
																									a1[225] = 1i64;
																									*((_DWORD*)a1 + 452) = 0;
																									if ((unsigned int)sub_14021A6F0())
																									{
																										v9 = sub_14021A6F0();
																										*((_DWORD*)a1 + 560) = *(_DWORD*)sub_14021A7A0(v9 - 1) + 1;
																									}
																									else
																									{
																										*((_DWORD*)a1 + 560) = 0;
																									}
																									v10 = sub_1402184F0();
																									v11 = v10;
																									v12 = v10;
																									v82 = v10;
																									v14 = v10;
																									v13 = 4i64 * v10;
																									if (!is_mul_ok(v14, 4ui64))
																										v13 = -1i64;
																									v15 = sub_14018B280(v13, 8u);
																									v16 = 0;
																									v17 = (__int64)v15;
																									v81 = v15;
																									if ((_DWORD)v11)
																									{
																										v18 = v15;
																										do
																											*v18++ = v16++;
																										while (v16 < (unsigned int)v11);
																									}
																									sub_1401C3280(
																										(__int64(__fastcall*)(_QWORD, _QWORD, __int64))sub_1402EC9D0,
																										(unsigned int*)v15,
																										v11,
																										0i64);
																									v19 = -1;
																									v20 = -1;
																									if ((_DWORD)v11)
																									{
																										v21 = (unsigned int*)v17;
																										v22 = v12;
																										do
																										{
																											v23 = *(_DWORD*)(sub_1402185A0(*v21) + 4);
																											if (v20 != v23)
																											{
																												v20 = v23;
																												++v3;
																											}
																											++v21;
																											--v22;
																										} while (v22);
																										v17 = (__int64)v81;
																									}
																									*((_DWORD*)a1 + 561) = v3;
																									v24 = 196i64 * v3;
																									if (!is_mul_ok(v3, 0xC4ui64))
																										v24 = -1i64;
																									v25 = sub_14018B280(v24, 0);
																									v26 = *((unsigned int*)a1 + 561);
																									a1[281] = v25;
																									sub_1407E4830(v25, 255i64, 196 * v26);
																									v27 = 0;
																									if (v82)
																									{
																										v28 = (unsigned int*)v17;
																										do
																										{
																											v29 = (_DWORD*)sub_1402185A0(*v28);
																											v30 = v29[1];
																											if (v19 != v30)
																											{
																												v19 = v29[1];
																												++v27;
																											}
																											++v28;
																											v31 = a1[281] + 196i64 * (unsigned int)(v27 - 1);
																											*(_DWORD*)v31 = v30;
																											*(_QWORD*)(v31 + 4) = 0i64;
																											*(_DWORD*)(v31 + 4i64 * (int)v29[2] + 8) = v29[3];
																											--v12;
																										} while (v12);
																									}
																									sub_14018B900(v17, 0);
																									a1[282] = 0i64;
																									v32 = sub_140216730();
																									for (i = 0; i < v32; ++i)
																									{
																										v34 = sub_1402167E0(i);
																										v35 = *(_DWORD*)(v34 + 4);
																										if (*((_DWORD*)a1 + 564) <= v35)
																											*((_DWORD*)a1 + 564) = v35 + 1;
																										v36 = *(_DWORD*)(v34 + 8);
																										if (*((_DWORD*)a1 + 565) <= v36)
																											*((_DWORD*)a1 + 565) = v36 + 1;
																									}
																									v37 = 4i64
																										* (unsigned int)(*((_DWORD*)a1 + 564) * *((_DWORD*)a1 + 565));
																									if (!is_mul_ok(
																										(unsigned int)(*((_DWORD*)a1 + 564) * *((_DWORD*)a1 + 565)),
																										4ui64))
																										v37 = -1i64;
																									v38 = sub_14018B280(v37, 0);
																									v39 = 0;
																									for (a1[283] = v38; v39 < *((_DWORD*)a1 + 564); ++v39)
																									{
																										for (j = 0;
																											j < *((_DWORD*)a1 + 565);
																											*(_DWORD*)(a1[283] + 4 * v41) = v39)
																										{
																											v41 = j + v39 * *((_DWORD*)a1 + 565);
																											++j;
																										}
																									}
																									for (k = 0;
																										k < v32;
																										*(_DWORD*)(a1[283]
																											+ 4i64
																											* (unsigned int)(v43[2]
																												+ *((_DWORD*)a1 + 565) * v43[1])) = v43[3])
																									{
																										v43 = (_DWORD*)sub_1402167E0(k++);
																									}
																									v76 = 0i64;
																									v75 = sub_14018B280(40i64, 0);
																									*(_BYTE*)v75 = 0;
																									*((_QWORD*)v75 + 1) = 0i64;
																									*((_QWORD*)v75 + 2) = v75;
																									*((_QWORD*)v75 + 3) = v75;
																									v44 = sub_14018B280(40i64, 0);
																									v79 = 0i64;
																									v78 = v44;
																									*(_BYTE*)v44 = 0;
																									*((_QWORD*)v78 + 1) = 0i64;
																									v45 = 0;
																									*((_QWORD*)v78 + 2) = v78;
																									for (*((_QWORD*)v78 + 3) = v78; v45 < *((_DWORD*)a1 + 560); ++v45)
																									{
																										v46 = sub_14021A740(v45);
																										for (m = 1; v46; ++m)
																										{
																											v48 = *(unsigned __int16*)(v46 + 16);
																											v49 = v48;
																											v50 = v45 | (v48 << 16);
																											v82 = v50;
																											if (!(_WORD)v48 || (_WORD)v48 == 150)
																												break;
																											v51 = v78;
																											v52 = *((_QWORD*)v78 + 1);
																											if (v52)
																											{
																												do
																												{
																													if (*(_DWORD*)(v52 + 32) < v50)
																													{
																														v52 = *(_QWORD*)(v52 + 24);
																													}
																													else
																													{
																														v51 = (int*)v52;
																														v52 = *(_QWORD*)(v52 + 16);
																													}
																												} while (v52);
																												if (v51 != v78 && v50 >= v51[8])
																													break;
																											}
																											sub_1400293C0((__int64)&v77, (__int64)v73, (int*)&v82);
																											v53 = *((_QWORD*)v75 + 1);
																											v54 = v75;
																											if (!v53)
																												goto LABEL_84;
																											do
																											{
																												v54 = (int*)v53;
																												if (v49 >= *(_DWORD*)(v53 + 32))
																													v53 = *(_QWORD*)(v53 + 24);
																												else
																													v53 = *(_QWORD*)(v53 + 16);
																											} while (v53);
																											if (v54 == v75 || v49 < v54[8])
																											{
																											LABEL_84:
																												v55 = sub_14018B280(40i64, 0);
																												if (v55 != (int*)-32i64)
																												{
																													v55[8] = v49;
																													*((_WORD*)v55 + 18) = v45;
																													*((_WORD*)v55 + 19) = m;
																												}
																												*((_QWORD*)v54 + 2) = v55;
																												if (v54 == v75)
																												{
																													*((_QWORD*)v75 + 1) = v55;
																													*((_QWORD*)v75 + 3) = v55;
																												}
																												else if (v54 == *((int**)v75 + 2))
																												{
																													*((_QWORD*)v75 + 2) = v55;
																												}
																											}
																											else
																											{
																												v55 = sub_14018B280(40i64, 0);
																												if (v55 != (int*)-32i64)
																												{
																													v55[8] = v49;
																													*((_WORD*)v55 + 18) = v45;
																													*((_WORD*)v55 + 19) = m;
																												}
																												*((_QWORD*)v54 + 3) = v55;
																												if (v54 == *((int**)v75 + 3))
																													*((_QWORD*)v75 + 3) = v55;
																											}
																											*((_QWORD*)v55 + 1) = v54;
																											*((_QWORD*)v55 + 2) = 0i64;
																											*((_QWORD*)v55 + 3) = 0i64;
																											sub_1400081C0((__int64)v55, (_QWORD*)v75 + 1);
																											++v76;
																											v46 = sub_14021A740(v49);
																										}
																									}
																									v56 = v76;
																									v57 = 4 * v76;
																									if (!is_mul_ok(v76, 4ui64))
																										v57 = -1i64;
																									v58 = sub_14018B280(v57, 0);
																									if (v58)
																									{
																										v59 = v56 - 1;
																										for (n = v58; v59 >= 0; ++n)
																										{
																											--v59;
																											*n = 16711680;
																										}
																									}
																									else
																									{
																										v58 = 0i64;
																									}
																									v61 = *((_DWORD*)a1 + 560);
																									a1[284] = v58;
																									v62 = 8i64 * (unsigned int)(v61 + 1);
																									if (!is_mul_ok((unsigned int)(v61 + 1), 8ui64))
																										v62 = -1i64;
																									v63 = sub_14018B280(v62, 0);
																									v64 = v75;
																									v65 = a1[284];
																									a1[285] = v63;
																									v66 = *((_QWORD*)v64 + 2);
																									v67 = 0;
																									if ((int*)v66 != v64)
																									{
																										do
																										{
																											for (;
																												v67 <= *(_DWORD*)(v66 + 32);
																												*(_QWORD*)(a1[285] + 8 * v68) = v65)
																											{
																												v68 = v67++;
																											}
																											v65 += 4i64;
																											*(_WORD*)(v65 - 4) = *(_WORD*)(v66 + 36);
																											*(_WORD*)(v65 - 2) = *(_WORD*)(v66 + 38);
																											v69 = *(_QWORD*)(v66 + 24);
																											if (v69)
																											{
																												v66 = *(_QWORD*)(v66 + 24);
																												for (ii = *(_QWORD*)(v69 + 16); ii; ii = *(_QWORD*)(ii + 16))
																													v66 = ii;
																											}
																											else
																											{
																												for (jj = *(_QWORD*)(v66 + 8);
																													v66 == *(_QWORD*)(jj + 24);
																													jj = *(_QWORD*)(jj + 8))
																												{
																													v66 = jj;
																												}
																												if (*(_QWORD*)(v66 + 24) != jj)
																													v66 = jj;
																											}
																										} while ((int*)v66 != v75);
																									}
																									for (; v67 <= *((_DWORD*)a1 + 560); *(_QWORD*)(a1[285] + 8 * v72) = v65)
																										v72 = v67++;
																									sub_140008410((__int64)&v77);
																									sub_14018B900((__int64)v78, 0);
																									sub_140008410((__int64)v74);
																									sub_14018B900((__int64)v75, 0);
																									*((_DWORD*)a1 + 1) = 0;
																									return 0i64;
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
// 140AF10E0: using guessed type wchar_t aShadersModelvs[20];
// 140AF1108: using guessed type wchar_t aShadersRibbonp[21];
// 140AF1138: using guessed type wchar_t aShadersM3cloud[22];
// 140AF1168: using guessed type wchar_t aShadersModelps[20];
// 140AF1190: using guessed type wchar_t aShadersSimplev_1[21];
// 140AF11C0: using guessed type wchar_t aShadersM3cloud_0[22];
// 140AF11F0: using guessed type wchar_t aShadersParticl[23];
// 140AF1220: using guessed type wchar_t aShadersSimplep_6[21];
// 140AF1250: using guessed type wchar_t aShadersRibbonv[21];
// 140AF1280: using guessed type wchar_t aShadersParticl_0[26];
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C78390: using guessed type __int128 xmmword_140C78390;
// 140C783A0: using guessed type __int128 xmmword_140C783A0;
// 140C783B0: using guessed type __int128 xmmword_140C783B0;
// 140C783C0: using guessed type __int128 xmmword_140C783C0;
// 1402EB270: using guessed type char var_80[16];
// 1402EB270: using guessed type char var_70[8];

