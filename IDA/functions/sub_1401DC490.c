#include "../winhttp.h"

//----- (00000001401DC490) ----------------------------------------------------
__int64 __fastcall sub_1401DC490(__int64 a1)
{
	unsigned int v1; // ebx
	__int64 v2; // r14
	_DWORD* v3; // rsi
	int v4; // edi
	__int64 v5; // rax
	int v6; // ecx
	unsigned int v7; // eax
	unsigned int v8; // r12d
	__int64 v9; // rax
	int* v10; // r13
	unsigned int v11; // ecx
	int v12; // ebx
	int v13; // edi
	int v14; // esi
	int v15; // r14d
	__int64 v16; // rbx
	int* v17; // rbx
	__int64 v18; // rax
	int* v19; // rdx
	_QWORD* v20; // rcx
	int v21; // edi
	int v22; // esi
	int v23; // r14d
	int v24; // r15d
	int* v25; // rax
	int* v26; // rax
	int v27; // edi
	__int64* v28; // rcx
	__int64 v29; // rax
	__int64* v30; // rcx
	__int64 v31; // rax
	int* v32; // rax
	__int64 v33; // rbx
	__int64 v34; // rcx
	__int64 v35; // rsi
	__int128 v37; // [rsp+58h] [rbp-B0h] BYREF
	__int128 v38; // [rsp+68h] [rbp-A0h]
	unsigned __int64 v39; // [rsp+78h] [rbp-90h]
	__int64 v40; // [rsp+80h] [rbp-88h] BYREF
	int* v41; // [rsp+88h] [rbp-80h]
	__int64 v42; // [rsp+90h] [rbp-78h]
	__int64(__fastcall * *v43)(); // [rsp+A8h] [rbp-60h] BYREF
	const wchar_t* v44; // [rsp+B0h] [rbp-58h]
	LPVOID v45; // [rsp+B8h] [rbp-50h]
	const wchar_t* v46; // [rsp+C0h] [rbp-48h]
	__int64(__fastcall * *v47)(); // [rsp+C8h] [rbp-40h] BYREF
	const wchar_t* v48; // [rsp+D0h] [rbp-38h]
	LPVOID lpTlsValue; // [rsp+D8h] [rbp-30h]
	const wchar_t* v50; // [rsp+E0h] [rbp-28h]
	__int64(__fastcall * *v51)(); // [rsp+E8h] [rbp-20h] BYREF
	const wchar_t* v52; // [rsp+F0h] [rbp-18h]
	LPVOID v53; // [rsp+F8h] [rbp-10h]
	__int64 v54; // [rsp+100h] [rbp-8h]
	__int64(__fastcall * *TlsValue)(); // [rsp+108h] [rbp+0h] BYREF
	__int64 v56; // [rsp+110h] [rbp+8h]
	LPVOID Value; // [rsp+118h] [rbp+10h]
	int* v58; // [rsp+120h] [rbp+18h] BYREF
	int* v59; // [rsp+128h] [rbp+20h] BYREF
	__int64 v60[4]; // [rsp+138h] [rbp+30h] BYREF
	__int64 v61[4]; // [rsp+158h] [rbp+50h] BYREF
	__int128 v62[2]; // [rsp+178h] [rbp+70h] BYREF
	unsigned __int64 v63; // [rsp+198h] [rbp+90h]
	unsigned int v65; // [rsp+1F8h] [rbp+F0h]
	int* v66; // [rsp+200h] [rbp+F8h] BYREF

	v1 = 1;
	v2 = a1;
	*(_DWORD*)(a1 + 20) = 1;
	v3 = &unk_140C637B4;
	v4 = 2;
	do
	{
		if (qword_140C63840)
		{
			v5 = qword_140C63840(off_140A69B10, v1, qword_140C63858);
		}
		else
		{
			if (dword_140C651B0 || (int)sub_1401F5180() < 0)
				goto LABEL_9;
			v5 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65118 + 24i64))(qword_140C65118, v1);
		}
		if (v5)
		{
			v6 = *(_DWORD*)(v5 + 16);
			goto LABEL_10;
		}
	LABEL_9:
		v6 = 0;
	LABEL_10:
		++v1;
		*v3 = v6;
		dword_140C637A0[v6] |= v4;
		v4 = __ROL4__(v4, 1);
		++v3;
	} while (v1 < 0x20);
	v42 = 0i64;
	v41 = sub_14018B280(72i64, 0);
	*(_BYTE*)v41 = 0;
	*((_QWORD*)v41 + 1) = 0i64;
	*((_QWORD*)v41 + 2) = v41;
	*((_QWORD*)v41 + 3) = v41;
	if (qword_140C63838)
	{
		v7 = qword_140C63838(off_140A69B48, qword_140C63858);
	}
	else if (dword_140C64080)
	{
		v7 = 0;
	}
	else if ((int)sub_1401F55C0() >= 0)
	{
		v7 = (*(__int64(__fastcall**)(__int64))(*(_QWORD*)qword_140C65300 + 40i64))(qword_140C65300);
	}
	else
	{
		v7 = 0;
	}
	v65 = v7;
	v8 = 0;
	if (v7)
	{
		while (!qword_140C63848)
		{
			if (dword_140C64080)
			{
				v10 = 0i64;
			}
			else
			{
				if ((int)sub_1401F55C0() >= 0)
				{
					v9 = (*(__int64(__fastcall**)(__int64, _QWORD))(*(_QWORD*)qword_140C65300 + 32i64))(qword_140C65300, v8);
					goto LABEL_26;
				}
				v10 = 0i64;
			}
		LABEL_27:
			v11 = v10[6];
			v66 = v10;
			if (v11)
			{
				v12 = v10[2];
				v13 = v10[3];
				v14 = v10[4];
				v15 = v10[5];
				if ((((unsigned __int8)v15 | (unsigned __int8)(v14 | v13 | *((_BYTE*)v10 + 8))) & 0x3F) != 0)
				{
					TlsValue = &off_140B5E648;
					v56 = 0i64;
					Value = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &TlsValue);
					v60[0] = (__int64)TlsValue;
					v60[1] = v56;
					*(_QWORD*)&v37 = &off_140B5E648;
					v60[2] = (__int64)Value;
					*((_QWORD*)&v37 + 1) = L"Rect";
					*(_QWORD*)&v38 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v37);
					*((_QWORD*)&v38 + 1) = __PAIR64__(v13, v12);
					v39 = __PAIR64__(v15, v14);
					v62[1] = v38;
					*(_QWORD*)&v37 = off_140B60148;
					v62[0] = v37;
					v63 = __PAIR64__(v15, v14);
					v16 = (unsigned int)*v10;
					v51 = &off_140B5E648;
					v52 = L"RecordId";
					v53 = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v51);
					v61[1] = (__int64)v52;
					v54 = v16;
					v47 = &off_140B5E648;
					v61[3] = v16;
					v51 = off_140B5E630;
					v48 = L"TableName";
					v61[0] = (__int64)off_140B5E630;
					v61[2] = (__int64)v53;
					lpTlsValue = TlsGetValue(dwTlsIndex);
					TlsSetValue(dwTlsIndex, &v47);
					v50 = L"ComponentRegionRect";
					v44 = v48;
					v47 = &off_140B5E638;
					v46 = L"ComponentRegionRect";
					v66 = (int*)0x141D452B0i64;
					v43 = &off_140B5E638;
					v45 = lpTlsValue;
					LODWORD(v16) = sub_1401971E0(&dword_140C8A278, 10, &v66, &v43, v61, v62, v60);
					v47 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, lpTlsValue);
					v51 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, v53);
					*(_QWORD*)&v37 = &off_140B5E648;
					TlsSetValue(dwTlsIndex, (LPVOID)v38);
					TlsValue = &off_140B5E648;
					TlsSetValue(dwTlsIndex, Value);
					if ((_DWORD)v16)
						DebugBreak();
				}
				else
				{
					v17 = v41;
					v18 = *((_QWORD*)v41 + 1);
					while (v18)
					{
						if (*(_DWORD*)(v18 + 32) < v11)
						{
							v18 = *(_QWORD*)(v18 + 24);
						}
						else
						{
							v17 = (int*)v18;
							v18 = *(_QWORD*)(v18 + 16);
						}
					}
					if (v17 == v41 || v11 < v17[8])
					{
						LODWORD(v37) = v11;
						*(_QWORD*)&v38 = 0i64;
						v39 = 0i64;
						sub_1407DB590(0i64, 0i64, 0i64);
						*((_QWORD*)&v38 + 1) = 0i64;
						v58 = v17;
						sub_1401DE5F0((__int64)&v40, &v59, (__int64*)&v58, (int*)&v37);
						v17 = v59;
					}
					v19 = (int*)*((_QWORD*)v17 + 7);
					v20 = v17 + 10;
					if (v19 == *((int**)v17 + 8))
					{
						sub_14010A1C0(v20, v19, &v66);
						v10 = v66;
					}
					else
					{
						if (v19)
							*(_QWORD*)v19 = v10;
						*((_QWORD*)v17 + 7) += 8i64;
					}
					v21 = v10[2];
					v22 = v10[3];
					v23 = v10[4];
					v24 = v10[5];
					v25 = sub_1401DDD50((__int64)v20, v10 + 6);
					v26 = sub_1401DDF30((__int64)v25, v10 + 1);
					*v26 = v21;
					v26[1] = v22;
					v26[3] = v24;
					v26[2] = v23;
				}
			}
			if (++v8 >= v65)
			{
				v2 = a1;
				goto LABEL_47;
			}
		}
		v9 = qword_140C63848(off_140A69B48, v8, qword_140C63858);
	LABEL_26:
		v10 = (int*)v9;
		goto LABEL_27;
	}
