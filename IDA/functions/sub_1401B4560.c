//----- (00000001401B4560) ----------------------------------------------------
__int64 __fastcall sub_1401B4560(__int64* a1, __int64 a2, __int16 a3)
{
	bool v3; // zf
	DWORD FullPathNameW; // eax
	__int64 v8; // r14
	__int64 v9; // r9
	__int64 v10; // r13
	int v11; // ebx
	__int64 v12; // r15
	WCHAR* v13; // r12
	__int64 v14; // rdx
	WCHAR* v15; // rcx
	WCHAR v16; // ax
	DWORD FileAttributesW; // eax
	int v18; // eax
	__int64 v19; // rax
	__int64 v20; // rdx
	WCHAR* v21; // rcx
	WCHAR v22; // ax
	DWORD v23; // eax
	__int64 v24; // rax
	__int64 v25; // rdx
	WCHAR* v26; // rcx
	WCHAR v27; // ax
	DWORD v28; // eax
	unsigned __int64 v29; // r13
	int* v30; // r12
	unsigned __int64 v31; // rdi
	int* v32; // rax
	unsigned __int64 v33; // r13
	int* v34; // rbx
	unsigned __int64 v35; // rdi
	int* v36; // rax
	unsigned __int64 v37; // r13
	int* v38; // rbx
	unsigned __int64 v39; // rdi
	int* v40; // rax
	unsigned __int64 v41; // r13
	int* v42; // rbx
	unsigned __int64 v43; // rdi
	int* v44; // rax
	unsigned __int64 v45; // r13
	int* v46; // rbx
	unsigned __int64 v47; // rdi
	int* v48; // rax
	unsigned __int64 v49; // r13
	int* v50; // rbx
	unsigned __int64 v51; // rdi
	int* v52; // rax
	unsigned __int64 v53; // r13
	int* v54; // rbx
	unsigned __int64 v55; // rdi
	int* v56; // rax
	unsigned __int64 v57; // r13
	int* v58; // rbx
	unsigned __int64 v59; // rdi
	int* v60; // rax
	unsigned __int64 v61; // r13
	int* v62; // rbx
	__int64** v63; // rax
	__int64* v64; // rdi
	__int64 v65; // rbx
	__int64 v66; // rax
	__int64 v67; // rax
	__int64 v68; // rdi
	__int64 v69; // rsi
	DWORD v70; // eax
	char* v71; // r9
	int v72; // eax
	__int64* v73; // rbx
	DWORD v74; // eax
	__int64 v75; // rbx
	__int64 v76; // rax
	__int64 v77; // [rsp+20h] [rbp-E0h]
	void(__fastcall * **v78)(_QWORD); // [rsp+30h] [rbp-D0h] BYREF
	__int64 v79; // [rsp+38h] [rbp-C8h] BYREF
	__int64 v80; // [rsp+40h] [rbp-C0h] BYREF
	__int64* v81; // [rsp+48h] [rbp-B8h]
	__int64 v82; // [rsp+50h] [rbp-B0h]
	__int64 v83; // [rsp+58h] [rbp-A8h] BYREF
	__int64 v84[2]; // [rsp+60h] [rbp-A0h] BYREF
	__int64 v85; // [rsp+70h] [rbp-90h] BYREF
	__int64 v86; // [rsp+78h] [rbp-88h]
	__int64 v87; // [rsp+80h] [rbp-80h]
	unsigned __int64 v88; // [rsp+88h] [rbp-78h]
	__int64 v89[2]; // [rsp+90h] [rbp-70h] BYREF
	__int64 v90; // [rsp+A0h] [rbp-60h] BYREF
	char v91[56]; // [rsp+A8h] [rbp-58h] BYREF
	WCHAR Buffer[264]; // [rsp+E0h] [rbp-20h] BYREF
	WCHAR FileName[264]; // [rsp+2F0h] [rbp+1F0h] BYREF

	v3 = a1[267] == 0;
	v81 = a1;
	if (!v3)
		return 2147549183i64;
	sub_14001B370(FileName, 260i64, L"%s\\%s", (char*)a1 + 2164, L"..");
	FullPathNameW = GetFullPathNameW(FileName, 0x104u, Buffer, 0i64);
	v8 = 0i64;
	v9 = FullPathNameW;
	v82 = FullPathNameW;
	if (FullPathNameW && *(_WORD*)&v91[2 * FullPathNameW + 54] == 92)
	{
		v9 = FullPathNameW - 1i64;
		v82 = v9;
		Buffer[v9] = 0;
	}
	v10 = 260 - v9;
	v11 = 0;
	v12 = 0i64;
	v78 = 0i64;
	v87 = 260 - v9;
	if ((unsigned __int64)(260 - v9 - 1) > 0x7FFFFFFE)
		v11 = -2147024809;
	v13 = &Buffer[v9];
	if (v11 < 0)
	{
		if (v10)
			*v13 = 0;
	}
	else
	{
		v14 = 260 - v9;
		v15 = &Buffer[v9];
		v11 = 0;
		if (!v10)
			goto LABEL_15;
		while (v9 + v14 + 2147483386)
		{
			v16 = *(WCHAR*)((char*)v15 + (char*)L"\\Patch\\CoreData.archive" - (char*)v13);
			if (!v16)
				break;
			*v15++ = v16;
			if (!--v14)
			{
				v11 = -2147024774;
				*(v15 - 1) = 0;
				goto LABEL_19;
			}
		}
		if (!v14)
		{
		LABEL_15:
			--v15;
			v11 = -2147024774;
		}
		*v15 = 0;
	}
LABEL_19:
	if (v11 >= 0)
	{
		FileAttributesW = GetFileAttributesW(Buffer);
		if (FileAttributesW != -1 && (FileAttributesW & 0x10) == 0)
		{
			v18 = sub_14018D950((int*)Buffer, *a1, (__int64*)&v78);
			if (v18 < 0)
			{
				v80 = 0x141D416B0i64;
				LODWORD(v77) = v18;
				sub_1401A3130(3, 0, &v80, Buffer, v77);
			}
			v12 = (__int64)v78;
		}
		v19 = 0i64;
		v84[0] = (__int64)L"Patch";
		do
			++v19;
		while (aPatch_0[v19]);
		v84[1] = v19;
		v85 = 0i64;
		if (!*((_DWORD*)a1 + 540) && (_BYTE)a3)
		{
			v11 = 0;
			if ((unsigned __int64)(v10 - 1) > 0x7FFFFFFE)
				v11 = -2147024809;
			if (v11 < 0)
			{
				if (v10)
					*v13 = 0;
			}
			else
			{
				v20 = v10;
				v21 = v13;
				v11 = 0;
				if (!v10)
					goto LABEL_38;
				while (v20 + v82 + 2147483386)
				{
					v22 = *(WCHAR*)((char*)v21 + (char*)L"\\Patch\\Patch.index" - (char*)v13);
					if (!v22)
						break;
					*v21++ = v22;
					if (!--v20)
					{
						v11 = -2147024774;
						*(v21 - 1) = 0;
						goto LABEL_42;
					}
				}
				if (!v20)
				{
				LABEL_38:
					--v21;
					v11 = -2147024774;
				}
				*v21 = 0;
			}
		LABEL_42:
			if (v11 < 0)
				goto LABEL_150;
			v23 = GetFileAttributesW(Buffer);
			if (v23 == -1 || (v23 & 0x10) != 0)
			{
				v80 = 0x141D41890i64;
				sub_1401A3130(3, 0, &v80, Buffer);
				v11 = -2147023728;
			}
			else
			{
				v11 = sub_14018D7D0(Buffer, *a1, &v85, 0i64);
				if (v11 >= 0)
					goto LABEL_46;
			}
		LABEL_150:
			if (v85)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v85 + 8i64))(v85);
			if (v12)
				(*(void(__fastcall**)(__int64))(*(_QWORD*)v12 + 8i64))(v12);
			return (unsigned int)v11;
		}
	LABEL_46:
		v24 = 0i64;
		v89[0] = (__int64)L"Bootstrap";
		do
			++v24;
		while (aBootstrap[v24]);
		v89[1] = v24;
		v90 = 0i64;
		if (*((_DWORD*)a1 + 540) || (a3 & 0x100) == 0)
			goto LABEL_68;
		v11 = 0;
		if ((unsigned __int64)(v10 - 1) > 0x7FFFFFFE)
			v11 = -2147024809;
		if (v11 < 0)
		{
			if (v10)
				*v13 = 0;
		}
		else
		{
			v25 = v10;
			v26 = v13;
			v11 = 0;
			if (!v10)
				goto LABEL_60;
			while (v25 + v82 + 2147483386)
			{
				v27 = *(WCHAR*)((char*)v26 + (char*)L"\\Bootstrap\\Bootstrap.index" - (char*)v13);
				if (!v27)
					break;
				*v26++ = v27;
				if (!--v25)
				{
					v11 = -2147024774;
					*(v26 - 1) = 0;
					goto LABEL_64;
				}
			}
			if (!v25)
			{
			LABEL_60:
				--v26;
				v11 = -2147024774;
			}
			*v26 = 0;
		}
	LABEL_64:
		if (v11 >= 0)
		{
			v28 = GetFileAttributesW(Buffer);
			if (v28 == -1 || (v28 & 0x10) != 0)
			{
				v80 = 0x141D417A0i64;
				sub_1401A3130(3, 0, &v80, Buffer);
				v11 = -2147023728;
				goto LABEL_148;
			}
			v11 = sub_14018D7D0(Buffer, *a1, &v90, 0i64);
			if (v11 >= 0)
			{
			LABEL_68:
				v29 = 0i64;
				v30 = 0i64;
				if ((a3 & 1) != 0)
				{
					v29 = 1i64;
					v30 = sub_14018DB00(0i64, 1ui64, 16i64);
					*(_QWORD*)v30 = L"ClientDataEN";
					*((_QWORD*)v30 + 1) = v84;
				}
				if ((a3 & 2) != 0)
				{
					v31 = v29 + 1;
					v32 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v33 = 4 * v29;
					v34 = v32;
					*(_QWORD*)&v32[v33] = L"ClientDataFR";
					*(_QWORD*)&v32[v33 + 2] = v84;
					if (v30 != v32)
					{
						sub_1407DB590(v32, v30, v33 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v34;
					}
					v29 = v31;
				}
				if ((a3 & 4) != 0)
				{
					v35 = v29 + 1;
					v36 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v37 = 4 * v29;
					v38 = v36;
					*(_QWORD*)&v36[v37] = L"ClientDataDE";
					*(_QWORD*)&v36[v37 + 2] = v84;
					if (v30 != v36)
					{
						sub_1407DB590(v36, v30, v37 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v38;
					}
					v29 = v35;
				}
				if ((a3 & 8) != 0)
				{
					v39 = v29 + 1;
					v40 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v41 = 4 * v29;
					v42 = v40;
					*(_QWORD*)&v40[v41] = L"ClientDataZH";
					*(_QWORD*)&v40[v41 + 2] = v84;
					if (v30 != v40)
					{
						sub_1407DB590(v40, v30, v41 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v42;
					}
					v29 = v39;
				}
				if ((a3 & 0x10) != 0)
				{
					v43 = v29 + 1;
					v44 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v45 = 4 * v29;
					v46 = v44;
					*(_QWORD*)&v44[v45] = L"ClientData";
					*(_QWORD*)&v44[v45 + 2] = v84;
					if (v30 != v44)
					{
						sub_1407DB590(v44, v30, v45 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v46;
					}
					v29 = v43;
				}
				if ((a3 & 0x20) != 0)
				{
					v47 = v29 + 1;
					v48 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v49 = 4 * v29;
					v50 = v48;
					*(_QWORD*)&v48[v49] = L"ServerData";
					*(_QWORD*)&v48[v49 + 2] = v84;
					if (v30 != v48)
					{
						sub_1407DB590(v48, v30, v49 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v50;
					}
					v29 = v47;
				}
				if ((a3 & 0x40) != 0)
				{
					v51 = v29 + 1;
					v52 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v53 = 4 * v29;
					v54 = v52;
					*(_QWORD*)&v52[v53] = L"ToolsData";
					*(_QWORD*)&v52[v53 + 2] = v84;
					if (v30 != v52)
					{
						sub_1407DB590(v52, v30, v53 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v54;
					}
					v29 = v51;
				}
				if ((a3 & 0x80u) != 0)
				{
					v55 = v29 + 1;
					v56 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v57 = 4 * v29;
					v58 = v56;
					*(_QWORD*)&v56[v57] = L"SupportData";
					*(_QWORD*)&v56[v57 + 2] = v84;
					if (v30 != v56)
					{
						sub_1407DB590(v56, v30, v57 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v58;
					}
					v29 = v55;
				}
				if ((a3 & 0x100) != 0)
				{
					v59 = v29 + 1;
					v60 = sub_14018DB00((__int64)v30, v29 + 1, 16i64);
					v61 = 4 * v29;
					v62 = v60;
					*(_QWORD*)&v60[v61] = L"LauncherData";
					*(_QWORD*)&v60[v61 + 2] = v89;
					if (v30 != v60)
					{
						sub_1407DB590(v60, v30, v61 * 4);
						if (v30)
							(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
						v30 = v62;
					}
					v29 = v59;
				}
				v88 = 0i64;
				if (!v29)
				{
				LABEL_145:
					v11 = v81[267] == 0;
					goto LABEL_146;
				}
				v63 = (__int64**)(v30 + 2);
				v80 = (__int64)(v30 + 2);
				while (1)
				{
					v64 = *v63;
					v65 = (__int64)*(v63 - 1);
					v66 = **v63;
					v79 = v65;
					v86 = v66;
					v67 = v64[1];
					v68 = v64[2];
					v83 = v67;
					if (v68)
						(**(void(__fastcall***)(__int64))v68)(v68);
					v69 = 0i64;
					v78 = 0i64;
					v11 = sub_14001B370(&Buffer[v82], v87, L"\\%s\\%s.index", v86, v65);
					if (v11 < 0)
						goto LABEL_161;
					v70 = GetFileAttributesW(Buffer);
					if (v70 == -1 || (v70 & 0x10) != 0)
					{
						if (v68)
						{
							v76 = 0x141D419D8i64;
							goto LABEL_160;
						}
					}
					else
					{
						if (v68)
						{
							v11 = (*(__int64(__fastcall**)(__int64, WCHAR*, char*))(*(_QWORD*)v68 + 40i64))(
								v68,
								&Buffer[v82 + 2 + v83],
								v91);
							if (v11 < 0)
								goto LABEL_161;
							v71 = v91;
						}
						else
						{
							v71 = 0i64;
						}
						v72 = sub_14018D7D0(Buffer, *v81, (__int64*)&v78, v71);
						v69 = (__int64)v78;
						v11 = v72;
						if (v72 < 0)
							goto LABEL_161;
						if (v12)
						{
							(**v78)(v78);
							v73 = v81;
							v83 = v69;
							sub_140033260(v81 + 266, &v83);
							(**(void(__fastcall***)(__int64))v12)(v12);
							v83 = v12;
							sub_140033260(v73 + 268, &v83);
						}
						v78 = 0i64;
						v11 = sub_14001B370(&Buffer[v82], v87, L"\\%s\\%s.archive", v86, v79);
						if (v11 < 0)
							goto LABEL_156;
						v74 = GetFileAttributesW(Buffer);
						if (v74 == -1 || (v74 & 0x10) != 0)
						{
							if (v68)
							{
								v76 = 0x141D41A10i64;
							LABEL_160:
								v79 = v76;
								sub_1401A3130(3, 0, &v79, Buffer);
								v11 = -2147023728;
								goto LABEL_161;
							}
						}
						else
						{
							v11 = sub_14018D950((int*)Buffer, *v81, (__int64*)&v78);
							if (v11 < 0)
							{
								v8 = (__int64)v78;
							LABEL_156:
								if (v8)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v8 + 8i64))(v8);
							LABEL_161:
								if (v69)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v69 + 8i64))(v69);
								if (v68)
									(*(void(__fastcall**)(__int64))(*(_QWORD*)v68 + 8i64))(v68);
							LABEL_146:
								if (v30)
									(*(void(__fastcall**)(int*))(*((_QWORD*)v30 - 2) + 8i64))(v30 - 4);
								break;
							}
							(**(void(__fastcall***)(__int64))v69)(v69);
							v79 = v69;
							sub_140033260(v81 + 266, &v79);
							v75 = (__int64)v78;
							(**v78)(v78);
							v79 = v75;
							sub_140033260(v81 + 268, &v79);
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v75 + 8i64))(v75);
						}
						if (v69)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v69 + 8i64))(v69);
						if (v68)
							(*(void(__fastcall**)(__int64))(*(_QWORD*)v68 + 8i64))(v68);
					}
					v63 = (__int64**)(v80 + 16);
					++v88;
					v80 += 16i64;
					if (v88 >= v29)
						goto LABEL_145;
				}
			}
		}
	LABEL_148:
		if (v90)
			(*(void(__fastcall**)(__int64))(*(_QWORD*)v90 + 8i64))(v90);
		goto LABEL_150;
	}
	return (unsigned int)v11;
}
// 1401B4720: variable 'v77' is possibly undefined
// 1409E4CFC: using guessed type wchar_t asc_1409E4CFC[3];
// 140A470C0: using guessed type wchar_t aPatchCoredataA[24];
// 140A47188: using guessed type wchar_t aBootstrapBoots[27];
// 140A471C0: using guessed type wchar_t aClientdatafr[13];
// 140A471E0: using guessed type wchar_t aClientdataen[13];
// 140A47200: using guessed type wchar_t aPatchPatchInde[19];
// 140A47228: using guessed type wchar_t aPatch_0[6];
// 140A47238: using guessed type wchar_t aBootstrap[10];
// 140A47278: using guessed type wchar_t aSupportdata[12];
// 140A47290: using guessed type wchar_t aToolsdata[10];
// 140A472A8: using guessed type wchar_t aSSIndex[13];
// 140A472C8: using guessed type wchar_t aLauncherdata[13];
// 140A472E8: using guessed type wchar_t aClientdatazh[13];
// 140A47308: using guessed type wchar_t aClientdatade[13];
// 140A47328: using guessed type wchar_t aServerdata[11];
// 140A47340: using guessed type wchar_t aClientdata[11];
// 140A47378: using guessed type wchar_t aSSArchive[15];
// 140A47428: using guessed type wchar_t aSS_9[6];

