#include "../winhttp.h"

//----- (0000000140161F20) ----------------------------------------------------
__int64 __fastcall sub_140161F20(__int64 a1, signed int a2, int* a3, unsigned __int8 a4)
{
	__int64 v6; // rbx
	unsigned int v7; // eax
	int v8; // r12d
	int v9; // r13d
	unsigned int v10; // edi
	__int64 v11; // rsi
	int v13; // eax
	_QWORD* v14; // rcx
	int v15; // edi
	__int64 v16; // r13
	__int64 v17; // rax
	int v18; // r8d
	int v19; // r12d
	unsigned int v20; // r15d
	__int64 v21; // r14
	int v22; // eax
	int* v23; // rdi
	bool v24; // zf
	_BYTE* v25; // rdi
	int* v26; // rdx
	char* v27; // rcx
	char* v28; // rdi
	__int64 v29; // rax
	__int64 v30; // rcx
	__int64 i; // rdx
	int v32; // esi
	__int64 v33; // rax
	int v34; // eax
	__int64 v35; // [rsp+20h] [rbp-49h]
	__int64 v36; // [rsp+20h] [rbp-49h]
	__int64 v37; // [rsp+20h] [rbp-49h]
	__int64 v38; // [rsp+28h] [rbp-41h]
	int v39; // [rsp+28h] [rbp-41h]
	__int64 v40; // [rsp+28h] [rbp-41h]
	int v41; // [rsp+30h] [rbp-39h]
	__int64 v42; // [rsp+30h] [rbp-39h]
	__int64 v43; // [rsp+30h] [rbp-39h]
	int v44; // [rsp+38h] [rbp-31h]
	int v45; // [rsp+50h] [rbp-19h] BYREF
	int v46[2]; // [rsp+58h] [rbp-11h] BYREF
	int v47[2]; // [rsp+60h] [rbp-9h] BYREF
	__int64 v48; // [rsp+68h] [rbp-1h] BYREF
	char* v49; // [rsp+70h] [rbp+7h]
	_BYTE* v50; // [rsp+78h] [rbp+Fh]
	__int64 v51; // [rsp+80h] [rbp+17h]
	int v52; // [rsp+D0h] [rbp+67h] BYREF
	unsigned __int8 v53; // [rsp+E8h] [rbp+7Fh]

	v53 = a4;
	v6 = a1;
	v7 = sub_1400D2120(a1, a2, a3, a4);
	v8 = *(_DWORD*)(v6 + 716);
	v9 = *(_DWORD*)(v6 + 724);
	v10 = v7;
	v11 = -1i64;
	v46[0] = *(_DWORD*)(v6 + 720);
	v47[0] = *(_DWORD*)(v6 + 728);
	v45 = -1;
	v52 = -1;
	if (sub_140161CD0(v6, a3, &v45, &v52))
	{
		if (*a3 >= v8 && *a3 < v9)
		{
			v13 = a3[1];
			if (v13 >= v46[0] && v13 < v47[0] && (*(_DWORD*)(v6 + 664) & 0x100) != 0)
			{
				v14 = *(_QWORD**)(v6 + 32);
				if (!v14 || v14[360] != v6)
					sub_1400E8C50(v14, (char*)v6);
			}
		}
		v15 = v45;
		if (v45 >= 0 || a2)
		{
			if ((*(_BYTE*)(v6 + 664) & 8) != 0)
			{
				if (v52 >= 0 && v52 < *(_DWORD*)(v6 + 1144) && v45 >= 0 && v45 < *(_DWORD*)(v6 + 1160))
				{
					v16 = 8i64 * v45;
					v17 = *(_QWORD*)(v16 + *(_QWORD*)(v6 + 1152));
					if (v52 < *(_DWORD*)(v17 + 24)
						&& *(_QWORD*)(*(_QWORD*)(v17 + 16) + 8i64 * v52)
						&& sub_14015EED0(v6, v45, v52))
					{
						v44 = *(_DWORD*)(v6 + 1036) + 1;
						v19 = v18 + 1;
						v41 = *(_DWORD*)(v6 + 1032) + 1;
						v20 = v15 + 1;
						v52 = 1;
						sub_1400D4070(v6, 0x2Cu, (char*)v6, "iiiii>b", v15 + 1, v18 + 1, v41, v44, a2, &v52);
						if (v52)
						{
							*(_DWORD*)(v6 + 1032) = v15;
							*(_DWORD*)(v6 + 1040) = v15;
							LODWORD(v42) = a2;
							LODWORD(v38) = v19;
							*(_DWORD*)(v6 + 1076) = 0;
							*(_DWORD*)(v6 + 1080) = v15;
							LODWORD(v35) = v15 + 1;
							sub_1400D4070(v6, 0x2Du, (char*)v6, byte_1409DC7DC, v35, v38, v42);
						}
						if (v53)
						{
							LODWORD(v42) = a2;
							LODWORD(v38) = v19;
							LODWORD(v35) = v15 + 1;
							sub_1400D4070(v6, 0x2Eu, (char*)v6, byte_1409DC7BC, v35, v38, v42);
						}
						if (*(_BYTE*)(v6 + 1100))
						{
							v21 = *(_QWORD*)(v16 + *(_QWORD*)(*(_QWORD*)(v6 + 1112) + 40i64));
							if (*(_QWORD*)(v21 + 224))
							{
								v47[0] = 0;
								v47[1] = v15;
								sub_14015FAD0(v6, &v48, v47);
								v46[1] = HIDWORD(v48);
								v46[0] = (int)v49;
								v22 = sub_1400D45B0(v6);
								sub_1400ECF40(*(_QWORD*)(v6 + 32), v6, v46, *(_QWORD*)(v21 + 224), v22);
							}
							else
							{
								v23 = sub_14018B280(15i64, 0);
								v49 = (char*)v23;
								v51 = (__int64)v23 + 15;
								sub_1407DB590(v23, (int*)"MenuSelection_", 0xEui64);
								v24 = (int*)((char*)v23 + 14) == 0i64;
								v25 = (char*)v23 + 14;
								v50 = v25;
								if (!v24)
									*v25 = 0;
								v26 = *(int**)(v21 + 136);
								do
									v24 = *((_BYTE*)v26 + ++v11) == 0;
								while (!v24);
								sub_14001B050(&v48, v26, (int*)((char*)v26 + v11));
								v27 = *(char**)(v6 + 1104);
								v28 = v49;
								v29 = *(_QWORD*)(v21 + 136);
								if (v27)
								{
									LODWORD(v35) = v20;
									if (!sub_1400D4040((__int64)v27, v49, v27, byte_1409DC744, v35, v29))
									{
										if (*(_QWORD*)(*(_QWORD*)(v6 + 1112) + 24i64))
										{
											v30 = *(_QWORD*)(v6 + 1104);
											if ((*(_BYTE*)(v30 + 432) & 0x40) != 0)
											{
												if (*(_BYTE*)(v30 + 1100))
												{
													LODWORD(v36) = v20;
													sub_1400D4040(
														*(_QWORD*)(v30 + 1104),
														v28,
														*(char**)(v30 + 1104),
														byte_1409DC72C,
														v36,
														*(_QWORD*)(v21 + 136));
												}
											}
										}
									}
								}
								else
								{
									sub_1400EA3E0(*(_QWORD*)(v6 + 32), v49, byte_1409DC78C, v20, v29);
								}
								for (i = *(_QWORD*)(v6 + 16); i; i = *(_QWORD*)(i + 16))
								{
									if ((*(_BYTE*)(i + 432) & 0x40) == 0)
										break;
									if (!*(_BYTE*)(i + 1100))
										break;
									v6 = i;
								}
								sub_1400C6B20(v6);
								if (v28)
									sub_14018B900((__int64)v28, 0);
							}
						}
					}
				}
			}
			else
			{
				v32 = v52;
				if (v52 >= 0 && v52 < *(_DWORD*)(v6 + 1144) && v45 >= 0 && v45 < *(_DWORD*)(v6 + 1160))
				{
					v33 = *(_QWORD*)(*(_QWORD*)(v6 + 1152) + 8i64 * v45);
					if (v52 < *(_DWORD*)(v33 + 24)
						&& *(_QWORD*)(*(_QWORD*)(v33 + 16) + 8i64 * v52)
						&& sub_14015EED0(v6, v45, v52))
					{
						v34 = *(_DWORD*)(v6 + 1032) + 1;
						v39 = *(_DWORD*)(v6 + 1036) + 1;
						v52 = 1;
						sub_1400D4070(v6, 0x2Cu, (char*)v6, "iiiii>b", v34, v39, v15 + 1, v32 + 1, a2, &v52);
						if (v52)
						{
							LODWORD(v43) = a2;
							LODWORD(v40) = v32 + 1;
							*(_DWORD*)(v6 + 1032) = v15;
							*(_DWORD*)(v6 + 1036) = v32;
							*(_DWORD*)(v6 + 1040) = v15;
							*(_DWORD*)(v6 + 1044) = v32;
							LODWORD(v37) = v15 + 1;
							sub_1400D4070(v6, 0x2Du, (char*)v6, byte_1409DC88C, v37, v40, v43);
							*(_DWORD*)(v6 + 1076) = v32;
							*(_DWORD*)(v6 + 1080) = v15;
						}
						if (v53)
						{
							LODWORD(v43) = a2;
							LODWORD(v40) = v32 + 1;
							LODWORD(v37) = v15 + 1;
							sub_1400D4070(v6, 0x2Eu, (char*)v6, byte_1409DC86C, v37, v40, v43);
						}
					}
				}
			}
		}
		else if (a3[1] < *(_DWORD*)(v6 + 1024))
		{
			(*(void(__fastcall**)(__int64, int*, _QWORD))(*(_QWORD*)v6 + 576i64))(v6, a3, (unsigned int)v52);
		}
		return 0i64;
	}
	else if (*(_BYTE*)(v6 + 1100))
	{
		sub_1400C6B20(v6);
		return 1i64;
	}
	else
	{
		return v10;
	}
}
// 1401620C8: variable 'v18' is possibly undefined
// 140162141: variable 'v35' is possibly undefined
// 140162141: variable 'v38' is possibly undefined
// 140162141: variable 'v42' is possibly undefined
// 1401622D0: variable 'v36' is possibly undefined
// 14016243C: variable 'v37' is possibly undefined
// 14016243C: variable 'v40' is possibly undefined
// 14016243C: variable 'v43' is possibly undefined
// 1409DC72C: using guessed type _BYTE byte_1409DC72C[24];
// 1409DC744: using guessed type _BYTE byte_1409DC744[72];
// 1409DC78C: using guessed type _BYTE byte_1409DC78C[24];
// 1409DC7BC: using guessed type _BYTE byte_1409DC7BC[32];
// 1409DC7DC: using guessed type _BYTE byte_1409DC7DC[24];
// 1409DC86C: using guessed type _BYTE byte_1409DC86C[32];
// 1409DC88C: using guessed type _BYTE byte_1409DC88C[64];