LABEL_47:
	*(_DWORD*)(v2 + 16) = 0;
	v27 = (*(__int64(__fastcall**)(__int64, const wchar_t*, __int64))(*(_QWORD*)qword_140C65670 + 152i64))(
		qword_140C65670,
		L"Shaders\\ComponentPS.sho",
		v2 + 24);
	if (v27 >= 0)
	{
		v27 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
			qword_140C65670,
			L"Art\\Dev\\DyeColor_Skin_Ramp.tex",
			0i64,
			1i64,
			0,
			256,
			0,
			0,
			v2 + 32);
		if (v27 >= 0)
		{
			v27 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
				qword_140C65670,
				L"Art\\Dev\\DyeColor_Armor_Ramp.tex",
				0i64,
				1i64,
				0,
				256,
				0,
				0,
				v2 + 40);
			if (v27 >= 0)
			{
				v27 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
					qword_140C65670,
					L"Art\\Dev\\DyeColor_Armor_Ramp.tex",
					0i64,
					1i64,
					0,
					256,
					0,
					0,
					v2 + 48);
				if (v27 >= 0)
				{
					v27 = (*(__int64(__fastcall**)(__int64, const wchar_t*, _QWORD, __int64, _DWORD, int, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 80i64))(
						qword_140C65670,
						L"Art\\Dev\\DyeColor_Armor_Ramp.tex",
						0i64,
						1i64,
						0,
						256,
						0,
						0,
						v2 + 56);
					if (v27 >= 0)
					{
						v27 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
							qword_140C65670,
							1i64,
							1i64,
							1i64,
							6,
							1,
							0,
							0,
							0,
							v2 + 64);
						if (v27 >= 0)
						{
							v27 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, int, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
								qword_140C65670,
								1i64,
								1i64,
								1i64,
								6,
								1,
								0,
								0,
								0,
								v2 + 72);
							if (v27 >= 0)
							{
								v27 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
									qword_140C65670,
									1i64,
									1i64,
									1i64,
									0,
									1,
									0,
									0,
									0,
									v2 + 80);
								if (v27 >= 0)
								{
									v27 = (*(__int64(__fastcall**)(__int64, __int64, __int64, __int64, _DWORD, int, _DWORD, _DWORD, _DWORD, __int64))(*(_QWORD*)qword_140C65670 + 88i64))(
										qword_140C65670,
										1i64,
										1i64,
										1i64,
										0,
										1,
										0,
										0,
										0,
										v2 + 88);
									if (v27 >= 0)
									{
										v27 = (*(__int64(__fastcall**)(__int64, __int64))(*(_QWORD*)qword_140C65670 + 192i64))(
											qword_140C65670,
											v2 + 96);
										if (v27 >= 0)
										{
											v28 = *(__int64**)(v2 + 96);
											v45 = sub_1401DCD30;
											v29 = *v28;
											LODWORD(v43) = 0;
											v44 = (const wchar_t*)v2;
											v46 = 0i64;
											(*(void(__fastcall**)(__int64*, _QWORD, __int64(__fastcall***)()))(v29 + 24))(
												v28,
												0i64,
												&v43);
											v30 = *(__int64**)(v2 + 96);
											v45 = sub_1401DCE00;
											v31 = *v30;
											LODWORD(v43) = 0;
											v44 = (const wchar_t*)v2;
											v46 = 0i64;
											(*(void(__fastcall**)(__int64*, __int64, __int64(__fastcall***)()))(v31 + 24))(
												v30,
												1i64,
												&v43);
											sub_1401DCD30((_QWORD**)v2);
											v27 = 0;
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
	if (v42)
	{
		v32 = v41;
		v33 = *((_QWORD*)v41 + 1);
		if (v33)
		{
			do
			{
				sub_1401DE580((__int64)&v40, *(_QWORD**)(v33 + 24));
				v34 = *(_QWORD*)(v33 + 48);
				v35 = *(_QWORD*)(v33 + 16);
				if (v34)
					sub_14018B900(v34, 0);
				sub_14018B900(v33, 0);
				v33 = v35;
			} while (v35);
			v32 = v41;
		}
		*((_QWORD*)v32 + 2) = v32;
		*((_QWORD*)v41 + 1) = 0i64;
		*((_QWORD*)v41 + 3) = v41;
		v42 = 0i64;
	}
	sub_14018B900((__int64)v41, 0);
	return (unsigned int)v27;
}
// 1401DC968: variable 'v20' is possibly undefined
// 140A42BC0: using guessed type wchar_t aTablename[10];
// 140A42C08: using guessed type wchar_t aRecordid[9];
// 140A4ABF0: using guessed type wchar_t aArtDevDyecolor[31];
// 140A4AC30: using guessed type wchar_t aArtDevDyecolor_0[32];
// 140A4ACD0: using guessed type wchar_t aShadersCompone[24];
// 140A4AD00: using guessed type wchar_t aRect[5];
// 140A4AD10: using guessed type wchar_t aComponentregio[20];
// 140A4ADA0: using guessed type wchar_t aArtDevDyecolor_1[32];
// 140A4ADE0: using guessed type wchar_t aArtDevDyecolor_2[32];
// 140A69B10: using guessed type wchar_t *off_140A69B10[2];
// 140A69B48: using guessed type wchar_t *off_140A69B48[2];
// 140B5E630: using guessed type __int64 (__fastcall *off_140B5E630[2])();
// 140B5E638: using guessed type __int64 (__fastcall *off_140B5E638)();
// 140B5E648: using guessed type __int64 (__fastcall *off_140B5E648)();
// 140B60148: using guessed type __int64 (__fastcall *off_140B60148[9])();
// 140C637A0: using guessed type _DWORD dword_140C637A0[4];
// 140C63838: using guessed type __int64 (__fastcall *qword_140C63838)(_QWORD, _QWORD);
// 140C63840: using guessed type __int64 (__fastcall *qword_140C63840)(_QWORD, _QWORD, _QWORD);
// 140C63848: using guessed type __int64 (__fastcall *qword_140C63848)(_QWORD, _QWORD, _QWORD);
// 140C63858: using guessed type __int64 qword_140C63858;
// 140C64080: using guessed type int dword_140C64080;
// 140C65118: using guessed type __int64 qword_140C65118;
// 140C651B0: using guessed type int dword_140C651B0;
// 140C65300: using guessed type __int64 qword_140C65300;
// 140C65670: using guessed type __int64 qword_140C65670;
// 140C8A278: using guessed type _DWORD dword_140C8A278;

